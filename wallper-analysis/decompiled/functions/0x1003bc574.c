// rea decompile_all
// name: FUN_1003bc574
// address: 0x1003bc574
// body: available
// range: 0x1003bc574-0x1003bc67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003bc574(ID param_1)

{
  ID IVar1;
  ID IVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    IVar1 = unaff_x20 + 0x58;
    _swift_unknownObjectWeakLoadStrong();
    if ((((IVar1 != 0) && (IVar1 = objc_stub::window(IVar1), IVar1 != 0)) &&
        (IVar2 = objc_stub::window(param_1), IVar2 != 0)) &&
       (((IVar2 == IVar1 && (IVar1 = objc_stub::firstResponder(IVar1), IVar1 != 0)) &&
        (IVar2 = IVar1, _swift_dynamicCastObjCClass(IVar1,&_OBJC_CLASS___NSTextView), IVar2 == 0))))
    {
      _swift_dynamicCastObjCClass(IVar1,&_OBJC_CLASS___NSTextField);
    }
  }
  return;
}

