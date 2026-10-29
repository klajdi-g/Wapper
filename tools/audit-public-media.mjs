import { readFile, writeFile, mkdir } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { resolve } from 'node:path';
import { setTimeout } from 'node:timers/promises';

const root = fileURLToPath(new URL('../', import.meta.url));
const output = resolve(root, 'build/media-license-audit.json');
const catalogBytes = await readFile(resolve(root, 'website/catalog.json'));
const catalog = JSON.parse(catalogBytes.toString());
const liveResponse = await fetch('https://motion.voltrum.co/catalog.json', { signal: AbortSignal.timeout(25000), cache: 'no-store' });
if (!liveResponse.ok) throw new Error(`Public catalog returned ${liveResponse.status}`);
const liveBytes = Buffer.from(await liveResponse.arrayBuffer());
const liveCatalog = JSON.parse(liveBytes.toString());
if (JSON.stringify(liveCatalog) !== JSON.stringify(catalog)) throw new Error('Local and public catalogs differ; audit the deployed source first.');

async function fetchJSON(url) {
  const parsed = new URL(url);
  if (parsed.protocol !== 'https:' || !parsed.hostname.endsWith('.nasa.gov')) throw new Error(`Not an official NASA source: ${url}`);
  for (let attempt = 0; attempt < 3; attempt += 1) {
    try {
      const response = await fetch(url, { signal: AbortSignal.timeout(25000), headers: { 'User-Agent': 'VoltrumMotion-LicenseAudit/1.0' } });
      if (!response.ok) throw new Error(`HTTP ${response.status}: ${url}`);
      return await response.json();
    } catch (error) {
      if (attempt === 2) throw error;
      await setTimeout(500 * (attempt + 1));
    }
  }
}

function relevantFields(metadata) {
  return Object.fromEntries(Object.entries(metadata).filter(([key, value]) => value && /copyright|rights|license|credit|artist|composer|creator|description|usage|attribution|contributor|music|author|performer|publisher/iu.test(key)));
}

function sourceCredits(source, metadata) {
  const description = source.description || '';
  const lines = description.split(/\n|\r/u).map(line => line.trim()).filter(line => /credit|courtesy|music|copyright|licensed/iu.test(line));
  const fields = Object.fromEntries(Object.entries(metadata).filter(([key, value]) => value && /copyright|rights|license|credit|creator|artist|composer|performer/iu.test(key)));
  return { lines, fields };
}

async function audit(item) {
  const nasaID = decodeURIComponent(new URL(item.sourceURL).pathname.replace(/^\/details\//u, ''));
  const searchURL = `https://images-api.nasa.gov/search?${new URLSearchParams({ nasa_id: nasaID, media_type: 'video' })}`;
  const result = { id: item.id, title: item.title, nasaID, sourceURL: item.sourceURL, catalogCreator: item.creator, catalogLicense: item.license, searchURL };
  try {
    const search = await fetchJSON(searchURL);
    const matches = search.collection.items.filter(record => record.data?.[0]?.nasa_id === nasaID);
    if (matches.length !== 1) throw new Error(`Expected one exact source match; received ${matches.length}`);
    const source = matches[0].data[0];
    const metadataIndexURL = `https://images-api.nasa.gov/metadata/${encodeURIComponent(nasaID)}`;
    const index = await fetchJSON(metadataIndexURL);
    const metadata = await fetchJSON(index.location);
    const fields = relevantFields(metadata);
    const rightsFields = Object.fromEntries(Object.entries(fields).filter(([key]) => /copyright|rights|license|usage/iu.test(key)));
    const sourceText = [JSON.stringify(source), JSON.stringify(fields)].join('\n');
    const risks = [];
    if (source.center === 'JPL') risks.push('jpl-caltech-policy-and-credit-review');
    if (/music|soundtrack|composer|song|audio network|universal production|killer tracks|premiumbeat|pond5/iu.test(sourceText)) risks.push('music-or-soundtrack-reference');
    if (/copyright|©|Getty|Shutterstock|SpaceX|European Space Agency|\bESA\b|Roscosmos|JAXA|courtesy|licensed|all rights reserved|permission/iu.test(sourceText)) risks.push('third-party-or-rights-reference');
    if (Number(metadata['QuickTime:AudioChannels']) > 0 || metadata['QuickTime:AudioFormat'] || metadata['XMP:AudioChannelType']) risks.push('audio-track-present-not-independently-cleared');
    if (!Object.keys(rightsFields).length) risks.push('no-explicit-item-rights-field');
    return { ...result, status: 'needs-manual-rights-review', risks, sourceCredits: sourceCredits(source, metadata), rightsFields, metadataURL: index.location, source, metadata };
  } catch (error) {
    return { ...result, status: 'unresolved-source', risks: ['source-verification-failed'], error: error.message };
  }
}

const results = new Array(catalog.length);
let cursor = 0;
let completed = 0;
await Promise.all(Array.from({ length: 5 }, async () => {
  while (cursor < catalog.length) {
    const index = cursor;
    cursor += 1;
    results[index] = await audit(catalog[index]);
    completed += 1;
    if (completed % 20 === 0 || completed === catalog.length) console.log(`Audited ${completed}/${catalog.length} source records`);
  }
}));
const count = predicate => results.filter(predicate).length;
const report = {
  checkedAt: new Date().toISOString(),
  publicURL: 'https://motion.voltrum.co/catalog.json',
  localSHA256: createHash('sha256').update(catalogBytes).digest('hex'),
  publicSHA256: createHash('sha256').update(liveBytes).digest('hex'),
  scope: 'Metadata and policy screening only. No legal clearance, frame-by-frame review, audio license determination, or video downloading performed.',
  policies: [
    'https://www.nasa.gov/nasa-brand-center/images-and-media/',
    'https://www.jpl.nasa.gov/jpl-image-use-policy/',
    'https://svs.gsfc.nasa.gov/help/usage.html'
  ],
  summary: {
    total: results.length,
    verifiedSources: count(item => item.status === 'needs-manual-rights-review'),
    unresolvedSources: count(item => item.status === 'unresolved-source'),
    independentlyCleared: 0,
    musicReferences: count(item => item.risks.includes('music-or-soundtrack-reference')),
    thirdPartyOrRightsReferences: count(item => item.risks.includes('third-party-or-rights-reference')),
    audioTracksPresent: count(item => item.risks.includes('audio-track-present-not-independently-cleared')),
    jplCreditReview: count(item => item.risks.includes('jpl-caltech-policy-and-credit-review')),
    withoutExplicitRightsField: count(item => item.risks.includes('no-explicit-item-rights-field'))
  },
  items: results
};
await mkdir(resolve(root, 'build'), { recursive: true });
await writeFile(output, `${JSON.stringify(report, null, 2)}\n`);
console.log(JSON.stringify(report.summary, null, 2));
console.log(`Evidence saved to ${output}`);
