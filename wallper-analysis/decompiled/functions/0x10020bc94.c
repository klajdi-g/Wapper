// rea decompile_all
// name: FUN_10020bc94
// address: 0x10020bc94
// body: available
// range: 0x10020bc94-0x10020c13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020c138 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020bc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  bool bVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  URL UVar4;
  NSURL *pNVar5;
  ulong self;
  _ArrayBuffer _Var6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  URL UVar10;
  UUID UVar11;
  char *pcVar12;
  undefined *extraout_x1;
  _StringGuts _Var13;
  undefined **ppuVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  char *local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  local_98 = param_3;
  local_90 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  lVar19 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  UVar10 = UVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar15 - extraout_x12;
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar10);
  self = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,pNVar5);
  _Var6.unknown =
       (undefined *)
       AVAsset::tracksWithMediaType_(self,*(undefined8 *)PTR__AVMediaTypeVideo_1005212b8);
  ppuVar14 = &PTR__OBJC_CLASS___AVAssetTrack_10053fbe0;
  FUN_100044230(0,&DAT_1005572d0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(_Var6.unknown);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00010020c120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar18 + 0x38))(param_1,1,1,UVar4.unknown);
      return;
    }
  }
  else {
    local_a8 = lVar18;
    local_a0 = param_1;
    if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10020c138);
        (*pcVar16)();
      }
      uVar8 = *(undefined8 *)(_Var6.unknown + 0x20);
    }
    else {
      uVar8 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
    }
    local_b0 = uVar8;
    _swift_bridgeObjectRelease(_Var6.unknown);
    IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar10.unknown = (undefined *)NSFileManager::temporaryDirectory(IVar9);
    _Var13.unknown = extraout_x1;
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
    local_78 = (char *)0x0;
    local_70 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x12,_Var13);
    UVar11.unknown = local_70;
    _swift_bridgeObjectRelease();
    local_78 = (char *)0x637665682d706c77;
    local_70 = (void *)0xe90000000000002d;
    SVar21 = Foundation::UUID::get_uuidString(UVar11);
    SVar24.bridgeObject = param_5;
    SVar24.str = (char *)ppuVar14;
    Swift::String::append(SVar21,SVar24);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar22.bridgeObject = (void *)0xe100000000000000;
    SVar22.str = (char *)0x2d;
    SVar25.bridgeObject = param_5;
    SVar25.str = (char *)ppuVar14;
    Swift::String::append(SVar22,SVar25);
    UVar11 = Foundation::UUID::init();
    SVar21 = Foundation::UUID::get_uuidString(UVar11);
    (**(code **)(lVar19 + 8))(lVar20,local_90);
    SVar26.bridgeObject = param_5;
    SVar26.str = (char *)ppuVar14;
    Swift::String::append(SVar21,SVar26);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar23.bridgeObject = (void *)0xe400000000000000;
    SVar23.str = (char *)0x766f6d2e;
    SVar27.bridgeObject = param_5;
    SVar27.str = (char *)ppuVar14;
    Swift::String::append(SVar23,SVar27);
    puVar3 = local_70;
    SVar21.bridgeObject = local_70;
    SVar21.str = local_78;
    Foundation::URL::appendingPathComponent(SVar21,(URL)ppuVar14);
    _swift_bridgeObjectRelease(puVar3);
    lVar18 = local_a8;
    pcVar16 = *(code **)(local_a8 + 8);
    (*pcVar16)(lVar15,UVar4.unknown);
    UVar10.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar10);
    local_78 = (char *)0x0;
    IVar9 = NSFileManager::removeItemAtURL_error_((ID)UVar10.unknown,pNVar5,&local_78);
    if ((int)IVar9 == 0) {
      pcVar12 = local_78;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar12);
    }
    FUN_10020eb44(self,local_b0,lVar17,600,9500000,12000000);
    bVar1 = (self & 1) == 0;
    if (bVar1) {
      (*pcVar16)(lVar17,UVar4.unknown);
      pcVar16 = *(code **)(lVar18 + 0x38);
      uVar8 = local_a0;
    }
    else {
      FUN_100212f10(lVar17);
      uVar8 = local_a0;
      (**(code **)(lVar18 + 0x20))(local_a0,lVar17,UVar4.unknown);
      pcVar16 = *(code **)(lVar18 + 0x38);
    }
    (*pcVar16)(uVar8,bVar1,1,UVar4.unknown);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

