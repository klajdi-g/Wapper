// rea decompile_all
// name: FUN_100105534
// address: 0x100105534
// body: available
// range: 0x100105534-0x1001056f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100105534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  VerticalAlignment VVar2;
  LazyHStack<undefined> LVar3;
  Set _all;
  Set SVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  VVar2.unknown = (undefined *)SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100522918;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar2.unknown + -8) + 0x40));
  VVar2 = SwiftUI::VerticalAlignment::get_center(VVar2);
  FUN_1000036d0(&DAT_10054e008,puVar5,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  FUN_100002f94(&DAT_100552c40,&DAT_1004254b0);
  FUN_100105b74();
  LVar3 = SwiftUI::LazyHStack::_init(VVar2,(PinnedScrollableViews)0x4034000000000000);
  _all = SwiftUI::Edge::Set::get_horizontal(LVar3.unknown);
  uVar6 = 0x4048000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar4.unknown = &DAT_100552c20;
  uVar7 = param_3;
  uVar8 = param_4;
  uVar9 = param_5;
  FUN_100002f94(&DAT_100552c20,&DAT_100425498);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar4.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_vertical(SVar4);
  uVar6 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  puVar5 = &DAT_100552c08;
  FUN_100002f94(&DAT_100552c08,&DAT_100425490);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  puVar1[0x28] = 0;
  return;
}

