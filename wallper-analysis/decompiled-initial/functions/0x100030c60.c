// rea decompile_all
// name: FUN_100030c60
// address: 0x100030c60
// body: available
// range: 0x100030c60-0x100030ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100030c60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  UnitPoint UVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 *local_260;
  undefined1 auStack_258 [88];
  code *local_200;
  undefined *puStack_1f8;
  undefined2 local_1f0;
  uint6 uStack_1ee;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  code *local_1c8;
  undefined *puStack_1c0;
  undefined2 local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  code *local_190;
  undefined *puStack_188;
  long lStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  code *pcStack_148;
  undefined *local_140;
  code *local_130;
  undefined *puStack_128;
  long lStack_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  code *pcStack_e8;
  undefined *local_e0;
  code *local_d0;
  undefined *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  
  lVar3 = 0;
  local_260 = param_1;
  FUN_100038a80();
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar10 = auStack_258 + (-8 - (lVar8 + 0xfU & 0xfffffffffffffff0));
  FUN_100029504();
  uVar7 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1005261d8;
  _swift_allocObject(&DAT_1005261d8,uVar11 + lVar8,uVar7 | 7);
  UVar5.unknown = puVar10;
  FUN_100007e64(puVar10,puVar4 + uVar11,FUN_100038a80);
  dVar12 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x24));
  local_1d0 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28));
  dVar13 = *(double *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x14)) /
           *(double *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c));
  dVar14 = (double)NEON_fminnm(dVar13,0x3ff0000000000000);
  if (dVar13 < 0.0) {
    dVar14 = 0.0;
  }
  dVar12 = dVar12 - (dVar12 - local_1d0) * dVar14;
  dVar13 = dVar12;
  if (dVar12 < local_1d0) {
    dVar13 = local_1d0;
  }
  SwiftUI::UnitPoint::get_center(UVar5);
  FUN_100029504();
  puVar6 = &DAT_100526200;
  _swift_allocObject(&DAT_100526200,uVar11 + lVar8,uVar7 | 7);
  FUN_100007e64(puVar10,puVar6 + uVar11,FUN_100038a80);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  local_200 = FUN_100038eec;
  local_1f0 = 0;
  lStack_c0 = (ulong)uStack_1ee << 0x10;
  local_d0 = FUN_100038eec;
  local_1c8 = FUN_100038eec;
  local_1b8 = 0;
  puStack_1f8 = puVar4;
  local_1e8 = dVar13;
  local_1e0 = dVar13;
  dStack_1d8 = dVar12;
  puStack_1c0 = puVar4;
  local_1b0 = dVar13;
  dStack_1a8 = dVar13;
  local_1a0 = dVar12;
  dStack_198 = local_1d0;
  puStack_c8 = puVar4;
  dStack_b8 = dVar13;
  local_b0 = dVar13;
  dStack_a8 = dVar12;
  local_a0 = local_1d0;
  FUN_1000087e4(&local_200,&local_130,&DAT_10054bcf0,&DAT_10041d420);
  _swift_bridgeObjectRetain(uVar2);
  FUN_10002a29c(&local_1c8,&DAT_10054bcf0,&DAT_10041d420);
  puStack_188 = puStack_c8;
  local_190 = local_d0;
  dStack_178 = dStack_b8;
  lStack_180 = lStack_c0;
  dStack_168 = dStack_a8;
  local_170 = local_b0;
  local_160 = local_a0;
  pcStack_148 = FUN_1000390a0;
  puStack_128 = puStack_c8;
  local_130 = local_d0;
  dStack_118 = dStack_b8;
  lStack_120 = lStack_c0;
  dStack_108 = dStack_a8;
  local_110 = local_b0;
  local_100 = local_a0;
  pcStack_e8 = FUN_1000390a0;
  uStack_158 = uVar1;
  local_150 = uVar2;
  local_140 = puVar6;
  uStack_f8 = uVar1;
  local_f0 = uVar2;
  local_e0 = puVar6;
  FUN_1000087e4(&local_190,auStack_258,&DAT_10054bcf8,&DAT_10041d428);
  FUN_10002a29c(&local_130,&DAT_10054bcf8,&DAT_10041d428);
  local_260[5] = dStack_168;
  local_260[4] = local_170;
  local_260[7] = uStack_158;
  local_260[6] = local_160;
  local_260[9] = pcStack_148;
  local_260[8] = local_150;
  local_260[10] = local_140;
  local_260[1] = puStack_188;
  *local_260 = local_190;
  local_260[3] = dStack_178;
  local_260[2] = lStack_180;
  return;
}

