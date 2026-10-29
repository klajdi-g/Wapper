// rea decompile_all
// name: FUN_1003ad26c
// address: 0x1003ad26c
// body: available
// range: 0x1003ad26c-0x1003ad53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ad26c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined *puVar4;
  Alignment AVar5;
  Alignment AVar6;
  State SVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  AppStorage AVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_210 [104];
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined *puStack_88;
  undefined *local_80;
  
  lVar3 = 0;
  FUN_1003afcec();
  lVar13 = *(long *)(lVar3 + -8);
  lVar3 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar6.unknown = auStack_210 + -(lVar3 + 0xfU & 0xfffffffffffffff0);
  AVar11.unknown = *(undefined **)(unaff_x20 + 0x38);
  SwiftUI::AppStorage::get_projectedValue(AVar11);
  FUN_100002f94(&DAT_10055fa00,&DAT_1004352b8);
  FUN_1003b124c();
  SwiftUI::TabView::_init((Binding<undefined>)&local_e0);
  FUN_100029504();
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_10053d1a0;
  _swift_allocObject(&DAT_10053d1a0,uVar12 + lVar3,uVar10 | 7);
  puVar8 = puVar4 + uVar12;
  FUN_100007e64(AVar6.unknown,puVar8,FUN_1003afcec);
  AVar5 = SwiftUI::Alignment::get_center(AVar6);
  AVar6.unknown = &DAT_10055f9b0;
  puVar9 = &DAT_100435290;
  FUN_100002f94();
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar6.unknown + 0x24));
  *puVar1 = FUN_1003b13a8;
  puVar1[1] = puVar4;
  puVar1[2] = AVar5.unknown;
  puVar1[3] = puVar8;
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  SwiftUI::AppStorage::get_wrappedValue(AVar11);
  uVar10 = local_e0;
  puVar4 = &DAT_1005568d0;
  FUN_100002f94(&DAT_1005568d0,&DAT_10042a800);
  _swift_initStaticObject();
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x48);
  local_e0 = CONCAT71(local_e0._1_7_,*(undefined1 *)(unaff_x20 + 0x40));
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  FUN_1003a7e2c(&local_1a8,uVar10,puVar4,local_150 & 0xff,FUN_1003ad96c,0);
  uStack_128 = uStack_180;
  local_130 = local_188;
  uStack_118 = uStack_170;
  uStack_120 = uStack_178;
  uStack_108 = uStack_160;
  local_110 = local_168;
  uStack_148 = uStack_1a0;
  local_150 = local_1a8;
  uStack_138 = uStack_190;
  uStack_140 = local_198;
  local_100 = local_158;
  puVar4 = &DAT_10055f998;
  puStack_f8 = AVar6.unknown;
  local_f0 = puVar9;
  FUN_100002f94(&DAT_10055f998,&DAT_100435288);
  puVar2 = (ulong *)(param_1 + *(int *)(puVar4 + 0x24));
  puVar2[9] = uStack_108;
  puVar2[8] = local_110;
  puVar2[0xb] = (ulong)puStack_f8;
  puVar2[10] = local_100;
  puVar2[0xc] = (ulong)local_f0;
  puVar2[1] = uStack_148;
  *puVar2 = local_150;
  puVar2[3] = uStack_138;
  puVar2[2] = uStack_140;
  puVar2[5] = uStack_128;
  puVar2[4] = local_130;
  puVar2[7] = uStack_118;
  puVar2[6] = uStack_120;
  uStack_d8 = uStack_1a0;
  local_e0 = local_1a8;
  uStack_c8 = uStack_190;
  local_d0 = local_198;
  uStack_a8 = uStack_170;
  local_b0 = uStack_178;
  uStack_98 = uStack_160;
  uStack_a0 = local_168;
  uStack_b8 = uStack_180;
  local_c0 = local_188;
  local_90 = local_158;
  puStack_88 = AVar6.unknown;
  local_80 = puVar9;
  FUN_1000087e4(&local_150,auStack_210,&DAT_10055f9f8,&DAT_1004352b0);
  FUN_10002a29c(&local_e0,&DAT_10055f9f8,&DAT_1004352b0);
  return;
}

