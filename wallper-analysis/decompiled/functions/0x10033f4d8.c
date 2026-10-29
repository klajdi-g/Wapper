// rea decompile_all
// name: FUN_10033f4d8
// address: 0x10033f4d8
// body: available
// range: 0x10033f4d8-0x10033facf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033f868 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033f4d8(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  RoundedRectangle RVar8;
  State SVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  Alignment AVar13;
  undefined *puVar14;
  Alignment AVar15;
  Color CVar16;
  Color CVar17;
  _Inset _Var18;
  long extraout_x8;
  double dVar19;
  long lVar20;
  undefined8 uVar21;
  long local_240;
  char local_231;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 local_160;
  undefined6 uStack_15e;
  undefined2 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  RVar8 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar8.unknown + -8) + 0x40));
  lVar20 = (long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  uVar21 = *(undefined8 *)(param_2 + 8);
  bVar4 = param_2[1];
  if (bVar4 == 1) {
    _swift_retain(uVar21);
  }
  else {
    uStack_148 = *(undefined8 *)(param_2 + 0x28);
    local_150 = CONCAT71(local_150._1_7_,param_2[0x20]);
    _swift_retain(uVar21);
    SVar9.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar9);
    if ((char)local_1c0 != '\x01') {
      uVar7 = 0;
      goto LAB_10033f5b8;
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  FUN_1003280cc(uVar10,param_2[0x38]);
  uVar7 = (uint)uVar10;
LAB_10033f5b8:
  FUN_1000b0a74(&local_e0,uVar3,uVar21,uVar7 & 1);
  lVar11 = 0;
  FUN_100341c48();
  lVar11 = (long)*(int *)(lVar11 + 0x28);
  uStack_188 = uStack_a8;
  local_190 = uStack_b0;
  uStack_178 = uStack_98;
  uStack_180 = local_a0;
  uStack_168 = (undefined2)uStack_88;
  uStack_166 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_170 = uStack_90;
  uStack_1b8 = uStack_d8;
  local_1c0 = local_e0;
  uStack_1a8 = uStack_c8;
  local_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = local_c0;
  local_160 = 0x999a;
  uStack_15e = 0x3ff999999999;
  local_158 = 0;
  puVar12 = &DAT_10055d018;
  FUN_100002f94(&DAT_10055d018,&DAT_100432620);
  puVar6 = PTR_typeMetadataAccessor_1005223a8;
  iVar5 = *(int *)(puVar12 + 0x24);
  FUN_100029504(param_2 + lVar11,(long)param_1 + (long)iVar5,PTR_typeMetadataAccessor_1005223a8);
  puVar12 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)param_1 + (long)iVar5 + (long)*(int *)(puVar12 + 0x24)) = 0x100;
  param_1[9] = uStack_178;
  param_1[8] = uStack_180;
  param_1[0xb] = CONCAT62(uStack_166,uStack_168);
  param_1[10] = local_170;
  *(ulong *)((long)param_1 + 0x62) = CONCAT26(local_158,uStack_15e);
  *(ulong *)((long)param_1 + 0x5a) = CONCAT26(local_160,uStack_166);
  param_1[1] = uStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = local_1b0;
  param_1[5] = uStack_198;
  param_1[4] = uStack_1a0;
  param_1[7] = uStack_188;
  param_1[6] = local_190;
  uStack_148 = uStack_d8;
  local_150 = local_e0;
  uStack_138 = uStack_c8;
  uStack_140 = uStack_d0;
  uStack_108 = uStack_98;
  local_110 = local_a0;
  uStack_f8 = uStack_88;
  uStack_100 = uStack_90;
  uStack_128 = uStack_b8;
  local_130 = local_c0;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  local_f0 = 0x3ff999999999999a;
  local_e8 = 0;
  puVar12 = &DAT_10055d028;
  FUN_1000087e4(&local_1c0,&local_230,&DAT_10055d028,&DAT_100432628);
  AVar15.unknown = (undefined *)&local_150;
  FUN_10002a29c(AVar15.unknown,&DAT_10055d028,&DAT_100432628);
  AVar13 = SwiftUI::Alignment::get_bottomLeading(AVar15);
  puVar14 = &DAT_10055d008;
  FUN_100002f94(&DAT_10055d008,&DAT_100432618);
  iVar5 = *(int *)(puVar14 + 0x24);
  FUN_10033fad0((long)param_1 + (long)iVar5,param_2);
  AVar15.unknown = &DAT_10055d040;
  puVar14 = &DAT_100432630;
  FUN_100002f94();
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5 + (long)*(int *)(AVar15.unknown + 0x24));
  *puVar1 = AVar13.unknown;
  puVar1[1] = puVar12;
  AVar15 = SwiftUI::Alignment::get_topTrailing(AVar15);
  puVar12 = &DAT_10055cff8;
  FUN_100002f94(&DAT_10055cff8,&DAT_100432610);
  iVar5 = *(int *)(puVar12 + 0x24);
  FUN_10033fd78((long)param_1 + (long)iVar5,param_2);
  puVar12 = &DAT_10055d050;
  FUN_100002f94(&DAT_10055d050,&DAT_100432638);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5 + (long)*(int *)(puVar12 + 0x24));
  *puVar1 = AVar15.unknown;
  puVar1[1] = puVar14;
  CVar16.unknown = param_2 + lVar11;
  local_240 = lVar11;
  FUN_100029504(CVar16.unknown,lVar20,puVar6);
  CVar16 = SwiftUI::Color::get_white(CVar16);
  if ((bVar4 & 1) == 0) {
    local_230 = param_2[0x20];
    uStack_228 = *(undefined8 *)(param_2 + 0x28);
    SVar9.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar9);
    dVar19 = 0.28;
    if (local_231 == '\0') {
      dVar19 = 0.1;
    }
    uVar21 = 0x3ff0000000000000;
  }
  else {
    uVar21 = 0x4000000000000000;
    dVar19 = 0.9;
  }
  CVar17 = SwiftUI::Color::opacity(dVar19,CVar16);
  _swift_release(CVar16.unknown);
  puVar12 = &DAT_10055cfe8;
  FUN_100002f94(&DAT_10055cfe8,&DAT_100432608);
  lVar11 = (long)param_1 + (long)*(int *)(puVar12 + 0x24);
  SwiftUI::StrokeStyle::init
            (&local_230,uVar21,0x4024000000000000,0,puVar12,0,PTR___swiftEmptyArrayStorage_100524190
            );
  puVar6 = PTR_typeMetadataAccessor_1005223a8;
  FUN_100029504(lVar20,lVar11,PTR_typeMetadataAccessor_1005223a8);
  dVar19 = (double)CONCAT71(uStack_22f,local_230);
  puVar12 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar2 = lVar11 + *(int *)(puVar12 + 0x44);
  FUN_100029504(lVar20,lVar2,puVar6);
  _Var18 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar2 + *(int *)(_Var18.unknown + 0x14)) = dVar19 * 0.5;
  puVar12 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  puVar1 = (undefined8 *)(lVar2 + *(int *)(puVar12 + 0x24));
  puVar1[1] = uStack_228;
  *puVar1 = CONCAT71(uStack_22f,local_230);
  puVar1[3] = uStack_218;
  puVar1[2] = uStack_220;
  puVar1[4] = local_210;
  AVar15.unknown = &DAT_100552098;
  puVar12 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar2 + *(int *)(AVar15.unknown + 0x34)) = CVar17.unknown;
  *(undefined2 *)(lVar2 + *(int *)(AVar15.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar15);
  FUN_100029548(lVar20,puVar6);
  AVar15.unknown = &DAT_1005520a0;
  puVar14 = &DAT_100424360;
  FUN_100002f94();
  iVar5 = *(int *)(AVar15.unknown + 0x24);
  *(undefined8 *)(lVar2 + iVar5) = AVar13.unknown;
  ((undefined8 *)(lVar2 + iVar5))[1] = puVar12;
  AVar15 = SwiftUI::Alignment::get_center(AVar15);
  puVar12 = &DAT_1005520a8;
  FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar5 = *(int *)(puVar12 + 0x24);
  *(undefined8 *)(lVar11 + iVar5) = AVar15.unknown;
  ((undefined8 *)(lVar11 + iVar5))[1] = puVar14;
  puVar12 = &DAT_10055cfd8;
  FUN_100002f94(&DAT_10055cfd8,&DAT_100432600);
  lVar11 = local_240;
  iVar5 = *(int *)(puVar12 + 0x24);
  FUN_100029504(param_2 + local_240,(long)param_1 + (long)iVar5,puVar6);
  CVar16.unknown = &DAT_10054ad40;
  FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
  *(undefined1 *)((long)param_1 + (long)iVar5 + (long)*(int *)(CVar16.unknown + 0x24)) = 0;
  CVar17 = SwiftUI::Color::get_black(CVar16);
  puVar12 = &DAT_10055cfc0;
  FUN_100002f94(&DAT_10055cfc0,&DAT_1004325f8);
  lVar20 = (long)param_1 + (long)*(int *)(puVar12 + 0x24);
  FUN_100029504(param_2 + lVar11,lVar20,puVar6);
  CVar16.unknown = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  *(undefined **)(lVar20 + *(int *)(CVar16.unknown + 0x34)) = CVar17.unknown;
  *(undefined2 *)(lVar20 + *(int *)(CVar16.unknown + 0x38)) = 0x100;
  CVar16 = SwiftUI::Color::get_black(CVar16);
  CVar17 = SwiftUI::Color::opacity(0.35,CVar16);
  _swift_release(CVar16.unknown);
  AVar15.unknown = &DAT_10055d078;
  puVar12 = &DAT_100432650;
  FUN_100002f94();
  puVar1 = (undefined8 *)(lVar20 + *(int *)(AVar15.unknown + 0x24));
  *puVar1 = CVar17.unknown;
  puVar1[2] = 0;
  puVar1[1] = 0x4038000000000000;
  puVar1[3] = 0x4028000000000000;
  AVar15 = SwiftUI::Alignment::get_center(AVar15);
  puVar14 = &DAT_10055d060;
  FUN_100002f94(&DAT_10055d060,&DAT_100432640);
  iVar5 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(lVar20 + iVar5) = AVar15.unknown;
  ((undefined8 *)(lVar20 + iVar5))[1] = puVar12;
  return;
}

