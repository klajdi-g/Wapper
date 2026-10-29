// rea decompile_all
// name: FUN_1003f0934
// address: 0x1003f0934
// body: available
// range: 0x1003f0934-0x1003f0a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f0934(ID param_1)

{
  code *pcVar1;
  ID self;
  long lVar2;
  NSViewRepresentableContext NVar3;
  long unaff_x20;
  
  self = objc_stub::layer(param_1);
  if (self != 0) {
    _swift_dynamicCastObjCClassUnconditional(self,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    lVar2 = 0;
    FUN_1003f353c();
    objc_stub::setVideoGravity_(self,*(undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x20)));
    NVar3.unknown = &DAT_100560e90;
    FUN_100002f94(&DAT_100560e90,&DAT_100436b70);
    SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar3);
    FUN_1003f01e0();
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f0a1c);
  (*pcVar1)();
}

