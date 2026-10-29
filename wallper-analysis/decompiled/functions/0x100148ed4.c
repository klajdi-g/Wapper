// rea decompile_all
// name: FUN_100148ed4
// address: 0x100148ed4
// body: available
// range: 0x100148ed4-0x100148f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100148ed4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_10014ecac(&local_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = local_58;
    param_1[7] = uStack_40;
    param_1[6] = local_48;
    param_1[9] = uStack_30;
    param_1[8] = local_38;
    *(undefined1 *)(param_1 + 10) = local_28;
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
  }
  return;
}

