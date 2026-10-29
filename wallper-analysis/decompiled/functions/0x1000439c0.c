// rea decompile_all
// name: FUN_1000439c0
// address: 0x1000439c0
// body: available
// range: 0x1000439c0-0x100043bff inclusive
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

undefined1  [16] FUN_1000439c0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID self;
  _ArrayBuffer _Var3;
  long lVar4;
  double extraout_d0;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self == 0) {
    _Var3.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var3.unknown >> 0x3e == 0) {
      lVar4 = *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
        _Var1.unknown = _Var3.unknown;
      }
      lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      dVar5 = 1.0;
      param_4 = 2160.0;
      param_3 = 3840.0;
      goto LAB_100043af8;
    }
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100043c00);
        (*pcVar2)();
      }
      self = *(ID *)(_Var3.unknown + 0x20);
    }
    else {
      self = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  objc_stub::backingScaleFactor(self);
  objc_stub::frame(self);
  param_3 = extraout_d0 * param_3;
  param_4 = extraout_d0 * param_4;
  dVar6 = 6144.0 / param_3;
  dVar7 = 3456.0 / param_4;
  dVar5 = dVar7;
  if (dVar6 <= dVar7) {
    dVar5 = dVar6;
  }
  dVar7 = (double)NEON_fminnm(dVar7,0x3ff0000000000000);
  if (1.0 <= dVar6) {
    dVar5 = dVar7;
  }
LAB_100043af8:
  param_3 = dVar5 * param_3;
  if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100043ba4);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100043ba8);
    (*pcVar2)();
  }
  dVar5 = dVar5 * param_4;
  if ((0x7fefffffffffffff < (ulong)ABS(param_3)) || (0x7fefffffffffffff < (ulong)ABS(dVar5))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100043bac);
    (*pcVar2)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100043bb0);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100043bb4);
    (*pcVar2)();
  }
  auVar8._0_8_ = (double)(long)((long)param_3 & 0xfffffffffffffffe);
  auVar8._8_8_ = (double)(long)((long)dVar5 & 0xfffffffffffffffe);
  return auVar8;
}

