// rea decompile_all
// name: FUN_1000a0cf8
// address: 0x1000a0cf8
// body: available
// range: 0x1000a0cf8-0x1000a0f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000a0cf8(void)

{
  ID self;
  ID IVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  ID unaff_x20;
  
  if (DAT_10054fa00 != -1) {
    _swift_once(&DAT_10054fa00,FUN_1000a0b18);
  }
  self = DAT_10054fa08;
  IVar1 = objc_stub::objectForKey_(DAT_10054fa08);
  if (IVar1 == 0) {
    IVar2 = objc_stub::CGImageForProposedRect_context_hints_(unaff_x20,0,0,0);
    IVar1 = 0;
    if (IVar2 != 0) {
      IVar1 = IVar2;
      _CGColorSpaceCreateDeviceRGB();
      lVar3 = 0;
      _CGBitmapContextCreate(0,0x140,0x140,8,0,IVar1,1);
      if (lVar3 != 0) {
        _CGContextSetInterpolationQuality(lVar3,3);
        (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
        ::_draw(0,0,0x4074000000000000,0x4074000000000000,IVar2,0);
        _CGBitmapContextCreateImage();
        if (lVar3 != 0) {
          puVar4 = &_OBJC_CLASS___CIImage;
          _objc_allocWithZone();
          IVar1 = objc_stub::initWithCGImage_((ID)puVar4,lVar3);
          IVar1 = objc_stub::imageByClampingToExtent(IVar1);
          IVar1 = objc_stub::imageByApplyingGaussianBlurWithSigma_(IVar1,0x4036000000000000);
          IVar1 = objc_stub::imageByCroppingToRect_(IVar1,0,0,0x4074000000000000,0x4074000000000000)
          ;
          if (DAT_10054fa10 != -1) {
            _swift_once(&DAT_10054fa10,FUN_1000a0b54);
          }
          IVar2 = DAT_10054fa18;
          objc_stub::extent(IVar1);
          IVar1 = objc_stub::createCGImage_fromRect_(IVar2,IVar1);
          if (IVar1 != 0) {
            puVar4 = &_OBJC_CLASS___NSImage;
            _objc_allocWithZone();
            IVar1 = objc_stub::initWithCGImage_size_
                              ((ID)puVar4,0x4074000000000000,0x4074000000000000,IVar1);
            objc_stub::setObject_forKey_(self,IVar1);
            return IVar1;
          }
        }
      }
      IVar1 = 0;
    }
  }
  return IVar1;
}

