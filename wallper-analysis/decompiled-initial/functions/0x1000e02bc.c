// rea decompile_all
// name: FUN_1000e02bc
// address: 0x1000e02bc
// body: available
// range: 0x1000e02bc-0x1000e0323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e02bc(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  local_30 = unaff_x20[4];
  HVar1 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100551818;
  FUN_100002f94(&DAT_100551818,&DAT_100423770);
  FUN_1000dd1b4((long)param_1 + (long)*(int *)(puVar2 + 0x2c),&local_50);
  return;
}

