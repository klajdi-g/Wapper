// rea decompile_all
// name: FUN_100373014
// address: 0x100373014
// body: available
// range: 0x100373014-0x1003739df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100373014(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  Divider DVar4;
  long lVar5;
  UUID UVar6;
  long lVar7;
  LocalizedStringKey LVar8;
  undefined *puVar9;
  ButtonRole BVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  long extraout_x8_02;
  long lVar15;
  long lVar16;
  long lVar17;
  long extraout_x8_03;
  long lVar18;
  long extraout_x8_04;
  long lVar19;
  long lVar20;
  long extraout_x8_05;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x13;
  long extraout_x13_00;
  long lVar28;
  ulong uVar29;
  long unaff_x20;
  long lVar30;
  ulong uVar31;
  long lVar32;
  code *pcVar33;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  long alStack_160 [6];
  long local_130;
  undefined *local_128;
  
  puVar3 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054b518;
  local_130 = (long)alStack_160 - extraout_x8;
  FUN_100002f94(&DAT_10054b518,&DAT_10042e600);
  local_128 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar23 = ((long)alStack_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar23 - extraout_x12;
  DVar4 = SwiftUI::Divider::typeMetadataAccessor();
  lVar13 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar24 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar24 - extraout_x12_00;
  lVar5 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar15 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  alStack_160[5] = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_01;
  alStack_160[3] = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_02;
  alStack_160[2] = lVar17;
  alStack_160[4] = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_03;
  puVar3 = &DAT_10055ef90;
  FUN_100002f94(&DAT_10055ef90,&DAT_100434788);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar25 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar25 - extraout_x12_04;
  puVar3 = &DAT_10055ee88;
  FUN_100002f94(&DAT_10055ee88,&DAT_1004346b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar26 = lVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar26 - extraout_x12_05;
  lVar7 = 0;
  FUN_10038f3a0();
  lVar32 = *(long *)(lVar7 + -8);
  lVar30 = *(long *)(lVar32 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar19 - (lVar30 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054def0;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar20 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar27 = lVar28 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  stringLiteral.bridgeObject = (void *)0x80000001004e6d10;
  stringLiteral.str = (char *)0x1000000000000018;
  LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_100029504();
  uVar21 = (ulong)*(byte *)(lVar32 + 0x50);
  uVar31 = uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
  lVar30 = uVar31 + lVar30;
  puVar9 = &DAT_10053c768;
  _swift_allocObject(&DAT_10053c768,lVar30);
  FUN_100007e64(lVar28,puVar9 + uVar31,FUN_10038f3a0);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar8);
  lVar7 = unaff_x20 + *(int *)(lVar7 + 0x14);
  lVar32 = 0;
  FUN_1001d59ac();
  bVar2 = *(long *)(*(long *)(lVar7 + *(int *)(lVar32 + 0x24)) + 0x10) == 0;
  alStack_160[1] = lVar30;
  if (!bVar2) {
    stringLiteral_00.bridgeObject = (void *)0x80000001004e6cd0;
    stringLiteral_00.str = (char *)0xd000000000000010;
    LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    FUN_100029504();
    puVar9 = &DAT_10053c790;
    _swift_allocObject(&DAT_10053c790,lVar30,uVar21 | 7);
    FUN_100007e64(lVar28,puVar9 + uVar31,FUN_10038f3a0);
    (extension_SwiftUI)::SwiftUI::Button::_init(LVar8);
  }
  (**(code **)(lVar20 + 0x38))(lVar19,bVar2,1);
  FUN_100029504(lVar7,lVar15,FUN_1001d537c);
  lVar7 = lVar15;
  _swift_getEnumCaseMultiPayload(lVar15,lVar5);
  lVar30 = alStack_160[3];
  bVar2 = (int)lVar7 != 1;
  if (bVar2) {
    FUN_100029548(lVar15,FUN_1001d537c);
  }
  else {
    pcVar33 = *(code **)(lVar16 + 0x20);
    (*pcVar33)(alStack_160[3],lVar15,UVar6.unknown);
    lVar7 = alStack_160[2];
    (*pcVar33)(alStack_160[2],lVar30,UVar6.unknown);
    (*pcVar33)(lVar17,lVar7);
    SwiftUI::Divider::init();
    stringLiteral_01.bridgeObject = (void *)0xeb00000000656d69;
    stringLiteral_01.str = (char *)0x54206574656c6544;
    LVar8 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    lVar30 = local_130;
    SwiftUI::ButtonRole::get_destructive((ButtonRole)LVar8.unknown);
    BVar10 = SwiftUI::ButtonRole::typeMetadataAccessor();
    (**(code **)(*(long *)(BVar10.unknown + -8) + 0x38))(lVar30,0,1,BVar10.unknown);
    FUN_100029504(unaff_x20,lVar28,FUN_10038f3a0);
    lVar30 = alStack_160[5];
    (**(code **)(lVar16 + 0x10))(alStack_160[5],lVar17,UVar6.unknown);
    uVar22 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar29 = alStack_160[1] + uVar22 & (uVar22 ^ 0xffffffffffffffff);
    puVar9 = &DAT_10053c7b8;
    _swift_allocObject(&DAT_10053c7b8,uVar29 + alStack_160[4],uVar21 | 7 | uVar22);
    FUN_100007e64(lVar28,puVar9 + uVar31,FUN_10038f3a0);
    (*pcVar33)(puVar9 + uVar29,lVar30,UVar6.unknown);
    (extension_SwiftUI)::SwiftUI::Button::_init(LVar8);
    lVar30 = 0;
    FUN_10025ee04();
    uVar21 = *(ulong *)(*(long *)(unaff_x20 + *(int *)(lVar30 + 0x34)) + 0x10);
    puVar9 = &DAT_100433150;
    _swift_getKeyPath();
    puVar11 = &DAT_10053c7e0;
    _swift_allocObject(&DAT_10053c7e0,0x11,7);
    puVar11[0x10] = uVar21 < 2;
    puVar1 = (undefined8 *)(lVar12 + *(int *)(local_128 + 0x24));
    *puVar1 = puVar9;
    puVar1[1] = thunk_FUN_10006bca0;
    puVar1[2] = puVar11;
    pcVar33 = *(code **)(lVar13 + 0x10);
    (*pcVar33)(lVar24,lVar14,DVar4.unknown);
    FUN_1000087e4(lVar12,lVar23,&DAT_10054b518,&DAT_10042e600);
    (*pcVar33)(lVar18,lVar24,DVar4.unknown);
    puVar9 = &DAT_10055efa8;
    FUN_100002f94(&DAT_10055efa8,&DAT_1004347a0);
    FUN_1000087e4(lVar23,lVar18 + *(int *)(puVar9 + 0x30),&DAT_10054b518,&DAT_10042e600);
    FUN_10002a29c(lVar12,&DAT_10054b518,&DAT_10042e600);
    pcVar33 = *(code **)(lVar13 + 8);
    (*pcVar33)(lVar14,DVar4.unknown);
    (**(code **)(lVar16 + 8))(lVar17,UVar6.unknown);
    FUN_10002a29c(lVar23,&DAT_10054b518,&DAT_10042e600);
    (*pcVar33)(lVar24,DVar4.unknown);
  }
  puVar9 = &DAT_10055ef98;
  FUN_100002f94(&DAT_10055ef98,&DAT_100434790);
  (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar18,bVar2,1,puVar9);
  pcVar33 = *(code **)(lVar20 + 0x10);
  (*pcVar33)(lVar27,lVar27 - extraout_x12_06,puVar3);
  FUN_1000087e4(lVar19,lVar26,&DAT_10055ee88,&DAT_1004346b0);
  FUN_1000087e4(lVar18,lVar25,&DAT_10055ef90,&DAT_100434788);
  (*pcVar33)(param_1,lVar27,puVar3);
  puVar9 = &DAT_10055efa0;
  FUN_100002f94(&DAT_10055efa0,&DAT_100434798);
  FUN_1000087e4(lVar26,param_1 + *(int *)(puVar9 + 0x30),&DAT_10055ee88,&DAT_1004346b0);
  FUN_1000087e4(lVar25,param_1 + *(int *)(puVar9 + 0x40),&DAT_10055ef90,&DAT_100434788);
  FUN_10002a29c(lVar18,&DAT_10055ef90,&DAT_100434788);
  FUN_10002a29c(lVar19,&DAT_10055ee88,&DAT_1004346b0);
  pcVar33 = *(code **)(lVar20 + 8);
  (*pcVar33)(lVar27 - extraout_x12_06,puVar3);
  FUN_10002a29c(lVar25,&DAT_10055ef90,&DAT_100434788);
  FUN_10002a29c(lVar26,&DAT_10055ee88,&DAT_1004346b0);
  (*pcVar33)(lVar27,puVar3);
  return;
}

