// rea decompile_all
// name: FUN_10028325c
// address: 0x10028325c
// body: available
// range: 0x10028325c-0x10028370b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100283708 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10028325c(ID param_1)

{
  undefined8 *puVar1;
  Code CVar2;
  URLError UVar3;
  undefined *puVar4;
  ID IVar5;
  URL self;
  NSURL *pNVar6;
  URL UVar7;
  undefined *puVar8;
  URLError UVar9;
  NSError *pNVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  CVar2 = Foundation::URLError::Code::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar2.unknown + -8) + 0x40));
  UVar9.unknown = (undefined *)((long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar3 = Foundation::URLError::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)UVar9.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100558c08;
  FUN_100002f94(&DAT_100558c08,&DAT_10042d278);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(lVar15 - extraout_x8_01);
  if ((*(byte *)(unaff_x20 +
                _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                completed) & 1) != 0) goto LAB_1002836bc;
  *(undefined1 *)
   (unaff_x20 +
   _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::completed) = 1;
  IVar5 = objc_stub::response(param_1);
  if (((IVar5 == 0) ||
      (_swift_dynamicCastObjCClass(IVar5,&_OBJC_CLASS___NSHTTPURLResponse), IVar5 == 0)) ||
     (IVar5 = objc_stub::statusCode(IVar5), IVar5 - 200 < 100)) {
    self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    lVar15 = _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
             destinationURL;
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(self);
    local_80[2] = (undefined *)0x0;
    IVar5 = NSFileManager::removeItemAtURL_error_((ID)self.unknown,pNVar6,local_80 + 2);
    UVar7.unknown = local_80[2];
    if ((int)IVar5 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease();
    }
    UVar7.unknown = Foundation::URL::_bridgeToObjectiveC(UVar7);
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar7);
    local_80[2] = (undefined *)0x0;
    IVar5 = NSFileManager::moveItemAtURL_toURL_error_
                      ((ID)self.unknown,UVar7.unknown,pNVar6,local_80 + 2);
    if ((int)IVar5 == 0) {
      puVar8 = local_80[2];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      pcVar12 = *(code **)(unaff_x20 +
                          _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                          ::onComplete);
      if (pcVar12 != (code *)0x0) {
        uVar14 = ((undefined8 *)
                 (unaff_x20 +
                 _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                 onComplete))[1];
        *puVar13 = puVar8;
        _swift_storeEnumTagMultiPayload(puVar13,puVar4,1);
        FUN_1000939f8(pcVar12,uVar14);
        _swift_errorRetain(puVar8);
        (*pcVar12)(puVar13);
        FUN_10002f6dc(pcVar12,uVar14);
        _swift_errorRelease(puVar8);
        goto LAB_100283594;
      }
      _swift_errorRelease(puVar8);
    }
    else {
      pcVar12 = *(code **)(unaff_x20 +
                          _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                          ::onComplete);
      if (pcVar12 != (code *)0x0) {
        uVar14 = ((undefined8 *)
                 (unaff_x20 +
                 _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                 onComplete))[1];
        UVar7 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))
                  (puVar13,unaff_x20 + lVar15,UVar7.unknown);
        _swift_storeEnumTagMultiPayload(puVar13,puVar4,0);
        FUN_1000939f8(pcVar12,uVar14);
        (*pcVar12)(puVar13);
        FUN_10002f6dc(pcVar12,uVar14);
LAB_100283594:
        FUN_10002a29c(puVar13,&DAT_100558c08,&DAT_10042d278);
      }
    }
    puVar13 = (undefined8 *)
              (unaff_x20 +
              _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::onComplete
              );
    uVar14 = *puVar13;
    uVar11 = puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)
             (unaff_x20 +
             _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::onComplete)
    ;
    pcVar12 = (code *)*puVar1;
    if (pcVar12 != (code *)0x0) {
      CVar2.unknown = (undefined *)puVar1[1];
      local_80[0] = CVar2.unknown;
      _swift_retain();
      Foundation::URLError::Code::get_badServerResponse(CVar2);
      FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
      FUN_1000036d0(&DAT_100558c40,PTR_typeMetadataAccessor_100520d70,
                    PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100520d68
                   );
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
                ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                  )UVar9.unknown);
      pNVar10 = Foundation::URLError::get__nsError(UVar9);
      *puVar13 = pNVar10;
      _swift_storeEnumTagMultiPayload(puVar13,puVar4,1);
      puVar4 = local_80[0];
      (*pcVar12)(puVar13);
      FUN_10002f6dc(pcVar12,puVar4);
      (**(code **)(lVar16 + 8))(lVar15,UVar3.unknown);
      FUN_10002a29c(puVar13,&DAT_100558c08,&DAT_10042d278);
    }
    uVar14 = *puVar1;
    uVar11 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  FUN_10002f6dc(uVar14,uVar11);
LAB_1002836bc:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

