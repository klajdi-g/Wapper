// rea decompile_all
// name: FUN_1000416d0
// address: 0x1000416d0
// body: available
// range: 0x1000416d0-0x1000423d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000423d0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1000416d0(double param_1,double param_2,long param_3,undefined4 param_4,URL param_5,
                    void *param_6)

{
  int iVar1;
  UUID UVar2;
  URL UVar3;
  ID IVar4;
  URL UVar5;
  UUID UVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  NSDictionary *pNVar10;
  undefined *puVar11;
  NSNumber *pNVar12;
  NSArray *this;
  NSArray *pNVar13;
  NSString *pNVar14;
  long lVar15;
  undefined *extraout_x1;
  _StringGuts _Var16;
  char *pcVar17;
  void *pvVar18;
  long lVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  long *unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  double dVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  long alStack_260 [2];
  undefined1 auStack_250 [8];
  long local_180 [31];
  long local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  lVar19 = *unaff_x20;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar24 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar15 = _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::outputURL;
  lVar23 = (long)(auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = (undefined *)NSFileManager::temporaryDirectory(IVar4);
  _Var16.unknown = extraout_x1;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  Swift::_StringGuts::grow(0x15,_Var16);
  _swift_bridgeObjectRelease(0xe000000000000000);
  UVar6 = Foundation::UUID::init();
  SVar27 = Foundation::UUID::get_uuidString(UVar6);
  (**(code **)(lVar24 + 8))(auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  SVar29.bridgeObject = param_6;
  SVar29.str = param_5.unknown;
  Swift::String::append(SVar27,SVar29);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar28.bridgeObject = (void *)0xe400000000000000;
  SVar28.str = (char *)0x766f6d2e;
  SVar30.bridgeObject = param_6;
  SVar30.str = param_5.unknown;
  Swift::String::append(SVar28,SVar30);
  SVar27.bridgeObject = (void *)0xef2d7265646e6572;
  SVar27.str = (char *)0x2d7265706c6c6177;
  Foundation::URL::appendingPathComponent(SVar27,param_5);
  _swift_bridgeObjectRelease(0xef2d7265646e6572);
  pcVar25 = *(code **)(lVar20 + 8);
  (*pcVar25)(lVar23,UVar3.unknown);
  lVar20 = _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::sink;
  lVar24 = 0;
  FUN_100042550();
  _swift_allocObject();
  puVar7 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar7);
  puVar7 = PTR___swiftEmptyArrayStorage_100524190;
  *(ID *)(lVar24 + 0x10) = IVar4;
  *(undefined **)(lVar24 + 0x18) = puVar7;
  *(long *)((long)unaff_x20 + lVar20) = lVar24;
  *(undefined8 *)
   ((long)unaff_x20 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::submitted) = 0
  ;
  *(undefined1 *)
   ((long)unaff_x20 + _TtC7WallperP33_54D9350386DEC93E9C9165595326A3B612FrameEncoder::invalidated) =
       0;
  *(undefined1 *)(lVar24 + 0x20) = 0;
  unaff_x20[4] = param_3;
  *(undefined4 *)(unaff_x20 + 5) = param_4;
  if (param_1 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423b0);
    (*pcVar25)();
  }
  if (2147483648.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423b4);
    (*pcVar25)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2))) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423b8);
    (*pcVar25)();
  }
  if (param_2 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423bc);
    (*pcVar25)();
  }
  if (param_2 < 2147483648.0) {
    local_88 = 0;
    puVar7 = &DAT_10054c0a8;
    FUN_100002f94(&DAT_10054c0a8,&DAT_10041d840);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) =
         *(undefined8 *)PTR__kCVPixelBufferPoolMinimumBufferCountKey_1005218a8;
    *(undefined8 *)(puVar7 + 0x28) = 3;
    puVar8 = puVar7;
    FUN_1000066b0(puVar7);
    _swift_setDeallocating(puVar7);
    FUN_10002a29c(puVar7 + 0x20,&DAT_10054c0b0,&DAT_10041d848);
    FUN_100007e08(0);
    FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar8);
    puVar7 = &DAT_10054c088;
    FUN_100002f94(&DAT_10054c088,&DAT_10042b190);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_100521898;
    *(undefined8 *)(puVar7 + 0x18) = 8;
    *(undefined8 *)(puVar7 + 0x10) = 4;
    puVar11 = PTR___type_metadata_for_Swift_UInt32_1005240f0;
    puVar8 = PTR__kCVPixelBufferWidthKey_1005218b0;
    *(undefined4 *)(puVar7 + 0x28) = 0x42475241;
    uVar22 = *(undefined8 *)puVar8;
    *(undefined **)(puVar7 + 0x40) = puVar11;
    *(undefined8 *)(puVar7 + 0x48) = uVar22;
    puVar8 = PTR___type_metadata_for_Swift_Int32_100524020;
    *(int *)(puVar7 + 0x50) = (int)param_1;
    uVar22 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_100521888;
    *(undefined **)(puVar7 + 0x68) = puVar8;
    *(undefined8 *)(puVar7 + 0x70) = uVar22;
    *(int *)(puVar7 + 0x78) = (int)param_2;
    uVar22 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_100521890;
    *(undefined **)(puVar7 + 0x90) = puVar8;
    *(undefined8 *)(puVar7 + 0x98) = uVar22;
    puVar8 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100006798(PTR___swiftEmptyArrayStorage_100524190);
    pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar8);
    uVar22 = 0;
    FUN_1000080a4();
    *(undefined8 *)(puVar7 + 0xb8) = uVar22;
    *(NSDictionary **)(puVar7 + 0xa0) = pNVar10;
    puVar11 = puVar7;
    FUN_1000068d0(puVar7);
    _swift_setDeallocating(puVar7);
    puVar8 = &DAT_10054a168;
    FUN_100002f94(&DAT_10054a168,&DAT_10041a200);
    _swift_arrayDestroy(puVar7 + 0x20,4,puVar8);
    pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar11);
    _CVPixelBufferPoolCreate(0,pNVar9,pNVar10,&local_88);
    local_180[0] = 0;
    *(undefined8 *)(lVar23 + -0x10) = 0;
    *(long **)(lVar23 + -8) = local_180;
    iVar1 = 0;
    pcVar17 = (char *)(ulong)(uint)(int)param_2;
    pvVar18 = (void *)0x68766331;
    _VTCompressionSessionCreate(0,(int)param_1,pcVar17,0x68766331,0,0,0,0);
    lVar24 = local_180[0];
    if (((local_88 == 0) || (local_180[0] == 0)) || (iVar1 != 0)) {
      puVar7 = &DAT_10054c048;
      FUN_100002f94("InteractiveVideoRenderer",&DAT_10054c048,&DAT_10041d7b0);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      SVar27 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar7 + 0x20) = SVar27;
      Swift::_StringGuts::grow(0x25,(_StringGuts)SVar27.bridgeObject);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar27 = Swift::CustomStringConvertible::get_description();
      SVar31.bridgeObject = pvVar18;
      SVar31.str = pcVar17;
      Swift::String::append(SVar27,SVar31);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      *(undefined **)(puVar7 + 0x48) = PTR___type_metadata_for_Swift_String_100523a98;
      *(undefined8 *)(puVar7 + 0x30) = 0xd000000000000023;
      *(undefined8 *)(puVar7 + 0x38) = 0x80000001004dc070;
      puVar8 = puVar7;
      FUN_100005b10(puVar7);
      _swift_setDeallocating(puVar7);
      FUN_10002a29c((String *)(puVar7 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
      puVar7 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar8);
      objc_stub::initWithDomain_code_userInfo_((ID)puVar7,pNVar14,3,pNVar9);
      _swift_willThrow(0);
      (*pcVar25)((long)unaff_x20 + lVar15,UVar3.unknown);
      _swift_release(*(undefined8 *)((long)unaff_x20 + lVar20));
      _swift_deallocPartialClassInstance
                (unaff_x20,lVar19,*(undefined4 *)(*unaff_x20 + 0x30),
                 *(undefined2 *)(*unaff_x20 + 0x34));
    }
    else {
      unaff_x20[2] = local_180[0];
      unaff_x20[3] = local_88;
      dVar26 = (param_1 * 2800000.0 * param_2) / 1000000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar26)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423c4);
        (*pcVar25)();
      }
      if (dVar26 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423c8);
        (*pcVar25)();
      }
      if (9.223372036854776e+18 <= dVar26) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423cc);
        (*pcVar25)();
      }
      lVar15 = (long)dVar26;
      if (49999999 < (long)dVar26) {
        lVar15 = 50000000;
      }
      _VTSessionSetProperty
                (local_180[0],*(undefined8 *)PTR__kVTCompressionPropertyKey_ProfileLevel_1005238c8,
                 *(undefined8 *)PTR__kVTProfileLevel_HEVC_Main10_AutoLevel_1005238d8);
      uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_ConstantBitRate_100523890;
      pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      lVar20 = lVar24;
      _VTSessionSetProperty(lVar24,uVar22,pNVar12);
      if ((int)lVar20 != 0) {
        uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_AverageBitRate_100523880;
        pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar24,uVar22,pNVar12);
        puVar7 = &DAT_10054c0b8;
        FUN_100002f94(&DAT_10054c0b8,&DAT_10041d850);
        _swift_allocObject();
        *(undefined8 *)(puVar7 + 0x18) = 4;
        *(undefined8 *)(puVar7 + 0x10) = 2;
        lVar20 = lVar15 * 5;
        if (SUB168(SEXT816(lVar15) * SEXT816(5),8) != lVar20 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423d0);
          (*pcVar25)();
        }
        uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_DataRateLimits_100523898;
        lVar15 = lVar20 + 0x1f;
        if (-1 < lVar20) {
          lVar15 = lVar20;
        }
        *(long *)(puVar7 + 0x20) = lVar15 >> 5;
        puVar8 = PTR___type_metadata_for_Swift_Int_100523bd8;
        *(undefined **)(puVar7 + 0x58) = PTR___type_metadata_for_Swift_Int_100523bd8;
        *(undefined **)(puVar7 + 0x38) = puVar8;
        *(undefined8 *)(puVar7 + 0x40) = 1;
        this = (NSArray *)0x0;
        FUN_100044230(0,&DAT_10054c0c0,&PTR__OBJC_CLASS___NSArray_10053f9a8);
        pNVar13 = (extension_Foundation)::__C::NSArray::___allocating_init(this);
        _VTSessionSetProperty(lVar24,uVar22,pNVar13);
      }
      uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_ExpectedFrameRate_1005238a0;
      pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      _VTSessionSetProperty(lVar24,uVar22,pNVar12);
      uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_MaxKeyFrameInterval_1005238b0;
      pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      _VTSessionSetProperty(lVar24,uVar22,pNVar12);
      uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_MaxKeyFrameIntervalDuration_1005238b8;
      pNVar12 = (extension_Foundation)::double::_bridgeToObjectiveC();
      _VTSessionSetProperty(lVar24,uVar22,pNVar12);
      uVar22 = *(undefined8 *)PTR__kCFBooleanFalse_1005215b8;
      _VTSessionSetProperty
                (lVar24,*(undefined8 *)PTR__kVTCompressionPropertyKey_RealTime_1005238d0,uVar22);
      uVar21 = *(undefined8 *)PTR__kVTCompressionPropertyKey_MaxFrameDelayCount_1005238a8;
      pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      _VTSessionSetProperty(lVar24,uVar21,pNVar12);
      _VTSessionSetProperty
                (lVar24,*(undefined8 *)PTR__kVTCompressionPropertyKey_AllowFrameReordering_100523878
                 ,uVar22);
      uVar22 = *(undefined8 *)PTR__kCFBooleanTrue_1005215c0;
      _VTSessionSetProperty
                (lVar24,*(undefined8 *)
                         PTR__kVTCompressionPropertyKey_PrioritizeEncodingSpeedOverQuality_1005238c0
                 ,uVar22);
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      lVar15 = lVar24;
      _VTSessionSetProperty(lVar24,pNVar14,uVar22);
      if ((int)lVar15 == 0) {
        uVar22 = *(undefined8 *)PTR__kVTCompressionPropertyKey_BaseLayerBitRateFraction_100523888;
        pNVar12 = (extension_Foundation)::double::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar24,uVar22,pNVar12);
      }
      else {
        pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar12 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar24,pNVar14,pNVar12);
        pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar12 = (extension_Foundation)::double::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar24,pNVar14,pNVar12);
      }
      _VTCompressionSessionPrepareToEncodeFrames(lVar24);
    }
    if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
      return unaff_x20;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x1000423c0);
  (*pcVar25)();
}

