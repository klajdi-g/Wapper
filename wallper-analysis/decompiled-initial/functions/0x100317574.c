// rea decompile_all
// name: FUN_100317574
// address: 0x100317574
// body: available
// range: 0x100317574-0x1003175ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100317574(undefined8 *param_1,VerticalAlignment param_2,undefined8 param_3,code *param_4)

{
  VerticalAlignment VVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_2);
  (*param_4)(&local_70,param_2.unknown,param_3);
  *param_1 = VVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = uStack_68;
  param_1[3] = local_70;
  *(undefined1 *)(param_1 + 5) = local_60;
  param_1[6] = local_58;
  param_1[7] = uStack_50;
  return;
}

