// rea decompile_all
// name: FUN_100106514
// address: 0x100106514
// body: available
// range: 0x100106514-0x10010684f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100106834 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100106514(void)

{
  ID IVar1;
  NSString *pNVar2;
  NSNumber *pNVar3;
  ID self;
  undefined *puVar4;
  ID self_00;
  NSArray *pNVar5;
  ID unaff_x20;
  ID self_01;
  
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    self_01 = *(ID *)(unaff_x20 +
                     _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::ring);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::animationForKey_(self_01,pNVar2);
    if (IVar1 == 0) {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar1 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar2);
      pNVar3 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar1,pNVar3);
      pNVar3 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar1,pNVar3);
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      self = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar2);
      pNVar3 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(self,pNVar3);
      pNVar3 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(self,pNVar3);
      puVar4 = &_OBJC_CLASS___CAAnimationGroup;
      _objc_allocWithZone();
      self_00 = objc_stub::init((ID)puVar4);
      puVar4 = &DAT_10054d5c0;
      FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 5;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      *(ID *)(puVar4 + 0x20) = IVar1;
      *(ID *)(puVar4 + 0x28) = self;
      FUN_100044230(0,&DAT_10054eeb0,&PTR__OBJC_CLASS___CAAnimation_10053fa50);
      pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar4);
      objc_stub::setAnimations_(self_00,pNVar5);
      objc_stub::setDuration_(self_00,0x3ff3333333333333);
      IVar1 = CAMediaTimingFunction::functionWithName_
                        ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                         *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100521aa8);
      objc_stub::setTimingFunction_(self_00,IVar1);
      objc_stub::setRepeatCount_(self_00,0x7f800000);
      objc_stub::setRemovedOnCompletion_(self_00,0);
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::addAnimation_forKey_(self_01,self_00,pNVar2);
    }
    return 0;
  }
  return 0;
}

