// rea decompile_all
// name: FUN_1002d79e0
// address: 0x1002d79e0
// body: available
// range: 0x1002d79e0-0x1002d81df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002d8158 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002d79e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  LocalizedStringKey LVar7;
  undefined *puVar8;
  byte bVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar14;
  long extraout_x8_06;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  byte local_90;
  undefined1 *local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uVar9;
  
  puVar4 = &DAT_10055a9c8;
  local_c8 = param_1;
  FUN_100002f94(&DAT_10055a9c8,&DAT_10042ed90);
  lVar17 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_160 + -extraout_x8;
  puVar5 = &DAT_10055a9b8;
  FUN_100002f94(&DAT_10055a9b8,&DAT_10042ed88);
  local_f8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_f0 = (long)puVar11 - extraout_x8_00;
  FUN_1002bc1b0();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = ((long)puVar11 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar6;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar6 = lVar6 - extraout_x12;
  puVar5 = &DAT_10055a9f8;
  local_e8 = lVar6;
  FUN_100002f94(&DAT_10055a9f8,&DAT_10042ee50);
  local_110 = *(long *)(puVar5 + -8);
  local_100 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar6 = lVar6 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar6 - extraout_x12_00;
  puVar5 = &DAT_10055aa00;
  FUN_100002f94(&DAT_10055aa00,&DAT_10042ee58);
  local_138 = *(long *)(puVar5 + -8);
  local_118 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  lVar15 = lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar15 - extraout_x12_01;
  puVar5 = &DAT_10055aa08;
  FUN_100002f94(&DAT_10055aa08,&DAT_10042ee60);
  local_d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10055aa10;
  local_e0 = lVar13 - extraout_x8_04;
  FUN_100002f94(&DAT_10055aa10,&DAT_10042ee68);
  local_128 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (lVar13 - extraout_x8_04) - extraout_x8_05;
  puVar5 = &DAT_10055a988;
  local_120 = lVar14;
  FUN_100002f94(&DAT_10055a988,&DAT_10042ed70);
  local_d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_06;
  puVar5 = &DAT_10055a998;
  FUN_100002f94(&DAT_10055a998,&DAT_10042ed78);
  local_130 = puVar5;
  FUN_1002d72ac();
  local_70 = param_2;
  if (((ulong)puVar5 & 1) == 0) {
    stringLiteral_01.bridgeObject = (void *)0xe700000000000000;
    stringLiteral_01.str = (char *)0x65736e6563694c;
    uVar9 = 0xe700000000000000;
    LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    *(undefined2 *)(lVar14 + -8) = 0x100;
    *(undefined8 *)(lVar14 + -0x10) = 0;
    local_90 = param_4 & 1;
    local_a0 = (undefined *)SwiftUI::Text::_init(LVar7);
    uStack_98 = uVar9;
    local_88 = (undefined1 *)param_5;
    FUN_1002db104(auStack_c0,param_2);
    puVar5 = &DAT_10055a9d8;
    FUN_100002f94(&DAT_10055a9d8,&DAT_10042ed98);
    puVar8 = &DAT_10055a9d0;
    FUN_1000087a0(&DAT_10055a9d0,&DAT_10055a9d8,&DAT_10042ed98,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    *(undefined **)(lVar14 + -0x10) = puVar8;
    *(undefined **)(lVar14 + -8) =
         PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    (extension_SwiftUI)::SwiftUI::Section::_init
              (puVar11,puVar8,auStack_c0,FUN_1002db65c,auStack_80,
               PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar5,
               PTR___type_metadata_for_SwiftUI_Text_100522e28);
    lVar6 = local_e0;
    (**(code **)(lVar17 + 0x10))(local_e0,puVar11,puVar4);
    _swift_storeEnumTagMultiPayload(lVar6,local_d0,1);
    FUN_1002db390();
    FUN_1002db4c4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar6);
    (**(code **)(lVar17 + 8))(puVar11,puVar4);
  }
  else {
    stringLiteral.bridgeObject = (void *)0xe700000000000000;
    stringLiteral.str = (char *)0x65736e6563694c;
    uVar9 = 0xe700000000000000;
    LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    *(undefined2 *)(lVar14 + -8) = 0x100;
    *(undefined8 *)(lVar14 + -0x10) = 0;
    local_90 = param_4 & 1;
    local_a0 = (undefined *)SwiftUI::Text::_init(LVar7);
    uStack_98 = uVar9;
    local_88 = (undefined1 *)param_5;
    FUN_1002d9760(auStack_c0,param_2);
    puVar5 = &DAT_10055aa18;
    FUN_100002f94(&DAT_10055aa18,&DAT_10042ee70);
    puVar8 = &DAT_10055aa20;
    local_140 = puVar4;
    FUN_1000087a0(&DAT_10055aa20,&DAT_10055aa18,&DAT_10042ee70,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    puVar2 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    puVar1 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    bVar10 = 0;
    *(undefined **)(lVar14 + -0x10) = puVar8;
    *(undefined **)(lVar14 + -8) =
         PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    puVar11 = auStack_80;
    local_148 = lVar13;
    (extension_SwiftUI)::SwiftUI::Section::_init
              (lVar13,puVar8,auStack_c0,FUN_1002db664,puVar11,
               PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar5,
               PTR___type_metadata_for_SwiftUI_Text_100522e28,
               PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
    stringLiteral_00.bridgeObject = (void *)0xe700000000000000;
    stringLiteral_00.str = (char *)0x73656369766544;
    uVar9 = 0xe700000000000000;
    local_b0 = param_2;
    LVar7 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    *(undefined2 *)(lVar14 + -8) = 0x100;
    *(undefined8 *)(lVar14 + -0x10) = 0;
    bVar10 = bVar10 & 1;
    local_a0 = (undefined *)SwiftUI::Text::_init(LVar7);
    local_90 = bVar10;
    puVar4 = &DAT_10055aa28;
    uStack_98 = uVar9;
    local_88 = puVar11;
    FUN_100002f94(&DAT_10055aa28,&DAT_10042ee78);
    puVar5 = &DAT_10055aa30;
    FUN_1000087a0(&DAT_10055aa30,&DAT_10055aa28,&DAT_10042ee78,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    local_150 = lVar12;
    (extension_SwiftUI)::SwiftUI::Section::_init
              (lVar12,puVar5,FUN_1002db66c,auStack_c0,puVar2,puVar4,puVar1,puVar5);
    lVar3 = local_e8;
    FUN_1002bbf98(local_e8);
    puVar5 = local_118;
    lVar17 = local_138;
    pcVar16 = *(code **)(local_138 + 0x10);
    (*pcVar16)(lVar15,lVar13,local_118);
    puVar8 = local_100;
    lVar13 = local_110;
    pcVar18 = *(code **)(local_110 + 0x10);
    local_158 = lVar14;
    (*pcVar18)(lVar6,lVar12,local_100);
    lVar12 = local_108;
    FUN_1002db674(lVar3,local_108);
    lVar14 = local_f0;
    (*pcVar16)(local_f0,lVar15,puVar5);
    puVar4 = &DAT_10055aa38;
    FUN_100002f94(&DAT_10055aa38,&DAT_10042ee80);
    (*pcVar18)(lVar14 + *(int *)(puVar4 + 0x30),lVar6,puVar8);
    FUN_1002db674(lVar12,lVar14 + *(int *)(puVar4 + 0x40));
    FUN_1002db6b8(lVar12);
    pcVar18 = *(code **)(lVar13 + 8);
    (*pcVar18)(lVar6,puVar8);
    pcVar16 = *(code **)(lVar17 + 8);
    (*pcVar16)(lVar15,puVar5);
    lVar12 = local_120;
    FUN_1000087e4(lVar14,local_120,&DAT_10055a9b8,&DAT_10042ed88);
    _swift_storeEnumTagMultiPayload(lVar12,local_128,1);
    FUN_1002db428();
    FUN_1000087a0(&DAT_10055a9b0,&DAT_10055a9b8,&DAT_10042ed88,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    lVar6 = local_158;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
    lVar12 = local_e0;
    FUN_1000087e4(lVar6,local_e0,&DAT_10055a988,&DAT_10042ed70);
    _swift_storeEnumTagMultiPayload(lVar12,local_d0,0);
    FUN_1002db390();
    FUN_1002db4c4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
    FUN_10002a29c(lVar6,&DAT_10055a988,&DAT_10042ed70);
    FUN_1002db6b8(local_e8);
    (*pcVar18)(local_150,puVar8);
    (*pcVar16)(local_148,puVar5);
    FUN_10002a29c(lVar14,&DAT_10055a9b8,&DAT_10042ed88);
  }
  return;
}

