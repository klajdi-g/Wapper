// rea decompile_all
// name: FUN_10004fda0
// address: 0x10004fda0
// body: available
// range: 0x10004fda0-0x10004fe2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004fe00 to 0x100416c20 objc_stub::performClose: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004fda0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  
  if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10004fe2c);
    (*pcVar3)();
  }
  objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_1005212d0,1);
  if (DAT_100553ec8 != -1) {
    _swift_once(&DAT_100553ec8,FUN_100129ff8);
  }
  lVar2 = DAT_100577c30;
  lVar1 = _TtC7Wallper17MenuBarController::popover;
  IVar4 = objc_stub::isShown(*(ID *)(DAT_100577c30 + _TtC7Wallper17MenuBarController::popover));
  if ((int)IVar4 != 0) {
    objc_stub::performClose_(*(ID *)(lVar2 + lVar1),0);
    return;
  }
  return;
}

