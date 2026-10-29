// rea decompile_all
// name: FUN_100213d10
// address: 0x100213d10
// body: available
// range: 0x100213d10-0x100213f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100213d10(URL param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  int iVar3;
  NSURL *pNVar4;
  ID IVar5;
  _ArrayBuffer _Var6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(param_1);
  IVar5 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar4);
  _Var6.unknown =
       (undefined *)
       AVAsset::tracksWithMediaType_(IVar5,*(undefined8 *)PTR__AVMediaTypeVideo_1005212b8);
  FUN_100044230(0,&DAT_1005572d0,&PTR__OBJC_CLASS___AVAssetTrack_10053fbe0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var1.unknown = _Var6.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(_Var6.unknown);
LAB_100213f2c:
    uVar10 = 0;
  }
  else {
    if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100213f74);
        (*pcVar2)();
      }
      IVar5 = *(ID *)(_Var6.unknown + 0x20);
    }
    else {
      IVar5 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
    puVar8 = (undefined *)objc_stub::formatDescriptions(IVar5);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar13 = puVar8;
    FUN_1001f04c8();
    _swift_bridgeObjectRelease(puVar8);
    _Var6.unknown = PTR___swiftEmptyArrayStorage_100524190;
    if (puVar13 != (undefined *)0x0) {
      _Var6.unknown = puVar13;
    }
    puVar13 = _Var6.unknown & 0xffffffffffffff8;
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      uVar11 = *(ulong *)(puVar13 + 0x10);
    }
    else {
      _Var1.unknown = puVar13;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var1.unknown = _Var6.unknown;
      }
      uVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    uVar12 = 0;
    do {
      if (uVar11 == uVar12) {
        _swift_bridgeObjectRelease(_Var6.unknown);
        goto LAB_100213f2c;
      }
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100213f08);
          (*pcVar2)();
        }
        iVar3 = (int)*(undefined8 *)(_Var6.unknown + uVar12 * 8 + 0x20);
      }
      else {
        uVar9 = uVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar12,_Var6);
        iVar3 = (int)uVar9;
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100213ec8);
        (*pcVar2)();
      }
      _CMFormatDescriptionGetMediaSubType();
      uVar12 = uVar12 + 1;
    } while (iVar3 != 0x68766331);
    _swift_bridgeObjectRelease(_Var6.unknown);
    uVar10 = 1;
  }
  return uVar10;
}

