// rea decompile_all
// name: FUN_100062f94
// address: 0x100062f94
// body: available
// range: 0x100062f94-0x10006318b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100062f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  LazyVStack<undefined> LVar3;
  Set SVar4;
  Set SVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  HVar2.unknown = (undefined *)SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100522918;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar2.unknown + -8) + 0x40));
  HVar2 = SwiftUI::HorizontalAlignment::get_center(HVar2);
  FUN_1000036d0(&DAT_10054e008,puVar6,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  FUN_100002f94(&DAT_10054e010,&DAT_10041ef58);
  FUN_1000690b4();
  LVar3 = SwiftUI::LazyVStack::_init(HVar2,(PinnedScrollableViews)0x402c000000000000);
  SVar4 = SwiftUI::Edge::Set::get_horizontal(LVar3.unknown);
  uVar7 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  SVar5.unknown = &DAT_10054dfc0;
  uVar9 = param_3;
  uVar10 = param_4;
  uVar12 = param_5;
  FUN_100002f94(&DAT_10054dfc0,&DAT_10041edd8);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_top(SVar5);
  uVar8 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  SVar5.unknown = &DAT_10054dfb0;
  uVar7 = uVar9;
  uVar11 = uVar10;
  uVar13 = uVar12;
  FUN_100002f94(&DAT_10054dfb0,&DAT_10041edd0);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar12;
  puVar1[0x28] = 0;
  SVar5 = SwiftUI::Edge::Set::get_bottom(SVar5);
  uVar9 = 0x4052000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar6 = &DAT_10054df98;
  FUN_100002f94(&DAT_10054df98,&DAT_10041edc8);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar6 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar11;
  *(undefined8 *)(puVar1 + 0x20) = uVar13;
  puVar1[0x28] = 0;
  return;
}

