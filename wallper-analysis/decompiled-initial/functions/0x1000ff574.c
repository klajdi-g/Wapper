// rea decompile_all
// name: FUN_1000ff574
// address: 0x1000ff574
// body: available
// range: 0x1000ff574-0x1000ffcdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ff8f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ff574(long param_1,Alignment param_2,char *param_3,void *param_4,Color param_5)

{
  double *pdVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  String systemName;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ResizingMode RVar8;
  RoundedCornerStyle RVar9;
  undefined *puVar10;
  RoundedRectangle RVar11;
  undefined *puVar12;
  Alignment AVar13;
  Color CVar14;
  Alignment AVar15;
  Color CVar16;
  _Inset _Var17;
  Image IVar18;
  EdgeInsets capInsets;
  ulong uVar19;
  void *pvVar20;
  Image IVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  double *pdVar23;
  code *pcVar24;
  ulong uVar25;
  double *pdVar26;
  double dVar27;
  char *local_160 [3];
  void *local_148;
  EdgeInsets local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_160[2] = param_3;
  local_148 = param_4;
  local_108 = param_1;
  RVar8 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_130 = (undefined *)CONCAT71((int7)((ulong)param_3 >> 8),RVar8.value);
  local_138 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  puVar12 = (undefined *)((long)local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100552908;
  local_140.unknown = puVar12;
  FUN_100002f94(&DAT_100552908,&DAT_100424e58);
  local_118 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar22 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  local_128 = lVar22;
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar11.unknown + -8) + 0x40));
  pdVar26 = (double *)(lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100552910;
  FUN_100002f94(&DAT_100552910,&DAT_100424e60);
  local_160[1] = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar22 = (long)pdVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pdVar23 = (double *)(lVar22 - extraout_x12_00);
  dVar27 = (double)param_2.unknown * 0.3;
  iVar4 = *(int *)(RVar11.unknown + 0x14);
  uVar25 = (ulong)*(uint *)
                   PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar9 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar22 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar9.value);
  pcVar24 = *(code **)(*(long *)(lVar22 + -8) + 0x68);
  (*pcVar24)((long)pdVar23 + (long)iVar4,uVar25,lVar22);
  *pdVar23 = dVar27;
  pdVar23[1] = dVar27;
  puVar10 = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  local_160[0] = param_5.unknown;
  *(undefined **)((long)pdVar23 + (long)*(int *)(puVar10 + 0x34)) = param_5.unknown;
  *(undefined2 *)((long)pdVar23 + (long)*(int *)(puVar10 + 0x38)) = 0x100;
  puVar12 = &DAT_100552918;
  FUN_100002f94(&DAT_100552918,&DAT_100424e68);
  pdVar1 = (double *)((long)pdVar23 + (long)*(int *)(puVar12 + 0x24));
  uVar19 = uVar25;
  (*pcVar24)((long)pdVar1 + (long)*(int *)(RVar11.unknown + 0x14),uVar25,lVar22);
  *pdVar1 = dVar27;
  pdVar1[1] = dVar27;
  _swift_retain();
  AVar13.unknown = (undefined *)SwiftUI::Color::get_black(param_5);
  CVar14 = SwiftUI::Color::opacity(0.18,(Color)AVar13.unknown);
  _swift_release();
  *(undefined **)((long)pdVar1 + (long)*(int *)(puVar10 + 0x34)) = CVar14.unknown;
  *(undefined2 *)((long)pdVar1 + (long)*(int *)(puVar10 + 0x38)) = 0x100;
  AVar15 = SwiftUI::Alignment::get_center(AVar13);
  AVar13.unknown = &DAT_10054b158;
  FUN_100002f94(&DAT_10054b158,&DAT_10041c390);
  iVar4 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)((long)pdVar1 + (long)iVar4) = AVar15.unknown;
  ((undefined8 *)((long)pdVar1 + (long)iVar4))[1] = uVar19;
  SwiftUI::Alignment::get_center(AVar13);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar10 = &DAT_100552920;
  FUN_100002f94(&DAT_100552920,&DAT_100424e70);
  puVar2 = (undefined8 *)((long)pdVar23 + (long)*(int *)(puVar10 + 0x24));
  puVar2[1] = uStack_f8;
  *puVar2 = local_100;
  puVar2[3] = uStack_e8;
  puVar2[2] = uStack_f0;
  puVar2[5] = uStack_d8;
  puVar2[4] = local_e0;
  CVar14.unknown = (undefined *)((long)pdVar26 + (long)*(int *)(RVar11.unknown + 0x14));
  (*pcVar24)(CVar14.unknown,uVar25,lVar22);
  *pdVar26 = dVar27;
  pdVar26[1] = dVar27;
  CVar14 = SwiftUI::Color::get_white(CVar14);
  CVar16 = SwiftUI::Color::opacity(0.1,CVar14);
  _swift_release(CVar14.unknown);
  SwiftUI::StrokeStyle::init
            (&local_d0,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar10 = &DAT_100552928;
  FUN_100002f94(&DAT_100552928,&DAT_100424e78);
  lVar22 = (long)pdVar23 + (long)*(int *)(puVar10 + 0x24);
  FUN_1000d77a0(pdVar26,lVar22);
  dVar27 = local_d0 * 0.5;
  puVar10 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar3 = lVar22 + *(int *)(puVar10 + 0x44);
  FUN_1000d77a0(pdVar26,lVar3);
  _Var17 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar3 + *(int *)(_Var17.unknown + 0x14)) = dVar27;
  puVar10 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar1 = (double *)(lVar3 + *(int *)(puVar10 + 0x24));
  pdVar1[1] = dStack_c8;
  *pdVar1 = local_d0;
  pdVar1[3] = dStack_b8;
  pdVar1[2] = dStack_c0;
  pdVar1[4] = local_b0;
  AVar13.unknown = &DAT_100552098;
  puVar10 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar3 + *(int *)(AVar13.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)(lVar3 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar15 = SwiftUI::Alignment::get_center(AVar13);
  FUN_100100e5c(pdVar26);
  AVar13.unknown = &DAT_1005520a0;
  puVar12 = &DAT_100424360;
  FUN_100002f94();
  iVar4 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)(lVar3 + iVar4) = AVar15.unknown;
  ((undefined8 *)(lVar3 + iVar4))[1] = puVar10;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar10 = &DAT_1005520a8;
  FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar4 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(lVar22 + iVar4) = AVar13.unknown;
  ((undefined8 *)(lVar22 + iVar4))[1] = puVar12;
  pvVar5 = local_148;
  iVar4 = *(int *)(local_160[1] + 0x24);
  systemName.bridgeObject = local_148;
  systemName.str = local_160[2];
  AVar13.unknown = local_160[2];
  pvVar20 = local_148;
  FUN_1000ffcdc((long)pdVar23 + (long)iVar4,param_2.unknown,local_160[2],local_148,local_160[0]);
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar10 = &DAT_100552930;
  FUN_100002f94(&DAT_100552930,&DAT_100424e80);
  puVar2 = (undefined8 *)((long)pdVar23 + (long)iVar4 + (long)*(int *)(puVar10 + 0x24));
  *puVar2 = AVar13.unknown;
  puVar2[1] = pvVar20;
  _swift_bridgeObjectRetain(pvVar5);
  IVar18 = SwiftUI::Image::init(systemName);
  puVar10 = local_130;
  lVar22 = local_138;
  capInsets.unknown = local_140.unknown;
  IVar21.unknown = local_130;
  (**(code **)(local_138 + 0x68))
            (local_140.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
            );
  CVar14.unknown =
       (undefined *)SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar18.unknown,IVar21)
  ;
  _swift_release(IVar18.unknown);
  (**(code **)(lVar22 + 8))(capInsets.unknown,puVar10);
  uStack_a0 = 0;
  local_98 = 1;
  local_a8 = CVar14.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)capInsets.unknown);
  FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
  FUN_1000b2e98();
  lVar22 = local_128;
  (extension_SwiftUI)::SwiftUI::View::_fontWeight();
  _swift_release();
  CVar14 = SwiftUI::Color::get_white(CVar14);
  AVar13.unknown = &DAT_100552938;
  FUN_100002f94(&DAT_100552938,&DAT_100424e88);
  *(undefined **)(lVar22 + *(int *)(AVar13.unknown + 0x24)) = CVar14.unknown;
  SwiftUI::Alignment::get_center(AVar13);
  SwiftUI::_FrameLayout::_init((undefined *)(param_2.unknown * 0.52));
  lVar3 = local_120;
  puVar2 = (undefined8 *)(lVar22 + *(int *)(local_118 + 0x24));
  puVar2[1] = uStack_a0;
  *puVar2 = local_a8;
  puVar2[3] = uStack_90;
  puVar2[2] = CONCAT62(uStack_96,local_98);
  puVar2[5] = uStack_80;
  puVar2[4] = local_88;
  FUN_1000087e4(pdVar23,local_120,&DAT_100552910,&DAT_100424e60);
  lVar6 = local_110;
  FUN_1000087e4(lVar22,local_110,&DAT_100552908,&DAT_100424e58);
  lVar7 = local_108;
  FUN_1000087e4(lVar3,local_108,&DAT_100552910,&DAT_100424e60);
  puVar10 = &DAT_100552940;
  FUN_100002f94(&DAT_100552940,&DAT_100424e90);
  FUN_1000087e4(lVar6,lVar7 + *(int *)(puVar10 + 0x30),&DAT_100552908,&DAT_100424e58);
  FUN_10002a29c(lVar22,&DAT_100552908,&DAT_100424e58);
  FUN_10002a29c(pdVar23,&DAT_100552910,&DAT_100424e60);
  FUN_10002a29c(lVar6,&DAT_100552908,&DAT_100424e58);
  FUN_10002a29c(lVar3,&DAT_100552910,&DAT_100424e60);
  return;
}

