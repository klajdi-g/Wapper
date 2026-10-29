// rea decompile_all
// name: FUN_1002cc6a4
// address: 0x1002cc6a4
// body: available
// range: 0x1002cc6a4-0x1002cd2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002cca24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002cc6a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  LocalizedStringKey LVar5;
  AnyView AVar6;
  undefined *puVar7;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  ulong uVar18;
  code *pcVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  String stringLiteral_04;
  long local_1a0 [2];
  code *local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  code *local_158;
  ulong local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  byte local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uVar8;
  
  puVar4 = &DAT_10055a7b0;
  local_138 = param_1;
  FUN_100002f94(&DAT_10055a7b0,&DAT_10042e9a8);
  local_d8 = *(long *)(puVar4 + -8);
  lVar21 = *(long *)(local_d8 + 0x40);
  local_130 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_c8 = lVar21 + 0xfU & 0xfffffffffffffff0;
  lVar11 = (long)local_1a0 - local_c8;
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x70757472617453;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_90 = param_2;
  FUN_100002f94(&DAT_10055a7b8,&DAT_10042e9b0);
  FUN_1000087a0(&DAT_10055a7c0,&DAT_10055a7b8,&DAT_10042e9b0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_d0 = lVar11;
  (extension_SwiftUI)::SwiftUI::Section::_init(LVar5);
  puVar4 = &DAT_10055a7c8;
  FUN_100002f94(&DAT_10055a7c8,&DAT_10042e9b8);
  local_e8 = *(long *)(puVar4 + -8);
  local_110 = *(long *)(local_e8 + 0x40);
  local_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(local_110 + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8;
  local_f0 = lVar11;
  FUN_1002cd2cc();
  local_118 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - local_c8;
  stringLiteral_00.bridgeObject = (void *)0xed0000736e6f6974;
  stringLiteral_00.str = (char *)0x6163696669746f4e;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_100 = param_2;
  local_f8 = lVar11;
  local_90 = param_2;
  (extension_SwiftUI)::SwiftUI::Section::_init(LVar5);
  puVar4 = &DAT_10055a7d0;
  FUN_100002f94(&DAT_10055a7d0,&DAT_10042f200);
  local_128 = *(long *)(*(long *)(puVar4 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)(local_128 + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  local_c8 = lVar11;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_108 = (undefined *)lVar11;
  if ((bVar3 & 1) == 0) {
    puVar4 = &DAT_10055a7d8;
    FUN_100002f94(&DAT_10055a7d8,&DAT_10042e9c0);
    lVar13 = *(long *)(puVar4 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar11 = lVar11 - extraout_x8_02;
    stringLiteral_02.bridgeObject = (void *)0x80000001004e4440;
    stringLiteral_02.str = (char *)0xd00000000000001c;
    LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_02);
    local_90 = local_100;
    FUN_100002f94(&DAT_10055a7e0,&DAT_10042e9c8);
    FUN_1000087a0(&DAT_10055a7e8,&DAT_10055a7e0,&DAT_10042e9c8,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    (extension_SwiftUI)::SwiftUI::Section::_init(LVar5);
    puVar7 = &DAT_10055a7f0;
    FUN_100002f94(&DAT_10055a7f0,&DAT_10042f210);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar21 = lVar11 - extraout_x8_03;
    (**(code **)(lVar13 + 0x10))(lVar21,lVar11,puVar4);
    _swift_storeEnumTagMultiPayload(lVar21,puVar7,1);
    FUN_1002d67b8();
    puVar7 = puVar4;
    puVar10 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar21);
    bVar3 = (byte)puVar7;
    (**(code **)(lVar13 + 8))(lVar11,puVar4);
  }
  else {
    puVar4 = &DAT_10055a840;
    FUN_100002f94(&DAT_10055a840,&DAT_10042ea00);
    local_140 = *(long *)(puVar4 + -8);
    lVar21 = *(long *)(local_140 + 0x40);
    local_120 = puVar4;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar12 = lVar21 + 0xfU & 0xfffffffffffffff0;
    lVar11 = lVar11 - uVar12;
    stringLiteral_01.bridgeObject = (void *)0x80000001004e4440;
    stringLiteral_01.str = (char *)0xd00000000000001c;
    LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    local_90 = local_100;
    FUN_100002f94(&DAT_10055a848,&DAT_10042ea08);
    FUN_1000087a0(&DAT_10055a850,&DAT_10055a848,&DAT_10042ea08,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    (extension_SwiftUI)::SwiftUI::Section::_init(LVar5);
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar7 = local_120;
    lVar21 = local_140;
    lVar13 = lVar11 - uVar12;
    (**(code **)(local_140 + 0x10))(lVar13,lVar11,local_120);
    FUN_1002d6874();
    AVar6 = SwiftUI::AnyView::_init(lVar13,puVar7,lVar13);
    puVar4 = &DAT_10055a7f0;
    FUN_100002f94(&DAT_10055a7f0,&DAT_10042f210);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar14 = (undefined8 *)(lVar11 - extraout_x8_01);
    *puVar14 = AVar6.unknown;
    _swift_storeEnumTagMultiPayload(puVar14);
    FUN_100002f94(&DAT_10055a7d8,&DAT_10042e9c0);
    bVar3 = (byte)puVar4;
    FUN_1002d67b8();
    puVar10 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    (**(code **)(lVar21 + 8))(lVar11,puVar7);
  }
  puVar7 = local_108;
  puVar4 = &DAT_10055a800;
  FUN_100002f94(&DAT_10055a800,&DAT_10042e9d0);
  local_140 = (long)puVar7;
  local_120 = *(undefined **)(puVar4 + -8);
  local_158 = *(code **)((long)local_120 + 0x40);
  local_108 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = local_100;
  local_150 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)puVar7 - local_150;
  local_70 = local_100;
  stringLiteral_03.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_03.str = (char *)0x706c6548;
  uVar8 = 0xe400000000000000;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
  *(undefined2 *)(lVar13 + -8) = 0x100;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  bVar3 = bVar3 & 1;
  local_a0 = (undefined *)SwiftUI::Text::_init(LVar5);
  local_90 = CONCAT71(local_90._1_7_,bVar3);
  uVar9 = 0x80000001004e4460;
  stringLiteral_04.bridgeObject = (void *)0x80000001004e4460;
  stringLiteral_04.str = (char *)0x100000000000009f;
  uStack_98 = uVar8;
  local_88 = puVar10;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_04);
  *(undefined2 *)(lVar13 + -8) = 0x100;
  *(undefined8 *)(lVar13 + -0x10) = 0;
  local_b0 = bVar3 & 1;
  local_c0 = (undefined *)SwiftUI::Text::_init(LVar5);
  puVar4 = &DAT_10055a808;
  puStack_b8 = (undefined *)uVar9;
  local_a8 = puVar10;
  FUN_100002f94(&DAT_10055a808,&DAT_10042e9d8);
  puVar7 = &DAT_10055a810;
  FUN_1000087a0(&DAT_10055a810,&DAT_10055a808,&DAT_10042e9d8,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar10 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  *(undefined **)(lVar13 + -0x10) = puVar7;
  *(undefined **)(lVar13 + -8) = puVar10;
  local_1a0[1] = lVar13;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar13,puVar7,&local_c0,FUN_1002d685c,auStack_80,
             PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar4,
             PTR___type_metadata_for_SwiftUI_Text_100522e28);
  puVar4 = &DAT_10055a818;
  FUN_100002f94(&DAT_10055a818,&DAT_10042e9e0);
  lVar22 = *(long *)(puVar4 + -8);
  lVar21 = *(long *)(lVar22 + 0x40);
  local_180 = puVar4;
  local_148 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar18 = lVar21 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar13 - uVar18;
  local_90 = lVar11;
  FUN_100002f94(&DAT_10055a820,&DAT_10042e9e8);
  puVar4 = &DAT_10055a828;
  FUN_100002fe4(&DAT_10055a828,&DAT_10042e9f0);
  puVar7 = &DAT_10055a830;
  FUN_1000087a0(&DAT_10055a830,&DAT_10055a828,&DAT_10042e9f0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  local_c0 = puVar4;
  puStack_b8 = puVar7;
  _swift_getOpaqueTypeConformance2
            (&local_c0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  local_1a0[0] = lVar15;
  (extension_SwiftUI)::SwiftUI::Section::_init();
  lVar11 = local_118;
  local_160 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = local_130;
  uVar12 = lVar11 + 0xfU & 0xfffffffffffffff0;
  lVar21 = lVar15 - uVar12;
  pcVar16 = *(code **)(local_d8 + 0x10);
  local_100 = lVar21;
  (*pcVar16)(lVar21,local_d0,local_130);
  local_168 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  local_190 = *(code **)(local_e8 + 0x10);
  local_110 = lVar21;
  (*local_190)(lVar21,local_f0,local_e0);
  local_170 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - uVar12;
  local_118 = lVar21;
  (*pcVar16)(lVar21,local_f8,puVar10);
  local_178 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar21;
  FUN_1000087e4(local_c8,lVar21,&DAT_10055a7d0,&DAT_10042f200);
  local_188 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - local_150;
  local_158 = *(code **)((long)local_120 + 0x10);
  (*local_158)(lVar21,lVar13,local_108);
  local_150 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = local_180;
  lVar13 = lVar21 - uVar18;
  pcVar19 = *(code **)(lVar22 + 0x10);
  (*pcVar19)(lVar13,lVar15,local_180);
  lVar11 = local_138;
  (*pcVar16)(local_138,local_100,puVar10);
  puVar4 = &DAT_10055a838;
  FUN_100002f94(&DAT_10055a838,&DAT_10042e9f8);
  puVar2 = local_e0;
  (*local_190)(lVar11 + *(int *)(puVar4 + 0x30),local_110,local_e0);
  (*pcVar16)(lVar11 + *(int *)(puVar4 + 0x40),local_118,puVar10);
  FUN_1000087e4(local_128,lVar11 + *(int *)(puVar4 + 0x50),&DAT_10055a7d0,&DAT_10042f200);
  puVar1 = local_108;
  (*local_158)(lVar11 + *(int *)(puVar4 + 0x60),lVar21,local_108);
  (*pcVar19)(lVar11 + *(int *)(puVar4 + 0x70),lVar13,puVar7);
  pcVar16 = *(code **)(lVar22 + 8);
  (*pcVar16)(local_1a0[0],puVar7);
  pcVar19 = *(code **)((long)local_120 + 8);
  (*pcVar19)(local_1a0[1],puVar1);
  FUN_10002a29c(local_c8,&DAT_10055a7d0,&DAT_10042f200);
  pcVar17 = *(code **)(local_d8 + 8);
  (*pcVar17)(local_f8,puVar10);
  pcVar20 = *(code **)(local_e8 + 8);
  (*pcVar20)(local_f0,puVar2);
  (*pcVar17)(local_d0,puVar10);
  (*pcVar16)(lVar13,puVar7);
  (*pcVar19)(lVar21,puVar1);
  FUN_10002a29c(local_128,&DAT_10055a7d0,&DAT_10042f200);
  (*pcVar17)(local_118,puVar10);
  (*pcVar20)(local_110,puVar2);
  (*pcVar17)(local_100,puVar10);
  return;
}

