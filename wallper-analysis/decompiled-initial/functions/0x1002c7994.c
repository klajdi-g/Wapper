// rea decompile_all
// name: FUN_1002c7994
// address: 0x1002c7994
// body: available
// range: 0x1002c7994-0x1002c7ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c7994(long param_1,undefined8 param_2,undefined8 param_3,StringInterpolation param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  RoundedCornerStyle RVar7;
  StringInterpolation SVar8;
  undefined *puVar9;
  Alignment AVar10;
  undefined *puVar11;
  RoundedRectangle RVar12;
  undefined7 extraout_var;
  HorizontalAlignment HVar13;
  LocalizedStringKey LVar14;
  Text TVar15;
  Font FVar16;
  Text TVar17;
  HierarchicalShapeStyle HVar18;
  Text TVar19;
  Text TVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  StringInterpolation stringInterpolation;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  String SVar29;
  String SVar30;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined8 *apuStack_d0 [3];
  long local_b8 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uVar20;
  
  local_b8[1] = param_1;
  SVar8 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar8.unknown + -8) + 0x40));
  stringInterpolation.unknown =
       (undefined *)((long)apuStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_10055a5b0;
  FUN_100002f94(&DAT_10055a5b0,&DAT_10042e668);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar26 = (long)stringInterpolation.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8[0] = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar27 = (undefined8 *)(lVar26 - extraout_x12);
  puVar9 = &DAT_10055a5b8;
  FUN_100002f94(&DAT_10055a5b8,&DAT_10042e670);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar26 = (long)puVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8[3] = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar26 - extraout_x12_00;
  FUN_1002c7ebc(param_6,param_2,param_3,param_4.unknown,param_5);
  AVar10.unknown = &DAT_10055a5c0;
  FUN_100002f94(&DAT_10055a5c0,&DAT_10042e678);
  iVar3 = *(int *)(AVar10.unknown + 0x24);
  *(undefined8 *)(lVar26 + iVar3) = 0x3ffc71c71c71c71c;
  *(undefined2 *)((undefined8 *)(lVar26 + iVar3) + 1) = 0;
  SwiftUI::Alignment::get_center(AVar10);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar11 = &DAT_10055a5c8;
  FUN_100002f94(&DAT_10055a5c8,&DAT_10042e680);
  puVar1 = (undefined8 *)(lVar26 + *(int *)(puVar11 + 0x24));
  local_b8[2] = lVar26;
  puVar1[1] = uStack_88;
  *puVar1 = local_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  puVar1 = (undefined8 *)(lVar26 + *(int *)(puVar9 + 0x24));
  RVar12 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar12.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar7.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var,RVar7.value));
  auVar28 = NEON_fmov(0x4010000000000000,8);
  puVar1[1] = auVar28._8_8_;
  *puVar1 = auVar28._0_8_;
  HVar13.unknown = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(HVar13.unknown + 0x24)) = 0x100;
  HVar13 = SwiftUI::HorizontalAlignment::get_leading(HVar13);
  *puVar27 = HVar13.unknown;
  puVar27[1] = 0x4000000000000000;
  *(undefined1 *)(puVar27 + 2) = 0;
  puVar9 = &DAT_10055a5d0;
  apuStack_d0[2] = puVar27;
  FUN_100002f94(&DAT_10055a5d0,&DAT_10042e690);
  FUN_1002c829c((long)puVar27 + (long)*(int *)(puVar9 + 0x2c),param_2,param_3,param_4.unknown,
                param_5,param_6);
  SwiftUI::LocalizedStringKey::StringInterpolation::init(7,2);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation
            (*(String *)(param_6 + 0x28),param_4);
  SVar29.bridgeObject = (void *)0xa400000000000000;
  SVar29.str = (char *)0x20b7c220;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar29,param_4);
  SVar8.unknown = (undefined *)0xe400000000000000;
  HVar18.unknown = PTR___type_metadata_for_Swift_Int_100523bd8;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (param_6 + 0x38,0x646c6c25,0xe400000000000000,
             PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x7a4820;
  uVar20 = 0xe300000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar30,SVar8);
  uVar22 = (uint)SVar8.unknown;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(lVar26 + -8) = 0x100;
  *(undefined8 *)(lVar26 + -0x10) = 0;
  uVar23 = (ulong)(uVar22 & 1);
  TVar15 = SwiftUI::Text::_init(LVar14);
  FVar16 = SwiftUI::Font::get_subheadline(TVar15.unknown);
  TVar21 = TVar15;
  uVar24 = uVar20;
  uVar25 = uVar23;
  TVar17 = SwiftUI::Text::_font(FVar16.unknown);
  _swift_release(FVar16.unknown);
  FUN_100025b34(TVar15.unknown,uVar20,uVar23);
  _swift_bridgeObjectRelease();
  HVar18 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar18);
  local_94 = SUB84(HVar18.unknown,0);
  FUN_100025b4c();
  TVar15 = TVar17;
  puVar11 = TVar21.unknown;
  uVar20 = uVar24;
  TVar19 = SwiftUI::Text::_foregroundStyle();
  apuStack_d0[1] = (undefined8 *)uVar20;
  FUN_100025b34(TVar17.unknown,TVar21.unknown,uVar24);
  _swift_bridgeObjectRelease(uVar25);
  lVar6 = local_b8[3];
  FUN_1000087e4(local_b8[2],local_b8[3],&DAT_10055a5b8,&DAT_10042e670);
  lVar26 = local_b8[0];
  puVar4 = apuStack_d0[2];
  FUN_1000087e4(apuStack_d0[2],local_b8[0],&DAT_10055a5b0,&DAT_10042e668);
  lVar5 = local_b8[1];
  FUN_1000087e4(lVar6,local_b8[1],&DAT_10055a5b8,&DAT_10042e670);
  puVar9 = &DAT_10055a5d8;
  FUN_100002f94(&DAT_10055a5d8,&DAT_10042e698);
  FUN_1000087e4(lVar26,lVar5 + *(int *)(puVar9 + 0x30),&DAT_10055a5b0,&DAT_10042e668);
  puVar27 = apuStack_d0[1];
  iVar3 = *(int *)(puVar9 + 0x40);
  *(undefined8 *)(lVar5 + iVar3) = 0;
  *(undefined1 *)((undefined8 *)(lVar5 + iVar3) + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + *(int *)(puVar9 + 0x50));
  *puVar1 = TVar19.unknown;
  puVar1[1] = TVar15.unknown;
  *(char *)(puVar1 + 2) = (char)puVar11;
  puVar1[3] = apuStack_d0[1];
  FUN_100007b14(TVar19.unknown,TVar15.unknown,puVar11);
  _swift_bridgeObjectRetain(puVar27);
  FUN_10002a29c(puVar4,&DAT_10055a5b0,&DAT_10042e668);
  FUN_10002a29c(local_b8[2],&DAT_10055a5b8,&DAT_10042e670);
  FUN_100025b34(TVar19.unknown,TVar15.unknown,puVar11);
  _swift_bridgeObjectRelease(puVar27);
  FUN_10002a29c(lVar26,&DAT_10055a5b0,&DAT_10042e668);
  FUN_10002a29c(local_b8[3],&DAT_10055a5b8,&DAT_10042e670);
  return;
}

