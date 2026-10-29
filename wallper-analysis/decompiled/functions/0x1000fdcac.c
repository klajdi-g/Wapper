// rea decompile_all
// name: FUN_1000fdcac
// address: 0x1000fdcac
// body: available
// range: 0x1000fdcac-0x1000fe3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000fdcac(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  code *pcVar5;
  ID IVar6;
  ID IVar7;
  NSString *pNVar8;
  ID IVar9;
  undefined *puVar10;
  NSArray *pNVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ID unaff_x20;
  ulong uVar15;
  long lVar16;
  _ArrayBuffer _Var17;
  __int64 _Var18;
  long lVar19;
  ulong uVar20;
  double extraout_d0;
  double dVar21;
  double extraout_d0_00;
  double dVar22;
  undefined8 extraout_d0_01;
  double extraout_d0_02;
  double dVar23;
  double extraout_d0_03;
  double extraout_d0_04;
  undefined8 uVar24;
  ulong local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff58,"layout");
  objc_stub::bounds(unaff_x20);
  dVar21 = extraout_d0;
  _CGRectGetWidth();
  objc_stub::bounds(unaff_x20);
  dVar22 = extraout_d0_00;
  _CGRectGetWidth();
  lVar19 = _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::isAnimating;
  dVar22 = (dVar22 + dVar21 * 0.12 * -3.0) * 0.25;
  if (dVar22 < 0.0) {
    dVar22 = 0.0;
  }
  if (*(char *)(unaff_x20 +
               _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::isAnimating) ==
      '\x01') {
    IVar6 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    IVar6 = NSColor::grayColor((ID)&_OBJC_CLASS___NSColor);
  }
  IVar6 = NSColor::CGColor(IVar6);
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  lVar4 = _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::bars;
  _swift_beginAccess(unaff_x20 +
                     _TtC7WallperP33_5363C4867DD4E85C8D4034D5527F5B0A13AudioBarsView::bars,
                     auStack_c0,0,0);
  _Var17.unknown = *(undefined **)(unaff_x20 + lVar4);
  if ((ulong)_Var17.unknown >> 0x3e == 0) {
    _Var18 = *(long *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var17.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var17.unknown) {
      _Var1.unknown = _Var17.unknown;
    }
    _Var18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRetain(_Var17.unknown);
  if (_Var18 != 0) {
    uVar20 = 0;
    do {
      if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fe348);
          (*pcVar5)();
        }
        IVar7 = *(ID *)(_Var17.unknown + uVar20 * 8 + 0x20);
      }
      else {
        IVar7 = uVar20;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar20,_Var17);
      }
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fdecc);
        (*pcVar5)();
      }
      lVar16 = uVar20 + 1;
      objc_stub::setBackgroundColor_(IVar7,IVar6);
      objc_stub::setCornerRadius_(IVar7,dVar22 * 0.5);
      objc_stub::bounds(unaff_x20);
      uVar14 = extraout_d0_01;
      _CGRectGetMidY();
      objc_stub::setPosition_
                (IVar7,dVar22 * 0.5 + (dVar21 * 0.12 + dVar22) * (double)(long)uVar20,uVar14);
      objc_stub::bounds(unaff_x20);
      dVar23 = extraout_d0_02;
      _CGRectGetHeight();
      objc_stub::setBounds_(IVar7,0,0,dVar22,dVar23 * 0.25);
      uVar20 = uVar20 + 1;
    } while (lVar16 != _Var18);
  }
  _swift_bridgeObjectRelease(_Var17.unknown);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  _Var17.unknown = *(undefined **)(unaff_x20 + lVar4);
  if ((ulong)_Var17.unknown >> 0x3e == 0) {
    IVar6 = *(ID *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var17.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var17.unknown) {
      _Var1.unknown = _Var17.unknown;
    }
    IVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar6 != 0) {
    if ((long)IVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fe388);
      (*pcVar5)();
    }
    _swift_bridgeObjectRetain(_Var17.unknown);
    IVar7 = 0;
    do {
      if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
        IVar9 = *(ID *)(_Var17.unknown + IVar7 * 8 + 0x20);
      }
      else {
        IVar9 = IVar7;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar7,_Var17);
      }
      IVar7 = IVar7 + 1;
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::removeAnimationForKey_(IVar9,pNVar8);
    } while (IVar6 != IVar7);
    _swift_bridgeObjectRelease(_Var17.unknown);
  }
  if (*(char *)(unaff_x20 + lVar19) == '\x01') {
    objc_stub::bounds(unaff_x20);
    dVar21 = extraout_d0_03;
    _CGRectGetHeight();
    if (0.0 < dVar21) {
      _Var17.unknown = *(undefined **)(unaff_x20 + lVar4);
      if ((ulong)_Var17.unknown >> 0x3e == 0) {
        uVar20 = *(ulong *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var17.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var17.unknown) {
          _Var1.unknown = _Var17.unknown;
        }
        uVar20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (uVar20 != 0) {
        uVar14 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_100521aa0;
        _swift_bridgeObjectRetain(_Var17.unknown);
        uVar15 = 0;
        do {
          if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fe350);
              (*pcVar5)();
            }
            IVar6 = *(ID *)(_Var17.unknown + uVar15 * 8 + 0x20);
          }
          else {
            IVar6 = uVar15;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var17);
          }
          if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000fe34c);
            (*pcVar5)();
          }
          uVar15 = uVar15 + 1;
          local_c8 = PTR___swiftEmptyArrayStorage_100524190;
          FUN_1001c5de8(0,0x10,0);
          lVar19 = 0;
          do {
            puVar12 = local_c8;
            objc_stub::bounds(unaff_x20);
            dVar21 = extraout_d0_04;
            _CGRectGetHeight();
            do {
              local_d0 = 0;
              _swift_stdlib_random(&local_d0,8);
            } while (local_d0 + (local_d0 << 0x35) < 0x1ffffffffff801);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_d0;
            uVar13 = SUB168(auVar3 * ZEXT816(0x20000000000001),8);
            dVar22 = 1.0;
            if (uVar13 != 0x20000000000000) {
              dVar22 = ((double)uVar13 / 9007199254740992.0) * 0.8 + 0.2;
            }
            uVar2 = *(ulong *)(puVar12 + 0x10);
            uVar13 = uVar2 + 1;
            local_c8 = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
              FUN_1001c5de8(1 < *(ulong *)(puVar12 + 0x18),uVar13,1);
            }
            lVar19 = lVar19 + 1;
            *(ulong *)(local_c8 + 0x10) = uVar13;
            *(double *)(local_c8 + uVar2 * 8 + 0x20) = dVar21 * dVar22;
          } while (lVar19 != 0x10);
          uVar24 = *(undefined8 *)(local_c8 + 0x20);
          puVar12 = local_c8;
          if (*(ulong *)(local_c8 + 0x18) >> 1 <= uVar13) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(local_c8 + 0x18));
            FUN_1001c4744(puVar12,uVar2 + 2,1,local_c8);
          }
          *(ulong *)(puVar12 + 0x10) = uVar2 + 2;
          *(undefined8 *)(puVar12 + uVar13 * 8 + 0x20) = uVar24;
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar7 = CAKeyframeAnimation::animationWithKeyPath_
                            ((ID)&_OBJC_CLASS___CAKeyframeAnimation,pNVar8);
          puVar10 = puVar12;
          FUN_1000fe3d4(puVar12);
          pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar10);
          CAKeyframeAnimation::setValues_(IVar7,pNVar11);
          lVar19 = *(long *)(puVar12 + 0x10);
          CAKeyframeAnimation::setDuration_(IVar7,(double)(lVar19 + -1) * 0.18);
          IVar9 = CAMediaTimingFunction::functionWithName_
                            ((ID)&_OBJC_CLASS___CAMediaTimingFunction,uVar14);
          FUN_1000fe520(IVar9,lVar19 + -1);
          FUN_1000fe5b0(0);
          pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(IVar9);
          CAKeyframeAnimation::setTimingFunctions_(IVar7,pNVar11);
          CAKeyframeAnimation::setRepeatCount_(IVar7,0x7f800000);
          CAKeyframeAnimation::setRemovedOnCompletion_(IVar7,0);
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::addAnimation_forKey_(IVar6,IVar7,pNVar8);
          _swift_bridgeObjectRelease(puVar12);
        } while (uVar15 != uVar20);
        _swift_bridgeObjectRelease(_Var17.unknown);
      }
    }
  }
  return;
}

