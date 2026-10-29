// rea decompile_all
// name: FUN_100102158
// address: 0x100102158
// body: available
// range: 0x100102158-0x1001024f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001024d4 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100102158(void)

{
  long lVar1;
  long lVar2;
  NSString *pNVar3;
  ID IVar4;
  undefined *puVar5;
  NSArray *pNVar6;
  undefined *puVar7;
  NSNumber *this;
  NSNumber *pNVar8;
  undefined *self;
  ID IVar9;
  ID self_00;
  ID unaff_x20;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  self_00 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::strip);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::removeAnimationForKey_(self_00,pNVar3);
  IVar4 = objc_stub::window(unaff_x20);
  lVar2 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::pause;
  lVar1 = _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance;
  if ((IVar4 != 0) &&
     (0.0 < *(double *)
             (unaff_x20 +
             _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance))) {
    dVar11 = 1.0;
    if (1.0 < *(double *)
               (unaff_x20 +
               _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::speed)) {
      dVar11 = *(double *)
                (unaff_x20 +
                _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::speed);
    }
    dVar12 = *(double *)
              (unaff_x20 +
              _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::pause) +
             *(double *)
              (unaff_x20 +
              _TtC7WallperP33_33CB5CB3CEB588E6D6BBE6B589CE495718ScrollingLabelView::distance) /
             dVar11;
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = CAKeyframeAnimation::animationWithKeyPath_
                      ((ID)&_OBJC_CLASS___CAKeyframeAnimation,pNVar3);
    puVar5 = &DAT_10054c0b8;
    FUN_100002f94(&DAT_10054c0b8,&DAT_10041d850);
    _swift_allocObject();
    puVar7 = PTR___type_metadata_for_Swift_Int_100523bd8;
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined **)(puVar5 + 0x58) = puVar7;
    dVar11 = *(double *)(unaff_x20 + lVar1);
    *(undefined **)(puVar5 + 0x38) = puVar7;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
    *(double *)(puVar5 + 0x60) = -dVar11;
    pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar5);
    CAKeyframeAnimation::setValues_(IVar4,pNVar6);
    puVar5 = &DAT_10054d5c0;
    FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
    puVar7 = puVar5;
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 7;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    this = (NSNumber *)0x0;
    FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
    pNVar8 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,0);
    *(NSNumber **)(puVar7 + 0x20) = pNVar8;
    dVar11 = *(double *)(unaff_x20 + lVar2);
    self = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar9 = objc_stub::initWithDouble_((ID)self,dVar11 / dVar12);
    *(ID *)(puVar7 + 0x28) = IVar9;
    pNVar8 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,1);
    *(NSNumber **)(puVar7 + 0x30) = pNVar8;
    pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar7);
    CAKeyframeAnimation::setKeyTimes_(IVar4,pNVar6);
    _swift_allocObject(puVar5,0x30,7);
    *(undefined8 *)(puVar5 + 0x18) = 5;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    uVar10 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_100521ab0;
    IVar9 = CAMediaTimingFunction::functionWithName_
                      ((ID)&_OBJC_CLASS___CAMediaTimingFunction,uVar10);
    *(ID *)(puVar5 + 0x20) = IVar9;
    IVar9 = CAMediaTimingFunction::functionWithName_
                      ((ID)&_OBJC_CLASS___CAMediaTimingFunction,uVar10);
    *(ID *)(puVar5 + 0x28) = IVar9;
    FUN_100044230(0,&DAT_100552810,&PTR__OBJC_CLASS___CAMediaTimingFunction_10053fa28);
    pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar5);
    CAKeyframeAnimation::setTimingFunctions_(IVar4,pNVar6);
    CAKeyframeAnimation::setDuration_(IVar4,dVar12);
    CAKeyframeAnimation::setRepeatCount_(IVar4,0x7f800000);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::addAnimation_forKey_(self_00,IVar4,pNVar3);
    return 0;
  }
  return 0;
}

