// rea decompile_all
// name: FUN_1002eb548
// address: 0x1002eb548
// body: available
// range: 0x1002eb548-0x1002ebf57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002eb744 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002eb548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  AnyView AVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 *puVar21;
  code *pcVar22;
  code *pcVar23;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  String stringLiteral_04;
  undefined8 uStack_1c0;
  undefined2 auStack_1b8 [4];
  long local_1b0;
  code *local_1a8;
  code *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  ulong local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined1 *local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  
  puVar2 = &DAT_10055b288;
  local_140 = param_1;
  FUN_100002f94(&DAT_10055b288,&DAT_10042fad0);
  local_108 = *(long *)(puVar2 + -8);
  local_148 = *(undefined8 *)(local_108 + 0x40);
  local_100 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = extraout_x12;
  local_80 = param_2;
  FUN_100002f94(&DAT_10055b290,&DAT_10042fad8);
  puVar1 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0;
  bVar7 = (byte)puVar2;
  puVar2 = &DAT_10055b298;
  FUN_1000087a0(&DAT_10055b298,&DAT_10055b290,&DAT_10042fad8,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_e0 = (long)&local_1b0 - extraout_x12;
  (extension_SwiftUI)::SwiftUI::Section::_init();
  puVar3 = &DAT_10055b2a0;
  FUN_100002f94(&DAT_10055b2a0,&DAT_10042fae0);
  local_f0 = *(long *)(puVar3 + -8);
  local_160 = *(undefined8 *)(local_f0 + 0x40);
  local_e8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = ((long)&local_1b0 - extraout_x12) - extraout_x12_00;
  uVar5 = 0x80000001004e5a50;
  stringLiteral.bridgeObject = (void *)0x80000001004e5a50;
  stringLiteral.str = (char *)0xd000000000000015;
  local_128 = extraout_x12_00;
  local_c0 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  bVar7 = bVar7 & 1;
  local_90 = (undefined *)SwiftUI::Text::_init(LVar4);
  puVar3 = &DAT_10055b2a8;
  uStack_88 = uVar5;
  local_78 = puVar2;
  local_80._0_1_ = bVar7;
  FUN_100002f94(&DAT_10055b2a8,&DAT_10042fae8);
  puVar2 = &DAT_10055b2b0;
  FUN_1000087a0(&DAT_10055b2b0,&DAT_10055b2a8,&DAT_10042fae8,puVar1);
  puVar11 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar12 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar9 = &local_d0;
  puVar10 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  local_f8 = lVar18;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar18,puVar2,FUN_1002fa134,ppuVar9,PTR___type_metadata_for_SwiftUI_Text_100522e28,
             puVar3,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18,
             puVar2);
  bVar7 = (byte)ppuVar9;
  puVar2 = &DAT_10055b2b8;
  FUN_100002f94(&DAT_10055b2b8,&DAT_10042faf0);
  local_d8 = *(long *)(puVar2 + -8);
  local_130 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d8 + 0x40) + 0xf);
  puVar21 = (undefined1 *)(lVar18 - extraout_x12_01);
  uVar5 = 0xea0000000000736c;
  stringLiteral_00.bridgeObject = (void *)0xea0000000000736c;
  stringLiteral_00.str = (char *)0x69616e626d756854;
  local_138 = extraout_x12_01;
  local_c0 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)(puVar21 + -8) = 0x100;
  *(undefined8 *)(puVar21 + -0x10) = 0;
  bVar7 = bVar7 & 1;
  local_90 = (undefined *)SwiftUI::Text::_init(LVar4);
  puVar2 = &DAT_10055b2c0;
  uStack_88 = uVar5;
  local_78 = puVar10;
  local_80._0_1_ = bVar7;
  FUN_100002f94(&DAT_10055b2c0,&DAT_10042faf8);
  puVar3 = &DAT_10055b2c8;
  FUN_1000087a0(&DAT_10055b2c8,&DAT_10055b2c0,&DAT_10042faf8,puVar1);
  local_110 = puVar21;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (puVar21,puVar3,FUN_1002fa13c,&local_d0,puVar11,puVar2,puVar12,puVar3);
  bVar8 = 0;
  bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  AVar13.unknown = (undefined *)0x0;
  puVar12 = puVar11;
  if ((bVar7 & 1) != 0) {
    local_118 = puVar21;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar18 = local_138;
    lVar15 = (long)puVar21 - local_138;
    uVar5 = 0x80000001004e5ac0;
    stringLiteral_01.bridgeObject = (void *)0x80000001004e5ac0;
    stringLiteral_01.str = (char *)0xd000000000000014;
    local_c0 = param_2;
    LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    *(undefined2 *)(lVar15 + -8) = 0x100;
    *(undefined8 *)(lVar15 + -0x10) = 0;
    bVar8 = bVar8 & 1;
    local_90 = (undefined *)SwiftUI::Text::_init(LVar4);
    puVar12 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    uStack_88 = uVar5;
    local_78 = puVar11;
    local_80._0_1_ = bVar8;
    (extension_SwiftUI)::SwiftUI::Section::_init
              (lVar15,local_90,FUN_1002fa268,&local_d0,
               PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar2,
               PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18,
               puVar3);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar16 = local_d8;
    puVar11 = local_130;
    lVar18 = lVar15 - lVar18;
    (**(code **)(local_d8 + 0x10))(lVar18,lVar15,local_130);
    FUN_1002fa270();
    bVar8 = (byte)lVar18;
    AVar13 = SwiftUI::AnyView::_init(lVar18,puVar11);
    (**(code **)(lVar16 + 8))(lVar15,puVar11);
    puVar21 = local_118;
    _swift_retain(AVar13.unknown);
  }
  local_150 = puVar21;
  local_118 = AVar13.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)puVar21 - local_138;
  stringLiteral_02.bridgeObject = (void *)0xe600000000000000;
  stringLiteral_02.str = (char *)0x73636972794c;
  uVar5 = 0xe600000000000000;
  local_c0 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_02);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  bVar8 = bVar8 & 1;
  local_90 = (undefined *)SwiftUI::Text::_init(LVar4);
  puVar1 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar11 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  ppuVar9 = &local_d0;
  puVar10 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  local_198 = lVar18;
  uStack_88 = uVar5;
  local_78 = puVar12;
  local_80._0_1_ = bVar8;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar18,local_90,FUN_1002fa144,ppuVar9,PTR___type_metadata_for_SwiftUI_Text_100522e28,
             puVar2,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18,
             puVar3);
  bVar7 = (byte)ppuVar9;
  puVar2 = &DAT_10055b2d0;
  FUN_100002f94(&DAT_10055b2d0,&DAT_10042fb00);
  local_170 = *(long *)(puVar2 + -8);
  lVar16 = *(long *)(local_170 + 0x40);
  local_168 = puVar2;
  local_158 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_180 = lVar16 + 0xfU & 0xfffffffffffffff0;
  lVar16 = lVar18 - local_180;
  uVar5 = 0x80000001004e5a70;
  stringLiteral_03.bridgeObject = (void *)0x80000001004e5a70;
  stringLiteral_03.str = (char *)0xd000000000000012;
  local_a0 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  bVar7 = bVar7 & 1;
  local_90 = (undefined *)SwiftUI::Text::_init(LVar4);
  local_80 = CONCAT71(local_80._1_7_,bVar7);
  uVar6 = 0x80000001004e5a90;
  stringLiteral_04.bridgeObject = (void *)0x80000001004e5a90;
  stringLiteral_04.str = (char *)0xd00000000000002f;
  uStack_88 = uVar5;
  local_78 = puVar10;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_04);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  bVar7 = bVar7 & 1;
  local_d0 = (undefined *)SwiftUI::Text::_init(LVar4);
  local_c0 = CONCAT71(local_c0._1_7_,bVar7);
  puVar2 = &DAT_10055b2d8;
  uStack_c8 = uVar6;
  local_b8 = puVar10;
  FUN_100002f94(&DAT_10055b2d8,&DAT_10042fb08);
  puVar3 = puVar2;
  FUN_1002fa154();
  *(undefined **)(lVar16 + -0x10) = puVar3;
  *(undefined **)(lVar16 + -8) = puVar11;
  local_1b0 = lVar16;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (lVar16,puVar3,&local_d0,FUN_1002fa14c,auStack_b0,puVar1,puVar2,puVar1,puVar11);
  local_178 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar2 = local_100;
  lVar14 = lVar16 - local_120;
  local_1a8 = *(code **)(local_108 + 0x10);
  local_190 = lVar14;
  (*local_1a8)(lVar14,local_e0,local_100);
  local_148 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - local_128;
  local_1a0 = *(code **)(local_f0 + 0x10);
  local_120 = lVar15;
  (*local_1a0)(lVar15,local_f8,local_e8);
  local_160 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = local_130;
  lVar15 = lVar15 - local_138;
  pcVar22 = *(code **)(local_d8 + 0x10);
  local_128 = lVar15;
  (*pcVar22)(lVar15,local_110,local_130);
  local_188 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - local_138;
  (*pcVar22)(lVar15,lVar18,puVar12);
  local_138 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar3 = local_168;
  lVar18 = local_170;
  lVar17 = lVar15 - local_180;
  pcVar19 = *(code **)(local_170 + 0x10);
  (*pcVar19)(lVar17,lVar16,local_168);
  lVar16 = local_140;
  (*local_1a8)(local_140,lVar14,puVar2);
  puVar2 = &DAT_10055b300;
  FUN_100002f94(&DAT_10055b300,&DAT_10042fb18);
  puVar11 = local_e8;
  (*local_1a0)(lVar16 + *(int *)(puVar2 + 0x30),local_120,local_e8);
  (*pcVar22)(lVar16 + *(int *)(puVar2 + 0x40),local_128,puVar12);
  *(undefined1 **)(lVar16 + *(int *)(puVar2 + 0x50)) = local_118;
  (*pcVar22)(lVar16 + *(int *)(puVar2 + 0x60),lVar15,puVar12);
  (*pcVar19)(lVar16 + *(int *)(puVar2 + 0x70),lVar17,puVar3);
  pcVar19 = *(code **)(lVar18 + 8);
  (*pcVar19)(local_1b0,puVar3);
  pcVar22 = *(code **)(local_d8 + 8);
  (*pcVar22)(local_198,puVar12);
  (*pcVar22)(local_110,puVar12);
  pcVar20 = *(code **)(local_f0 + 8);
  (*pcVar20)(local_f8,puVar11);
  puVar2 = local_100;
  pcVar23 = *(code **)(local_108 + 8);
  (*pcVar23)(local_e0,local_100);
  (*pcVar19)(lVar17,puVar3);
  (*pcVar22)(lVar15,puVar12);
  _swift_release(local_118);
  (*pcVar22)(local_128,puVar12);
  (*pcVar20)(local_120,puVar11);
  (*pcVar23)(local_190,puVar2);
  return;
}

