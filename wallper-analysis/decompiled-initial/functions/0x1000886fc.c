// rea decompile_all
// name: FUN_1000886fc
// address: 0x1000886fc
// body: available
// range: 0x1000886fc-0x1000887a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float FUN_1000886fc(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(int)param_1;
  param_1 = param_1 - fVar2;
  fVar1 = fVar2 * 127.1 + 311.7;
  _sinf(fVar1);
  fVar3 = fVar1 * 43758.547 - (float)(int)(fVar1 * 43758.547);
  fVar1 = (fVar2 + 1.0) * 127.1 + 311.7;
  _sinf(fVar1);
  return fVar3 + param_1 * param_1 * (3.0 - (param_1 + param_1)) *
                 ((fVar1 * 43758.547 - (float)(int)(fVar1 * 43758.547)) - fVar3);
}

