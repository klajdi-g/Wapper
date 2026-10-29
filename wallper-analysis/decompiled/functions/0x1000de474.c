// rea decompile_all
// name: FUN_1000de474
// address: 0x1000de474
// body: available
// range: 0x1000de474-0x1000de5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000de474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  LazyVStack<undefined> LVar3;
  Set _all;
  undefined *puVar4;
  undefined8 uVar5;
  
  HVar2.unknown = (undefined *)SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100522918;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar2.unknown + -8) + 0x40));
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(HVar2);
  FUN_1000036d0(&DAT_10054e008,puVar4,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  FUN_100002f94(&DAT_1005518d0,&DAT_1004237e0);
  FUN_1000e11a4();
  LVar3 = SwiftUI::LazyVStack::_init(HVar2,(PinnedScrollableViews)0x4028000000000000);
  _all = SwiftUI::Edge::Set::get_bottom(LVar3.unknown);
  uVar5 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar4 = &DAT_100551850;
  FUN_100002f94(&DAT_100551850,&DAT_1004237a0);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar4 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}

