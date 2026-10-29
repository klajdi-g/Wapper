// rea decompile_all
// name: FUN_1001eee28
// address: 0x1001eee28
// body: available
// range: 0x1001eee28-0x1001ef403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ef400 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001eee28(void)

{
  ID self;
  ID IVar1;
  NSArray *pNVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ID unaff_x20;
  double extraout_d0;
  double dVar8;
  undefined8 extraout_d0_00;
  undefined8 uVar9;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  double extraout_d0_03;
  undefined8 extraout_d0_04;
  
  self = objc_stub::layer(unaff_x20);
  if (self != 0) {
    IVar1 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    IVar1 = NSColor::CGColor(IVar1);
    objc_stub::setBackgroundColor_(self,IVar1);
    IVar1 = objc_stub::sublayers(self);
    if (IVar1 == 0) {
      objc_stub::setSublayers_(self,0);
    }
    else {
      FUN_100044230(0,&DAT_100557078,&PTR__OBJC_CLASS___CALayer_10053fa08);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      _swift_bridgeObjectRelease();
      puVar4 = PTR___swiftEmptyArrayStorage_100524190;
      pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar4);
      objc_stub::setSublayers_(self,pNVar2);
    }
    IVar1 = NSColor::systemBlueColor((ID)&_OBJC_CLASS___NSColor);
    IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3fd6666666666666);
    IVar1 = NSColor::CGColor(IVar1);
    IVar3 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    IVar3 = NSColor::CGColor(IVar3);
    puVar4 = &_OBJC_CLASS___CAGradientLayer;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar4);
    objc_stub::bounds(unaff_x20);
    dVar8 = extraout_d0;
    _CGRectGetHeight();
    objc_stub::bounds(unaff_x20);
    uVar9 = extraout_d0_00;
    _CGRectGetWidth();
    objc_stub::setFrame_(IVar5,0,dVar8 + -60.0,uVar9,0x404e000000000000);
    puVar4 = &DAT_10054c0b8;
    FUN_100002f94(&DAT_10054c0b8,&DAT_10041d850);
    puVar7 = puVar4;
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    uVar6 = 0;
    FUN_1000080b8();
    *(ID *)(puVar7 + 0x20) = IVar1;
    *(undefined8 *)(puVar7 + 0x58) = uVar6;
    *(undefined8 *)(puVar7 + 0x38) = uVar6;
    *(ID *)(puVar7 + 0x40) = IVar3;
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar7);
    objc_stub::setColors_(IVar5,pNVar2);
    objc_stub::setStartPoint_(IVar5,0x3fe0000000000000,0x3ff0000000000000);
    objc_stub::setEndPoint_(IVar5,0x3fe0000000000000,0);
    objc_stub::addSublayer_(self,IVar5);
    puVar7 = &_OBJC_CLASS___CAGradientLayer;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar7);
    objc_stub::bounds(unaff_x20);
    uVar9 = extraout_d0_01;
    _CGRectGetWidth();
    objc_stub::setFrame_(IVar5,0,0,uVar9,0x404e000000000000);
    puVar7 = puVar4;
    _swift_allocObject(puVar4,0x60,7);
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(ID *)(puVar7 + 0x20) = IVar1;
    *(undefined8 *)(puVar7 + 0x58) = uVar6;
    *(undefined8 *)(puVar7 + 0x38) = uVar6;
    *(ID *)(puVar7 + 0x40) = IVar3;
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar7);
    objc_stub::setColors_(IVar5,pNVar2);
    objc_stub::setStartPoint_(IVar5,0x3fe0000000000000,0);
    objc_stub::setEndPoint_(IVar5,0x3fe0000000000000,0x3ff0000000000000);
    objc_stub::addSublayer_(self,IVar5);
    puVar7 = &_OBJC_CLASS___CAGradientLayer;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar7);
    objc_stub::bounds(unaff_x20);
    uVar9 = extraout_d0_02;
    _CGRectGetHeight();
    objc_stub::setFrame_(IVar5,0,0,0x404e000000000000,uVar9);
    puVar7 = puVar4;
    _swift_allocObject(puVar4,0x60,7);
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(ID *)(puVar7 + 0x20) = IVar1;
    *(undefined8 *)(puVar7 + 0x58) = uVar6;
    *(undefined8 *)(puVar7 + 0x38) = uVar6;
    *(ID *)(puVar7 + 0x40) = IVar3;
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar7);
    objc_stub::setColors_(IVar5,pNVar2);
    objc_stub::setStartPoint_(IVar5,0,0x3fe0000000000000);
    objc_stub::setEndPoint_(IVar5,0x3ff0000000000000,0x3fe0000000000000);
    objc_stub::addSublayer_(self,IVar5);
    puVar7 = &_OBJC_CLASS___CAGradientLayer;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar7);
    objc_stub::bounds(unaff_x20);
    dVar8 = extraout_d0_03;
    _CGRectGetWidth();
    objc_stub::bounds(unaff_x20);
    uVar9 = extraout_d0_04;
    _CGRectGetHeight();
    objc_stub::setFrame_(IVar5,dVar8 + -60.0,0,0x404e000000000000,uVar9);
    _swift_allocObject(puVar4,0x60,7);
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(ID *)(puVar4 + 0x20) = IVar1;
    *(undefined8 *)(puVar4 + 0x58) = uVar6;
    *(undefined8 *)(puVar4 + 0x38) = uVar6;
    *(ID *)(puVar4 + 0x40) = IVar3;
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar4);
    objc_stub::setColors_(IVar5,pNVar2);
    objc_stub::setStartPoint_(IVar5,0x3ff0000000000000,0x3fe0000000000000);
    objc_stub::setEndPoint_(IVar5,0,0x3fe0000000000000);
    objc_stub::addSublayer_(self,IVar5);
    return 0;
  }
  return 0;
}

