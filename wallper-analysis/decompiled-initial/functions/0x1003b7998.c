// rea decompile_all
// name: FUN_1003b7998
// address: 0x1003b7998
// body: available
// range: 0x1003b7998-0x1003b80ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b7b60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b7998(long param_1,long param_2,undefined8 param_3,undefined8 param_4,Color param_5)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  RoundedCornerStyle RVar7;
  Design DVar8;
  TruncationMode TVar9;
  undefined *puVar10;
  RoundedRectangle RVar11;
  RoundedRectangle RVar12;
  Color CVar14;
  Color CVar15;
  _Inset _Var16;
  Alignment AVar17;
  undefined *puVar18;
  State SVar19;
  Text TVar20;
  Font FVar21;
  Text TVar22;
  Text TVar23;
  Set SVar24;
  Set SVar25;
  EnabledTextSelectability EVar26;
  Text TVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long extraout_x8;
  long extraout_x8_00;
  long lVar31;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar32;
  double *pdVar33;
  Alignment AVar34;
  CGFloat CVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 in_d3;
  undefined8 uVar42;
  double dVar43;
  double local_140 [3];
  long local_128 [2];
  undefined *local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long lVar13;
  
  local_128[0] = param_2;
  local_108 = (undefined *)SwiftUI::EnabledTextSelectability::typeMetadataAccessor();
  local_100 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar31 = (long)local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_10054a828;
  local_110 = lVar31;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = lVar31 - extraout_x8_00;
  puVar10 = &DAT_10055fda0;
  local_128[1] = lVar31;
  FUN_100002f94(&DAT_10055fda0,&DAT_100435830);
  local_118 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar34.unknown = (undefined *)(lVar31 - extraout_x8_01);
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  puVar18 = PTR_typeMetadataAccessor_1005223a8;
  RVar12 = RVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar11.unknown + -8) + 0x40));
  pdVar33 = (double *)((long)AVar34.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  iVar5 = *(int *)(RVar12.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar13 = CONCAT71((int7)((ulong)RVar12.unknown >> 8),RVar7.value);
  pcVar32 = *(code **)(*(long *)(lVar13 + -8) + 0x68);
  CVar14.unknown = (undefined *)((long)pdVar33 + (long)iVar5);
  (*pcVar32)(CVar14.unknown,uVar4,lVar13);
  auVar37 = NEON_fmov(0x4024000000000000,8);
  local_140[1] = auVar37._8_8_;
  local_140[0] = auVar37._0_8_;
  pdVar33[1] = local_140[1];
  *pdVar33 = local_140[0];
  CVar14 = SwiftUI::Color::get_white(CVar14);
  CVar15 = SwiftUI::Color::opacity(0.18,CVar14);
  _swift_release(CVar14.unknown);
  uVar40 = 0;
  SwiftUI::StrokeStyle::init
            (&local_e8,0x3ff0000000000000,0x4024000000000000,CVar15.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  FUN_100029504(pdVar33,param_1,puVar18);
  dVar43 = local_e8 * 0.5;
  puVar10 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar31 = param_1 + *(int *)(puVar10 + 0x44);
  local_140[2] = (double)param_1;
  FUN_100029504(pdVar33,lVar31,puVar18);
  _Var16 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar31 + *(int *)(_Var16.unknown + 0x14)) = dVar43;
  puVar10 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar1 = (double *)(lVar31 + *(int *)(puVar10 + 0x24));
  pdVar1[1] = dStack_e0;
  *pdVar1 = local_e8;
  pdVar1[3] = dStack_d0;
  pdVar1[2] = local_d8;
  pdVar1[4] = local_c8;
  AVar17.unknown = &DAT_100552098;
  puVar10 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar31 + *(int *)(AVar17.unknown + 0x34)) = CVar15.unknown;
  *(undefined2 *)(lVar31 + *(int *)(AVar17.unknown + 0x38)) = 0x100;
  AVar17 = SwiftUI::Alignment::get_center(AVar17);
  FUN_100100e5c(pdVar33);
  puVar18 = &DAT_1005520a0;
  FUN_100002f94(&DAT_1005520a0,&DAT_100424360);
  iVar5 = *(int *)(puVar18 + 0x24);
  *(undefined8 *)(lVar31 + iVar5) = AVar17.unknown;
  ((undefined8 *)(lVar31 + iVar5))[1] = puVar10;
  puVar10 = &DAT_10055fda8;
  FUN_100002f94(&DAT_10055fda8,&DAT_100435838);
  pdVar1 = (double *)(param_1 + *(int *)(puVar10 + 0x24));
  CVar14.unknown = (undefined *)((long)pdVar1 + (long)*(int *)(RVar11.unknown + 0x14));
  (*pcVar32)(CVar14.unknown,uVar4,lVar13);
  pdVar1[1] = local_140[1];
  *pdVar1 = local_140[0];
  CVar14 = SwiftUI::Color::get_white(CVar14);
  CVar15 = SwiftUI::Color::opacity(0.03,CVar14);
  dVar38 = local_d8;
  _swift_release(CVar14.unknown);
  AVar17.unknown = &DAT_10054a8b8;
  puVar10 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)pdVar1 + (long)*(int *)(AVar17.unknown + 0x34)) = CVar15.unknown;
  *(undefined2 *)((long)pdVar1 + (long)*(int *)(AVar17.unknown + 0x38)) = 0x100;
  AVar17 = SwiftUI::Alignment::get_center(AVar17);
  puVar18 = &DAT_10054a8c0;
  FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
  iVar5 = *(int *)(puVar18 + 0x24);
  *(undefined8 *)((long)pdVar1 + (long)iVar5) = AVar17.unknown;
  ((undefined8 *)((long)pdVar1 + (long)iVar5))[1] = puVar10;
  local_c0 = *(undefined8 *)(local_128[0] + 0x30);
  uStack_b8 = *(undefined8 *)(local_128[0] + 0x38);
  local_b0 = *(undefined8 *)(local_128[0] + 0x40);
  SVar19.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar19);
  local_c0 = local_f8;
  uStack_b8 = uStack_f0;
  CVar35.unknown = (undefined *)FUN_100026df4();
  puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar20 = SwiftUI::Text::_init
                     (SVar19.unknown,PTR___type_metadata_for_Swift_String_100523a98,SVar19.unknown);
  SwiftUI::Font::Weight::get_regular((Weight)TVar20.unknown);
  DVar8 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar31 = local_128[1];
  lVar13 = CONCAT71((int7)((ulong)TVar20.unknown >> 8),DVar8.value);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(local_128[1],1,1,lVar13);
  FVar21 = SwiftUI::Font::_system(CVar35,(Font)0x0);
  FUN_10002a29c(lVar31,&DAT_10054a828,&DAT_10041e3c0);
  TVar27 = TVar20;
  puVar18 = puVar10;
  puVar29 = SVar19.unknown;
  TVar22 = SwiftUI::Text::_font(FVar21.unknown);
  _swift_release(FVar21.unknown);
  FUN_100025b34(TVar20.unknown,puVar10,SVar19.unknown);
  _swift_bridgeObjectRelease();
  CVar14 = SwiftUI::Color::get_white(param_5);
  TVar20 = TVar22;
  puVar28 = TVar27.unknown;
  puVar30 = puVar18;
  TVar23 = SwiftUI::Text::_foregroundColor(CVar14.unknown);
  _swift_release(CVar14.unknown);
  FUN_100025b34(TVar22.unknown,TVar27.unknown,puVar18);
  _swift_bridgeObjectRelease(puVar29);
  puVar10 = &DAT_100435840;
  _swift_getKeyPath();
  puVar18 = &DAT_10055a5e0;
  FUN_100002f94(&DAT_10055a5e0,&DAT_10042e6a0);
  iVar5 = *(int *)(puVar18 + 0x24);
  puVar18 = &DAT_10055a5e8;
  FUN_100002f94(&DAT_10055a5e8,&DAT_10042e6d8);
  iVar6 = *(int *)(puVar18 + 0x1c);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Text_TruncationMode_middle_SwiftUI_Text_TruncationMode_Type___>_SwiftUI_Text_TruncationMode_100522da0
  ;
  TVar9 = SwiftUI::Text::TruncationMode::typeMetadataAccessor();
  lVar31 = CONCAT71((int7)((ulong)puVar18 >> 8),TVar9.value);
  (**(code **)(*(long *)(lVar31 + -8) + 0x68))
            ((long)AVar34.unknown + (long)iVar5 + (long)iVar6,uVar4,lVar31);
  SVar25.unknown = &DAT_100435870;
  _swift_getKeyPath();
  *(undefined **)((long)AVar34.unknown + (long)iVar5) = SVar25.unknown;
  *(undefined **)AVar34.unknown = TVar23.unknown;
  *(undefined **)((long)AVar34.unknown + 8) = TVar20.unknown;
  *(char *)((long)AVar34.unknown + 0x10) = (char)puVar28;
  *(undefined **)((long)AVar34.unknown + 0x18) = puVar30;
  *(undefined **)((long)AVar34.unknown + 0x20) = puVar10;
  *(undefined8 *)((long)AVar34.unknown + 0x28) = 1;
  *(undefined1 *)((long)AVar34.unknown + 0x30) = 0;
  SVar24 = SwiftUI::Edge::Set::get_horizontal(SVar25);
  CVar35.unknown = &DAT_10055fdb0;
  FUN_100002f94(&DAT_10055fdb0,&DAT_1004358a0);
  dVar43 = local_140[2];
  lVar31 = (long)local_140[2] + (long)*(int *)(CVar35.unknown + 0x24);
  uVar36 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init(CVar35);
  SVar25.unknown = &DAT_10055fdb8;
  dVar39 = dVar38;
  uVar41 = uVar40;
  uVar42 = in_d3;
  FUN_100002f94(&DAT_10055fdb8,&DAT_1004358a8);
  puVar2 = (undefined1 *)((long)AVar34.unknown + (long)*(int *)(SVar25.unknown + 0x24));
  *puVar2 = (char)SVar24.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar36;
  *(double *)(puVar2 + 0x10) = dVar38;
  *(undefined8 *)(puVar2 + 0x18) = uVar40;
  *(undefined8 *)(puVar2 + 0x20) = in_d3;
  puVar2[0x28] = 0;
  SVar25 = SwiftUI::Edge::Set::get_vertical(SVar25);
  uVar36 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar25.unknown);
  puVar10 = local_118;
  puVar2 = (undefined1 *)((long)AVar34.unknown + (long)*(int *)(local_118 + 0x24));
  *puVar2 = (char)SVar25.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar36;
  *(double *)(puVar2 + 0x10) = dVar39;
  *(undefined8 *)(puVar2 + 0x18) = uVar41;
  *(undefined8 *)(puVar2 + 0x20) = uVar42;
  puVar2[0x28] = 0;
  lVar13 = local_110;
  EVar26 = SwiftUI::EnabledTextSelectability::init();
  FUN_1003b9f88();
  puVar18 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_textSelection
            (lVar31,lVar13,puVar10,local_108,EVar26.unknown,
             PTR___protocol_witness_table_for_SwiftUI_EnabledTextSelectability___SwiftUI_TextSelectability_in_SwiftUI_100522a80
            );
  (**(code **)(local_100 + 8))(lVar13,puVar18);
  puVar10 = &DAT_10055fda0;
  FUN_10002a29c(AVar34.unknown,&DAT_10055fda0,&DAT_100435830);
  AVar34 = SwiftUI::Alignment::get_leading(AVar34);
  AVar17.unknown = &DAT_10055fde0;
  FUN_100002f94(&DAT_10055fde0,&DAT_1004358b0);
  puVar3 = (undefined8 *)(lVar31 + *(int *)(AVar17.unknown + 0x24));
  *puVar3 = AVar34.unknown;
  puVar3[1] = puVar10;
  SwiftUI::Alignment::get_center(AVar17);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar10 = &DAT_10055fde8;
  FUN_100002f94(&DAT_10055fde8,&DAT_1004358b8);
  puVar3 = (undefined8 *)((long)dVar43 + (long)*(int *)(puVar10 + 0x24));
  puVar3[1] = uStack_b8;
  *puVar3 = local_c0;
  puVar3[3] = uStack_a8;
  puVar3[2] = local_b0;
  puVar3[5] = uStack_98;
  puVar3[4] = local_a0;
  return;
}

