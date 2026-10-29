// rea decompile_all
// name: FUN_10007d8b8
// address: 0x10007d8b8
// body: available
// range: 0x10007d8b8-0x10007db2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007d8b8(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Alignment AVar3;
  undefined *puVar4;
  UnitPoint UVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auStack_280 [120];
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  AVar3 = SwiftUI::Alignment::get_topLeading(param_2);
  *param_1 = AVar3.unknown;
  param_1[1] = param_3;
  puVar4 = &DAT_10054f4a0;
  FUN_100002f94(&DAT_10054f4a0,&DAT_1004209f0);
  FUN_10007db2c((long)param_1 + (long)*(int *)(puVar4 + 0x2c),1);
  AVar3.unknown = (undefined *)0x0;
  FUN_100095ec0();
  dVar10 = *(double *)(unaff_x20 + *(int *)(AVar3.unknown + 0x14));
  SwiftUI::Alignment::get_center(AVar3);
  SwiftUI::_FrameLayout::_init((undefined *)(dVar10 * 152.0));
  UVar5.unknown = &DAT_10054f4a8;
  FUN_100002f94(&DAT_10054f4a8,&DAT_1004209f8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(UVar5.unknown + 0x24));
  puVar1[1] = uStack_188;
  *puVar1 = local_190;
  puVar1[3] = uStack_178;
  puVar1[2] = uStack_180;
  puVar1[5] = uStack_168;
  puVar1[4] = local_170;
  uVar7 = local_170;
  uVar9 = uStack_180;
  SwiftUI::UnitPoint::get_top(UVar5);
  puVar4 = &DAT_10054f4b0;
  FUN_100002f94(&DAT_10054f4b0,&DAT_100420a00);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = 0xbff0000000000000;
  *puVar1 = 0x3ff0000000000000;
  puVar1[2] = uVar7;
  puVar1[3] = uVar9;
  if (DAT_10054f470 != -1) {
    _swift_once(&DAT_10054f470,FUN_10007bf94);
  }
  dVar8 = DAT_10054f478 + DAT_10054f478;
  AVar3.unknown = &DAT_10054f4b8;
  puVar4 = &DAT_100420a08;
  FUN_100002f94();
  iVar2 = *(int *)(AVar3.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = dVar10 * dVar8;
  AVar3 = SwiftUI::Alignment::get_top(AVar3);
  FUN_100085968(&local_1f8);
  uStack_118 = uStack_1c0;
  local_120 = uStack_1c8;
  uStack_108 = uStack_1b0;
  uStack_110 = local_1b8;
  uStack_f8 = uStack_1a0;
  local_100 = uStack_1a8;
  local_f0 = local_198;
  uStack_138 = uStack_1e0;
  local_140 = uStack_1e8;
  uStack_128 = uStack_1d0;
  uStack_130 = local_1d8;
  uStack_148 = uStack_1f0;
  uStack_150 = local_1f8;
  puVar6 = &DAT_10054f4c0;
  local_208 = AVar3.unknown;
  puStack_200 = puVar4;
  local_160 = AVar3.unknown;
  puStack_158 = puVar4;
  FUN_100002f94(&DAT_10054f4c0,&DAT_100420a10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  puVar1[9] = uStack_1c0;
  puVar1[8] = uStack_1c8;
  puVar1[0xb] = uStack_1b0;
  puVar1[10] = local_1b8;
  puVar1[0xd] = uStack_1a0;
  puVar1[0xc] = uStack_1a8;
  puVar1[0xe] = local_198;
  puVar1[1] = puStack_200;
  *puVar1 = local_208;
  puVar1[3] = uStack_1f0;
  puVar1[2] = local_1f8;
  puVar1[5] = uStack_1e0;
  puVar1[4] = uStack_1e8;
  puVar1[7] = uStack_1d0;
  puVar1[6] = local_1d8;
  uStack_b8 = uStack_1e0;
  local_c0 = uStack_1e8;
  uStack_a8 = uStack_1d0;
  uStack_b0 = local_1d8;
  local_70 = local_198;
  uStack_88 = uStack_1b0;
  local_90 = local_1b8;
  uStack_78 = uStack_1a0;
  uStack_80 = uStack_1a8;
  uStack_98 = uStack_1c0;
  local_a0 = uStack_1c8;
  puStack_d8 = puStack_200;
  local_e0 = local_208;
  uStack_c8 = uStack_1f0;
  uStack_d0 = local_1f8;
  FUN_1000087e4(&local_160,auStack_280,&DAT_10054f4c8,&DAT_100420a18);
  FUN_10002a29c(&local_e0,&DAT_10054f4c8,&DAT_100420a18);
  puVar4 = &DAT_10054f438;
  FUN_100002f94(&DAT_10054f438,&DAT_1004209c0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24)) = 0;
  return;
}

