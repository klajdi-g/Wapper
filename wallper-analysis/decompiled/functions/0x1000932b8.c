// rea decompile_all
// name: FUN_1000932b8
// address: 0x1000932b8
// body: available
// range: 0x1000932b8-0x100093623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000932b8(String *param_1,uint param_2,char *param_3,void *param_4)

{
  ID IVar1;
  ulong uVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *self;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  bVar5 = (param_2 & 1) == 0;
  IVar1 = 0x6c2d64726f636572;
  if (bVar5) {
    IVar1 = 0x3a64726f636572;
  }
  pvVar3 = param_1->bridgeObject;
  SVar4 = *param_1;
  uVar10 = 0xed00003a65677261;
  if (bVar5) {
    uVar10 = 0xe700000000000000;
  }
  _swift_bridgeObjectRetain();
  SVar15.bridgeObject = (void *)0xe100000000000000;
  SVar15.str = (char *)0x7c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar15,SVar16);
  SVar15 = param_1[1];
  _swift_bridgeObjectRetain(pvVar3);
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar15,SVar17);
  _swift_bridgeObjectRelease(pvVar3);
  _swift_bridgeObjectRetain(pvVar3);
  SVar14.bridgeObject = (void *)0xe100000000000000;
  SVar14.str = (char *)0x23;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar14,SVar18);
  _swift_bridgeObjectRelease(pvVar3);
  SVar15 = Swift::CustomStringConvertible::get_description();
  _swift_bridgeObjectRetain(pvVar3);
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar15,SVar19);
  _swift_bridgeObjectRelease(pvVar3);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  _swift_bridgeObjectRetain(uVar10);
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar4,SVar20);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(pvVar3);
  IVar6 = IVar1;
  FUN_100091638(IVar1,uVar10);
  if (IVar6 == 0) {
    IVar6 = (ID)(param_2 & 1);
    uVar2 = 0x898;
    if ((param_2 & 1) == 0) {
      uVar2 = 0x578;
    }
    FUN_100091acc();
    if (((IVar6 != 0) &&
        (IVar6 = objc_stub::CGImageForProposedRect_context_hints_(IVar6,0,0,0), IVar6 != 0)) &&
       (FUN_1000921dc(), param_1 != (String *)0x0)) {
      IVar7 = objc_stub::CGImageForProposedRect_context_hints_((ID)param_1,0,0,0);
      uVar8 = 0;
      if (IVar7 != 0) {
        _CGColorSpaceCreateDeviceRGB(0);
        lVar9 = 0;
        _CGBitmapContextCreate(0,uVar2,uVar2,8,0,uVar8,1);
        if (lVar9 != 0) {
          dVar12 = (double)uVar2;
          dVar13 = dVar12 * 0.34;
          _CGContextSetInterpolationQuality(lVar9,3);
          (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
          ::_draw(0,0,dVar12,dVar12,IVar6,0);
          dVar11 = (dVar12 - dVar13) * 0.5;
          (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
          ::_draw(dVar11,dVar11,dVar13,dVar13,IVar7,0);
          _CGBitmapContextCreateImage();
          if (lVar9 != 0) {
            self = &_OBJC_CLASS___NSImage;
            _objc_allocWithZone();
            IVar6 = objc_stub::initWithCGImage_size_((ID)self,dVar12,dVar12,lVar9);
            FUN_1000913ac(IVar6,IVar1,uVar10);
            _swift_bridgeObjectRelease(uVar10);
            return IVar6;
          }
        }
      }
    }
    _swift_bridgeObjectRelease(uVar10);
    IVar6 = 0;
  }
  else {
    _swift_bridgeObjectRelease(uVar10);
  }
  return IVar6;
}

