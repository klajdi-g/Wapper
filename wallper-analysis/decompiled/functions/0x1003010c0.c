// rea decompile_all
// name: FUN_1003010c0
// address: 0x1003010c0
// body: available
// range: 0x1003010c0-0x1003013af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003010c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  Alignment AVar6;
  undefined *puVar7;
  State SVar8;
  Material MVar9;
  Set SVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [7];
  char local_f9;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar5 = (undefined *)0x0;
  FUN_1003009dc();
  lVar16 = *(long *)(puVar5 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  AVar6.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = -(lVar15 + 0xfU & 0xfffffffffffffff0);
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *param_1 = AVar6.unknown;
  param_1[1] = param_3;
  puVar7 = &DAT_10055b6d0;
  puVar11 = &DAT_1004300b8;
  FUN_100002f94();
  AVar6.unknown = unaff_x20;
  FUN_1003013b0((long)param_1 + (long)*(int *)(puVar7 + 0x2c));
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *(undefined **)((long)auStack_110 + lVar4) = AVar6.unknown;
  *(undefined **)((long)auStack_110 + lVar4 + 8) = puVar11;
  auStack_118[lVar4] = 0;
  *(undefined8 *)((long)&uStack_120 + lVar4) = 0x7ff0000000000000;
  auStack_128[lVar4] = 1;
  *(undefined8 *)((long)&uStack_130 + lVar4) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar7 = &DAT_10055b6d8;
  FUN_100002f94(&DAT_10055b6d8,&DAT_1004300c0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  puVar1[9] = uStack_a0;
  puVar1[8] = local_a8;
  puVar1[0xb] = uStack_90;
  puVar1[10] = local_98;
  puVar1[0xd] = uStack_80;
  puVar1[0xc] = local_88;
  puVar1[1] = uStack_e0;
  *puVar1 = local_e8;
  puVar1[3] = uStack_d0;
  puVar1[2] = local_d8;
  puVar1[5] = uStack_c0;
  puVar1[4] = local_c8;
  puVar1[7] = uStack_b0;
  puVar1[6] = local_b8;
  uVar2 = unaff_x20[*(int *)(puVar5 + 0x2c)];
  uVar13 = *(undefined8 *)(unaff_x20 + *(int *)(puVar5 + 0x2c) + 8);
  SVar8.unknown = &DAT_10054ab50;
  local_f8 = uVar2;
  local_f0 = uVar13;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar17 = 0x3ff0000000000000;
  if (local_f9 == '\0') {
    uVar17 = 0;
  }
  puVar7 = &DAT_10055b6e0;
  FUN_100002f94(&DAT_10055b6e0,&DAT_1004300d0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24)) = uVar17;
  MVar9.unknown = &DAT_10055b6e8;
  FUN_100002f94(&DAT_10055b6e8,&DAT_1004300d8);
  iVar3 = *(int *)(MVar9.unknown + 0x24);
  MVar9 = SwiftUI::Material::get_ultraThin(MVar9);
  SVar10 = SwiftUI::Edge::Set::get_all(MVar9.unknown);
  puVar7 = &DAT_10054a658;
  FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
  *(char *)((long)param_1 + (long)*(int *)(puVar7 + 0x24) + (long)iVar3) = (char)SVar10.unknown;
  local_f8 = uVar2;
  local_f0 = uVar13;
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar13 = 0;
  if (local_f9 == '\0') {
    uVar13 = 0x4032000000000000;
  }
  puVar7 = &DAT_10055b6f0;
  FUN_100002f94(&DAT_10055b6f0,&DAT_1004300e8);
  iVar3 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar13;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = 0;
  FUN_100029504();
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100539bc8;
  _swift_allocObject(&DAT_100539bc8,uVar14 + lVar15,uVar12 | 7);
  FUN_100007e64(auStack_100 + lVar4,puVar7 + uVar14,FUN_1003009dc);
  puVar11 = &DAT_10055b6f8;
  FUN_100002f94(&DAT_10055b6f8,&DAT_1004300f0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar11 + 0x24));
  *puVar1 = FUN_100301cf8;
  puVar1[1] = puVar7;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar7 = &DAT_10055b700;
  FUN_100002f94(&DAT_10055b700,&DAT_1004300f8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = FUN_100301ca4;
  param_1[3] = 0;
  return;
}

