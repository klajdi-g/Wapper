// rea decompile_all
// name: FUN_100367de8
// address: 0x100367de8
// body: available
// range: 0x100367de8-0x100367f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100367de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Set _all;
  Set SVar7;
  Alignment AVar8;
  long extraout_x8;
  Set unaff_x20;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_90 [2];
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  
  puVar4 = &DAT_10055e118;
  FUN_100002f94(&DAT_10055e118,&DAT_100433938);
  VVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar9 = (undefined8 *)((long)local_90 + lVar3);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *puVar9 = VVar5.unknown;
  *(undefined8 *)((long)local_90 + lVar3 + 8) = 0x4018000000000000;
  *(undefined1 *)((long)auStack_80 + lVar3) = 0;
  puVar6 = &DAT_10055e120;
  FUN_100002f94(&DAT_10055e120,&DAT_100433940);
  FUN_100368954((long)puVar9 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  uVar10 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_10055e128;
  uVar11 = param_3;
  uVar12 = param_4;
  uVar13 = param_5;
  FUN_100002f94(&DAT_10055e128,&DAT_100433948);
  puVar1 = (undefined1 *)((long)puVar9 + (long)*(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uVar10 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  AVar8.unknown = &DAT_10055e130;
  FUN_100002f94(&DAT_10055e130,&DAT_100433950);
  puVar1 = (undefined1 *)((long)puVar9 + (long)*(int *)(AVar8.unknown + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = uVar11;
  *(undefined8 *)(puVar1 + 0x18) = uVar12;
  *(undefined8 *)(puVar1 + 0x20) = uVar13;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x4067c00000000000);
  puVar2 = (undefined8 *)((long)puVar9 + (long)*(int *)(puVar4 + 0x24));
  puVar2[1] = local_90[1];
  *puVar2 = local_90[0];
  puVar2[3] = auStack_80[1];
  puVar2[2] = auStack_80[0];
  puVar2[5] = uStack_68;
  puVar2[4] = auStack_80[2];
  FUN_100357134(param_1);
  FUN_10002a29c(puVar9,&DAT_10055e118,&DAT_100433938);
  return;
}

