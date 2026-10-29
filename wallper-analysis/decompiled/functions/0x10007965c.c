// rea decompile_all
// name: FUN_10007965c
// address: 0x10007965c
// body: available
// range: 0x10007965c-0x100079ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007965c(double param_1,double param_2,double param_3,long param_4,long param_5,
                  ulong param_6)

{
  ID IVar1;
  undefined8 uVar2;
  long *plVar3;
  NSString *pNVar4;
  NSNumber *pNVar5;
  undefined *puVar6;
  ID IVar7;
  ID self;
  NSArray *pNVar8;
  ID unaff_x20;
  ID IVar9;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  
  if (*(double *)
       (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::labelFraction
       ) != param_1) {
    *(double *)
     (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::labelFraction)
         = param_1;
    objc_stub::setNeedsLayout_(unaff_x20,1);
  }
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setAnimationDuration_((ID)&_OBJC_CLASS___CATransaction,0x3fd999999999999a);
  puVar6 = PTR___type_metadata_for_Any_100524178;
  if (param_4 != 0) {
    IVar9 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc);
    IVar1 = objc_stub::contents(IVar9);
    if (IVar1 == 0) {
      uStack_c8 = 0;
      local_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_a8 = uStack_c8;
    local_b0 = local_d0;
    local_98 = lStack_b8;
    uStack_a0 = uStack_c0;
    if (lStack_b8 == 0) {
      FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
    }
    else {
      uVar2 = 0;
      FUN_100044230(0,&DAT_10054eeb8,&PTR__OBJC_CLASS___NSImage_10053fa10);
      plVar3 = &local_d8;
      _swift_dynamicCast(plVar3,&local_b0,puVar6 + 8,uVar2,6);
      if ((((ulong)plVar3 & 1) != 0) && (local_d8 == param_4)) goto LAB_1000797d8;
    }
    objc_stub::setContents_(IVar9,param_4);
    objc_stub::setOpacity_(IVar9,0x3f800000);
  }
LAB_1000797d8:
  IVar9 = *(ID *)(unaff_x20 +
                 _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::label);
  IVar1 = objc_stub::contents(IVar9);
  if (IVar1 == 0) {
    uStack_c8 = 0;
    local_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_a8 = uStack_c8;
  local_b0 = local_d0;
  local_98 = lStack_b8;
  uStack_a0 = uStack_c0;
  if (lStack_b8 == 0) {
    FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
joined_r0x00010007995c:
    if (param_5 == 0) goto LAB_100079888;
  }
  else {
    uVar2 = 0;
    FUN_100044230(0,&DAT_10054eeb8,&PTR__OBJC_CLASS___NSImage_10053fa10);
    plVar3 = &local_d8;
    _swift_dynamicCast(plVar3,&local_b0,puVar6 + 8,uVar2,6);
    if ((((ulong)plVar3 & 1) == 0) || (local_d8 == 0)) goto joined_r0x00010007995c;
    _swift_unknownObjectRelease(local_d8);
    if (param_5 == local_d8) goto LAB_100079888;
  }
  objc_stub::setContents_(IVar9,param_5);
LAB_100079888:
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  if ((param_6 & 1) == 0) {
    param_2 = 0.0;
  }
  if (param_2 !=
      *(double *)
       (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::speed)) {
    *(double *)
     (unaff_x20 + _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::speed) =
         param_2;
    IVar9 = *(ID *)(unaff_x20 +
                   _TtC7WallperP33_79B11F14DC93343480E42B0FDC124D3415SpinningArtView::disc);
    IVar1 = objc_stub::presentationLayer(IVar9);
    if (IVar1 == 0) {
      IVar1 = IVar9;
    }
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::valueForKeyPath_(IVar1,pNVar4);
    if (IVar1 == 0) {
      uStack_c8 = 0;
      local_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar1);
    }
    uStack_a8 = uStack_c8;
    local_b0 = local_d0;
    local_98 = lStack_b8;
    uStack_a0 = uStack_c0;
    if (lStack_b8 == 0) {
      FUN_10002a29c(&local_b0,&DAT_10054d428,&DAT_100420300);
    }
    else {
      _swift_dynamicCast(&local_d8,&local_b0,puVar6 + 8,
                         PTR___type_metadata_for_Swift_Double_100523b90,6);
    }
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::removeAnimationForKey_(IVar9,pNVar4);
    CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
    CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
    if (param_2 == 0.0) {
      if (DAT_10054eea0 != -1) {
        _swift_once(&DAT_10054eea0,FUN_10007a014);
      }
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar1 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar4);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar1,pNVar5);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar1,pNVar5);
      CABasicAnimation::setDuration_(IVar1,param_3 * 1.8);
      puVar6 = &_OBJC_CLASS___CAMediaTimingFunction;
      _objc_allocWithZone();
      IVar7 = objc_stub::initWithControlPoints____
                        ((ID)puVar6,0x3e800000,0x3f000000,0x3f2b851f,0x3f800000);
      CABasicAnimation::setTimingFunction_(IVar1,IVar7);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKeyPath_(IVar9,pNVar5,pNVar4);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::addAnimation_forKey_(IVar9,IVar1,pNVar4);
    }
    else {
      if (DAT_10054eea0 != -1) {
        _swift_once(&DAT_10054eea0,FUN_10007a014);
      }
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar1 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar4);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar1,pNVar5);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar1,pNVar5);
      CABasicAnimation::setDuration_(IVar1,param_3);
      puVar6 = &_OBJC_CLASS___CAMediaTimingFunction;
      _objc_allocWithZone();
      IVar7 = objc_stub::initWithControlPoints____((ID)puVar6,0x3ea8f5c3,0,0x3f000000,0);
      CABasicAnimation::setTimingFunction_(IVar1,IVar7);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar4);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar7,pNVar5);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar7,pNVar5);
      CABasicAnimation::setDuration_(IVar7,360.0 / param_2);
      CABasicAnimation::setBeginTime_(IVar7,param_3);
      CABasicAnimation::setRepeatCount_(IVar7,0x7f7fffff);
      puVar6 = &_OBJC_CLASS___CAAnimationGroup;
      _objc_allocWithZone();
      self = objc_stub::init((ID)puVar6);
      puVar6 = &DAT_10054d5c0;
      FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
      _swift_allocObject();
      *(undefined8 *)(puVar6 + 0x18) = 5;
      *(undefined8 *)(puVar6 + 0x10) = 2;
      *(ID *)(puVar6 + 0x20) = IVar1;
      *(ID *)(puVar6 + 0x28) = IVar7;
      FUN_100044230(0,&DAT_10054eeb0,&PTR__OBJC_CLASS___CAAnimation_10053fa50);
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar6);
      objc_stub::setAnimations_(self,pNVar8);
      objc_stub::setDuration_(self,0x41cdcd6500000000);
      objc_stub::setRemovedOnCompletion_(self,0);
      objc_stub::setFillMode_(self,*(undefined8 *)PTR__kCAFillModeForwards_100521a70);
      pNVar5 = (extension_Foundation)::double::_bridgeToObjectiveC();
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKeyPath_(IVar9,pNVar5,pNVar4);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::addAnimation_forKey_(IVar9,self,pNVar4);
    }
    CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  }
  return;
}

