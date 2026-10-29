// rea decompile_all
// name: FUN_1003184a8
// address: 0x1003184a8
// body: available
// range: 0x1003184a8-0x10031869f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003184a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Set _all;
  Set SVar7;
  Color CVar8;
  State SVar9;
  long extraout_x8;
  undefined8 *puVar10;
  Color CVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_80;
  byte local_71;
  undefined8 local_70 [2];
  
  puVar4 = &DAT_10055c3b0;
  FUN_100002f94(&DAT_10055c3b0,&DAT_100433320);
  VVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar10 = (undefined8 *)((long)&uStack_80 + lVar3);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *puVar10 = VVar5.unknown;
  *(undefined8 *)(&stack0xffffffffffffff88 + lVar3) = 0x4018000000000000;
  *(undefined1 *)((long)local_70 + lVar3) = 0;
  puVar6 = &DAT_10055c438;
  FUN_100002f94(&DAT_10055c438,&DAT_1004310b8);
  SVar7.unknown = param_6;
  FUN_1003186a0((long)puVar10 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uVar12 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_10055c3c0;
  uVar13 = param_3;
  uVar14 = param_4;
  uVar15 = param_5;
  FUN_100002f94(&DAT_10055c3c0,&DAT_100431080);
  puVar1 = (undefined1 *)((long)puVar10 + (long)*(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uVar12 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  puVar1 = (undefined1 *)((long)puVar10 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = uVar13;
  *(undefined8 *)(puVar1 + 0x18) = uVar14;
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  puVar1[0x28] = 0;
  CVar8.unknown = (undefined *)0x0;
  FUN_10031cb80();
  CVar11.unknown = (undefined *)0x0;
  bVar2 = param_6[*(int *)(CVar8.unknown + 0x18)];
  if (bVar2 == 1) {
    CVar11 = SwiftUI::Color::get_accentColor(CVar8);
  }
  FUN_10035b5a4(param_1,CVar11.unknown);
  _swift_release(CVar11.unknown);
  FUN_10002a29c(puVar10,&DAT_10055c3b0,&DAT_100433320);
  local_70[0]._0_1_ = param_6[*(int *)(CVar8.unknown + 0x24)];
  local_70[1] = *(undefined8 *)(param_6 + *(int *)(CVar8.unknown + 0x24) + 8);
  SVar9.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar9);
  uVar13 = 0x3ff0000000000000;
  if (((bVar2 | local_71 ^ 0xff) & 1) == 0) {
    uVar13 = 0x3feb333333333333;
  }
  puVar4 = &DAT_10055c368;
  FUN_100002f94(&DAT_10055c368,&DAT_100431058);
  *(undefined8 *)(param_1 + *(int *)(puVar4 + 0x24)) = uVar13;
  return;
}

