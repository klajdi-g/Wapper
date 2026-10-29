// rea decompile_all
// name: FUN_1002dc8b8
// address: 0x1002dc8b8
// body: available
// range: 0x1002dc8b8-0x1002dd31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002dca60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002dc8b8(long param_1,undefined8 *param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  LocalizedStringKey LVar6;
  undefined *puVar7;
  undefined *puVar8;
  AnyView AVar9;
  State SVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  String stringLiteral_04;
  String stringLiteral_05;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long alStack_150 [6];
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined *local_d8;
  undefined *local_a0;
  undefined8 uStack_98;
  byte local_90;
  undefined *local_88;
  undefined auStack_80 [16];
  undefined8 *local_70;
  
  puVar5 = &DAT_10055ab30;
  local_118 = param_1;
  FUN_100002f94(&DAT_10055ab30,&DAT_10042f1e0);
  local_f8 = *(long *)(puVar5 + -8);
  local_120 = *(long *)(local_f8 + 0x40);
  local_110 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(local_120 + 0xfU & 0xfffffffffffffff0);
  lVar15 = -extraout_x8;
  lVar18 = (long)alStack_150 + lVar15;
  uVar11 = 0xea0000000000636e;
  stringLiteral.bridgeObject = (void *)0xea0000000000636e;
  stringLiteral.str = (char *)0x795320616964654d;
  local_70 = param_2;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)&uStack_158 + lVar15) = 0x100;
  *(undefined8 *)((long)&uStack_160 + lVar15) = 0;
  param_4 = param_4 & 1;
  local_f0 = (undefined *)SwiftUI::Text::_init(LVar6);
  uVar12 = 0x80000001004e4d80;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e4d80;
  stringLiteral_00.str = (char *)0xd000000000000023;
  uStack_e8 = uVar11;
  local_d8 = (undefined *)param_5;
  local_e0._0_1_ = param_4;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)((long)&uStack_158 + lVar15) = 0x100;
  *(undefined8 *)((long)&uStack_160 + lVar15) = 0;
  local_90 = param_4 & 1;
  local_a0 = (undefined *)SwiftUI::Text::_init(LVar6);
  puVar5 = &DAT_10055a7e0;
  uStack_98 = uVar12;
  local_88 = (undefined *)param_5;
  FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
  puVar7 = &DAT_10055a7e8;
  FUN_1000087a0(&DAT_10055a7e8,&DAT_10055a7e0,&DAT_10042e9c8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  puVar2 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar1 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  bVar4 = 0;
  *(undefined **)((long)&uStack_160 + lVar15) = puVar7;
  *(undefined **)((long)&uStack_158 + lVar15) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  puVar8 = auStack_80;
  local_100 = lVar18;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar18,puVar7,&local_a0,FUN_1002e154c,puVar8,
             PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar5,
             PTR___type_metadata_for_SwiftUI_Text_100522e28,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
  puVar5 = &DAT_10055ab38;
  FUN_100002f94(&DAT_10055ab38,&DAT_10042f1f0);
  alStack_150[5] = *(long *)(*(long *)(puVar5 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(alStack_150[5] + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_00;
  stringLiteral_01.bridgeObject = (void *)0xe800000000000000;
  stringLiteral_01.str = (char *)0x6f74207463616552;
  uVar11 = 0xe800000000000000;
  local_70 = param_2;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  bVar4 = bVar4 & 1;
  local_f0 = (undefined *)SwiftUI::Text::_init(LVar6);
  local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,bVar4);
  uVar12 = 0x80000001004e4db0;
  stringLiteral_02.bridgeObject = (void *)0x80000001004e4db0;
  stringLiteral_02.str = (char *)0xd0000000000000a2;
  uStack_e8 = uVar11;
  local_d8 = puVar8;
  LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_02);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  bVar4 = bVar4 & 1;
  local_a0 = (undefined *)SwiftUI::Text::_init(LVar6);
  local_90 = bVar4;
  puVar7 = &DAT_10055ab40;
  uStack_98 = uVar12;
  local_88 = puVar8;
  FUN_100002f94(&DAT_10055ab40,&DAT_10042f1f8);
  puVar8 = &DAT_10055ab48;
  FUN_1000087a0(&DAT_10055ab48,&DAT_10055ab40,&DAT_10042f1f8,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar18 + -0x10) = puVar8;
  *(undefined **)(lVar18 + -8) = puVar1;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar18,puVar8,&local_a0,FUN_1002e157c,auStack_80,puVar2,puVar7,puVar2,puVar1);
  uVar11 = param_2[1];
  puVar7 = &DAT_10042f180;
  _swift_getKeyPath(&DAT_10042f180);
  puVar8 = &DAT_10042f1a8;
  _swift_getKeyPath(&DAT_10042f1a8);
  Combine::Published::_get_subscript(&local_f0,uVar11,puVar7,puVar8);
  _swift_release(puVar7);
  _swift_release(puVar8);
  puVar8 = local_f0;
  puVar7 = &DAT_100538cc8;
  _swift_allocObject(&DAT_100538cc8,0x60,7);
  uVar11 = param_2[4];
  uVar23 = param_2[7];
  uVar12 = param_2[6];
  *(undefined8 *)(puVar7 + 0x38) = param_2[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar11;
  *(undefined8 *)(puVar7 + 0x48) = uVar23;
  *(undefined8 *)(puVar7 + 0x40) = uVar12;
  uVar11 = param_2[8];
  *(undefined8 *)(puVar7 + 0x58) = param_2[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar11;
  uVar23 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  *(undefined8 *)(puVar7 + 0x18) = param_2[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar23;
  *(undefined8 *)(puVar7 + 0x28) = uVar12;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  puVar17 = (undefined8 *)(lVar18 + *(int *)(puVar5 + 0x24));
  local_108 = lVar18;
  *puVar17 = puVar8;
  puVar17[1] = FUN_1002e1584;
  puVar17[2] = puVar7;
  puVar5 = &DAT_10055a7d0;
  FUN_100002f94(&DAT_10055a7d0,&DAT_10042f200);
  alStack_150[4] = *(long *)(*(long *)(puVar5 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(alStack_150[4] + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_01;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  puVar5 = &DAT_10055a7d8;
  FUN_100002f94(&DAT_10055a7d8,&DAT_10042e9c0);
  lVar20 = *(long *)(puVar5 + -8);
  uVar19 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_150[3] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar18 - uVar19;
  if ((bVar4 & 1) == 0) {
    FUN_1002e141c(param_2,&local_f0);
    stringLiteral_04.bridgeObject = (void *)0xe700000000000000;
    stringLiteral_04.str = (char *)0x706f746b736544;
    LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_04);
    local_e0 = param_2;
    (extension_SwiftUI)::SwiftUI::Section::_init(LVar6);
    puVar7 = &DAT_10055a7f0;
    FUN_100002f94(&DAT_10055a7f0,&DAT_10042f210);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar17 = (undefined8 *)(lVar15 - extraout_x8_03);
    (**(code **)(lVar20 + 0x10))(puVar17,lVar15,puVar5);
    _swift_storeEnumTagMultiPayload(puVar17,puVar7,1);
    FUN_1002d67b8();
  }
  else {
    FUN_1002e141c(param_2,&local_f0);
    stringLiteral_03.bridgeObject = (void *)0xeb000000006e6565;
    stringLiteral_03.str = (char *)0x726353206b636f4c;
    LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
    local_e0 = param_2;
    (extension_SwiftUI)::SwiftUI::Section::_init(LVar6);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar13 = lVar15 - uVar19;
    (**(code **)(lVar20 + 0x10))(lVar13,lVar15,puVar5);
    FUN_1002d67b8();
    AVar9 = SwiftUI::AnyView::_init(lVar13,puVar5,lVar13);
    puVar7 = &DAT_10055a7f0;
    FUN_100002f94(&DAT_10055a7f0,&DAT_10042f210);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar17 = (undefined8 *)(lVar15 - extraout_x8_02);
    *puVar17 = AVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar17);
  }
  puVar7 = puVar5;
  puVar8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar17);
  bVar4 = (byte)puVar7;
  (**(code **)(lVar20 + 8))(lVar15,puVar5);
  lVar15 = alStack_150[3];
  puVar5 = &DAT_10055ab50;
  alStack_150[1] = lVar18;
  FUN_100002f94(&DAT_10055ab50,&DAT_10042f218);
  uVar19 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_150[3] = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - uVar19;
  uStack_e8 = param_2[3];
  local_f0 = (undefined *)param_2[2];
  SVar10.unknown = &DAT_10055ab10;
  FUN_100002f94(&DAT_10055ab10,&DAT_10042f170);
  SwiftUI::State::get_wrappedValue(SVar10);
  bVar3 = (char)local_a0 != '\x01';
  if (!bVar3) {
    uVar11 = 0x80000001004e4e60;
    stringLiteral_05.bridgeObject = (void *)0x80000001004e4e60;
    stringLiteral_05.str = (char *)0x100000000000008a;
    LVar6 = SwiftUI::LocalizedStringKey::init(stringLiteral_05);
    *(undefined2 *)(lVar15 + -8) = 0x100;
    *(undefined8 *)(lVar15 + -0x10) = 0;
    bVar4 = bVar4 & 1;
    local_f0 = (undefined *)SwiftUI::Text::_init(LVar6);
    local_e0 = (undefined8 *)CONCAT71(local_e0._1_7_,bVar4);
    puVar5 = &DAT_10055a860;
    uStack_e8 = uVar11;
    local_d8 = puVar8;
    FUN_100002f94(&DAT_10055a860,&DAT_10042f230);
    puVar7 = &DAT_10055a890;
    FUN_1000087a0(&DAT_10055a890,&DAT_10055a860,&DAT_10042f230,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    (extension_SwiftUI)::SwiftUI::Section::_init
              (lVar15,puVar7,FUN_1002df87c,0,puVar5,PTR___type_metadata_for_SwiftUI_Text_100522e28,
               puVar7,
               PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
  }
  puVar5 = &DAT_10055ab58;
  FUN_100002f94(&DAT_10055ab58,&DAT_10042f220);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(lVar15,bVar3,1,puVar5);
  alStack_150[2] = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = local_110;
  lVar13 = lVar15 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  pcVar21 = *(code **)(local_f8 + 0x10);
  (*pcVar21)(lVar13,local_100,local_110);
  local_120 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar13 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000087e4(local_108,lVar16,&DAT_10055ab38,&DAT_10042f1f0);
  alStack_150[5] = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = alStack_150[1];
  lVar22 = lVar16 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1002e15d4(alStack_150[1],lVar22);
  alStack_150[4] = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar22 - uVar19;
  FUN_1000087e4(lVar15,lVar14,&DAT_10055ab50,&DAT_10042f218);
  lVar20 = local_118;
  (*pcVar21)(local_118,lVar13,puVar7);
  puVar5 = &DAT_10055ab60;
  FUN_100002f94(&DAT_10055ab60,&DAT_10042f228);
  FUN_1000087e4(lVar16,lVar20 + *(int *)(puVar5 + 0x30),&DAT_10055ab38,&DAT_10042f1f0);
  FUN_1002e15d4(lVar22,lVar20 + *(int *)(puVar5 + 0x40));
  FUN_1000087e4(lVar14,lVar20 + *(int *)(puVar5 + 0x50),&DAT_10055ab50,&DAT_10042f218);
  FUN_10002a29c(lVar15,&DAT_10055ab50,&DAT_10042f218);
  FUN_1002e1624(lVar18);
  FUN_10002a29c(local_108,&DAT_10055ab38,&DAT_10042f1f0);
  pcVar21 = *(code **)(local_f8 + 8);
  (*pcVar21)(local_100,puVar7);
  FUN_10002a29c(lVar14,&DAT_10055ab50,&DAT_10042f218);
  FUN_1002e1624(lVar22);
  FUN_10002a29c(lVar16,&DAT_10055ab38,&DAT_10042f1f0);
  (*pcVar21)(lVar13,puVar7);
  return;
}

