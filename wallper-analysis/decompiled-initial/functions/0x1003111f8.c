// rea decompile_all
// name: FUN_1003111f8
// address: 0x1003111f8
// body: available
// range: 0x1003111f8-0x1003113c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003111f8(void)

{
  long lVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  State SVar8;
  long unaff_x20;
  Published *pPVar9;
  long local_a8;
  State local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined *local_80;
  long lStack_78;
  State local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  pPVar9 = *(Published **)(unaff_x20 + 0xf0);
  pbVar5 = &BYTE_1004309d8;
  pbVar3 = pbVar5;
  _swift_getKeyPath(&BYTE_1004309d8);
  pbVar6 = &BYTE_100430a00;
  pbVar4 = pbVar6;
  _swift_getKeyPath(&BYTE_100430a00);
  Combine::Published::_get_subscript(&local_70,pPVar9,pbVar3,pbVar4);
  _swift_release(pbVar3);
  _swift_release(pbVar4);
  lVar1 = lStack_68;
  SVar8.unknown = local_70.unknown;
  _swift_getKeyPath(&BYTE_1004309d8);
  _swift_getKeyPath(&BYTE_100430a00);
  local_70.unknown = (undefined *)0x0;
  lStack_68 = 0;
  _swift_retain(pPVar9);
  Combine::Published::_set_subscript(pPVar9,&local_70,pPVar9,pbVar5,pbVar6);
  if (lVar1 != 0) {
    lStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70.unknown = *(undefined **)(unaff_x20 + 0x28);
    local_80 = (undefined *)CONCAT71(local_80._1_7_,0xe);
    puVar7 = &DAT_10055bd08;
    FUN_100002f94(&DAT_10055bd08,&DAT_100435de0);
    SwiftUI::State::set_wrappedValue(&local_70,&local_80,puVar7);
    lStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
    local_70.unknown = *(undefined **)(unaff_x20 + 0x10);
    local_60 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = SVar8.unknown;
    lStack_78 = lVar1;
    puVar7 = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::set_wrappedValue(&local_70,&local_80,puVar7);
    lStack_68 = *(undefined8 *)(unaff_x20 + 0x100);
    local_70.unknown = *(undefined **)(unaff_x20 + 0xf8);
    lStack_78 = *(undefined8 *)(unaff_x20 + 0x100);
    local_80 = *(undefined **)(unaff_x20 + 0xf8);
    local_58 = lStack_68;
    FUN_1000087e4(&local_58,&local_a0,&DAT_10054d690,&DAT_10041e1d0);
    SVar8.unknown = &DAT_10054ba40;
    FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
    SwiftUI::State::get_wrappedValue(SVar8);
    local_a8 = local_88 + 1;
    if (SCARRY8(local_88,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003113c8);
      (*pcVar2)();
    }
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x100);
    local_a0.unknown = *(undefined **)(unaff_x20 + 0xf8);
    SwiftUI::State::set_wrappedValue(&local_a0,&local_a8,SVar8.unknown);
    FUN_10002a29c(&local_70,&DAT_10054ba40,&DAT_100423be0);
  }
  return;
}

