// rea decompile_all
// name: FUN_1002904b8
// address: 0x1002904b8
// body: available
// range: 0x1002904b8-0x1002906c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002904b8(long param_1,ID param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  _ArrayBuffer _Var4;
  ID self;
  ID self_00;
  _StringGuts _Var5;
  ID IVar6;
  ID IVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _Var4.unknown = (undefined *)objc_stub::tracks(param_2);
    FUN_100044230(0,&DAT_100557ae8,&PTR__OBJC_CLASS___AVPlayerItemTrack_10053fc20);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var4.unknown >> 0x3e == 0) {
      IVar6 = *(ID *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var4.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
        _Var1.unknown = _Var4.unknown;
      }
      IVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (IVar6 != 0) {
      if ((long)IVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002906c4);
        (*pcVar2)();
      }
      IVar7 = 0;
      do {
        if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
          self = *(ID *)(_Var4.unknown + IVar7 * 8 + 0x20);
        }
        else {
          self = IVar7;
          Swift::_ArrayBuffer::__getElementSlowPath(IVar7,_Var4);
        }
        self_00 = objc_stub::assetTrack(self);
        if (self_00 != 0) {
          objc_stub::mediaType(self_00);
          SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var5.unknown = SVar8.bridgeObject;
          SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar8 == SVar9) {
            _swift_bridgeObjectRelease(_Var5.unknown);
            _swift_bridgeObjectRelease(SVar9.bridgeObject);
          }
          else {
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar8.str,_Var5,
                               (_StringComparisonResult)(__int8)SVar9.str);
            _swift_bridgeObjectRelease(_Var5.unknown);
            _swift_bridgeObjectRelease(SVar9.bridgeObject);
            if (!bVar3) goto LAB_1002905ac;
          }
          objc_stub::setEnabled_(self,(ulong)((*(byte *)(param_1 + 0x10) ^ 0xffffffff) & 1));
        }
LAB_1002905ac:
        IVar7 = IVar7 + 1;
      } while (IVar6 != IVar7);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  return;
}

