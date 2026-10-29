// rea decompile_all
// name: FUN_100330fa4
// address: 0x100330fa4
// body: available
// range: 0x100330fa4-0x1003311fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100330fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  VerticalAlignment VVar6;
  undefined *puVar7;
  Set _all;
  Set SVar8;
  Alignment AVar9;
  State SVar10;
  Animation AVar11;
  long extraout_x8;
  undefined *unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_d0 [2];
  undefined8 auStack_c0 [3];
  undefined8 auStack_a8 [4];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar5 = &DAT_10055cc18;
  FUN_100002f94(&DAT_10055cc18,&DAT_100432040);
  VVar6.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar12 = (undefined8 *)((long)local_d0 + lVar4);
  VVar6 = SwiftUI::VerticalAlignment::get_center(VVar6);
  *puVar12 = VVar6.unknown;
  *(undefined8 *)((long)auStack_c0 + lVar4 + -8) = 0x4028000000000000;
  *(undefined1 *)((long)auStack_c0 + lVar4) = 0;
  puVar7 = &DAT_10055cc20;
  FUN_100002f94(&DAT_10055cc20,&DAT_100432048);
  SVar8.unknown = unaff_x20;
  FUN_100331c20((long)puVar12 + (long)*(int *)(puVar7 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(SVar8);
  uVar13 = 0x4032000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar8.unknown = &DAT_10055cc28;
  uVar14 = param_3;
  uVar15 = param_4;
  uVar16 = param_5;
  FUN_100002f94(&DAT_10055cc28,&DAT_100432050);
  puVar1 = (undefined1 *)((long)puVar12 + (long)*(int *)(SVar8.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar13;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar8 = SwiftUI::Edge::Set::get_vertical(SVar8);
  uVar13 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  AVar9.unknown = &DAT_10055cc30;
  FUN_100002f94(&DAT_10055cc30,&DAT_100433c90);
  puVar1 = (undefined1 *)((long)puVar12 + (long)*(int *)(AVar9.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar13;
  *(undefined8 *)(puVar1 + 0x10) = uVar14;
  *(undefined8 *)(puVar1 + 0x18) = uVar15;
  *(undefined8 *)(puVar1 + 0x20) = uVar16;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x406a400000000000);
  puVar2 = (undefined8 *)((long)puVar12 + (long)*(int *)(puVar5 + 0x24));
  puVar2[1] = auStack_a8[2];
  *puVar2 = auStack_a8[1];
  puVar2[3] = uStack_88;
  puVar2[2] = auStack_a8[3];
  puVar2[5] = uStack_78;
  puVar2[4] = local_80;
  FUN_100356304(param_1);
  FUN_10002a29c(puVar12,&DAT_10055cc18,&DAT_100432040);
  local_d0[1] = *(undefined8 *)(unaff_x20 + 0x78);
  local_d0[0] = *(undefined8 *)(unaff_x20 + 0x70);
  auStack_a8[0] = *(undefined8 *)(unaff_x20 + 0x78);
  auStack_c0[2] = *(undefined8 *)(unaff_x20 + 0x70);
  SVar10.unknown = &DAT_100550940;
  FUN_100002f94(&DAT_100550940,&DAT_100422368);
  SwiftUI::State::get_wrappedValue(SVar10);
  AVar11.unknown = &DAT_10055cc38;
  FUN_100002f94(&DAT_10055cc38,&DAT_100432060);
  iVar3 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar3) = auStack_c0[1];
  ((undefined8 *)(param_1 + iVar3))[1] = 0;
  AVar11 = SwiftUI::Animation::get_default(AVar11);
  SwiftUI::State::get_wrappedValue(SVar10);
  uVar14 = auStack_c0[2];
  puVar5 = &DAT_10055cb70;
  FUN_100002f94(&DAT_10055cb70,&DAT_100431f40);
  iVar3 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)(param_1 + iVar3) = AVar11.unknown;
  ((undefined8 *)(param_1 + iVar3))[1] = uVar14;
  return;
}

