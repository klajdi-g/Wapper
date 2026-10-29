// rea decompile_all
// name: FUN_1002af264
// address: 0x1002af264
// body: available
// range: 0x1002af264-0x1002af357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002af264(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  undefined8 uVar4;
  __int64 _Var5;
  
  _Var3.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) != 1) {
LAB_1002af32c:
      _swift_bridgeObjectRelease(_Var3.unknown);
      return 0;
    }
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if ((_Var5 != 1) || (_Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1), _Var5 == 0))
    goto LAB_1002af32c;
  }
  if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002af358);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(_Var3.unknown + 0x20);
  }
  else {
    uVar4 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  return uVar4;
}

