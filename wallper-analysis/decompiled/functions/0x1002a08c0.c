// rea decompile_all
// name: FUN_1002a08c0
// address: 0x1002a08c0
// body: available
// range: 0x1002a08c0-0x1002a1187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a0fd4 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a1168 to 0x1004147c8 _swift_continuation_await (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a1184 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002a08c0(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  NSArray *pNVar4;
  undefined *puVar5;
  URL UVar6;
  ulong uVar7;
  URL UVar8;
  NSURL *pNVar9;
  CocoaError CVar10;
  Code CVar11;
  CocoaError CVar12;
  Date DVar13;
  long *plVar14;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar15;
  URL UVar16;
  ulong uVar17;
  undefined8 uVar18;
  ID IVar19;
  void *pvVar20;
  long unaff_x22;
  ID IVar21;
  long lVar22;
  code *pcVar23;
  ID self;
  code *pcVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  String SVar38;
  String isolation;
  String function;
  String SVar39;
  char *local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  self = *(ID *)(unaff_x22 + 0x498);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x460);
  IVar21 = *(ID *)(unaff_x22 + 0x458);
  IVar19 = *(ID *)(unaff_x22 + 0x430);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
  dVar29 = *(double *)(unaff_x22 + 0x360) / *(double *)(unaff_x22 + 0x410);
  dVar30 = *(double *)(unaff_x22 + 0x358) / *(double *)(unaff_x22 + 0x408);
  if (dVar30 <= dVar29) {
    dVar29 = dVar30;
  }
  uVar36 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x4e0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x5d8);
  _CGAffineTransformMakeScale(&local_a0,dVar29,dVar29);
  *(void **)(unaff_x22 + 0xf0) = pvStack_98;
  *(undefined8 *)(unaff_x22 + 0xe8) = local_a0;
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar31;
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar34;
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar32;
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x298) = uVar35;
  *(undefined8 *)(unaff_x22 + 0x100) = uStack_88;
  *(undefined8 *)(unaff_x22 + 0xf8) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x110) = uStack_78;
  *(undefined8 *)(unaff_x22 + 0x108) = local_80;
  _CGAffineTransformConcat(&local_a0,unaff_x22 + 0x298,(undefined8 *)(unaff_x22 + 0xe8));
  *(void **)(unaff_x22 + 0x240) = pvStack_98;
  *(char **)(unaff_x22 + 0x238) = local_a0;
  *(undefined8 *)(unaff_x22 + 0x250) = uStack_88;
  *(undefined8 *)(unaff_x22 + 0x248) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x260) = uStack_78;
  *(undefined8 *)(unaff_x22 + 600) = local_80;
  *(undefined8 *)(unaff_x22 + 0x588) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x590) = uVar37;
  *(undefined8 *)(unaff_x22 + 0x598) = uVar25;
  objc_stub::setTransform_atTime_(self,unaff_x22 + 0x238,unaff_x22 + 0x588);
  puVar5 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  puVar3 = puVar5;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(ID *)(puVar3 + 0x20) = self;
  FUN_100044230(0,&DAT_100559c38,&PTR__OBJC_CLASS___AVVideoCompositionLayerInstruction_10053fc70);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  objc_stub::setLayerInstructions_(IVar21,pNVar4);
  _swift_allocObject(puVar5,0x28,7);
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(ID *)(puVar5 + 0x20) = IVar21;
  FUN_100002f94(&DAT_100559c40,&DAT_10042de40);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  objc_stub::setInstructions_(IVar19,pNVar4);
  pvVar20 = *(void **)PTR__AVAssetExportPresetHEVCHighestQuality_100521290;
  puVar5 = &_OBJC_CLASS___AVAssetExportSession;
  _objc_allocWithZone();
  IVar19 = objc_stub::initWithAsset_presetName_((ID)puVar5,uVar18);
  *(ID *)(unaff_x22 + 0x4f8) = IVar19;
  if (IVar19 == 0) {
    CVar10 = Foundation::CocoaError::typeMetadataAccessor();
    lVar22 = *(long *)(CVar10.unknown + -8);
    uVar7 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    CVar11 = Foundation::CocoaError::Code::typeMetadataAccessor();
    CVar12.unknown =
         (undefined *)(*(long *)(*(long *)(CVar11.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
    ;
    _swift_task_alloc();
    Foundation::CocoaError::Code::get_featureUnsupported((Code)CVar12.unknown);
    FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
    FUN_1000036d0(&DAT_100559c48,PTR_typeMetadataAccessor_1005206b0,
                  PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_1005206a8
                 );
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )CVar12.unknown);
    _swift_task_dealloc();
    Foundation::CocoaError::get__nsError(CVar12);
    _swift_willThrow();
    (**(code **)(lVar22 + 8))(uVar7,CVar10.unknown);
  }
  else {
    UVar6 = Foundation::URL::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0x500) = UVar6.unknown;
    lVar22 = *(long *)(UVar6.unknown + -8);
    *(long *)(unaff_x22 + 0x508) = lVar22;
    uVar15 = *(long *)(lVar22 + 0x40) + 0xf;
    uVar7 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x510) = uVar7;
    if (DAT_100559be8 != -1) {
      _swift_once(&DAT_100559be8,FUN_10029d568);
    }
    FUN_100099338(UVar6.unknown,&DAT_100559bf0);
    puVar5 = (undefined *)(uVar15 & 0xfffffffffffffff0);
    _swift_task_alloc();
    pcVar24 = *(code **)(lVar22 + 0x10);
    *(code **)(unaff_x22 + 0x518) = pcVar24;
    UVar8.unknown = puVar5;
    UVar16 = UVar6;
    (*pcVar24)();
    SVar38 = Foundation::URL::get_lastPathComponent(UVar8);
    local_a0 = (char *)0x2e;
    pvStack_98 = (void *)0xe100000000000000;
    SVar39.bridgeObject = pvVar20;
    SVar39.str = UVar16.unknown;
    Swift::String::append(SVar38,SVar39);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    pvVar20 = pvStack_98;
    SVar38.bridgeObject = pvStack_98;
    SVar38.str = local_a0;
    Foundation::URL::appendingPathComponent(SVar38,UVar16);
    _swift_bridgeObjectRelease(pvVar20);
    pcVar23 = *(code **)(lVar22 + 8);
    *(code **)(unaff_x22 + 0x520) = pcVar23;
    (*pcVar23)(puVar5,UVar6.unknown);
    _swift_task_dealloc(puVar5);
    *(undefined **)(unaff_x22 + 0x528) = &_OBJC_CLASS___NSFileManager;
    IVar21 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    puVar5 = (undefined *)(uVar15 & 0xfffffffffffffff0);
    _swift_task_alloc();
    UVar8.unknown = puVar5;
    (*pcVar24)();
    pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar8);
    (*pcVar23)(puVar5,UVar6.unknown);
    _swift_task_dealloc(puVar5);
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
    IVar21 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                       (IVar21,pNVar9,1,0,unaff_x22 + 0x2f8);
    if ((int)IVar21 != 0) {
      puVar1 = (undefined8 *)(unaff_x22 + 0x300);
      UVar6.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar6);
      *puVar1 = 0;
      IVar21 = NSFileManager::removeItemAtURL_error_((ID)UVar6.unknown,pNVar9,puVar1);
      UVar6.unknown = (undefined *)*puVar1;
      if ((int)IVar21 == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease();
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x430);
      pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar6);
      objc_stub::setOutputURL_(IVar19,pNVar9);
      objc_stub::setOutputFileType_(IVar19,*(undefined8 *)PTR__AVFileTypeMPEG4_100521298);
      objc_stub::setVideoComposition_(IVar19,uVar18);
      DVar13 = Foundation::Date::typeMetadataAccessor();
      *(undefined **)(unaff_x22 + 0x530) = DVar13.unknown;
      lVar22 = *(long *)(DVar13.unknown + -8);
      *(long *)(unaff_x22 + 0x538) = lVar22;
      lVar22 = *(long *)(lVar22 + 0x40);
      *(long *)(unaff_x22 + 0x540) = lVar22;
      uVar7 = lVar22 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x548) = uVar7;
      Foundation::Date::init();
      *(ID *)(unaff_x22 + 0xa0) = IVar19;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar2 & 1) == 0) {
        *(long *)(unaff_x22 + 0x50) = unaff_x22;
        *(code **)(unaff_x22 + 0x58) = FUN_1002a11fc;
        continuation.unknown = (undefined *)(unaff_x22 + 0x50);
        _swift_continuation_init(continuation.unknown,0);
        puVar5 = &DAT_100556a40;
        FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
        lVar22 = *(long *)(puVar5 + -8);
        lVar26 = *(long *)(lVar22 + 0x40);
        uVar7 = lVar26 + 0xf;
        uVar15 = uVar7 & 0xfffffffffffffff0;
        _swift_task_alloc(uVar15);
        function.bridgeObject = (void *)0x80000001004e39a0;
        function.str = (char *)0xd000000000000013;
        Swift::CheckedContinuation::init(continuation,function);
        uVar7 = uVar7 & 0xfffffffffffffff0;
        _swift_task_alloc(uVar7);
        (**(code **)(lVar22 + 0x10))();
        uVar17 = (ulong)*(byte *)(lVar22 + 0x50);
        uVar28 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
        puVar3 = &DAT_100537790;
        _swift_allocObject(&DAT_100537790,uVar28 + lVar26,uVar17 | 7);
        (**(code **)(lVar22 + 0x20))(puVar3 + uVar28,uVar7,puVar5);
        *(code **)(unaff_x22 + 0x198) = thunk_FUN_1002a4a70;
        *(undefined **)(unaff_x22 + 0x1a0) = puVar3;
        *(undefined **)(unaff_x22 + 0x178) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x180) = 0x42000000;
        *(code **)(unaff_x22 + 0x188) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 400) = &DAT_1005377a8;
        pvVar20 = __Block_copy((void *)(unaff_x22 + 0x178));
        _swift_release(*(undefined8 *)(unaff_x22 + 0x1a0));
        _swift_task_dealloc(uVar7);
        objc_stub::exportAsynchronouslyWithCompletionHandler_(IVar19,pvVar20);
        __Block_release(pvVar20);
        (**(code **)(lVar22 + 8))(uVar15,puVar5);
        _swift_task_dealloc(uVar15);
        if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
          _swift_continuation_await(unaff_x22 + 0x50);
          return;
        }
      }
      else {
        plVar14 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x550) = plVar14;
        *plVar14 = unaff_x22;
        plVar14[1] = (long)FUN_1002a1188;
        if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
          isolation.bridgeObject = (void *)0x0;
          isolation.str = (char *)plVar14;
          Swift::_withCheckedContinuation(isolation);
          return;
        }
      }
      goto LAB_1002a1184;
    }
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar23)(uVar7,UVar6.unknown);
  }
  _swift_task_dealloc(uVar7);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0001002a0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1002a1184:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

