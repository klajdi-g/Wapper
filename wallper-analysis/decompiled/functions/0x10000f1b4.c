// rea decompile_all
// name: FUN_10000f1b4
// address: 0x10000f1b4
// body: available
// range: 0x10000f1b4-0x10000ff33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000f6c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000f1b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  RGBColorSpace RVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  OpacityTransition OVar9;
  State SVar10;
  Color CVar11;
  Color CVar12;
  Alignment AVar13;
  RoundedRectangle RVar14;
  GestureState GVar15;
  GestureState GVar16;
  UnitPoint maximumDistance;
  GestureState<undefined> GVar17;
  GestureMask GVar18;
  GestureMask GVar19;
  Animation AVar20;
  undefined ***pppuVar21;
  Set SVar22;
  undefined *puVar23;
  Alignment AVar24;
  CGFloat y;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined *puVar26;
  long extraout_x8_06;
  long lVar27;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 uVar28;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 auStack_340 [4];
  long local_320;
  GestureState local_318;
  undefined **local_310 [3];
  long local_2f8;
  undefined *local_2f0;
  long local_2e8;
  undefined *local_2e0;
  long local_2d8;
  undefined *local_2d0;
  CGFloat local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  long local_260;
  long local_258;
  undefined *local_250;
  long local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  long lStack_218;
  undefined *local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined *puStack_1d8;
  undefined8 *local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar7 = &DAT_10054ac58;
  local_240 = param_1;
  FUN_100002f94(&DAT_10054ac58,&DAT_10041bf70);
  local_250 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_248 = (long)&local_320 - extraout_x8;
  RVar5 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  local_270 = CONCAT71((int7)((ulong)puVar7 >> 8),RVar5.value);
  local_280 = *(long *)(local_270 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_280 + 0x40));
  lVar25 = ((long)&local_320 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054ac60;
  local_278 = lVar25;
  FUN_100002f94(&DAT_10054ac60,&DAT_10041bf78);
  local_2a8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar25 - extraout_x8_01;
  puVar7 = &DAT_10054ac68;
  local_2d8 = lVar25;
  FUN_100002f94(&DAT_10054ac68,&DAT_10041bf80);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar25 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_320 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12;
  puVar7 = &DAT_10054ac70;
  FUN_100002f94(&DAT_10054ac70,&DAT_10041bf88);
  local_318.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar30 = (undefined8 *)(lVar25 - extraout_x8_03);
  ppuVar8 = (undefined **)&DAT_10054ac78;
  FUN_100002f94(&DAT_10054ac78,&DAT_10041bf90);
  local_310[0] = ppuVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(ppuVar8[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054ac80;
  local_228 = (undefined *)((long)puVar30 - extraout_x8_04);
  FUN_100002f94(&DAT_10054ac80,&DAT_10041bf98);
  local_2e8 = *(long *)(puVar7 + -8);
  local_2e0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_2e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar26 = (undefined *)((long)puVar30 - extraout_x8_04) + -extraout_x8_05;
  puVar7 = &DAT_10054ac88;
  local_310[2] = (undefined **)puVar26;
  FUN_100002f94(&DAT_10054ac88,&DAT_10041bfa0);
  local_2f0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)puVar26 - extraout_x8_06;
  puVar7 = &DAT_10054ac90;
  local_2f8 = lVar27;
  FUN_100002f94(&DAT_10054ac90,&DAT_10041bfa8);
  local_2c8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined *)(lVar27 - extraout_x8_07);
  puVar7 = &DAT_10054ac98;
  local_2c0 = puVar26;
  FUN_100002f94(&DAT_10054ac98,&DAT_10041bfb0);
  local_2b0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = puVar26 + -extraout_x8_08;
  puVar7 = &DAT_10054aca0;
  local_2b8 = puVar26;
  FUN_100002f94(&DAT_10054aca0,&DAT_10041bfb8);
  local_2d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054aca8;
  local_2a0 = puVar26 + -extraout_x8_09;
  FUN_100002f94(&DAT_10054aca8,&DAT_10041bfc0);
  local_298 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)(puVar26 + -extraout_x8_09) - extraout_x8_10;
  puVar7 = &DAT_10054acb0;
  local_288 = lVar27;
  FUN_100002f94(&DAT_10054acb0,&DAT_10041bfc8);
  local_268 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar27 = lVar27 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  local_258 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar27 - extraout_x12_00;
  local_290 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar27 - extraout_x12_01;
  local_260 = lVar27;
  OVar9 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar29 = *(long *)(OVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  lVar27 = lVar27 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar27 - extraout_x12_02;
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_1b8 = param_2[1];
  local_1c0 = *param_2;
  AVar24.unknown = &DAT_10054ab50;
  puVar7 = &DAT_10041d0f0;
  FUN_100002f94();
  SVar10.unknown = AVar24.unknown;
  SwiftUI::State::get_wrappedValue((State)AVar24.unknown);
  local_230 = (undefined *)0x0;
  local_310[1] = (undefined **)0x0;
  local_238 = param_2;
  if ((char)local_b0 == '\x01') {
    CVar11 = SwiftUI::Color::get_black(SVar10.unknown);
    CVar12 = SwiftUI::Color::opacity(0.55,CVar11);
    _swift_release(CVar11.unknown);
    SwiftUI::OpacityTransition::init();
    (**(code **)(lVar29 + 0x10))(lVar27,lVar31,OVar9.unknown);
    puVar7 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    local_310[1] = (undefined **)SwiftUI::AnyTransition::_init(puVar7,OVar9.unknown,puVar7);
    (**(code **)(lVar29 + 8))(lVar31);
    param_2 = local_238;
    local_230 = CVar12.unknown;
    _swift_retain(CVar12.unknown);
    SVar10.unknown = (undefined *)local_310[1];
    _swift_retain();
    puVar7 = OVar9.unknown;
  }
  AVar13 = SwiftUI::Alignment::get_center(SVar10.unknown);
  *puVar30 = AVar13.unknown;
  puVar30[1] = puVar7;
  puVar7 = &DAT_10054acb8;
  FUN_100002f94(&DAT_10054acb8,&DAT_10041bfd0);
  puVar1 = (undefined8 *)((long)puVar30 + (long)*(int *)(puVar7 + 0x2c));
  puVar7 = &DAT_100525730;
  _swift_allocObject(&DAT_100525730,0x120,7);
  _memcpy(puVar7 + 0x10,param_2,0x110);
  FUN_100027a7c(param_2,&local_1c0);
  FUN_10000ff34(lVar25,param_2);
  lVar27 = local_320;
  FUN_1000087e4(lVar25,local_320,&DAT_10054ac68,&DAT_10041bf80);
  *puVar1 = FUN_10002815c;
  puVar1[1] = puVar7;
  puVar26 = &DAT_10054acc0;
  FUN_100002f94(&DAT_10054acc0,&DAT_10041bfd8);
  FUN_1000087e4(lVar27,(long)puVar1 + (long)*(int *)(puVar26 + 0x30),&DAT_10054ac68,&DAT_10041bf80);
  _swift_retain(puVar7);
  FUN_10002a29c(lVar25,&DAT_10054ac68,&DAT_10041bf80);
  FUN_10002a29c(lVar27,&DAT_10054ac68,&DAT_10041bf80);
  _swift_release(puVar7);
  uStack_1b8 = uStack_88;
  local_1c0 = local_90;
  SwiftUI::State::get_wrappedValue((State)AVar24.unknown);
  AVar13.unknown = (undefined *)0x408c200000000000;
  if ((char)local_b0 == '\0') {
    AVar13.unknown = (undefined *)0x4081300000000000;
  }
  uStack_1b8 = uStack_88;
  local_1c0 = local_90;
  SwiftUI::State::get_wrappedValue((State)AVar24.unknown);
  SwiftUI::Alignment::get_center(AVar24);
  SwiftUI::_FrameLayout::_init(AVar13);
  uVar33 = local_1c0;
  puVar1 = (undefined8 *)((long)puVar30 + (long)*(int *)(local_318.unknown + 0x24));
  puVar1[1] = uStack_1b8;
  *puVar1 = uVar33;
  puVar1[3] = uStack_1a8;
  puVar1[2] = uStack_1b0;
  puVar1[5] = uStack_198;
  puVar1[4] = local_1a0;
  puVar26 = local_228;
  FUN_1000d8264(0x4040000000000000);
  FUN_10002a29c(puVar30,&DAT_10054ac70,&DAT_10041bf88);
  puVar7 = &DAT_10054acc8;
  FUN_100002f94(&DAT_10054acc8,&DAT_10041bfe0);
  puVar30 = (undefined8 *)(puVar26 + *(int *)(puVar7 + 0x24));
  RVar14 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar4 = *(int *)(RVar14.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar25 = CONCAT71((int7)((ulong)RVar14.unknown >> 8),RVar6.value);
  (**(code **)(*(long *)(lVar25 + -8) + 0x68))((long)puVar30 + (long)iVar4,uVar3,lVar25);
  puVar30[1] = 0x4040000000000000;
  *puVar30 = 0x4040000000000000;
  puVar7 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar30 + (long)*(int *)(puVar7 + 0x24)) = 0x100;
  uStack_a8 = param_2[0x16];
  local_b0 = (undefined **)param_2[0x15];
  uStack_98 = param_2[0x18];
  uStack_a0 = param_2[0x17];
  puStack_1d8 = (undefined *)param_2[0x16];
  local_1e0 = (undefined **)param_2[0x15];
  puStack_1c8 = (undefined *)param_2[0x18];
  local_1d0 = (undefined8 *)param_2[0x17];
  GVar15.unknown = &DAT_10054acd8;
  FUN_100002f94(&DAT_10054acd8,&DAT_10041bff0);
  GVar16.unknown = GVar15.unknown;
  local_318.unknown = GVar15.unknown;
  SwiftUI::GestureState::get_wrappedValue(GVar15);
  uVar28 = 0x3feeb851eb851eb8;
  uVar32 = 0x3ff0000000000000;
  uVar33 = uVar28;
  if ((char)local_200 == '\0') {
    uVar33 = 0x3ff0000000000000;
  }
  maximumDistance = SwiftUI::UnitPoint::get_center(GVar16.unknown);
  lVar25 = local_2d8;
  ppuVar8 = local_310[0];
  puVar30 = (undefined8 *)(puVar26 + *(int *)((long)local_310[0] + 0x24));
  *puVar30 = uVar33;
  puVar30[1] = uVar33;
  puVar30[2] = uVar28;
  puVar30[3] = uVar32;
  SwiftUI::LongPressGesture::init(0.0,(CGFloat)maximumDistance.unknown);
  puStack_1d8 = (undefined *)uStack_a8;
  local_1e0 = local_b0;
  puStack_1c8 = (undefined *)uStack_98;
  local_1d0 = (undefined8 *)uStack_a0;
  GVar17 = SwiftUI::GestureState::get_projectedValue(GVar15);
  puVar26 = local_2a8;
  pcVar2 = (char *)(lVar25 + *(int *)(local_2a8 + 0x2c));
  *pcVar2 = (char)local_200;
  *(undefined **)(pcVar2 + 8) = local_1f8;
  *(undefined8 *)(pcVar2 + 0x18) = uStack_1e8;
  *(undefined8 *)(pcVar2 + 0x10) = local_1f0;
  iVar4 = *(int *)(local_2a8 + 0x30);
  *(undefined8 *)(lVar25 + iVar4) = FUN_1000103dc;
  ((undefined8 *)(lVar25 + iVar4))[1] = 0;
  GVar18 = SwiftUI::GestureMask::get_all(GVar17.unknown);
  GVar19 = GVar18;
  FUN_100028164();
  puVar7 = &DAT_10054ad60;
  FUN_1000087a0(&DAT_10054ad60,&DAT_10054ac60,&DAT_10041bf78,
                PTR_SwiftUI__SwiftUI__GestureStateGesture<undefined,undefined>_>SwiftUI__Gesture_100521b18
               );
  AVar20.unknown = local_228;
  SVar22.unknown = (undefined *)local_310[2];
  (extension_SwiftUI)::SwiftUI::View::_gesture
            (local_310[2],lVar25,GVar18.unknown,ppuVar8,puVar26,GVar19.unknown,puVar7);
  FUN_10002a29c(lVar25,&DAT_10054ac60,&DAT_10041bf78);
  FUN_10002a29c(AVar20.unknown,&DAT_10054ac78,&DAT_10041bf90);
  AVar20 = SwiftUI::Animation::spring(0.18,0.7,0.0,AVar20);
  puStack_1d8 = (undefined *)uStack_a8;
  local_1e0 = local_b0;
  puStack_1c8 = (undefined *)uStack_98;
  local_1d0 = (undefined8 *)uStack_a0;
  SwiftUI::GestureState::get_wrappedValue(local_318);
  local_1e0 = ppuVar8;
  puStack_1d8 = puVar26;
  pppuVar21 = &local_1e0;
  local_1d0 = (undefined8 *)GVar19.unknown;
  puStack_1c8 = puVar7;
  _swift_getOpaqueTypeConformance2
            (pppuVar21,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_gesture<A_where_A1:_SwiftUI_Gesture>(_:_A1,including:_SwiftUI_GestureMask)__>_some>>_1005230d8
             ,1);
  puVar7 = local_2e0;
  lVar25 = local_2f8;
  (extension_SwiftUI)::SwiftUI::View::_animation
            (local_2f8,AVar20.unknown,&local_200,local_2e0,
             PTR___type_metadata_for_Swift_Bool_100523b70,pppuVar21,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  _swift_release(AVar20.unknown);
  (**(code **)(local_2e8 + 8))(SVar22.unknown,puVar7);
  SVar22 = SwiftUI::Edge::Set::get_bottom(SVar22);
  FUN_1000284b4();
  AVar24.unknown = local_2c0;
  y.unknown = local_2f0;
  (extension_SwiftUI)::SwiftUI::View::_padding(SVar22);
  FUN_10002a29c(lVar25,&DAT_10054ac88,&DAT_10041bfa0);
  lVar25 = local_278;
  (**(code **)(local_280 + 0x68))
            (local_278,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGBLinear_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231d8
             ,local_270);
  CVar12 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar25,0.0,0.33);
  CVar11 = CVar12;
  FUN_1000285d0();
  AVar13.unknown = local_2b8;
  (extension_SwiftUI)::SwiftUI::View::_shadow(CVar12,local_2c8,(CGFloat)CVar11.unknown,y);
  _swift_release(CVar12.unknown);
  FUN_10002a29c(AVar24.unknown,&DAT_10054ac90,&DAT_10041bfa8);
  SwiftUI::Alignment::get_center(AVar24);
  puVar7 = &DAT_10054ad78;
  FUN_100002f94(&DAT_10054ad78,&DAT_10041c028);
  FUN_100028648();
  puVar26 = puVar7;
  FUN_1000286c0();
  puVar23 = puVar26;
  FUN_100028700();
  *(undefined **)(lVar31 + -0x18) = puVar26;
  *(undefined **)(lVar31 + -0x10) = puVar23;
  *(undefined **)(lVar31 + -0x20) = puVar7;
  AVar20.unknown = local_2a0;
  (extension_SwiftUI)::SwiftUI::View::_overlayPreferenceValue((Alignment)0x100525af0);
  FUN_10002a29c(AVar13.unknown,&DAT_10054ac98,&DAT_10041bfb0);
  AVar24 = SwiftUI::Alignment::get_top(AVar13);
  puVar30 = local_238;
  local_1d0 = local_238;
  FUN_100002f94(&DAT_10054adc8,&DAT_10041c048);
  FUN_100028838();
  FUN_1000288d0();
  lVar27 = local_288;
  (extension_SwiftUI)::SwiftUI::View::_overlay(AVar24);
  FUN_10002a29c(AVar20.unknown,&DAT_10054aca0,&DAT_10041bfb8);
  AVar20 = SwiftUI::Animation::spring(0.4,0.85,0.0,AVar20);
  uVar33 = puVar30[0x1f];
  puVar7 = &DAT_10041c070;
  _swift_getKeyPath(&DAT_10041c070);
  puVar26 = &DAT_10041c098;
  _swift_getKeyPath(&DAT_10041c098);
  lVar29 = local_248;
  Combine::Published::_get_subscript(local_248,uVar33,puVar7,puVar26);
  _swift_release(puVar7);
  _swift_release(puVar26);
  FUN_100028a00();
  puVar7 = puVar26;
  FUN_100028a98();
  lVar25 = local_290;
  (extension_SwiftUI)::SwiftUI::View::_animation
            (local_290,AVar20.unknown,lVar29,local_298,local_250,puVar26,puVar7);
  _swift_release(AVar20.unknown);
  FUN_10002a29c(lVar29,&DAT_10054ac58,&DAT_10041bf70);
  FUN_10002a29c(lVar27,&DAT_10054aca8,&DAT_10041bfc0);
  FUN_100028b20();
  lVar29 = local_260;
  puVar26 = local_268;
  thunk_FUN_1000bdaa4(local_260,lVar25,local_268,lVar27);
  FUN_10002a29c(lVar25,&DAT_10054acb0,&DAT_10041bfc8);
  puVar23 = local_230;
  lVar25 = local_258;
  ppuVar8 = local_310[1];
  local_200 = local_230;
  local_1f8 = (undefined *)local_310[1];
  local_1e0 = &local_200;
  FUN_1000087e4(lVar29,local_258,&DAT_10054acb0,&DAT_10041bfc8);
  puStack_1d8 = (undefined *)lVar25;
  puVar7 = &DAT_10054ae60;
  FUN_100002f94(&DAT_10054ae60,&DAT_10041c0c8);
  puStack_208 = puVar26;
  local_210 = puVar7;
  FUN_100028bb8();
  local_220 = puVar7;
  lStack_218 = lVar27;
  FUN_1003bb3f8(local_240,&local_1e0,2,&local_210,&local_220);
  FUN_100028cc0(puVar23,ppuVar8);
  FUN_10002a29c(lVar29,&DAT_10054acb0,&DAT_10041bfc8);
  FUN_10002a29c(lVar25,&DAT_10054acb0,&DAT_10041bfc8);
  FUN_100028cc0(local_200,local_1f8);
  return;
}

