// rea decompile_all
// name: FUN_10020d5ec
// address: 0x10020d5ec
// body: available
// range: 0x10020d5ec-0x10020d727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10020d5ec(URL param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  NSURL *pNVar4;
  ID self;
  ID IVar5;
  _ArrayBuffer _Var6;
  __int64 _Var7;
  
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(param_1);
  self = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar4);
  IVar5 = AVAsset::isPlayable(self);
  if ((int)IVar5 == 0) {
    bVar3 = false;
  }
  else {
    _Var6.unknown =
         (undefined *)
         AVAsset::tracksWithMediaType_(self,*(undefined8 *)PTR__AVMediaTypeVideo_1005212b8);
    FUN_100044230(0,&DAT_1005572d0,&PTR__OBJC_CLASS___AVAssetTrack_10053fbe0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      _Var7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var1.unknown = _Var6.unknown;
      }
      _Var7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    bVar3 = _Var7 != 0;
    if (_Var7 != 0) {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10020d728);
          (*pcVar2)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
        _swift_unknownObjectRelease();
      }
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  return bVar3;
}

