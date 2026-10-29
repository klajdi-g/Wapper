// rea decompile_all
// name: FUN_10012c54c
// address: 0x10012c54c
// body: available
// range: 0x10012c54c-0x10012c5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012c54c(undefined8 param_1)

{
  long lVar1;
  NSHostingController *pNVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 local_38;
  
  lVar1 = _TtC7Wallper17MenuBarController::hostingController;
  if (*(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::hostingController) == 0) {
    FUN_10012a308();
    pNVar2 = (NSHostingController *)&DAT_100553dc8;
    local_38 = param_1;
    FUN_100002f94(&DAT_100553dc8,&DAT_100426cb8);
    _objc_allocWithZone();
    puVar3 = &local_38;
    SwiftUI::NSHostingController::_init(pNVar2);
    objc_stub::setContentViewController_
              (*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::popover),puVar3);
    *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
    param_1 = 0;
  }
  return param_1;
}

