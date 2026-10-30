export function record(value: unknown): Record<string, unknown> | null {
  return value !== null && typeof value === 'object' && !Array.isArray(value) ? value as Record<string, unknown> : null;
}

export function safeEvidence(value: unknown): value is string {
  if (typeof value !== 'string' || /[\s\\\u0000-\u001f\u007f]/u.test(value)) return false;
  try {
    const url = new URL(value);
    return /^https:\/\//u.test(value) && url.protocol === 'https:' && !!url.hostname && !url.username && !url.password;
  } catch { return false; }
}

export function approves(policy: unknown, candidate: Record<string, unknown>): boolean {
  const parsed = record(policy);
  if (parsed?.publication !== 'enabled' || !Array.isArray(parsed.approvedMedia)) return false;
  return parsed.approvedMedia.some(value => {
    const approval = record(value);
    if (!approval) return false;
    const required = ['id', 'previewURL', 'remoteURL', 'sourceURL', 'reviewer', 'reviewedAt', 'rightsBasis', 'credit'];
    if (!required.every(key => typeof approval[key] === 'string' && (approval[key] as string).trim())) return false;
    if (!['id', 'previewURL', 'remoteURL', 'sourceURL'].every(key => approval[key] === candidate[key])) return false;
    if (approval.credit !== candidate.creator) return false;
    if (!Array.isArray(approval.evidenceURLs) || !approval.evidenceURLs.length || !approval.evidenceURLs.every(safeEvidence)) return false;
    return Array.isArray(approval.permittedUses) && approval.permittedUses.every(use => typeof use === 'string') &&
      ['website-preview', 'video-download'].every(use => (approval.permittedUses as string[]).includes(use));
  });
}
