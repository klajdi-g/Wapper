// rea decompile_all
// name: FUN_10012b91c
// address: 0x10012b91c
// body: available
// range: 0x10012b91c-0x10012bf9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012bf98 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10012b91c(ulong param_1)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  NSString *pNVar6;
  ID IVar7;
  NSArray *pNVar8;
  long unaff_x20;
  
  if ((*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::statusItem) != 0) &&
     (IVar2 = objc_stub::button(*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::statusItem)),
     lVar1 = _TtC7Wallper17MenuBarController::badgeDot, IVar2 != 0)) {
    if (*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::badgeDot) != 0) {
      objc_stub::removeFromSuperview(*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::badgeDot))
      ;
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    if ((param_1 & 1) != 0) {
      puVar3 = &_OBJC_CLASS___NSView;
      _objc_allocWithZone();
      self = objc_stub::initWithFrame_((ID)puVar3,0,0,0,0);
      objc_stub::setWantsLayer_(self,1);
      IVar4 = objc_stub::layer(self);
      if (IVar4 != 0) {
        IVar5 = NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
        IVar5 = NSColor::CGColor(IVar5);
        objc_stub::setBackgroundColor_(IVar4,IVar5);
      }
      IVar4 = objc_stub::layer(self);
      if (IVar4 != 0) {
        objc_stub::setCornerRadius_(IVar4,0x4018000000000000);
      }
      IVar4 = objc_stub::layer(self);
      if (IVar4 != 0) {
        IVar5 = NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
        IVar5 = NSColor::CGColor(IVar5);
        objc_stub::setShadowColor_(IVar4,IVar5);
      }
      IVar4 = objc_stub::layer(self);
      if (IVar4 != 0) {
        objc_stub::setShadowRadius_(IVar4,0x4008000000000000);
      }
      IVar4 = objc_stub::layer(self);
      if (IVar4 != 0) {
        objc_stub::setShadowOpacity_(IVar4,0x3f19999a);
      }
      IVar4 = objc_stub::layer(self);
      objc_stub::setShadowOffset_(IVar4,0,0);
      objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self,0);
      puVar3 = &_OBJC_CLASS___NSImageView;
      _objc_allocWithZone();
      IVar4 = objc_stub::initWithFrame_((ID)puVar3,0,0,0,0);
      objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar4,0);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = NSImage::imageWithSystemSymbolName_accessibilityDescription_
                        ((ID)&_OBJC_CLASS___NSImage,pNVar6,0);
      if (IVar5 != 0) {
        IVar7 = NSImageSymbolConfiguration::configurationWithPointSize_weight_
                          ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4020000000000000,
                           *(undefined8 *)PTR__NSFontWeightBlack_1005212f8);
        IVar5 = NSImage::imageWithSymbolConfiguration_(IVar5,IVar7);
        objc_stub::setImage_(IVar4,IVar5);
      }
      IVar5 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      objc_stub::setContentTintColor_(IVar4,IVar5);
      objc_stub::addSubview_(self,IVar4);
      objc_stub::addSubview_(IVar2,self);
      puVar3 = &DAT_10054d5c0;
      FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x18) = 0x11;
      *(undefined8 *)(puVar3 + 0x10) = 8;
      IVar5 = objc_stub::widthAnchor(self);
      IVar5 = objc_stub::constraintEqualToConstant_(IVar5,0x4028000000000000);
      *(ID *)(puVar3 + 0x20) = IVar5;
      IVar5 = objc_stub::heightAnchor(self);
      IVar5 = objc_stub::constraintEqualToConstant_(IVar5,0x4028000000000000);
      *(ID *)(puVar3 + 0x28) = IVar5;
      IVar5 = objc_stub::trailingAnchor(self);
      IVar7 = objc_stub::trailingAnchor(IVar2);
      IVar5 = objc_stub::constraintEqualToAnchor_constant_(IVar5,0,IVar7);
      *(ID *)(puVar3 + 0x30) = IVar5;
      IVar5 = objc_stub::topAnchor(self);
      IVar2 = objc_stub::topAnchor(IVar2);
      IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar5,0,IVar2);
      *(ID *)(puVar3 + 0x38) = IVar2;
      IVar2 = objc_stub::centerXAnchor(IVar4);
      IVar5 = objc_stub::centerXAnchor(self);
      IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar5);
      *(ID *)(puVar3 + 0x40) = IVar2;
      IVar2 = objc_stub::centerYAnchor(IVar4);
      IVar5 = objc_stub::centerYAnchor(self);
      IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar5);
      *(ID *)(puVar3 + 0x48) = IVar2;
      IVar2 = objc_stub::widthAnchor(IVar4);
      IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4020000000000000);
      *(ID *)(puVar3 + 0x50) = IVar2;
      IVar2 = objc_stub::heightAnchor(IVar4);
      IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4020000000000000);
      *(ID *)(puVar3 + 0x58) = IVar2;
      FUN_10012c840(0);
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar3);
      NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar8);
      *(ID *)(unaff_x20 + lVar1) = self;
    }
    return 0;
  }
  return 0;
}

