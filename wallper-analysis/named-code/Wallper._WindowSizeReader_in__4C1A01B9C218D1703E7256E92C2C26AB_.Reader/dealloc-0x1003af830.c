// rea decompile_all
// name: _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::dealloc
// address: 0x1003af830
// body: available
// range: 0x1003af830-0x1003af8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCV7WallperP33_4C1A01B9C218D1703E7256E92C2C26AB16WindowSizeReader6Reader::dealloc
               (ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  long lVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  lVar2 = *(long *)(param_1 + resizeObserver);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(self,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}

