// rea decompile_all
// name: FUN_10009c1bc
// address: 0x10009c1bc
// body: available
// range: 0x10009c1bc-0x10009d2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10009c1bc(double param_1,double param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  NSString *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSDictionary *pNVar12;
  ID IVar13;
  ID IVar14;
  ID self;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  String SVar21;
  ID local_368;
  undefined1 auStack_300 [80];
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  undefined1 auStack_1b0 [80];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  double local_140;
  undefined8 uStack_138;
  
  dVar19 = (double)(long)(param_1 * 0.5);
  lVar2 = param_3;
  _CGImageGetWidth();
  lVar3 = param_3;
  _CGImageGetHeight();
  IVar4 = CIColor::colorWithRed_green_blue_((ID)&_OBJC_CLASS___CIColor,0,0,0);
  IVar5 = CIColor::colorWithRed_green_blue_
                    ((ID)&_OBJC_CLASS___CIColor,0x3ff0000000000000,0x3ff0000000000000,
                     0x3ff0000000000000);
  dVar16 = dVar19 / (double)lVar2;
  dVar18 = param_2 / (double)lVar3;
  if (dVar18 < dVar16) {
    dVar18 = dVar16;
  }
  puVar6 = &_OBJC_CLASS___CIImage;
  _objc_allocWithZone();
  IVar7 = objc_stub::initWithCGImage_((ID)puVar6,param_3);
  IVar7 = objc_stub::imageByClampingToExtent(IVar7);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar6 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  puVar9 = puVar6;
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 4;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar11 = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
  *(String *)(puVar9 + 0x20) = SVar21;
  *(undefined **)(puVar9 + 0x48) = puVar11;
  *(double *)(puVar9 + 0x30) = dVar18;
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar9 + 0x50) = SVar21;
  *(undefined **)(puVar9 + 0x78) = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(puVar9 + 0x60) = 1;
  puVar10 = puVar9;
  FUN_100005b10(puVar9);
  _swift_setDeallocating(puVar9);
  puVar11 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy((String *)(puVar9 + 0x20),2);
  pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar10);
  IVar7 = objc_stub::imageByApplyingFilter_withInputParameters_(IVar7,pNVar8,pNVar12);
  _CGAffineTransformMakeTranslation
            (&local_160,(dVar19 - dVar18 * (double)lVar2) * 0.5,
             (param_2 - dVar18 * (double)lVar3) * 0.5,0);
  IVar7 = objc_stub::imageByApplyingTransform_(IVar7,&local_160);
  IVar7 = objc_stub::imageByCroppingToRect_(IVar7,0,0,dVar19,param_2);
  IVar13 = objc_stub::imageByClampingToExtent(IVar7);
  IVar13 = objc_stub::imageByApplyingGaussianBlurWithSigma_(IVar13,param_2 * 0.11);
  IVar13 = objc_stub::imageByCroppingToRect_(IVar13,0,0,dVar19,param_2);
  IVar14 = objc_stub::imageByClampingToExtent(IVar13);
  local_160 = 0xc008000000000000;
  uStack_158 = 0;
  local_140 = dVar19 * 4.0;
  local_150 = 0;
  local_148 = 0x3ff0000000000000;
  uStack_138 = 0;
  IVar14 = objc_stub::imageByApplyingTransform_(IVar14,&local_160);
  IVar14 = objc_stub::imageByCroppingToRect_(IVar14,dVar19,0,param_1 - dVar19,param_2);
  self = CIFilter::maskedVariableBlurFilter((ID)&_OBJC_CLASS___CIFilter);
  IVar14 = objc_stub::imageByCompositingOverImage_(IVar14,IVar13);
  IVar14 = objc_stub::imageByClampingToExtent(IVar14);
  CIFilter::setInputImage_(self,IVar14);
  IVar14 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
  CIFilter::setPoint0_(IVar14,dVar19 * 0.85,0);
  CIFilter::setPoint1_(IVar14,dVar19 * 1.7,0);
  CIFilter::setColor0_(IVar14,IVar4);
  CIFilter::setColor1_(IVar14,IVar5);
  IVar14 = CIFilter::outputImage(IVar14);
  if (IVar14 == 0) {
    IVar14 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
  }
  CIFilter::setMask_(self,IVar14);
  CIFilter::setRadius_(self,(ulong)(uint)(float)(dVar19 * 0.3));
  IVar14 = CIFilter::outputImage(self);
  if ((IVar14 != 0) &&
     (IVar14 = CIFilter::imageByCroppingToRect_(IVar14,0,0,param_1,param_2), IVar14 != 0)) {
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar9 = puVar6;
    _swift_initStackObject(puVar6,auStack_1b0);
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(char **)(puVar9 + 0x20) = SVar21.str;
    *(undefined **)(puVar9 + 0x48) = PTR___type_metadata_for_Swift_Double_100523b90;
    *(void **)(puVar9 + 0x28) = SVar21.bridgeObject;
    *(undefined8 *)(puVar9 + 0x30) = 0x3ff1eb851eb851ec;
    puVar10 = puVar9;
    FUN_100005b10(puVar9);
    _swift_setDeallocating(puVar9);
    FUN_10002a29c(puVar9 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
    pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar10);
    local_368 = CIFilter::imageByApplyingFilter_withInputParameters_(IVar14,pNVar8,pNVar12);
    dVar16 = dVar19 * 0.6;
    dVar18 = dVar16;
    FUN_10009bf00(dVar16,param_2 * 0.2,dVar19 * 0.4,param_2 * 0.6,IVar13);
    if (0.01 < dVar18) {
      dVar17 = 0.5 / dVar18;
      dVar20 = 0.5;
      if ((dVar17 < 0.5) || (dVar20 = dVar17, dVar17 < 1.0)) {
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        puVar9 = puVar6;
        _swift_initStackObject(puVar6,auStack_300);
        *(undefined8 *)(puVar9 + 0x18) = 2;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar9 + 0x20) = SVar21;
        IVar13 = CIColor::colorWithRed_green_blue_((ID)&_OBJC_CLASS___CIColor,dVar20,dVar20,dVar20);
        IVar14 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
        CIFilter::setPoint0_(IVar14,dVar19 * 0.75,0);
        CIFilter::setPoint1_(IVar14,dVar19 * 1.25,0);
        CIFilter::setColor0_(IVar14,IVar5);
        CIFilter::setColor1_(IVar14,IVar13);
        IVar13 = CIFilter::outputImage(IVar14);
        if (IVar13 == 0) {
          IVar13 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
        }
        IVar13 = CIImage::imageByCroppingToRect_(IVar13,0,0,param_1,param_2);
        uVar15 = 0;
        FUN_100044230(0,&DAT_10054c070,&PTR__OBJC_CLASS___CIImage_10053f988);
        *(undefined8 *)(puVar9 + 0x48) = uVar15;
        *(ID *)(puVar9 + 0x30) = IVar13;
        puVar10 = puVar9;
        FUN_100005b10(puVar9);
        _swift_setDeallocating(puVar9);
        FUN_10002a29c((String *)(puVar9 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
        pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar10);
        local_368 = CIFilter::imageByApplyingFilter_withInputParameters_(local_368,pNVar8,pNVar12);
      }
    }
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    puVar9 = puVar6;
    _swift_initStackObject(puVar6,auStack_230);
    *(undefined8 *)(puVar9 + 0x18) = 4;
    *(undefined8 *)(puVar9 + 0x10) = 2;
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar9 + 0x20) = SVar21;
    IVar13 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
    uVar15 = 0;
    FUN_100044230(0,&DAT_10054c070,&PTR__OBJC_CLASS___CIImage_10053f988);
    *(undefined8 *)(puVar9 + 0x48) = uVar15;
    *(ID *)(puVar9 + 0x30) = IVar13;
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar9 + 0x50) = SVar21;
    IVar13 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
    CIFilter::setPoint0_(IVar13,dVar19 * 0.95,0);
    CIFilter::setPoint1_(IVar13,dVar19 * 1.95,0);
    CIFilter::setColor0_(IVar13,IVar5);
    CIFilter::setColor1_(IVar13,IVar4);
    IVar13 = CIFilter::outputImage(IVar13);
    if (IVar13 == 0) {
      IVar13 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
    }
    *(undefined8 *)(puVar9 + 0x78) = uVar15;
    *(ID *)(puVar9 + 0x60) = IVar13;
    puVar10 = puVar9;
    FUN_100005b10(puVar9);
    _swift_setDeallocating(puVar9);
    _swift_arrayDestroy((String *)(puVar9 + 0x20),2,puVar11);
    pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar10);
    IVar13 = CIFilter::imageByApplyingFilter_withInputParameters_(local_368,pNVar8,pNVar12);
    IVar14 = CIFilter::maskedVariableBlurFilter((ID)&_OBJC_CLASS___CIFilter);
    IVar7 = objc_stub::imageByClampingToExtent(IVar7);
    CIFilter::setInputImage_(IVar14,IVar7);
    IVar7 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
    CIFilter::setPoint0_(IVar7,dVar16,0);
    CIFilter::setPoint1_(IVar7,dVar19 * 1.08,0);
    CIFilter::setColor0_(IVar7,IVar4);
    CIFilter::setColor1_(IVar7,IVar5);
    IVar7 = CIFilter::outputImage(IVar7);
    if (IVar7 == 0) {
      IVar7 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
    }
    CIFilter::setMask_(IVar14,IVar7);
    CIFilter::setRadius_(IVar14,(ulong)(uint)(float)(dVar19 * 0.07));
    IVar7 = CIFilter::outputImage(IVar14);
    if ((IVar7 != 0) &&
       (IVar7 = CIFilter::imageByCroppingToRect_(IVar7,0,0,param_1,param_2), IVar7 != 0)) {
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_initStackObject(puVar6,auStack_2b0);
      *(undefined8 *)(puVar6 + 0x18) = 4;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar6 + 0x20) = SVar21;
      IVar14 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
      *(undefined8 *)(puVar6 + 0x48) = uVar15;
      *(ID *)(puVar6 + 0x30) = IVar14;
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar6 + 0x50) = SVar21;
      IVar14 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
      CIFilter::setPoint0_(IVar14,dVar16,0);
      CIFilter::setPoint1_(IVar14,dVar19 * 1.08,0);
      CIFilter::setColor0_(IVar14,IVar5);
      CIFilter::setColor1_(IVar14,IVar4);
      IVar4 = CIFilter::outputImage(IVar14);
      if (IVar4 == 0) {
        IVar4 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
      }
      *(undefined8 *)(puVar6 + 0x78) = uVar15;
      *(ID *)(puVar6 + 0x60) = IVar4;
      puVar9 = puVar6;
      FUN_100005b10(puVar6);
      _swift_setDeallocating(puVar6);
      _swift_arrayDestroy((String *)(puVar6 + 0x20),2,puVar11);
      pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
      IVar4 = CIFilter::imageByApplyingFilter_withInputParameters_(IVar7,pNVar8,pNVar12);
      dVar16 = (dVar18 + -0.3) / 0.55;
      dVar18 = 1.0;
      if (dVar16 <= 1.0) {
        dVar18 = dVar16;
      }
      dVar20 = 0.1;
      if (0.0 < dVar16) {
        dVar20 = dVar18 * 0.19999999999999998 + 0.1;
      }
      puVar6 = &_OBJC_CLASS___CIColor;
      _objc_allocWithZone();
      IVar5 = objc_stub::initWithRed_green_blue_alpha_((ID)puVar6,0,0,0,0);
      puVar6 = &_OBJC_CLASS___CIColor;
      _objc_allocWithZone();
      IVar7 = objc_stub::initWithRed_green_blue_alpha_((ID)puVar6,0,0,0,dVar20);
      IVar14 = CIFilter::smoothLinearGradientFilter((ID)&_OBJC_CLASS___CIFilter);
      CIFilter::setPoint0_(IVar14,dVar19 * 0.75,0);
      CIFilter::setPoint1_(IVar14,dVar19 * 1.4,0);
      CIFilter::setColor0_(IVar14,IVar5);
      CIFilter::setColor1_(IVar14,IVar7);
      IVar5 = CIFilter::outputImage(IVar14);
      if (IVar5 == 0) {
        IVar5 = CIImage::emptyImage((ID)&_OBJC_CLASS___CIImage);
      }
      IVar5 = CIImage::imageByCroppingToRect_(IVar5,0,0,param_1,param_2);
      IVar4 = CIFilter::imageByCompositingOverImage_(IVar4,IVar13);
      IVar4 = CIImage::imageByCompositingOverImage_(IVar5,IVar4);
      if (DAT_10054f758 != -1) {
        _swift_once(&DAT_10054f758,FUN_10009a7d0);
      }
      IVar5 = DAT_10054f760;
      uVar1 = *(uint *)PTR__kCIFormatRGBA8_1005217d8;
      uVar15 = *(undefined8 *)PTR__kCGColorSpaceSRGB_1005217a8;
      _CGColorSpaceCreateWithName(uVar15);
      IVar4 = objc_stub::createCGImage_fromRect_format_colorSpace_
                        (IVar5,0,0,param_1,param_2,IVar4,(ulong)uVar1,uVar15);
      return IVar4;
    }
  }
  return 0;
}

