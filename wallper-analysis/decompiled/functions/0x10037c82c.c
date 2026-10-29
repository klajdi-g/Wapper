// rea decompile_all
// name: FUN_10037c82c
// address: 0x10037c82c
// body: available
// range: 0x10037c82c-0x10037cf53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037c82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  RoundedCornerStyle RVar6;
  long lVar7;
  undefined *puVar8;
  VerticalAlignment VVar9;
  Set _all;
  Set SVar10;
  RoundedRectangle RVar11;
  undefined7 extraout_var;
  Color CVar12;
  State SVar13;
  Color CVar14;
  Alignment AVar15;
  Alignment AVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar21;
  double dVar22;
  long lVar23;
  long extraout_x12;
  undefined *unaff_x20;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 auStack_150 [2];
  undefined *local_140 [3];
  long local_128;
  undefined *local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  undefined8 local_100;
  char local_e0;
  undefined *local_c0;
  undefined *local_b8;
  
  lVar7 = 0;
  local_100 = param_1;
  FUN_10038ffac();
  lVar27 = *(long *)(lVar7 + -8);
  lVar23 = *(long *)(lVar27 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)local_140 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10055efc0;
  FUN_100002f94(&DAT_10055efc0,&DAT_1004347b8);
  local_140[2] = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)(lVar20 - extraout_x8);
  puVar8 = &DAT_10055efc8;
  FUN_100002f94(&DAT_10055efc8,&DAT_1004347c0);
  local_118 = *(long *)(puVar8 + -8);
  local_120 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  VVar9.unknown = &DAT_10055efd0;
  FUN_100002f94(&DAT_10055efd0,&DAT_1004347c8);
  local_108 = *(long *)(VVar9.unknown + -8);
  local_110 = VVar9.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = ((long)puVar25 - extraout_x8_00) - extraout_x8_01;
  local_128 = lVar21;
  VVar9 = SwiftUI::VerticalAlignment::get_center(VVar9);
  *puVar25 = VVar9.unknown;
  puVar25[1] = 0x4038000000000000;
  *(undefined1 *)(puVar25 + 2) = 0;
  puVar8 = &DAT_10055efd8;
  FUN_100002f94(&DAT_10055efd8,&DAT_1004347d0);
  SVar10.unknown = unaff_x20;
  FUN_10037cf54((long)puVar25 + (long)*(int *)(puVar8 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uVar28 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar10.unknown = &DAT_10055efe0;
  uVar30 = param_3;
  uVar31 = param_4;
  uVar32 = param_5;
  FUN_100002f94(&DAT_10055efe0,&DAT_1004347d8);
  puVar1 = (undefined1 *)((long)puVar25 + (long)*(int *)(SVar10.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar28;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar10 = SwiftUI::Edge::Set::get_vertical(SVar10);
  uVar28 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar8 = &DAT_10055efe8;
  FUN_100002f94(&DAT_10055efe8,&DAT_1004347e0);
  puVar1 = (undefined1 *)((long)puVar25 + (long)*(int *)(puVar8 + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar28;
  *(undefined8 *)(puVar1 + 0x10) = uVar30;
  *(undefined8 *)(puVar1 + 0x18) = uVar31;
  *(undefined8 *)(puVar1 + 0x20) = uVar32;
  puVar1[0x28] = 0;
  puVar8 = &DAT_10055eff0;
  FUN_100002f94(&DAT_10055eff0,&DAT_1004347e8);
  puVar2 = (undefined8 *)((long)puVar25 + (long)*(int *)(puVar8 + 0x24));
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar4 = *(int *)(RVar11.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar12.unknown = (undefined *)((long)puVar2 + (long)iVar4);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x68))
            (CVar12.unknown,uVar3,CONCAT71(extraout_var,RVar6.value));
  auVar29 = NEON_fmov(0x4024000000000000,8);
  puVar2[1] = auVar29._8_8_;
  *puVar2 = auVar29._0_8_;
  CVar12 = SwiftUI::Color::get_white(CVar12);
  local_b8 = *(undefined **)(unaff_x20 + *(int *)(lVar7 + 0x2c) + 8);
  local_c0 = (undefined *)CONCAT71(local_c0._1_7_,unaff_x20[*(int *)(lVar7 + 0x2c)]);
  SVar13.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar13);
  dVar22 = 0.06;
  if (local_e0 == '\0') {
    dVar22 = 0.0;
  }
  CVar14 = SwiftUI::Color::opacity(dVar22,CVar12);
  _swift_release(CVar12.unknown);
  AVar16.unknown = &DAT_10054a8b8;
  puVar8 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)puVar2 + (long)*(int *)(AVar16.unknown + 0x34)) = CVar14.unknown;
  *(undefined2 *)((long)puVar2 + (long)*(int *)(AVar16.unknown + 0x38)) = 0x100;
  AVar15 = SwiftUI::Alignment::get_center(AVar16);
  AVar16.unknown = &DAT_10054a8c0;
  puVar17 = &DAT_10041baa0;
  FUN_100002f94();
  iVar4 = *(int *)(AVar16.unknown + 0x24);
  *(undefined8 *)((long)puVar2 + (long)iVar4) = AVar15.unknown;
  ((undefined8 *)((long)puVar2 + (long)iVar4))[1] = puVar8;
  AVar16 = SwiftUI::Alignment::get_top(AVar16);
  puVar8 = &DAT_10055eff8;
  FUN_100002f94(&DAT_10055eff8,&DAT_1004347f0);
  iVar4 = *(int *)(puVar8 + 0x24);
  FUN_10037fd08((long)puVar25 + (long)iVar4);
  puVar8 = &DAT_10055f000;
  FUN_100002f94(&DAT_10055f000,&DAT_1004347f8);
  puVar2 = (undefined8 *)((long)puVar25 + (long)iVar4 + (long)*(int *)(puVar8 + 0x24));
  *puVar2 = AVar16.unknown;
  puVar2[1] = puVar17;
  puVar8 = &DAT_10055f008;
  FUN_100002f94(&DAT_10055f008,&DAT_100434800);
  *(undefined1 *)((long)puVar25 + (long)*(int *)(puVar8 + 0x24)) = 0;
  FUN_100029504();
  uVar26 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar24 = uVar26 + 0x10 & (uVar26 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053c808;
  _swift_allocObject(&DAT_10053c808,uVar24 + lVar23,uVar26 | 7);
  FUN_100007e64(lVar20,puVar8 + uVar24,FUN_10038ffac);
  puVar5 = local_140[2];
  iVar4 = *(int *)(local_140[2] + 0x24);
  *(undefined8 *)((long)puVar25 + (long)iVar4) = FUN_100399aa8;
  ((undefined8 *)((long)puVar25 + (long)iVar4))[1] = puVar8;
  FUN_100029504();
  puVar8 = &DAT_10053c830;
  _swift_allocObject(&DAT_10053c830,uVar24 + lVar23,uVar26 | 7);
  FUN_100007e64(lVar20,puVar8 + uVar24,FUN_10038ffac);
  puVar17 = &DAT_10055e910;
  FUN_100002f94(&DAT_10055e910,&DAT_100434180);
  puVar18 = &DAT_10055f010;
  local_140[1] = puVar17;
  FUN_100390270(&DAT_10055f010,&DAT_10055efc0,&DAT_1004347b8,FUN_100399d10);
  local_140[0] = puVar18;
  FUN_10039047c();
  puVar19 = puVar18;
  FUN_10038fe0c();
  *(undefined **)(lVar21 + -0x10) = puVar18;
  *(undefined **)(lVar21 + -8) = puVar19;
  (extension_SwiftUI)::SwiftUI::View::_draggable();
  _swift_release(puVar8);
  FUN_10002a29c(puVar25,&DAT_10055efc0,&DAT_1004347b8);
  FUN_100029504(unaff_x20,lVar20,FUN_10038ffac);
  puVar8 = &DAT_10053c858;
  _swift_allocObject(&DAT_10053c858,uVar24 + lVar23,uVar26 | 7);
  FUN_100007e64(lVar20,puVar8 + uVar24,FUN_10038ffac);
  FUN_100029504(unaff_x20,lVar20,FUN_10038ffac);
  puVar17 = &DAT_10053c880;
  _swift_allocObject(&DAT_10053c880,uVar24 + lVar23,uVar26 | 7);
  FUN_100007e64(lVar20,puVar17 + uVar24,FUN_10038ffac);
  puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
  local_c0 = puVar5;
  local_b8 = local_140[1];
  _swift_getOpaqueTypeConformance2
            (&local_c0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_draggable<A,B_where_A1:_SwiftUI_View,B1:_CoreTransferable_Transferable>(_:__autoclosure_()__>_B1,preview:_()__>_A1___>_some>>_100523188
             ,1);
  *(undefined **)(lVar21 + -0x10) = puVar19;
  puVar5 = local_120;
  lVar7 = local_128;
  (extension_SwiftUI)::SwiftUI::View::_dropDestination();
  _swift_release(puVar8);
  _swift_release(puVar17);
  (**(code **)(local_118 + 8))((long)puVar25 - extraout_x8_00,puVar5);
  FUN_100002f94(&DAT_10055f058,&DAT_100434810);
  local_c0 = puVar5;
  local_b8 = puVar18;
  _swift_getOpaqueTypeConformance2
            (&local_c0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_dropDestination<A_where_A1:_CoreTransferable_Transferable>(for:_A1_Type,action:_([A1],__C_CGPoint)__>_Swift_Bool,isTargeted:_(Swift_Bool)__>______>_some>>_100522f90
             ,1);
  FUN_1000087a0(&DAT_10055f060,&DAT_10055f058,&DAT_100434810,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar8 = local_110;
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  (**(code **)(local_108 + 8))(lVar7,puVar8);
  return;
}

