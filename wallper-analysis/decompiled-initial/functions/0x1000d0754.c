// rea decompile_all
// name: FUN_1000d0754
// address: 0x1000d0754
// body: available
// range: 0x1000d0754-0x1000d10eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d0754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  SubmitTriggers of;
  Binding BVar6;
  LocalizedStringKey LVar7;
  State SVar8;
  undefined *puVar9;
  FocusState FVar10;
  Binding BVar11;
  SubmitTriggers SVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  Set SVar15;
  HierarchicalShapeStyle HVar16;
  Alignment AVar17;
  Binding<String> text;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar19;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined *puVar20;
  undefined *unaff_x20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 auStack_2f0 [4];
  long alStack_2d0 [2];
  undefined *local_2c0;
  long local_2b8;
  undefined *local_2b0;
  long local_2a8;
  long local_2a0;
  FocusState local_298;
  State local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  long local_260;
  undefined *local_258;
  long local_250;
  SubmitTriggers local_248;
  long local_240;
  long local_238;
  undefined *puStack_230;
  undefined *local_228;
  undefined *local_220;
  long local_218;
  undefined *local_210;
  long local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined *local_1e0;
  undefined **ppuStack_1d8;
  undefined **local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  Binding local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  local_208 = param_1;
  puStack_230 = (undefined *)SwiftUI::SubmitTriggers::typeMetadataAccessor();
  local_238 = *(long *)(puStack_230 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_238 + 0x40));
  puVar20 = (undefined *)((long)alStack_2d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_248.unknown = puVar20;
  local_2b0 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_2a8 = *(long *)(local_2b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2a8 + 0x40));
  lVar22 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar20 = &DAT_10054def8;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_2b8 = *(long *)(puVar20 + -8);
  local_2c0 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_2b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar20 = &DAT_1005515e0;
  FUN_100002f94(&DAT_1005515e0,&DAT_100432070);
  local_2a0 = *(long *)(puVar20 + -8);
  local_298.unknown = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_2a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = (lVar22 - extraout_x8_01) - extraout_x8_02;
  puVar20 = &DAT_100551518;
  alStack_2d0[1] = lVar18;
  FUN_100002f94(&DAT_100551518,&DAT_1004231e8);
  local_288 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar18 - extraout_x8_03;
  puVar20 = &DAT_100551510;
  FUN_100002f94(&DAT_100551510,&DAT_1004231e0);
  local_278 = *(long *)(puVar20 + -8);
  local_268 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_278 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar20 = &DAT_100551508;
  local_280 = lVar18 - extraout_x8_04;
  FUN_100002f94(&DAT_100551508,&DAT_1004231d8);
  local_260 = *(long *)(puVar20 + -8);
  local_258 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_260 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = (lVar18 - extraout_x8_04) - extraout_x8_05;
  puVar20 = &DAT_100551500;
  local_270 = lVar19;
  FUN_100002f94(&DAT_100551500,&DAT_1004231d0);
  local_240 = *(long *)(puVar20 + -8);
  local_228 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_240 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = lVar19 - extraout_x8_06;
  puVar20 = &DAT_1005514f8;
  local_250 = lVar19;
  FUN_100002f94(&DAT_1005514f8,&DAT_1004231c8);
  local_218 = *(long *)(puVar20 + -8);
  local_210 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_218 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar20 = (undefined *)(lVar19 - extraout_x8_07);
  text.unknown = (undefined *)0xe000000000000000;
  local_220 = puVar20;
  LVar7 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x80);
  local_a0 = *(undefined **)(unaff_x20 + 0x78);
  local_90 = *(undefined8 *)(unaff_x20 + 0x88);
                    /* WARNING: Load size is inaccurate */
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x80);
  local_c0.unknown = unaff_x20[0x78];
  local_b0 = *(undefined8 *)(unaff_x20 + 0x88);
  SVar8.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  local_290.unknown = SVar8.unknown;
  SwiftUI::State::get_projectedValue(SVar8);
  *(code **)(puVar20 + -0x10) = FUN_10002a200;
  *(undefined8 *)(puVar20 + -8) = 0;
  *(code **)(puVar20 + -0x20) = FUN_10002a200;
  *(undefined8 *)(puVar20 + -0x18) = 0;
  lVar19 = alStack_2d0[1];
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar7,text);
  SwiftUI::PlainTextFieldStyle::init();
  puVar20 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar9 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  puVar5 = local_2b0;
  puVar4 = local_2c0;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (lVar19,lVar22,local_2c0,local_2b0,puVar20,puVar9);
  (**(code **)(local_2a8 + 8))(lVar22,puVar5);
  (**(code **)(local_2b8 + 8))(lVar22 - extraout_x8_01,puVar4);
  if (DAT_1005515e8 != -1) {
    _swift_once(&DAT_1005515e8,FUN_1000cf944);
  }
  uVar23 = DAT_1005515f0;
  puVar20 = &DAT_100423238;
  _swift_getKeyPath();
  FVar10.unknown = local_298.unknown;
  lVar22 = local_2a0;
  (**(code **)(local_2a0 + 0x10))(lVar18,lVar19,local_298.unknown);
  puVar9 = &DAT_100551530;
  FUN_100002f94(&DAT_100551530,&DAT_100430f10);
  iVar3 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(lVar18 + iVar3) = puVar20;
  ((undefined8 *)(lVar18 + iVar3))[1] = uVar23;
  pcVar21 = *(code **)(lVar22 + 8);
  _swift_retain(uVar23);
  (*pcVar21)(lVar19,FVar10.unknown);
  puVar20 = &DAT_100423268;
  _swift_getKeyPath();
  puVar9 = local_288;
  iVar3 = *(int *)(local_288 + 0x24);
  *(undefined8 *)(lVar18 + iVar3) = puVar20;
  *(undefined1 *)((undefined8 *)(lVar18 + iVar3) + 1) = 1;
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0xe0);
  local_200 = *(undefined8 *)(unaff_x20 + 0xd8);
  local_1f0 = unaff_x20[0xe8];
  ppuStack_1d8 = *(undefined ***)(unaff_x20 + 0xe0);
  local_1e0 = *(undefined **)(unaff_x20 + 0xd8);
  local_1d0 = (undefined **)CONCAT71(local_1d0._1_7_,unaff_x20[0xe8]);
  FVar10.unknown = &DAT_100551478;
  FUN_100002f94(&DAT_100551478,&DAT_1004320a0);
  local_298.unknown = FVar10.unknown;
  BVar11 = SwiftUI::FocusState::_get_projectedValue(FVar10);
  uVar23 = uStack_b8;
  BVar6.unknown = local_c0.unknown;
  FUN_1000d70f4();
  lVar19 = local_280;
  (extension_SwiftUI)::SwiftUI::View::_focused(BVar6);
  _swift_release(uVar23);
  _swift_release(BVar6.unknown);
  FUN_10002a29c(lVar18,&DAT_100551518,&DAT_1004231e8);
  puVar20 = &DAT_100529d98;
  _swift_allocObject(&DAT_100529d98,0x130,7);
  _memcpy(puVar20 + 0x10,unaff_x20,0x120);
  SVar12.unknown = unaff_x20;
  FUN_1000d584c();
  of.unknown = local_248.unknown;
  SwiftUI::SubmitTriggers::get_text(SVar12);
  local_1e0 = puVar9;
  ppuVar13 = &local_1e0;
  ppuStack_1d8 = (undefined **)BVar11.unknown;
  _swift_getOpaqueTypeConformance2
            (ppuVar13,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focused(SwiftUI_FocusState<Swift_Bool>_Binding)__>_some>>_1005230c8
             ,1);
  puVar9 = local_268;
  lVar18 = local_270;
  (extension_SwiftUI)::SwiftUI::View::_onSubmit(of);
  _swift_release(puVar20);
  (**(code **)(local_238 + 8))(of.unknown,puStack_230);
  (**(code **)(local_278 + 8))(lVar19,puVar9);
  puVar20 = &DAT_100529dc0;
  _swift_allocObject(&DAT_100529dc0,0x130,7);
  _memcpy(puVar20 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  local_1e0 = puVar9;
  ppuVar14 = &local_1e0;
  ppuStack_1d8 = ppuVar13;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onSubmit(of:_SwiftUI_SubmitTriggers,_:_()__>_())__>_some>>_100523168
             ,1);
  lVar19 = local_250;
  puVar9 = local_258;
  (extension_SwiftUI)::SwiftUI::View::_onExitCommand();
  _swift_release(puVar20);
  (**(code **)(local_260 + 8))(lVar18,puVar9);
  ppuStack_1d8 = (undefined **)uStack_98;
  local_1e0 = local_a0;
  local_1d0 = (undefined **)local_90;
  SwiftUI::State::get_wrappedValue(local_290);
  uVar23 = uStack_b8;
  puVar20 = &DAT_100529de8;
  _swift_allocObject(&DAT_100529de8,0x130,7);
  _memcpy(puVar20 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  local_1e0 = puVar9;
  ppuVar13 = &local_1e0;
  ppuStack_1d8 = ppuVar14;
  _swift_getOpaqueTypeConformance2
            (ppuVar13,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onExitCommand(perform:_(()__>_())_)__>_some>>_100522f58
             ,1);
  SVar15.unknown = local_220;
  puVar4 = local_228;
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_220,&local_c0,0,FUN_1000d776c,puVar20,local_228,
             PTR___type_metadata_for_Swift_String_100523a98,ppuVar13,
             PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0);
  _swift_bridgeObjectRelease(uVar23);
  _swift_release(puVar20);
  (**(code **)(local_240 + 8))(lVar19,puVar4);
  SwiftUI::FocusState::get_wrappedValue(local_298);
  local_c0.unknown._0_1_ = local_1e0._0_1_;
  puVar20 = &DAT_100529e10;
  _swift_allocObject(&DAT_100529e10,0x130,7);
  _memcpy(puVar20 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  local_1e0 = puVar4;
  ppuStack_1d8 = (undefined **)puVar9;
  local_1c8 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  ppuVar14 = &local_1e0;
  local_1d0 = ppuVar13;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,1);
  lVar19 = local_208;
  puVar9 = local_210;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_208,&local_c0,0,FUN_1000d7774,puVar20,local_210,
             PTR___type_metadata_for_Swift_Bool_100523b70,ppuVar14,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  _swift_release(puVar20);
  (**(code **)(local_218 + 8))(SVar15.unknown,puVar9);
  SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar15);
  uVar23 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar15.unknown);
  AVar17.unknown = &DAT_1005514f0;
  FUN_100002f94(&DAT_1005514f0,&DAT_1004231c0);
  puVar1 = (undefined1 *)(lVar19 + *(int *)(AVar17.unknown + 0x24));
  *puVar1 = (char)SVar15.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar23;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar17);
  SwiftUI::_FrameLayout::_init((Alignment)0x4067c00000000000);
  puVar20 = &DAT_1005514e0;
  FUN_100002f94(&DAT_1005514e0,&DAT_1004231b8);
  puVar2 = (undefined8 *)(lVar19 + *(int *)(puVar20 + 0x24));
  puVar2[1] = ppuStack_1d8;
  *puVar2 = local_1e0;
  puVar2[3] = local_1c8;
  puVar2[2] = local_1d0;
  puVar2[5] = uStack_1b8;
  puVar2[4] = local_1c0;
  if (DAT_1005515f8 != -1) {
    _swift_once(&DAT_1005515f8,FUN_1000cfa54);
  }
  HVar16.unknown = (undefined *)SwiftUI::RoundedRectangle::typeMetadataAccessor();
  FUN_100099338(HVar16.unknown,&DAT_100551600);
  puVar20 = &DAT_1005514c8;
  FUN_100002f94(&DAT_1005514c8,&DAT_1004231b0);
  lVar19 = lVar19 + *(int *)(puVar20 + 0x24);
  FUN_1000d77a0(HVar16.unknown,lVar19);
  HVar16 = SwiftUI::HierarchicalShapeStyle::get_primary(HVar16);
  AVar17.unknown = &DAT_100551618;
  puVar20 = &DAT_1004330f0;
  FUN_100002f94();
  iVar3 = *(int *)(AVar17.unknown + 0x34);
  *(undefined4 *)(lVar19 + iVar3) = (int)HVar16.unknown;
  ((undefined4 *)(lVar19 + iVar3))[1] = 0x3dcccccd;
  *(undefined2 *)(lVar19 + *(int *)(AVar17.unknown + 0x38)) = 0x100;
  AVar17 = SwiftUI::Alignment::get_center(AVar17);
  puVar9 = &DAT_100551550;
  FUN_100002f94(&DAT_100551550,&DAT_1004231f0);
  iVar3 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(lVar19 + iVar3) = AVar17.unknown;
  ((undefined8 *)(lVar19 + iVar3))[1] = puVar20;
  return;
}

