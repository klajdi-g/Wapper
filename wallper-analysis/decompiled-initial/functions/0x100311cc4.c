// rea decompile_all
// name: FUN_100311cc4
// address: 0x100311cc4
// body: available
// range: 0x100311cc4-0x100311deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100311cc4(void)

{
  long lVar1;
  code *pcVar2;
  State SVar3;
  long unaff_x20;
  long lVar4;
  long local_68;
  State local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0xb0);
  local_50 = *(undefined **)(unaff_x20 + 0xa8);
  SVar3.unknown = &DAT_10055bd50;
  FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
  SwiftUI::State::get_wrappedValue(SVar3);
  lVar4 = *(long *)(local_60.unknown + 0x10);
  _swift_bridgeObjectRelease();
  uStack_48 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_50 = *(undefined **)(unaff_x20 + 0x98);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_60.unknown = *(undefined **)(unaff_x20 + 0x98);
  local_38 = uStack_48;
  FUN_1000087e4(&local_38,&local_68,&DAT_10054d690,&DAT_10041e1d0);
  SVar3.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_68 < lVar4) {
    uStack_58 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_60.unknown = *(undefined **)(unaff_x20 + 0x98);
    SwiftUI::State::get_wrappedValue(SVar3);
    lVar1 = local_68 + *(long *)(unaff_x20 + 0x108);
    if (SCARRY8(local_68,*(long *)(unaff_x20 + 0x108))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100311dec);
      (*pcVar2)();
    }
    local_68 = lVar4;
    if (lVar1 <= lVar4) {
      local_68 = lVar1;
    }
    uStack_58 = uStack_48;
    local_60.unknown = local_50;
    SwiftUI::State::set_wrappedValue(&local_60,&local_68,SVar3.unknown);
  }
  FUN_10002a29c(&local_50,&DAT_10054ba40,&DAT_100423be0);
  return;
}

