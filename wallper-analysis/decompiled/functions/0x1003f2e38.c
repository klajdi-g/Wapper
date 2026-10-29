// rea decompile_all
// name: FUN_1003f2e38
// address: 0x1003f2e38
// body: available
// range: 0x1003f2e38-0x1003f2f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f2e38(void)

{
  ID self;
  code *pcVar1;
  ID unaff_x20;
  undefined8 uVar2;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"layout");
  self = objc_stub::layer(unaff_x20);
  if (self != 0) {
    _swift_dynamicCastObjCClassUnconditional(self,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    objc_stub::bounds(unaff_x20);
    objc_stub::setFrame_(self);
    pcVar1 = *(code **)(unaff_x20 + _TtC7Wallper19PlayerContainerView::onLayout);
    if (pcVar1 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC7Wallper19PlayerContainerView::onLayout))[1];
      _swift_retain(uVar2);
      (*pcVar1)();
      FUN_10002f6dc(pcVar1,uVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f2f08);
  (*pcVar1)();
}

