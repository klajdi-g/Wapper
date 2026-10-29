// rea decompile_all
// name: FUN_100304d88
// address: 0x100304d88
// body: available
// range: 0x100304d88-0x1003050b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100304d88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  Alignment AVar5;
  undefined *puVar6;
  State SVar7;
  Animation AVar8;
  undefined *unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_c0 [15];
  char local_b1;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar4 = (undefined *)0x0;
  FUN_10030a830();
  lVar13 = *(long *)(puVar4 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  AVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  *param_1 = AVar5.unknown;
  param_1[1] = param_3;
  puVar6 = &DAT_10055ba60;
  FUN_100002f94(&DAT_10055ba60,&DAT_100430668);
  AVar5.unknown = unaff_x20;
  FUN_1003050b8((long)param_1 + (long)*(int *)(puVar6 + 0x2c));
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar6 = &DAT_10055ba68;
  FUN_100002f94(&DAT_10055ba68,&DAT_100430670);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  uVar2 = unaff_x20[*(int *)(puVar4 + 0x18)];
  uVar9 = *(undefined8 *)(unaff_x20 + *(int *)(puVar4 + 0x18) + 8);
  SVar7.unknown = &DAT_10054ab50;
  local_b0 = uVar2;
  local_a8 = uVar9;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  uVar14 = 0x3ff0000000000000;
  if (local_b1 == '\0') {
    uVar14 = 0;
  }
  puVar6 = &DAT_10055ba70;
  FUN_100002f94(&DAT_10055ba70,&DAT_100430678);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24)) = uVar14;
  local_b0 = uVar2;
  local_a8 = uVar9;
  SwiftUI::State::get_wrappedValue(SVar7);
  uVar14 = 0;
  if (local_b1 == '\0') {
    uVar14 = 0x4032000000000000;
  }
  AVar8.unknown = &DAT_10055ba78;
  FUN_100002f94(&DAT_10055ba78,&DAT_100430680);
  iVar3 = *(int *)(AVar8.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar14;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = 0;
  AVar8 = SwiftUI::Animation::spring(0.6,0.9,0.0,AVar8);
  local_b0 = uVar2;
  local_a8 = uVar9;
  SwiftUI::State::get_wrappedValue(SVar7);
  puVar6 = &DAT_10055ba80;
  FUN_100002f94(&DAT_10055ba80,&DAT_100430688);
  iVar3 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar8.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = local_b1;
  FUN_100029504();
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100539f30;
  _swift_allocObject(&DAT_100539f30,uVar12 + lVar11,uVar10 | 7);
  FUN_100007e64(auStack_c0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar12,FUN_10030a830);
  puVar4 = &DAT_10055ba88;
  FUN_100002f94(&DAT_10055ba88,&DAT_100430690);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = FUN_10030c374;
  puVar1[1] = puVar6;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_100029504();
  puVar6 = &DAT_100539f58;
  _swift_allocObject(&DAT_100539f58,uVar12 + lVar11,uVar10 | 7);
  FUN_100007e64(auStack_c0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar12,FUN_10030a830);
  puVar4 = &DAT_10055ba90;
  FUN_100002f94(&DAT_10055ba90,&DAT_100430698);
  iVar3 = *(int *)(puVar4 + 0x24);
  FUN_1000087e4();
  puVar4 = &DAT_100552558;
  FUN_100002f94(&DAT_100552558,&DAT_1004306a0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24) + (long)iVar3);
  *param_1 = FUN_10030c448;
  param_1[1] = puVar6;
  return;
}

