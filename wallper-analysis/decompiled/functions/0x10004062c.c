// rea decompile_all
// name: FUN_10004062c
// address: 0x10004062c
// body: available
// range: 0x10004062c-0x100040f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100040aa8 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100040ca4 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000407a4) */

void FUN_10004062c(void)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  long *plVar6;
  NSString *pNVar7;
  NSDictionary *pNVar8;
  undefined *puVar9;
  void *extraout_x1;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ID IVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x22;
  _ArrayBuffer _Var17;
  void *pvVar18;
  String SVar19;
  String SVar20;
  
  puVar3 = PTR__kCMTimeInvalid_100521860;
  lVar12 = *(long *)(unaff_x22 + 0x250);
  uVar13 = *(undefined8 *)(lVar12 + 0x10);
  uVar11 = *(undefined8 *)(PTR__kCMTimeInvalid_100521860 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)PTR__kCMTimeInvalid_100521860;
  *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar11;
  _VTCompressionSessionCompleteFrames(uVar13,unaff_x22 + 0x2c8);
  if ((*(byte *)(lVar12 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::
                          invalidated) & 1) == 0) {
    *(undefined1 *)
     (lVar12 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::invalidated) = 1;
    _VTCompressionSessionInvalidate(uVar13);
  }
  lVar12 = *(long *)(*(long *)(unaff_x22 + 0x250) +
                    _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::sink);
  objc_stub::lock(*(ID *)(lVar12 + 0x10));
  _swift_beginAccess(lVar12 + 0x18,unaff_x22 + 0x1d0,0,0);
  _Var17.unknown = *(undefined **)(lVar12 + 0x18);
  *(undefined **)(unaff_x22 + 0x270) = _Var17.unknown;
  bVar2 = *(byte *)(lVar12 + 0x20);
  IVar14 = *(ID *)(lVar12 + 0x10);
  _swift_bridgeObjectRetain(_Var17.unknown);
  objc_stub::unlock(IVar14);
  if ((bVar2 & 1) == 0) {
    if ((ulong)_Var17.unknown >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10);
      *(long *)(unaff_x22 + 0x278) = lVar12;
    }
    else {
      _Var1.unknown = _Var17.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var17.unknown) {
        _Var1.unknown = _Var17.unknown;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      *(long *)(unaff_x22 + 0x278) = lVar12;
    }
    if (lVar12 != 0) {
      if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100040f4c);
          (*pcVar10)();
        }
        uVar11 = *(undefined8 *)(_Var17.unknown + 0x20);
      }
      else {
        uVar11 = 0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var17);
      }
      *(undefined8 *)(unaff_x22 + 0x280) = uVar11;
      lVar12 = _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::outputURL;
      IVar14 = *(ID *)(unaff_x22 + 0x268);
      *(long *)(unaff_x22 + 0x288) =
           _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::outputURL;
      pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x260) + 0x10);
      *(code **)(unaff_x22 + 0x290) = pcVar10;
      (*pcVar10)(IVar14,*(long *)(unaff_x22 + 0x250) + lVar12,*(undefined8 *)(unaff_x22 + 600));
      uVar13 = *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_1005212a0;
      _objc_allocWithZone(&_OBJC_CLASS___AVAssetWriter);
      FUN_100043df4(IVar14,uVar13);
      *(ID *)(unaff_x22 + 0x298) = IVar14;
      objc_stub::setMovieTimeScale_(IVar14,(ulong)*(uint *)(*(long *)(unaff_x22 + 0x250) + 0x28));
      uVar13 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
      _CMSampleBufferGetFormatDescription(uVar11);
      puVar3 = &_OBJC_CLASS___AVAssetWriterInput;
      _objc_allocWithZone();
      IVar4 = objc_stub::initWithMediaType_outputSettings_sourceFormatHint_
                        ((ID)puVar3,uVar13,0,uVar11);
      *(ID *)(unaff_x22 + 0x2a0) = IVar4;
      objc_stub::setExpectsMediaDataInRealTime_(IVar4,0);
      objc_stub::addInput_(IVar14,IVar4);
      IVar4 = objc_stub::startWriting(IVar14);
      puVar3 = PTR__kCMTimeZero_100521868;
      if ((IVar4 & 1) == 0) {
        SVar19.bridgeObject = (void *)0xed000064656c6961;
        SVar19.str = (char *)0x6620726574697257;
        _swift_bridgeObjectRelease(_Var17.unknown);
        puVar3 = &DAT_10054c048;
        FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
        _swift_initStackObject();
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar3 + 0x20) = SVar20;
        IVar14 = objc_stub::error(IVar14);
        if (IVar14 == 0) {
          *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
        }
        else {
          _swift_getErrorValue(IVar14,unaff_x22 + 0x230,unaff_x22 + 0x1e8);
          SVar19 = (extension_Foundation)::Swift::Error::get_localizedDescription();
          *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
          if (SVar19.bridgeObject == (void *)0x0) {
            SVar19.bridgeObject = (void *)0xed000064656c6961;
            SVar19.str = (char *)0x6620726574697257;
          }
        }
        *(String *)(puVar3 + 0x30) = SVar19;
        puVar9 = puVar3;
        FUN_100005b10("InteractiveVideoRenderer",puVar3);
        _swift_setDeallocating(puVar3);
        FUN_10002a29c((String *)(puVar3 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
        puVar3 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar9);
        objc_stub::initWithDomain_code_userInfo_((ID)puVar3,pNVar7,7,pNVar8);
        _swift_willThrow(0);
        goto LAB_100040f0c;
      }
      uVar11 = *(undefined8 *)(PTR__kCMTimeZero_100521868 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)PTR__kCMTimeZero_100521868;
      *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(unaff_x22 + 0x2f0) = uVar11;
      objc_stub::startSessionAtSourceTime_(IVar14,unaff_x22 + 0x2e0);
      uVar15 = 0;
      while( true ) {
        _Var17.unknown = *(undefined **)(unaff_x22 + 0x270);
        if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100040f50);
            (*pcVar10)();
          }
          uVar5 = *(ulong *)(_Var17.unknown + uVar15 * 8 + 0x20);
        }
        else {
          uVar5 = uVar15;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var17);
        }
        *(ulong *)(unaff_x22 + 0x2a8) = uVar5;
        *(ulong *)(unaff_x22 + 0x2b0) = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100040dc0);
          (*pcVar10)();
        }
        IVar14 = objc_stub::isReadyForMoreMediaData(*(ID *)(unaff_x22 + 0x2a0));
        if (((IVar14 & 1) == 0) &&
           (IVar14 = objc_stub::status(*(ID *)(unaff_x22 + 0x298)), IVar14 == 1)) {
          plVar6 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x2b8) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_100040f50;
          (extension_Swift)::Swift::Task::_sleep(5000000);
          return;
        }
        IVar14 = objc_stub::status(*(ID *)(unaff_x22 + 0x298));
        if ((IVar14 != 1) ||
           (lVar12 = *(long *)(unaff_x22 + 0x2b0), lVar16 = *(long *)(unaff_x22 + 0x278),
           objc_stub::appendSampleBuffer_
                     (*(ID *)(unaff_x22 + 0x2a0),*(undefined8 *)(unaff_x22 + 0x2a8)),
           lVar12 == lVar16)) break;
        uVar15 = *(ulong *)(unaff_x22 + 0x2b0);
      }
      IVar14 = *(ID *)(unaff_x22 + 0x298);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x270));
      IVar14 = objc_stub::status(IVar14);
      if (IVar14 == 1) {
        IVar14 = *(ID *)(unaff_x22 + 0x298);
        objc_stub::markAsFinished(*(ID *)(unaff_x22 + 0x2a0));
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100041374;
        lVar12 = unaff_x22 + 0x10;
        _swift_continuation_init(lVar12,0);
        puVar3 = &DAT_10054c080;
        FUN_100002f94(&DAT_10054c080,&DAT_10041d820);
        *(undefined **)(unaff_x22 + 0x1c8) = puVar3;
        *(long *)(unaff_x22 + 0x1b0) = lVar12;
        *(undefined **)(unaff_x22 + 400) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x198) = 0x42000000;
        *(code **)(unaff_x22 + 0x1a0) = FUN_1000426d4;
        *(undefined **)(unaff_x22 + 0x1a8) = &DAT_100526558;
        objc_stub::finishWritingWithCompletionHandler_(IVar14,unaff_x22 + 400);
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      IVar14 = *(ID *)(unaff_x22 + 0x298);
      puVar3 = &DAT_10054c048;
      FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar3 + 0x20) = SVar19;
      IVar14 = objc_stub::error(IVar14);
      if (IVar14 == 0) {
        *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
        pvVar18 = extraout_x1;
LAB_100040cc4:
        SVar20.bridgeObject = pvVar18;
        SVar20.str = (char *)0x20676e6974697257;
        pvVar18 = (void *)0xee0064656c696166;
      }
      else {
        _swift_getErrorValue(IVar14,unaff_x22 + 0x238,unaff_x22 + 0x200);
        SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar18 = SVar20.bridgeObject;
        *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
        if (pvVar18 == (void *)0x0) {
          pvVar18 = (void *)0x0;
          goto LAB_100040cc4;
        }
      }
      *(char **)(puVar3 + 0x30) = SVar20.str;
      *(void **)(puVar3 + 0x38) = pvVar18;
      puVar9 = puVar3;
      FUN_100005b10("InteractiveVideoRenderer",puVar3);
      _swift_setDeallocating(puVar3);
      FUN_10002a29c((String *)(puVar3 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
      puVar3 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar3,pNVar7,8,pNVar8);
      _swift_willThrow(0);
      goto LAB_100040f0c;
    }
  }
  _swift_bridgeObjectRelease(_Var17.unknown);
  puVar3 = &DAT_10054c048;
  FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(char **)(puVar3 + 0x20) = SVar19.str;
  *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
  *(void **)(puVar3 + 0x28) = SVar19.bridgeObject;
  *(undefined8 *)(puVar3 + 0x30) = 0xd000000000000014;
  *(undefined8 *)(puVar3 + 0x38) = 0x80000001004dc010;
  puVar9 = puVar3;
  FUN_100005b10(puVar3);
  _swift_setDeallocating(puVar3);
  FUN_10002a29c(puVar3 + 0x20,&DAT_10054a1c0,&DAT_10041a250);
  puVar3 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar9);
  objc_stub::initWithDomain_code_userInfo_((ID)puVar3,pNVar7,6,pNVar8);
  _swift_willThrow(0);
LAB_100040f0c:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x268));
                    /* WARNING: Could not recover jumptable at 0x000100040f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

