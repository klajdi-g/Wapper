// rea decompile_all
// name: FUN_100091c28
// address: 0x100091c28
// body: available
// range: 0x100091c28-0x1000921db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100091c28(ID param_1,long param_2)

{
  CGPathFillRule CVar1;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  NSArray *pNVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar2;
  
  CVar1 = CoreGraphics::CGPathFillRule::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,CVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar5 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _CGColorSpaceCreateDeviceRGB();
  lVar4 = 0;
  _CGBitmapContextCreate(0,param_2,param_2,8,0,lVar3,1);
  if (lVar4 == 0) {
    return 0;
  }
  dVar13 = (double)param_2;
  _CGContextAddEllipseInRect(0,0,dVar13,dVar13);
  (**(code **)(lVar12 + 0x68))
            (lVar5,*(undefined4 *)
                    PTR___enum_case_for_CoreGraphics_CGPathFillRule_winding_CoreGraphics_CGPathFillRule_Type___>_CoreGraphics_CGPathFillRule_100524880
             ,lVar2);
  (extension_in_CoreGraphics):__C.CGContextRef.clip(using:_CoreGraphics.CGPathFillRule)_->_()::_clip
            ((CGPathFillRule)(__int8)lVar5);
  (**(code **)(lVar12 + 8))(lVar5,lVar2);
  if (param_1 != 0) {
    IVar6 = objc_stub::CGImageForProposedRect_context_hints_(param_1,0,0,0);
    lVar5 = 0;
    if (IVar6 != 0) {
      IVar7 = IVar6;
      _CGImageGetWidth();
      dVar14 = (double)(long)IVar7;
      IVar7 = IVar6;
      _CGImageGetHeight();
      dVar16 = (double)(long)IVar7;
      dVar15 = dVar16;
      if (dVar14 <= dVar16) {
        dVar15 = dVar14;
      }
      _CGContextSetInterpolationQuality(lVar4,3);
      (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
      ::_draw((dVar13 - (dVar13 / dVar15) * dVar14) * 0.5,
              (dVar13 - (dVar13 / dVar15) * dVar16) * 0.5,IVar6,0);
      goto LAB_100091ddc;
    }
  }
  _CGColorCreateGenericGray(0x3fceb851eb851eb8,0x3ff0000000000000);
  _CGContextSetFillColorWithColor(lVar4,lVar5);
  _CGContextFillRect(0,0,dVar13,dVar13,lVar4);
LAB_100091ddc:
  dVar15 = (double)param_2 / 2.0;
  puVar11 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  puVar8 = puVar11;
  _swift_allocObject();
  uStack_78 = 5;
  local_80 = 2;
  *(undefined8 *)(puVar8 + 0x18) = 5;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  lVar5 = lVar3;
  _CGColorCreateGenericGray(0,0);
  *(long *)(puVar8 + 0x20) = lVar5;
  _CGColorCreateGenericGray(0,0x3fd3333333333333);
  *(long *)(puVar8 + 0x28) = lVar5;
  FUN_1000080b8(0);
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  lVar5 = lVar3;
  _CGGradientCreateWithColors(lVar3,pNVar9,&DAT_10054ed78);
  if (lVar5 != 0) {
    _CGContextDrawRadialGradient(dVar15,dVar15,0,dVar15,dVar15,dVar15,lVar4,lVar5,0);
  }
  _swift_allocObject(puVar11,0x30,7);
  *(undefined8 *)(puVar11 + 0x18) = uStack_78;
  *(undefined8 *)(puVar11 + 0x10) = local_80;
  puVar8 = puVar11;
  _CGColorCreateGenericGray(0x3ff0000000000000,0x3fc0a3d70a3d70a4);
  *(undefined **)(puVar11 + 0x20) = puVar8;
  _CGColorCreateGenericGray(0x3ff0000000000000,0);
  *(undefined **)(puVar11 + 0x28) = puVar8;
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar11);
  _CGGradientCreateWithColors(lVar3,pNVar9,&DAT_10054edb0);
  if (lVar3 != 0) {
    _CGContextDrawRadialGradient
              (dVar13 * 0.34,dVar13 * 0.7,0,dVar13 * 0.34,dVar13 * 0.7,dVar13 * 0.6,lVar4,lVar3,0);
  }
  uVar10 = 0;
  _CGColorCreateGenericGray(0,0x3fe0000000000000,0);
  _CGContextSetStrokeColorWithColor(lVar4,uVar10);
  _CGContextSetLineWidth(dVar13 * 0.012,lVar4);
  _CGRectInset(0,0,dVar13,dVar13,dVar13 * 0.006,dVar13 * 0.006);
  lVar5 = lVar4;
  _CGContextStrokeEllipseInRect(lVar4);
  dVar14 = ((dVar13 * 0.024) / 0.34) * 0.5;
  dVar15 = dVar15 - dVar14;
  dVar14 = dVar14 + dVar14;
  _CGColorCreateGenericGray(0x3f947ae147ae147b,0x3ff0000000000000);
  _CGContextSetFillColorWithColor(lVar4,lVar5);
  lVar5 = lVar4;
  _CGContextFillEllipseInRect(dVar15,dVar15,dVar14,dVar14,lVar4);
  _CGColorCreateGenericGray(0x3ff0000000000000,0x3fd1eb851eb851ec);
  _CGContextSetStrokeColorWithColor(lVar4,lVar5);
  dVar16 = dVar13 * 0.003;
  if (dVar16 <= 1.0) {
    dVar16 = 1.0;
  }
  _CGContextSetLineWidth(dVar16,lVar4);
  _CGRectInset(dVar15,dVar15,dVar14,dVar14,dVar13 * -0.002,dVar13 * -0.002);
  _CGContextStrokeEllipseInRect(lVar4);
  _CGBitmapContextCreateImage();
  if (lVar4 == 0) {
    return 0;
  }
  puVar11 = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar6 = objc_stub::initWithCGImage_size_((ID)puVar11,dVar13,dVar13,lVar4);
  return IVar6;
}

