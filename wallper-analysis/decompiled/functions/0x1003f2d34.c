// rea decompile_all
// name: FUN_1003f2d34
// address: 0x1003f2d34
// body: available
// range: 0x1003f2d34-0x1003f2e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f2d34(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Color CVar3;
  NSHostingView *pNVar4;
  undefined **ppuVar5;
  ID IVar6;
  undefined *unaff_x20;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  CVar3.unknown = unaff_x20;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper19PlayerContainerView::onLayout);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC7Wallper19PlayerContainerView::spinnerHost;
  local_58 = (undefined *)SwiftUI::Color::get_white(CVar3);
  uStack_48 = 0x4000000000000000;
  local_50 = 0x402a000000000000;
  pNVar4 = (NSHostingView *)&DAT_100560dd8;
  FUN_100002f94(&DAT_100560dd8,&DAT_100436a28);
  _objc_allocWithZone();
  ppuVar5 = &local_58;
  SwiftUI::NSHostingView::_init(pNVar4);
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff98,"initWithCoder:",param_1);
  if (IVar6 != 0) {
    FUN_1003f2ab4(IVar6);
  }
  return IVar6;
}

