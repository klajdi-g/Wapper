// rea decompile_all
// name: FUN_1003a4ae4
// address: 0x1003a4ae4
// body: available
// range: 0x1003a4ae4-0x1003a4efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a4ae4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  State SVar9;
  Animation AVar10;
  LocalizedStringKey LVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  String stringLiteral;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  char local_91;
  undefined1 local_90;
  undefined8 local_88;
  
  lVar6 = 0;
  local_a0 = param_1;
  FUN_1003a67f8();
  lVar18 = *(long *)(lVar6 + -8);
  lVar16 = *(long *)(lVar18 + 0x40);
  local_b0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)&local_c0 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10055d148;
  FUN_100002f94(&DAT_10055d148,&DAT_1004326d8);
  local_b8 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar20 - extraout_x8;
  puVar8 = &DAT_10055d108;
  FUN_100002f94(&DAT_10055d108,&DAT_1004326b8);
  lVar14 = *(long *)(puVar8 + -8);
  local_c0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar6 - extraout_x8_00;
  puVar8 = &DAT_10055f658;
  FUN_100002f94(&DAT_10055f658,&DAT_100434e28);
  local_a8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar13 - extraout_x8_01;
  FUN_100029504();
  uVar12 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar19 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053ceb0;
  _swift_allocObject(&DAT_10053ceb0,uVar19 + lVar16,uVar12 | 7);
  FUN_100007e64(lVar20,puVar8 + uVar19,FUN_1003a67f8);
  FUN_100002f94(&DAT_10055f660,&DAT_100434e30);
  FUN_1003a7a10();
  SwiftUI::Button::_init();
  puVar8 = &DAT_10055d150;
  FUN_1000087a0(&DAT_10055d150,&DAT_10055d148,&DAT_1004326d8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar13);
  (**(code **)(local_b8 + 8))(lVar6,puVar7);
  FUN_10033b60c(lVar17);
  lVar6 = local_b0;
  (**(code **)(lVar14 + 8))(lVar13,local_c0);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar6 + 0x20));
  uVar2 = *puVar1;
  uVar15 = *(undefined8 *)(puVar1 + 8);
  SVar9.unknown = &DAT_10054ab50;
  local_90 = uVar2;
  local_88 = uVar15;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar9);
  if (local_91 == '\x01') {
    lVar13 = 0;
    FUN_10025ee04();
    uVar21 = 0x3ff0000000000000;
    if (*(long *)(*(long *)(unaff_x20 + *(int *)(lVar13 + 0x20)) + 0x10) != 0) goto LAB_1003a4d88;
  }
  uVar21 = 0;
LAB_1003a4d88:
  puVar7 = &DAT_10055f670;
  FUN_100002f94(&DAT_10055f670,&DAT_100434e38);
  *(undefined8 *)(lVar17 + *(int *)(puVar7 + 0x24)) = uVar21;
  local_90 = uVar2;
  local_88 = uVar15;
  SwiftUI::State::get_wrappedValue(SVar9);
  if (local_91 == '\x01') {
    lVar13 = 0;
    FUN_10025ee04();
    bVar5 = *(long *)(*(long *)(unaff_x20 + *(int *)(lVar13 + 0x20)) + 0x10) != 0;
  }
  else {
    bVar5 = false;
  }
  AVar10.unknown = &DAT_10055f678;
  FUN_100002f94(&DAT_10055f678,&DAT_100434e40);
  *(bool *)(lVar17 + *(int *)(AVar10.unknown + 0x24)) = bVar5;
  AVar10 = SwiftUI::Animation::easeOut(0.12,AVar10);
  local_90 = uVar2;
  local_88 = uVar15;
  SwiftUI::State::get_wrappedValue(SVar9);
  iVar3 = *(int *)(local_a8 + 0x24);
  *(undefined8 *)(lVar17 + iVar3) = AVar10.unknown;
  *(char *)((undefined8 *)(lVar17 + iVar3) + 1) = local_91;
  uVar4 = 0x706f7453;
  if (*(char *)(unaff_x20 + *(int *)(lVar6 + 0x18)) == '\0') {
    uVar4 = 0x79616c50;
  }
  stringLiteral.bridgeObject = (void *)0xe400000000000000;
  stringLiteral.str = (char *)(ulong)uVar4;
  uVar15 = 0xe400000000000000;
  LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1003a7aa8();
  (extension_SwiftUI)::SwiftUI::View::_help(LVar11);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(uVar15);
  FUN_10002a29c(lVar17,&DAT_10055f658,&DAT_100434e28);
  return;
}

