// rea decompile_all
// name: FUN_1002f9b2c
// address: 0x1002f9b2c
// body: available
// range: 0x1002f9b2c-0x1002f9e13 inclusive
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

undefined1  [16]
FUN_1002f9b2c(undefined8 param_1,double param_2,URL param_3,undefined8 param_4,undefined8 param_5,
             void *param_6)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  NSURL *pNVar3;
  ID IVar4;
  _ArrayBuffer _Var5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 extraout_d0;
  double dVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String local_70 [3];
  
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(param_3);
  IVar4 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar3);
  _Var5.unknown =
       (undefined *)
       AVAsset::tracksWithMediaType_(IVar4,*(undefined8 *)PTR__AVMediaTypeVideo_1005212b8);
  ppuVar7 = &PTR__OBJC_CLASS___AVAssetTrack_10053fbe0;
  FUN_100044230(0,&DAT_1005572d0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    local_70[0].bridgeObject = (void *)0xe300000000000000;
    local_70[0].str = (char *)0x412f4e;
  }
  else {
    if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f9e0c);
        (*pcVar2)();
      }
      IVar4 = *(ID *)(_Var5.unknown + 0x20);
    }
    else {
      IVar4 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var5);
    }
    _swift_bridgeObjectRelease(_Var5.unknown);
    objc_stub::naturalSize(IVar4);
    objc_stub::preferredTransform(IVar4,local_70);
    _CGSizeApplyAffineTransform(extraout_d0,local_70);
    dVar8 = ABS(param_2);
    if (4320.0 <= dVar8) {
      local_70[0].bridgeObject = (void *)0xe200000000000000;
      local_70[0].str = (char *)0x4b38;
    }
    else if (2160.0 <= dVar8) {
      local_70[0].bridgeObject = (void *)0xe200000000000000;
      local_70[0].str = (char *)0x4b34;
    }
    else if (1440.0 <= dVar8) {
      local_70[0].bridgeObject = (void *)0xe200000000000000;
      local_70[0].str = (char *)0x4b32;
    }
    else if (1080.0 <= dVar8) {
      local_70[0].bridgeObject = (void *)0xe500000000000000;
      local_70[0].str = (char *)0x7030383031;
    }
    else if (720.0 <= dVar8) {
      local_70[0].bridgeObject = (void *)0xe400000000000000;
      local_70[0].str = (char *)0x70303237;
    }
    else {
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f9e10);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f9e14);
        (*pcVar2)();
      }
      local_70[0] = Swift::CustomStringConvertible::get_description();
      SVar9.bridgeObject = (void *)0xe100000000000000;
      SVar9.str = (char *)0x70;
      SVar11.bridgeObject = param_6;
      SVar11.str = (char *)ppuVar7;
      Swift::String::append(SVar9,SVar11);
    }
  }
  auVar10._8_8_ = local_70[0].bridgeObject;
  auVar10._0_8_ = local_70[0].str;
  return auVar10;
}

