// rea decompile_all
// name: FUN_1000dabe8
// address: 0x1000dabe8
// body: available
// range: 0x1000dabe8-0x1000dae43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dabe8(long param_1)

{
  int iVar1;
  long lVar2;
  Alignment AVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  State SVar6;
  State SVar7;
  Animation AVar8;
  Animation AVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 local_b0 [2];
  undefined1 auStack_a0 [15];
  undefined1 local_91;
  Alignment local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  HVar4.unknown = &DAT_100551728;
  FUN_100002f94(&DAT_100551728,&DAT_1004235a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(HVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar10 = (undefined8 *)((long)local_b0 + lVar2);
  HVar4 = SwiftUI::HorizontalAlignment::get_center(HVar4);
  *puVar10 = HVar4.unknown;
  *(undefined8 *)(auStack_a0 + lVar2 + -8) = 0;
  auStack_a0[lVar2] = 1;
  puVar5 = &DAT_100551730;
  FUN_100002f94(&DAT_100551730,&DAT_1004235a8);
  FUN_1000dbbd4((long)puVar10 + (long)*(int *)(puVar5 + 0x2c));
  FUN_1000d89a8(param_1,0x4040000000000000);
  FUN_10002a29c(puVar10,&DAT_100551728,&DAT_1004235a0);
  local_b0[1] = *(undefined8 *)(unaff_x20 + 0x78);
  local_b0[0] = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
  local_80 = *(undefined8 *)(unaff_x20 + 0x70);
  SVar6.unknown = &DAT_100550940;
  FUN_100002f94(&DAT_100550940,&DAT_100422368);
  SVar7.unknown = SVar6.unknown;
  SwiftUI::State::get_wrappedValue(SVar6);
  SwiftUI::Alignment::get_center((Alignment)SVar7.unknown);
  SwiftUI::_FrameLayout::_init(local_90);
  puVar5 = &DAT_100551738;
  FUN_100002f94(&DAT_100551738,&DAT_1004235b0);
  puVar10 = (undefined8 *)(param_1 + *(int *)(puVar5 + 0x24));
  puVar10[1] = uStack_78;
  *puVar10 = local_80;
  puVar10[3] = uStack_68;
  puVar10[2] = uStack_70;
  puVar10[5] = uStack_58;
  puVar10[4] = local_60;
  AVar9.unknown = &DAT_100551740;
  FUN_100002f94(&DAT_100551740,&DAT_1004235b8);
  *(undefined2 *)(param_1 + *(int *)(AVar9.unknown + 0x24)) = 0x100;
  AVar8 = SwiftUI::Animation::spring(0.45,0.92,0.0,AVar9);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x48);
  local_90.unknown = *(undefined **)(unaff_x20 + 0x40);
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  AVar9.unknown = &DAT_100551748;
  FUN_100002f94(&DAT_100551748,&DAT_1004235c0);
  iVar1 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar1) = AVar8.unknown;
  *(undefined1 *)((undefined8 *)(param_1 + iVar1) + 1) = local_91;
  AVar9 = SwiftUI::Animation::spring(0.5,0.88,0.0,AVar9);
  SwiftUI::State::get_wrappedValue(SVar6);
  AVar3.unknown = local_90.unknown;
  puVar5 = &DAT_100551750;
  FUN_100002f94(&DAT_100551750,&DAT_1004235c8);
  iVar1 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = AVar9.unknown;
  ((undefined8 *)(param_1 + iVar1))[1] = AVar3.unknown;
  return;
}

