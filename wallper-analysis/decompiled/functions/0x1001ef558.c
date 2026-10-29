// rea decompile_all
// name: FUN_1001ef558
// address: 0x1001ef558
// body: available
// range: 0x1001ef558-0x1001f002b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ef75c to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_1001ef558(void)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  DispatchTime DVar6;
  ID IVar7;
  ulong uVar8;
  undefined *puVar9;
  ID self;
  undefined8 uVar10;
  ID IVar11;
  NSString *pNVar12;
  NSValue *pNVar13;
  NSNumber *pNVar14;
  ID IVar15;
  ID self_00;
  NSArray *pNVar16;
  OS_dispatch_queue *pOVar17;
  void *aBlock;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ID unaff_x20;
  long lVar19;
  long lVar20;
  DispatchWorkItemFlags flags;
  DispatchQoS qos;
  DispatchTime DVar21;
  long lVar22;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar23;
  double extraout_d0_03;
  double extraout_d0_04;
  double dVar24;
  double dVar25;
  double dVar26;
  ID local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  long local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  code *local_d8;
  DispatchTime local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar20 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  flags.unknown = (undefined *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar22 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar19 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  DVar21.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d0.unknown = DVar21.unknown + -extraout_x12;
  IVar7 = objc_stub::layer(unaff_x20);
  if (IVar7 == 0) {
    return (undefined *)0x0;
  }
  local_d8 = (code *)lVar19;
  objc_stub::bounds(unaff_x20);
  dVar25 = extraout_d0;
  _CGRectGetWidth();
  if (0.0 < dVar25) {
    objc_stub::bounds(unaff_x20);
    dVar25 = extraout_d0_00;
    _CGRectGetHeight();
    if (0.0 < dVar25) {
      uVar8 = 4;
      local_e0 = DVar6.unknown;
      thunk_FUN_100328848();
      if (3 < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f000c);
        (*pcVar3)();
      }
      bVar1 = (&DAT_1005570a8)[uVar8];
      objc_stub::bounds(unaff_x20);
      dVar25 = extraout_d0_01;
      local_100 = lVar22;
      puStack_f8 = DVar5.unknown;
      local_f0 = DVar4.unknown;
      local_e8 = lVar20;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          _CGRectGetWidth();
          if (dVar25 < 0.0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0010);
            (*pcVar3)();
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0020);
            (*pcVar3)();
          }
          uVar8 = 0x20000000000001;
          thunk_FUN_100328848();
          if (uVar8 != 0x20000000000000) {
            dVar25 = dVar25 * ((double)uVar8 / 9007199254740992.0) + 0.0;
          }
          objc_stub::bounds(unaff_x20);
          dVar26 = extraout_d0_02;
          _CGRectGetHeight();
        }
        else {
          _CGRectGetWidth();
          if (dVar25 < 0.0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0018);
            (*pcVar3)();
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0028);
            (*pcVar3)();
          }
          uVar8 = 0x20000000000001;
          thunk_FUN_100328848();
          dVar26 = 0.0;
          if (uVar8 != 0x20000000000000) {
            dVar25 = dVar25 * ((double)uVar8 / 9007199254740992.0) + 0.0;
          }
        }
      }
      else {
        if (bVar1 == 2) {
          dVar26 = extraout_d0_01;
          _CGRectGetHeight();
          if (dVar26 < 0.0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0014);
            (*pcVar3)();
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f0024);
            (*pcVar3)();
          }
          uVar8 = 0x20000000000001;
          thunk_FUN_100328848();
          dVar23 = dVar26 * ((double)uVar8 / 9007199254740992.0);
          dVar25 = 0.0;
        }
        else {
          _CGRectGetWidth();
          objc_stub::bounds(unaff_x20);
          dVar26 = extraout_d0_03;
          _CGRectGetHeight();
          if (dVar26 < 0.0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f001c);
            (*pcVar3)();
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f002c);
            (*pcVar3)();
          }
          uVar8 = 0x20000000000001;
          thunk_FUN_100328848();
          dVar23 = dVar26 * ((double)uVar8 / 9007199254740992.0);
        }
        if (uVar8 != 0x20000000000000) {
          dVar26 = dVar23 + 0.0;
        }
      }
      objc_stub::bounds(unaff_x20);
      _CGRectGetMidX();
      objc_stub::bounds(unaff_x20);
      dVar23 = extraout_d0_04;
      _CGRectGetMidY();
      uVar8 = 0x20000000000001;
      thunk_FUN_100328848();
      dVar24 = 0.27;
      if (uVar8 != 0x20000000000000) {
        dVar24 = ((double)uVar8 / 9007199254740992.0) * 0.09000000000000002 + 0.18;
      }
      uVar8 = 0x20000000000001;
      thunk_FUN_100328848((dVar23 - dVar26) * dVar24);
      dVar23 = 5.0;
      if (uVar8 != 0x20000000000000) {
        dVar23 = (double)uVar8 / 9007199254740992.0 + (double)uVar8 / 9007199254740992.0 + 3.0;
      }
      puVar9 = &_OBJC_CLASS___CAShapeLayer;
      _objc_allocWithZone();
      self = objc_stub::init((ID)puVar9);
      objc_stub::setBounds_(self,0,0,dVar23,dVar23);
      objc_stub::setPosition_(self,dVar25,dVar26);
      objc_stub::bounds(self);
      uVar10 = 0;
      _CGPathCreateWithEllipseInRect(0);
      objc_stub::setPath_(self,uVar10);
      IVar11 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      IVar11 = NSColor::colorWithAlphaComponent_(IVar11,0x3fee666666666666);
      IVar11 = NSColor::CGColor(IVar11);
      objc_stub::setFillColor_(self,IVar11);
      IVar11 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
      IVar11 = NSColor::CGColor(IVar11);
      objc_stub::setShadowColor_(self,IVar11);
      objc_stub::setShadowOpacity_(self,0x3f333333);
      objc_stub::setShadowRadius_(self,0x4018000000000000);
      objc_stub::setShadowOffset_(self,0,0);
      local_108 = IVar7;
      objc_stub::addSublayer_(IVar7,self);
      uVar8 = 0x20000000000001;
      thunk_FUN_100328848();
      dVar25 = 1.1;
      if (uVar8 != 0x20000000000000) {
        dVar25 = ((double)uVar8 / 9007199254740992.0) * 0.40000000000000013 + 0.7;
      }
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar12);
      pNVar13 = (extension_Foundation)::__C::CGPoint::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar7,pNVar13);
      pNVar13 = (extension_Foundation)::__C::CGPoint::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar7,pNVar13);
      CABasicAnimation::setDuration_(IVar7,dVar25);
      IVar11 = CAMediaTimingFunction::functionWithName_
                         ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                          *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100521aa8);
      local_120 = IVar7;
      CABasicAnimation::setTimingFunction_(IVar7,IVar11);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar11 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar12);
      pNVar14 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar11,pNVar14);
      pNVar14 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar11,pNVar14);
      CABasicAnimation::setDuration_(IVar11,dVar25);
      IVar15 = CAMediaTimingFunction::functionWithName_
                         ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                          *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_100521a98);
      local_118 = IVar11;
      CABasicAnimation::setTimingFunction_(IVar11,IVar15);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar15 = CABasicAnimation::animationWithKeyPath_((ID)&_OBJC_CLASS___CABasicAnimation,pNVar12);
      pNVar14 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setFromValue_(IVar15,pNVar14);
      pNVar14 = (extension_Foundation)::double::_bridgeToObjectiveC();
      CABasicAnimation::setToValue_(IVar15,pNVar14);
      local_110 = IVar15;
      CABasicAnimation::setDuration_(IVar15,dVar25);
      puVar9 = &_OBJC_CLASS___CAAnimationGroup;
      _objc_allocWithZone();
      self_00 = objc_stub::init((ID)puVar9);
      puVar9 = &DAT_10054d5c0;
      FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 7;
      *(undefined8 *)(puVar9 + 0x10) = 3;
      *(ID *)(puVar9 + 0x20) = IVar7;
      *(ID *)(puVar9 + 0x28) = IVar11;
      *(ID *)(puVar9 + 0x30) = IVar15;
      FUN_100044230(0,&DAT_10054eeb0,&PTR__OBJC_CLASS___CAAnimation_10053fa50);
      pNVar16 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar9);
      objc_stub::setAnimations_(self_00,pNVar16);
      objc_stub::setDuration_(self_00,dVar25);
      objc_stub::setRemovedOnCompletion_(self_00,0);
      objc_stub::setFillMode_(self_00,*(undefined8 *)PTR__kCAFillModeForwards_100521a70);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::addAnimation_forKey_(self,self_00,pNVar12);
      pOVar17 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      DVar6.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar17);
      Dispatch::DispatchTime::now(DVar6);
      DVar6.unknown = local_d0.unknown;
      Dispatch::__infix(DVar21,dVar25);
      local_d8 = *(code **)((long)local_d8 + 8);
      (*local_d8)(DVar21.unknown,local_e0);
      puVar9 = &DAT_100532228;
      _swift_allocObject(&DAT_100532228,0x18,7);
      *(ID *)(puVar9 + 0x10) = self;
      local_a8 = FUN_100077a38;
      local_c8 = PTR___NSConcreteStackBlock_100521110;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_100532240;
      local_a0 = puVar9;
      aBlock = __Block_copy(&local_c8);
      DVar5.unknown = local_a0;
      _swift_release();
      DVar5 = Dispatch::DispatchQoS::get_unspecified(DVar5);
      local_c8 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1000fedc8();
      puVar9 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar18 = puVar9;
      FUN_100077ac0();
      puVar2 = local_f0;
      Swift::SetAlgebra::_init(flags.unknown,&local_c8,puVar9,puVar18,local_f0,DVar5.unknown);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar6,qos,flags);
      __Block_release(aBlock);
      (**(code **)(local_e8 + 8))(flags.unknown,puVar2);
      (**(code **)(local_100 + 8))(qos.unknown,puStack_f8);
      (*local_d8)(DVar6.unknown,local_e0);
      return DVar6.unknown;
    }
  }
  return (undefined *)0x0;
}

