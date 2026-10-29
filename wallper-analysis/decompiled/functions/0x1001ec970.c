// rea decompile_all
// name: FUN_1001ec970
// address: 0x1001ec970
// body: available
// range: 0x1001ec970-0x1001ecaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001ec970(double param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *self;
  ID IVar4;
  
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ecadc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ecae0);
    (*pcVar1)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ecae4);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ecae8);
    (*pcVar1)();
  }
  if (param_2 < 9.223372036854776e+18) {
    uVar2 = param_3;
    _CGColorSpaceCreateDeviceRGB();
    lVar3 = 0;
    _CGBitmapContextCreate(0,(long)param_1,(long)param_2,8,0,uVar2,1);
    if (lVar3 != 0) {
      _CGContextSetInterpolationQuality(lVar3,3);
      (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
      ::_draw(0,0,(double)(long)param_1,(double)(long)param_2,param_3,0);
      _CGBitmapContextCreateImage();
      if (lVar3 != 0) {
        self = &_OBJC_CLASS___NSImage;
        _objc_allocWithZone();
        IVar4 = objc_stub::initWithCGImage_size_((ID)self,param_1,param_2,lVar3);
        return IVar4;
      }
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ecaec);
  (*pcVar1)();
}

