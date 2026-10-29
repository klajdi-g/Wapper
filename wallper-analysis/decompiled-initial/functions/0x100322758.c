// rea decompile_all
// name: FUN_100322758
// address: 0x100322758
// body: available
// range: 0x100322758-0x10032283b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322758(void)

{
  State SVar1;
  long unaff_x20;
  byte local_68 [8];
  State local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x40);
  local_60.unknown = *(undefined **)(unaff_x20 + 0x38);
  local_38 = local_48;
  FUN_1000087e4(&local_38,local_68,&DAT_10054b608,&DAT_10041c9a0);
  SVar1.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar1);
  if ((local_68[0] & 1) == 0) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x40);
    local_60.unknown = *(undefined **)(unaff_x20 + 0x38);
    local_68[0] = 1;
    SwiftUI::State::set_wrappedValue(&local_60,local_68,SVar1.unknown);
    FUN_10002a29c(&uStack_50,&DAT_10054ab50,&DAT_10041d0f0);
    FUN_100324238();
  }
  else {
    FUN_10002a29c(&uStack_50,&DAT_10054ab50,&DAT_10041d0f0);
  }
  return;
}

