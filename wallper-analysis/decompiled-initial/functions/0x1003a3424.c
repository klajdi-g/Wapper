// rea decompile_all
// name: FUN_1003a3424
// address: 0x1003a3424
// body: available
// range: 0x1003a3424-0x1003a3827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a35f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a3424(double *param_1)

{
  long lVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  Design DVar7;
  undefined *puVar8;
  RoundedRectangle RVar9;
  RoundedRectangle RVar10;
  Color CVar12;
  Color CVar13;
  _Inset _Var14;
  Alignment AVar15;
  Alignment AVar16;
  Image IVar17;
  Font FVar18;
  undefined *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar20;
  long lVar21;
  double *pdVar22;
  CGFloat size;
  undefined1 auVar23 [16];
  double dVar24;
  String systemName;
  double local_b0 [5];
  double local_88;
  double dStack_80;
  double local_78;
  long lVar11;
  
  puVar8 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)local_b0 - extraout_x8;
  RVar9 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  puVar19 = PTR_typeMetadataAccessor_1005223a8;
  RVar10 = RVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar9.unknown + -8) + 0x40));
  pdVar22 = (double *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  iVar5 = *(int *)(RVar10.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar11 = CONCAT71((int7)((ulong)RVar10.unknown >> 8),RVar6.value);
  pcVar20 = *(code **)(*(long *)(lVar11 + -8) + 0x68);
  CVar12.unknown = (undefined *)((long)param_1 + (long)iVar5);
  (*pcVar20)(CVar12.unknown,uVar4,lVar11);
  auVar23 = NEON_fmov(0x4028000000000000,8);
  local_b0[1] = auVar23._8_8_;
  local_b0[0] = auVar23._0_8_;
  param_1[1] = local_b0[1];
  *param_1 = local_b0[0];
  CVar12 = SwiftUI::Color::get_white(CVar12);
  CVar13 = SwiftUI::Color::opacity(0.05,CVar12);
  _swift_release(CVar12.unknown);
  puVar8 = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  *(undefined **)((long)param_1 + (long)*(int *)(puVar8 + 0x34)) = CVar13.unknown;
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar8 + 0x38)) = 0x100;
  CVar12.unknown = (undefined *)((long)pdVar22 + (long)*(int *)(RVar9.unknown + 0x14));
  (*pcVar20)(CVar12.unknown,uVar4,lVar11);
  pdVar22[1] = local_b0[1];
  *pdVar22 = local_b0[0];
  CVar12 = SwiftUI::Color::get_white(CVar12);
  CVar13 = SwiftUI::Color::opacity(0.15,CVar12);
  _swift_release(CVar12.unknown);
  puVar8 = &DAT_10055f470;
  FUN_100002f94(&DAT_10055f470,&DAT_100434c00);
  lVar11 = (long)param_1 + (long)*(int *)(puVar8 + 0x24);
  puVar8 = &DAT_100556a58;
  FUN_100002f94(&DAT_100556a58,&DAT_10042abe8);
  _swift_initStaticObject();
  SwiftUI::StrokeStyle::init(local_b0 + 3,0x3ff0000000000000,0x4024000000000000,0,puVar8,0,puVar8);
  FUN_100029504(pdVar22,lVar11,puVar19);
  dVar24 = local_b0[3] * 0.5;
  puVar8 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar1 = lVar11 + *(int *)(puVar8 + 0x44);
  FUN_100029504(pdVar22,lVar1,puVar19);
  _Var14 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar1 + *(int *)(_Var14.unknown + 0x14)) = dVar24;
  puVar8 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar2 = (double *)(lVar1 + *(int *)(puVar8 + 0x24));
  pdVar2[1] = local_b0[4];
  *pdVar2 = local_b0[3];
  pdVar2[3] = dStack_80;
  pdVar2[2] = local_88;
  pdVar2[4] = local_78;
  AVar16.unknown = &DAT_100552098;
  puVar8 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar1 + *(int *)(AVar16.unknown + 0x34)) = CVar13.unknown;
  *(undefined2 *)(lVar1 + *(int *)(AVar16.unknown + 0x38)) = 0x100;
  AVar15 = SwiftUI::Alignment::get_center(AVar16);
  FUN_100029548(pdVar22,puVar19);
  AVar16.unknown = &DAT_1005520a0;
  puVar19 = &DAT_100424360;
  FUN_100002f94();
  iVar5 = *(int *)(AVar16.unknown + 0x24);
  *(undefined8 *)(lVar1 + iVar5) = AVar15.unknown;
  ((undefined8 *)(lVar1 + iVar5))[1] = puVar8;
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  puVar8 = &DAT_1005520a8;
  size.unknown = (undefined *)FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar5 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(lVar11 + iVar5) = AVar16.unknown;
  ((undefined8 *)(lVar11 + iVar5))[1] = puVar19;
  systemName.bridgeObject = (void *)0xe400000000000000;
  systemName.str = (char *)0x73756c70;
  IVar17 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_light((Weight)IVar17.unknown);
  DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar11 = CONCAT71((int7)((ulong)IVar17.unknown >> 8),DVar7.value);
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar21,1,1,lVar11);
  FVar18 = SwiftUI::Font::_system(size,(Font)0x0);
  puVar8 = &DAT_10054a828;
  FUN_10002a29c(lVar21,&DAT_10054a828,&DAT_10041e3c0);
  CVar12.unknown = &DAT_100434c08;
  _swift_getKeyPath();
  AVar16.unknown = (undefined *)SwiftUI::Color::get_white(CVar12);
  CVar13 = SwiftUI::Color::opacity(0.5,(Color)AVar16.unknown);
  _swift_release();
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  puVar19 = &DAT_10055f4b0;
  FUN_100002f94(&DAT_10055f4b0,&DAT_100434c38);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar19 + 0x24));
  *puVar3 = IVar17.unknown;
  puVar3[1] = CVar12.unknown;
  puVar3[2] = FVar18.unknown;
  puVar3[3] = CVar13.unknown;
  puVar3[4] = AVar16.unknown;
  puVar3[5] = puVar8;
  puVar8 = &DAT_10055f4b8;
  FUN_100002f94(&DAT_10055f4b8,&DAT_100434c40);
  iVar5 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = 0x3ff999999999999a;
  *(undefined2 *)((undefined8 *)((long)param_1 + (long)iVar5) + 1) = 0;
  return;
}

