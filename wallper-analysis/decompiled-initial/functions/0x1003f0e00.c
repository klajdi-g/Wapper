// rea decompile_all
// name: FUN_1003f0e00
// address: 0x1003f0e00
// body: available
// range: 0x1003f0e00-0x1003f104b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f0eb4 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003f1044 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

_ArrayBuffer
FUN_1003f0e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ID IVar4;
  _ArrayBuffer _Var5;
  ID self;
  long unaff_x20;
  ID IVar6;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double extraout_d0_02;
  double dVar7;
  double extraout_d0_03;
  double extraout_d0_04;
  double dVar8;
  double dVar9;
  double dVar10;
  
  IVar6 = unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::hostView;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 == 0) {
    return (_ArrayBuffer)(undefined *)0x0;
  }
  objc_stub::bounds(IVar6);
  dVar9 = extraout_d0;
  _CGRectGetWidth();
  if (0.0 < dVar9) {
    objc_stub::bounds(IVar6);
    dVar9 = extraout_d0_00;
    _CGRectGetHeight();
    if (0.0 < dVar9) {
      IVar4 = objc_stub::window(IVar6);
      if (IVar4 == 0) {
        dVar9 = 2.0;
      }
      else {
        objc_stub::backingScaleFactor(IVar4);
        dVar9 = extraout_d0_01;
      }
      objc_stub::bounds(IVar6);
      dVar7 = extraout_d0_02;
      _CGRectGetWidth();
      objc_stub::bounds(IVar6);
      dVar8 = extraout_d0_03;
      _CGRectGetHeight(extraout_d0_03,param_2,param_3,param_4,0);
      _Var5.unknown =
           (undefined *)
           objc_stub::items(*(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::player));
      FUN_100044230(0,&DAT_100557ae0,&PTR__OBJC_CLASS___AVPlayerItem_10053fc08);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        IVar6 = *(ID *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
          _Var1.unknown = _Var5.unknown;
        }
        IVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (IVar6 != 0) {
        if ((long)IVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f104c);
          (*pcVar2)();
        }
        IVar4 = 0;
        dVar8 = dVar9 * dVar8;
        dVar10 = (double)(long)dVar8;
        do {
          if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
            self = *(ID *)(_Var5.unknown + IVar4 * 8 + 0x20);
          }
          else {
            self = IVar4;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar4,_Var5);
          }
          objc_stub::preferredMaximumResolution(self);
          bVar3 = false;
          if ((extraout_d0_04 == (double)(long)(dVar9 * dVar7)) &&
             (bVar3 = false, !NAN(dVar8) && !NAN(dVar10))) {
            bVar3 = dVar8 == dVar10;
          }
          if (!bVar3) {
            dVar8 = dVar10;
            objc_stub::setPreferredMaximumResolution_(self,(long)(dVar9 * dVar7));
          }
          IVar4 = IVar4 + 1;
        } while (IVar6 != IVar4);
      }
      _swift_bridgeObjectRelease(_Var5.unknown);
      return (_ArrayBuffer)_Var5.unknown;
    }
  }
  return (_ArrayBuffer)(undefined *)0x0;
}

