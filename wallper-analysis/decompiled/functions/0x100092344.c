// rea decompile_all
// name: FUN_100092344
// address: 0x100092344
// body: available
// range: 0x100092344-0x100092caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100092344(ID param_1)

{
  undefined4 uVar1;
  CGPathFillRule CVar2;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  NSString *pNVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  NSArray *pNVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined1 *puVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  long lVar3;
  
  CVar2 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,CVar2.value);
  lVar17 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  puVar16 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _CGColorSpaceCreateDeviceRGB();
  lVar5 = 0;
  _CGBitmapContextCreate(0,0x550,0x550,8,0,lVar4,1);
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = 0;
  _CGPathCreateWithRoundedRect
            (0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000,
             0x401ccccccccccccd,0x401ccccccccccccd,0);
  lVar7 = lVar5;
  _CGContextSaveGState(lVar5);
  _CGColorCreateGenericGray(0,0x3fe199999999999a);
  _CGContextSetShadowWithColor(0x4028000000000000,0xc03a666666666666,0x404e000000000000,lVar5,lVar7)
  ;
  uVar8 = 0;
  _CGColorCreateGenericGray(0x3fbeb851eb851eb8,0x3ff0000000000000,0);
  _CGContextSetFillColorWithColor(lVar5,uVar8);
  _CGContextAddPath(lVar5,uVar6);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100524880
  ;
  pcVar19 = *(code **)(lVar17 + 0x68);
  (*pcVar19)(puVar16,uVar1,lVar3);
  (extension_in_CoreGraphics):__C.CGContextRef.fillPath(using:_CoreGraphics.CGPathFillRule)_->_()::
  _fillPath((CGPathFillRule)(__int8)puVar16);
  pcVar18 = *(code **)(lVar17 + 8);
  (*pcVar18)(puVar16,lVar3);
  _CGContextRestoreGState(lVar5);
  _CGContextSaveGState(lVar5);
  _CGContextAddPath(lVar5,uVar6);
  (*pcVar19)(puVar16,uVar1,lVar3);
  (extension_in_CoreGraphics):__C.CGContextRef.clip(using:_CoreGraphics.CGPathFillRule)_->_()::_clip
            ((CGPathFillRule)(__int8)puVar16);
  (*pcVar18)(puVar16,lVar3);
  lVar3 = lVar5;
  _CGContextSetInterpolationQuality(lVar5,3);
  if (param_1 != 0) {
    IVar9 = objc_stub::CGImageForProposedRect_context_hints_(param_1,0,0,0);
    lVar3 = 0;
    if (IVar9 != 0) {
      IVar11 = IVar9;
      _CGImageGetWidth();
      dVar25 = (double)(long)IVar11;
      IVar11 = IVar9;
      _CGImageGetHeight();
      dVar26 = (double)(long)IVar11;
      dVar27 = dVar26;
      if (dVar25 <= dVar26) {
        dVar27 = dVar25;
      }
      dVar20 = 80.0;
      _CGRectGetMidX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
      dVar25 = (1200.0 / dVar27) * dVar25;
      dVar21 = 80.0;
      _CGRectGetMidY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
      (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
      ::_draw(dVar20 - dVar25 * 0.5,dVar21 - (1200.0 / dVar27) * dVar26 * 0.5,dVar25,IVar9,0);
      goto LAB_100092804;
    }
  }
  _CGColorCreateGenericGray(0x3fc70a3d70a3d70a,0x3ff0000000000000);
  _CGContextSetFillColorWithColor(lVar5,lVar3);
  _CGContextFillRect(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000,
                     lVar5);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = NSImage::imageWithSystemSymbolName_accessibilityDescription_
                    ((ID)&_OBJC_CLASS___NSImage,pNVar10,0);
  if (IVar9 != 0) {
    IVar11 = NSImageSymbolConfiguration::configurationWithPointSize_weight_
                       ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4076800000000000,
                        *(undefined8 *)PTR__NSFontWeightMedium_100521300);
    IVar9 = NSImage::imageWithSymbolConfiguration_(IVar9,IVar11);
    if ((IVar9 != 0) &&
       (IVar9 = NSImage::CGImageForProposedRect_context_hints_(IVar9,0,0,0), IVar9 != 0)) {
      IVar11 = IVar9;
      _CGImageGetWidth(IVar9);
      IVar12 = IVar9;
      _CGImageGetHeight(IVar9);
      dVar27 = 80.0;
      _CGRectGetMidX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
      dVar27 = dVar27 - (double)(long)IVar11 / 2.0;
      dVar25 = 80.0;
      _CGRectGetMidY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
      dVar25 = dVar25 - (double)(long)IVar12 / 2.0;
      _CGContextSaveGState(lVar5);
      lVar3 = lVar5;
      _CGContextClipToMask(dVar27,dVar25,(double)(long)IVar11,(double)(long)IVar12,lVar5,IVar9);
      _CGColorCreateGenericGray(0x3ff0000000000000,0x3fe199999999999a);
      _CGContextSetFillColorWithColor(lVar5,lVar3);
      _CGContextFillRect(dVar27,dVar25,(double)(long)IVar11,(double)(long)IVar12,lVar5);
      _CGContextRestoreGState(lVar5);
    }
  }
LAB_100092804:
  if (DAT_10054ee18 != -1) {
    _swift_once(&DAT_10054ee18,FUN_10007bcdc);
  }
  IVar9 = objc_stub::CGImageForProposedRect_context_hints_(DAT_10054ee20,0,0,0);
  if (IVar9 != 0) {
    _CGContextSetBlendMode(lVar5,3);
    _CGContextSetAlpha(0x3fb70a3d70a3d70a,lVar5);
    uVar8 = 0x4054000000000000;
    _CGRectGetMinX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    uVar22 = 0x4054000000000000;
    _CGRectGetMinY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
    ::_draw(uVar8,uVar22,0x4060000000000000,0x4060000000000000,IVar9,1);
    _CGContextSetBlendMode(lVar5,0);
    _CGContextSetAlpha(0x3ff0000000000000,lVar5);
  }
  puVar15 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  puVar13 = puVar15;
  _swift_allocObject();
  *(undefined8 *)(puVar13 + 0x18) = 7;
  *(undefined8 *)(puVar13 + 0x10) = 3;
  lVar3 = lVar4;
  _CGColorCreateGenericGray(0x3ff0000000000000,0x3fbeb851eb851eb8);
  *(long *)(puVar13 + 0x20) = lVar3;
  _CGColorCreateGenericGray(0x3ff0000000000000,0);
  *(long *)(puVar13 + 0x28) = lVar3;
  _CGColorCreateGenericGray(0,0x3fc47ae147ae147b);
  *(long *)(puVar13 + 0x30) = lVar3;
  FUN_1000080b8(0);
  pNVar14 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar13);
  lVar3 = lVar4;
  _CGGradientCreateWithColors(lVar4,pNVar14,&DAT_10054ee50);
  if (lVar3 != 0) {
    uVar8 = 0x4054000000000000;
    _CGRectGetMinX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000,0);
    uVar22 = 0x4054000000000000;
    _CGRectGetMaxY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    uVar23 = 0x4054000000000000;
    _CGRectGetMaxX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    uVar24 = 0x4054000000000000;
    _CGRectGetMinY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    _CGContextDrawLinearGradient(uVar8,uVar22,uVar23,uVar24,lVar5,lVar3,0);
  }
  _swift_allocObject(puVar15,0x30,7);
  *(undefined8 *)(puVar15 + 0x18) = 5;
  *(undefined8 *)(puVar15 + 0x10) = 2;
  puVar13 = puVar15;
  _CGColorCreateGenericGray(0,0);
  *(undefined **)(puVar15 + 0x20) = puVar13;
  _CGColorCreateGenericGray(0,0x3fcc28f5c28f5c29);
  *(undefined **)(puVar15 + 0x28) = puVar13;
  pNVar14 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar15);
  _CGGradientCreateWithColors(lVar4,pNVar14,&DAT_10054ee90);
  if (lVar4 != 0) {
    dVar27 = 80.0;
    _CGRectGetMaxX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000,0);
    uVar8 = 0x4054000000000000;
    _CGRectGetMidY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    uVar22 = 0x4054000000000000;
    _CGRectGetMaxX(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    uVar23 = 0x4054000000000000;
    _CGRectGetMidY(0x4054000000000000,0x4054000000000000,0x4092c00000000000,0x4092c00000000000);
    _CGContextDrawLinearGradient(dVar27 + -42.00000000000001,uVar8,uVar22,uVar23,lVar5,lVar4,0);
  }
  _CGContextRestoreGState(lVar5);
  lVar4 = lVar5;
  _CGContextAddPath(lVar5,uVar6);
  _CGColorCreateGenericGray(0x3ff0000000000000,0x3fc47ae147ae147b);
  _CGContextSetStrokeColorWithColor(lVar5,lVar4);
  _CGContextSetLineWidth(0x4008000000000000,lVar5);
  _CGContextStrokePath(lVar5);
  _CGBitmapContextCreateImage();
  if (lVar5 == 0) {
    return 0;
  }
  puVar15 = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar9 = objc_stub::initWithCGImage_size_((ID)puVar15,0x4095400000000000,0x4095400000000000,lVar5);
  return IVar9;
}

