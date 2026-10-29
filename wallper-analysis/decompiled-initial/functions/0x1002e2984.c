// rea decompile_all
// name: FUN_1002e2984
// address: 0x1002e2984
// body: available
// range: 0x1002e2984-0x1002e3407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e2cec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e2984(long param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  LocalizedStringKey LVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 uVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  code *pcVar21;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  String stringLiteral_02;
  String stringLiteral_03;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  ulong local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  long lStack_98;
  long local_90;
  undefined1 *local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  puVar3 = &DAT_10055ac68;
  local_158 = param_1;
  FUN_100002f94(&DAT_10055ac68,&DAT_10042f458);
  local_e0 = *(long *)(puVar3 + -8);
  local_150 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  local_d8 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar3 = &DAT_10055ac70;
  local_e8 = lVar14;
  FUN_100002f94(&DAT_10055ac70,&DAT_10042f460);
  local_f0 = *(long *)(puVar3 + -8);
  local_108 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar3 = &DAT_10055ac78;
  FUN_100002f94(&DAT_10055ac78,&DAT_10042f468);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12_01;
  puVar3 = &DAT_10055ac80;
  FUN_100002f94(&DAT_10055ac80,&DAT_10042f470);
  local_120 = *(long *)(puVar3 + -8);
  local_f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_02;
  puVar3 = &DAT_10055ac88;
  local_d0 = lVar16;
  FUN_100002f94(&DAT_10055ac88,&DAT_10042f478);
  local_128 = *(long *)(puVar3 + -8);
  local_110 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_03;
  stringLiteral.bridgeObject = (void *)0xe700000000000000;
  stringLiteral.str = (char *)0x7974696c617551;
  uVar17 = 0xe700000000000000;
  local_70 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  param_4 = param_4 & 1;
  local_a0 = (undefined *)SwiftUI::Text::_init(LVar4);
  uVar9 = 0x80000001004e5230;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e5230;
  stringLiteral_00.str = (char *)0xd000000000000063;
  lStack_98 = uVar17;
  local_88 = (undefined1 *)param_5;
  local_90._0_1_ = param_4;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  param_4 = param_4 & 1;
  local_c0 = (undefined *)SwiftUI::Text::_init(LVar4);
  local_b0 = CONCAT71(local_b0._1_7_,param_4);
  puStack_b8 = (undefined *)uVar9;
  local_a8 = (undefined1 *)param_5;
  FUN_100002f94(&DAT_10055ac90,&DAT_10042f480);
  puVar3 = &DAT_10055ac98;
  FUN_1000087a0(&DAT_10055ac98,&DAT_10055ac90,&DAT_10042f480,
                PTR_SwiftUI__SwiftUI__Picker<undefined,undefined,undefined>_>SwiftUI__View_100523458
               );
  uVar11 = 0;
  *(undefined **)(lVar16 + -0x10) = puVar3;
  *(undefined **)(lVar16 + -8) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  puVar13 = auStack_80;
  local_130 = lVar16;
  (extension_SwiftUI)::SwiftUI::Section::_init(lVar16,puVar3,&local_c0);
  lVar10 = -0x7ffffffeffb1ad60;
  stringLiteral_01.bridgeObject = (void *)0x80000001004e52a0;
  stringLiteral_01.str = (char *)0xd000000000000013;
  local_70 = param_2;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
  *(undefined2 *)(lVar16 + -8) = 0x100;
  *(undefined8 *)(lVar16 + -0x10) = 0;
  uVar11 = uVar11 & 1;
  LVar4.unknown = (undefined *)SwiftUI::Text::_init(LVar4);
  local_90 = CONCAT71(local_90._1_7_,(char)uVar11);
  local_a0 = LVar4.unknown;
  lStack_98 = lVar10;
  local_88 = puVar13;
  FUN_1002e4cb0();
  if (lVar10 == 0) {
    local_c0 = (undefined *)0x0;
    local_b0 = 0;
    puVar13 = (undefined1 *)0x0;
  }
  else {
    *(undefined2 *)(lVar16 + -8) = 0x100;
    *(undefined8 *)(lVar16 + -0x10) = 0;
    uVar12 = (ulong)(uVar11 & 1);
    local_c0 = (undefined *)SwiftUI::Text::_init(LVar4);
    local_b0 = uVar12 & 0xff;
  }
  puVar3 = &DAT_10055aca0;
  puStack_b8 = (undefined *)lVar10;
  local_a8 = puVar13;
  FUN_100002f94(&DAT_10055aca0,&DAT_10042f488);
  puVar5 = &DAT_10055aca8;
  FUN_100002f94(&DAT_10055aca8,&DAT_10042f490);
  puVar6 = &DAT_10055acb0;
  FUN_1000087a0(&DAT_10055acb0,&DAT_10055aca0,&DAT_10042f488,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar7 = puVar6;
  FUN_1002e9c84();
  uVar11 = 0;
  *(undefined **)(lVar16 + -0x10) = puVar6;
  *(undefined **)(lVar16 + -8) = puVar7;
  puVar13 = auStack_80;
  (extension_SwiftUI)::SwiftUI::Section::_init
            (local_d0,puVar7,&local_c0,FUN_1002e9c7c,puVar13,
             PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar3,puVar5,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
  if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
    uVar17 = 1;
  }
  else {
    stringLiteral_02.bridgeObject = (void *)0xe700000000000000;
    stringLiteral_02.str = (char *)0x79726574746142;
    lVar10 = -0x1900000000000000;
    local_70 = param_2;
    LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_02);
    *(undefined2 *)(lVar16 + -8) = 0x100;
    *(undefined8 *)(lVar16 + -0x10) = 0;
    uVar11 = uVar11 & 1;
    LVar4.unknown = (undefined *)SwiftUI::Text::_init(LVar4);
    local_90 = CONCAT71(local_90._1_7_,(char)uVar11);
    local_a0 = LVar4.unknown;
    lStack_98 = lVar10;
    local_88 = puVar13;
    FUN_1002e6c74();
    if (lVar10 == 0) {
      local_c0 = (undefined *)0x0;
      local_b0 = 0;
      puVar13 = (undefined1 *)0x0;
    }
    else {
      *(undefined2 *)(lVar16 + -8) = 0x100;
      *(undefined8 *)(lVar16 + -0x10) = 0;
      uVar12 = (ulong)(uVar11 & 1);
      local_c0 = (undefined *)SwiftUI::Text::_init(LVar4);
      local_b0 = uVar12 & 0xff;
    }
    puVar3 = &DAT_10055ace0;
    puStack_b8 = (undefined *)lVar10;
    local_a8 = puVar13;
    FUN_100002f94(&DAT_10055ace0,&DAT_10042f4b0);
    puVar6 = &DAT_10055ace8;
    FUN_1000087a0(&DAT_10055ace8,&DAT_10055ace0,&DAT_10042f4b0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    *(undefined **)(lVar16 + -0x10) = puVar6;
    *(undefined **)(lVar16 + -8) = puVar7;
    (extension_SwiftUI)::SwiftUI::Section::_init
              (lVar15,puVar6,&local_c0,FUN_1002e9cfc,auStack_80,
               PTR___type_metadata_for_SwiftUI_Text_100522e28,puVar3,puVar5,
               PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18);
    uVar17 = 0;
  }
  puVar3 = &DAT_10055acc0;
  FUN_100002f94(&DAT_10055acc0,&DAT_10042f498);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar15,uVar17,1,puVar3);
  stringLiteral_03.bridgeObject = (void *)0xe800000000000000;
  stringLiteral_03.str = (char *)0x6b63616279616c50;
  LVar4 = SwiftUI::LocalizedStringKey::init(stringLiteral_03);
  local_90 = param_2;
  FUN_100002f94(&DAT_10055acc8,&DAT_10042f4a0);
  FUN_1000087a0(&DAT_10055acd0,&DAT_10055acc8,&DAT_10042f4a0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_148 = lVar14;
  (extension_SwiftUI)::SwiftUI::Section::_init(LVar4);
  if (DAT_100555940 != -1) {
    _swift_once(&DAT_100555940,FUN_10016e078);
  }
  uVar17 = DAT_100577cb0;
  uVar9 = 0;
  FUN_10016ed68();
  puVar3 = &DAT_10054aba0;
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  _swift_retain(uVar17);
  local_160 = (undefined *)SwiftUI::ObservedObject::init(puVar3,uVar9,puVar3);
  local_140 = uVar9;
  FUN_100279594(0);
  puVar8 = &DAT_100553dd0;
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  local_170 = (undefined *)SwiftUI::EnvironmentObject::init();
  local_168 = puVar8;
  local_90 = param_2;
  FUN_100002f94(&DAT_10055a868,&DAT_10042ea10);
  puVar3 = &DAT_10055a860;
  FUN_100002fe4(&DAT_10055a860,&DAT_10042f230);
  puVar5 = &DAT_10055a890;
  FUN_1000087a0(&DAT_10055a890,&DAT_10055a860,&DAT_10042f230,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
  local_c0 = puVar3;
  puStack_b8 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_c0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  lVar10 = local_e8;
  (extension_SwiftUI)::SwiftUI::Section::_init();
  puVar3 = local_110;
  lVar16 = local_118;
  pcVar19 = *(code **)(local_128 + 0x10);
  (*pcVar19)(local_118,local_130,local_110);
  lVar1 = local_100;
  pcVar21 = *(code **)(local_120 + 0x10);
  (*pcVar21)(local_100,local_d0,local_f8);
  lVar14 = local_138;
  local_178 = lVar15;
  FUN_1000087e4(lVar15,local_138,&DAT_10055ac78,&DAT_10042f468);
  pcVar20 = *(code **)(local_f0 + 0x10);
  (*pcVar20)(local_c8,local_148,local_108);
  puVar6 = local_150;
  pcVar18 = *(code **)(local_e0 + 0x10);
  (*pcVar18)(local_d8,lVar10,local_150);
  lVar10 = local_158;
  (*pcVar19)(local_158,lVar16,puVar3);
  puVar3 = &DAT_10055acd8;
  FUN_100002f94(&DAT_10055acd8,&DAT_10042f4a8);
  puVar2 = local_f8;
  (*pcVar21)(lVar10 + *(int *)(puVar3 + 0x30),lVar1,local_f8);
  FUN_1000087e4(lVar14,lVar10 + *(int *)(puVar3 + 0x40),&DAT_10055ac78,&DAT_10042f468);
  puVar7 = local_108;
  (*pcVar20)(lVar10 + *(int *)(puVar3 + 0x50),local_c8,local_108);
  puVar13 = local_d8;
  uVar17 = local_140;
  puVar5 = local_170;
  puVar8 = (undefined8 *)(lVar10 + *(int *)(puVar3 + 0x60));
  *puVar8 = local_160;
  puVar8[1] = local_140;
  puVar8[2] = local_170;
  puVar8[3] = local_168;
  (*pcVar18)(lVar10 + *(int *)(puVar3 + 0x70),local_d8,puVar6);
  pcVar18 = *(code **)(local_e0 + 8);
  _swift_retain(uVar17);
  _swift_retain(puVar5);
  (*pcVar18)(local_e8,puVar6);
  pcVar19 = *(code **)(local_f0 + 8);
  (*pcVar19)(local_148,puVar7);
  FUN_10002a29c(local_178,&DAT_10055ac78,&DAT_10042f468);
  pcVar20 = *(code **)(local_120 + 8);
  (*pcVar20)(local_d0,puVar2);
  puVar3 = local_110;
  pcVar21 = *(code **)(local_128 + 8);
  (*pcVar21)(local_130,local_110);
  (*pcVar18)(puVar13,puVar6);
  _swift_release(puVar5);
  _swift_release(local_140);
  (*pcVar19)(local_c8,puVar7);
  FUN_10002a29c(local_138,&DAT_10055ac78,&DAT_10042f468);
  (*pcVar20)(local_100,puVar2);
  (*pcVar21)(local_118,puVar3);
  return;
}

