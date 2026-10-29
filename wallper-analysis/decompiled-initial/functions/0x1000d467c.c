// rea decompile_all
// name: FUN_1000d467c
// address: 0x1000d467c
// body: available
// range: 0x1000d467c-0x1000d46ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d467c(undefined8 *param_1)

{
  double *unaff_x20;
  double dVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  dVar1 = *unaff_x20 * 3.141592653589793 * 4.0;
  _sin(dVar1);
  _CGAffineTransformMakeTranslation(&local_50,dVar1 * 6.0,0);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = 0;
  param_1[4] = uStack_38;
  param_1[3] = uStack_40;
  param_1[5] = 0;
  param_1[7] = uStack_28;
  param_1[6] = local_30;
  param_1[8] = 0x3ff0000000000000;
  return;
}

