// rea decompile_all
// name: FUN_1000931c8
// address: 0x1000931c8
// body: available
// range: 0x1000931c8-0x1000932b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_1000931c8(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_2;
  if (param_1 <= param_2) {
    dVar1 = param_1;
  }
  dVar1 = dVar1 / 100.0;
  dVar2 = param_1 / (dVar1 * 160.0);
  param_2 = param_2 / (dVar1 * 92.0);
  dVar3 = param_2;
  if (dVar2 <= param_2) {
    dVar3 = dVar2;
  }
  dVar4 = (double)NEON_fminnm(param_2,0x3fee147ae147ae14);
  if (0.94 <= dVar2) {
    dVar3 = dVar4;
  }
  return param_1 * 0.5 + (dVar1 * 103.77272727272727 + dVar1 * -152.0 * 0.5) * dVar3;
}

