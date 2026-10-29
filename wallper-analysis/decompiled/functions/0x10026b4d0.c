// rea decompile_all
// name: FUN_10026b4d0
// address: 0x10026b4d0
// body: available
// range: 0x10026b4d0-0x10026bfe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026bfb0 to 0x10027dcfc FUN_10027dcfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10026bfe4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10026b4d0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  String SVar7;
  bool bVar8;
  char *pcVar9;
  URL UVar10;
  ID IVar11;
  NSURL *pNVar12;
  URL UVar13;
  undefined *puVar14;
  long lVar15;
  ID IVar16;
  long *plVar17;
  ulong uVar18;
  void *pvVar19;
  void *pvVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long unaff_x22;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  char *pcVar39;
  undefined8 uVar40;
  code *pcVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100521138;
  FUN_1002748c4();
  _swift_bridgeObjectRelease(param_2);
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar8 = true;
  }
  else {
    lVar32 = *(long *)(unaff_x22 + 0x148);
    uVar18 = *(ulong *)(unaff_x22 + 0x150);
    _swift_bridgeObjectRetain(param_1);
    FUN_10000464c(lVar32);
    bVar8 = (uVar18 & 1) == 0;
    if (!bVar8) {
      FUN_100029504(*(long *)(param_1 + 0x38) +
                    *(long *)(*(long *)(unaff_x22 + 0x240) + 0x48) * lVar32,
                    *(undefined8 *)(unaff_x22 + 0x230),FUN_10040211c);
    }
    _swift_bridgeObjectRelease(param_1);
  }
  lVar32 = *(long *)(unaff_x22 + 0x240);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x230);
  (**(code **)(lVar32 + 0x38))(uVar31,bVar8,1,uVar28);
  _swift_bridgeObjectRelease(param_1);
  (**(code **)(lVar32 + 0x30))(uVar31,1,uVar28);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x230);
  if ((int)uVar31 == 1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
    FUN_10002a29c(uVar28,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    uVar29 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar32 = *(long *)(unaff_x22 + 0x208);
    lVar35 = *(long *)(unaff_x22 + 0x200);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar15 = *(long *)(unaff_x22 + 0x1b8);
    pcVar9 = *(char **)(unaff_x22 + 0x148);
    pvVar19 = *(void **)(unaff_x22 + 0x150);
    FUN_100007e64(uVar28,*(undefined8 *)(unaff_x22 + 0x248),FUN_10040211c);
    FUN_10027f304();
    *(char **)(unaff_x22 + 0x268) = pcVar9;
    *(void **)(unaff_x22 + 0x270) = pvVar19;
    FUN_100268ac4(uVar29);
    (**(code **)(lVar15 + 0x38))(uVar33,1,1,uVar31);
    lVar35 = (long)*(int *)(lVar35 + 0x30);
    UVar13.unknown = &DAT_10041bf10;
    FUN_1000087e4(uVar29,lVar32,&DAT_100553d90,&DAT_10041bf10);
    FUN_1000087e4(uVar33,lVar32 + lVar35,&DAT_100553d90);
    pcVar36 = *(code **)(lVar15 + 0x30);
    *(code **)(unaff_x22 + 0x278) = pcVar36;
    lVar15 = lVar32;
    (*pcVar36)(lVar32,1,uVar31);
    if ((int)lVar15 == 1) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1b0);
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x220),&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(uVar31,&DAT_100553d90,&DAT_10041bf10);
      lVar32 = lVar32 + lVar35;
      (*pcVar36)(lVar32,1,uVar28);
      if ((int)lVar32 == 1) {
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x208),&DAT_100553d90,&DAT_10041bf10);
LAB_10026b9b4:
        if (DAT_100558870 != -1) {
          _swift_once(&DAT_100558870,FUN_100268dac);
        }
        puVar14 = *(undefined **)(unaff_x22 + 0x1f8);
        puVar27 = *(undefined **)(unaff_x22 + 0x1e8);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x1b0);
        lVar32 = *(long *)(unaff_x22 + 0x1b8);
        uVar28 = uVar31;
        FUN_100099338(uVar31,&DAT_100577d80);
        pcVar36 = *(code **)(lVar32 + 0x10);
        UVar10.unknown = puVar27;
        (*pcVar36)(puVar27,uVar28,uVar31);
        Foundation::URL::deletingLastPathComponent(UVar10);
        pcVar41 = *(code **)(lVar32 + 8);
        *(code **)(unaff_x22 + 0x280) = pcVar41;
        (*pcVar41)(puVar27,uVar31);
        SVar42.bridgeObject = (void *)0xe800000000000000;
        SVar42.str = (char *)0x7377656976657250;
        Foundation::URL::appendingPathComponent(SVar42,true,UVar13);
        (*pcVar41)(puVar14,uVar31);
        *(undefined **)(unaff_x22 + 0x288) = &_OBJC_CLASS___NSFileManager;
        IVar11 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
        UVar13.unknown = puVar14;
        (*pcVar36)(puVar14,uVar28,uVar31);
        pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar13);
        (*pcVar41)(puVar14,uVar31);
        *(undefined8 *)(unaff_x22 + 0x118) = 0;
        IVar11 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                           (IVar11,pNVar12,1,0,unaff_x22 + 0x118);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x118);
        if ((int)IVar11 == 0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar31);
        }
        UVar13.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
        pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar13);
        *(undefined8 *)(unaff_x22 + 0x120) = 0;
        pvVar20 = (void *)0x1;
        IVar11 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                           ((ID)UVar13.unknown,pNVar12,1,0,unaff_x22 + 0x120);
        UVar13.unknown = *(undefined **)(unaff_x22 + 0x120);
        if ((int)IVar11 == 0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease();
        }
        lVar32 = *(long *)(unaff_x22 + 0x248);
        iVar6 = *(int *)(*(long *)(unaff_x22 + 0x238) + 0x14);
        SVar42 = Foundation::URL::get_pathExtension(UVar13);
        SVar43 = Swift::String::lowercased(SVar42);
        UVar13.unknown = SVar43.bridgeObject;
        pcVar39 = SVar43.str;
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        puVar14 = &DAT_100549eb0;
        FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
        _swift_initStaticObject();
        FUN_10026abd8(pcVar39,UVar13.unknown,puVar14);
        _swift_bridgeObjectRelease();
        if (((ulong)pcVar39 & 1) == 0) {
          SVar43.bridgeObject = (void *)0xe300000000000000;
          SVar43.str = (char *)0x34706d;
        }
        else {
          SVar42 = Foundation::URL::get_pathExtension(UVar13);
          SVar43 = Swift::String::lowercased(SVar42);
          _swift_bridgeObjectRelease(SVar42.bridgeObject);
        }
        uVar31 = *(undefined8 *)(unaff_x22 + 0x1f8);
        pcVar39 = *(char **)(unaff_x22 + 0x1b0);
        UVar13.unknown = pcVar39;
        (*pcVar36)(uVar31,uVar28);
        _swift_bridgeObjectRetain(pvVar19);
        SVar44.bridgeObject = (void *)0xe100000000000000;
        SVar44.str = (char *)0x2e;
        SVar45.bridgeObject = pvVar20;
        SVar45.str = UVar13.unknown;
        Swift::String::append(SVar44,SVar45);
        SVar46.bridgeObject = pvVar20;
        SVar46.str = UVar13.unknown;
        Swift::String::append(SVar43,SVar46);
        _swift_bridgeObjectRelease(SVar43.bridgeObject);
        SVar7.bridgeObject = pvVar19;
        SVar7.str = pcVar9;
        Foundation::URL::appendingPathComponent(SVar7,UVar13);
        _swift_bridgeObjectRelease(pvVar19);
        (*pcVar41)(uVar31,pcVar39);
        if (DAT_1005539e8 != -1) {
          _swift_once(&DAT_1005539e8,FUN_1001237d4);
        }
        uVar31 = DAT_100577c28;
        *(undefined8 *)(unaff_x22 + 0x290) = DAT_100577c28;
        puVar1 = (undefined8 *)
                 (*(long *)(unaff_x22 + 0x248) + (long)*(int *)(*(long *)(unaff_x22 + 0x238) + 0x3c)
                 );
        lVar15 = puVar1[1];
        if (lVar15 == 0) {
          lVar15 = -0x16ffffffffffff8e;
          uVar28 = 0x657061706c6c6157;
        }
        else {
          uVar28 = *puVar1;
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1e0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x1b0);
        lVar35 = *(long *)(unaff_x22 + 0x158);
        _swift_bridgeObjectRetain();
        FUN_100123c28(0,pcVar9,pvVar19,uVar28,lVar15,0,1);
        _swift_bridgeObjectRelease(lVar15);
        IVar16 = 0;
        FUN_10027e560();
        IVar11 = IVar16;
        _objc_allocWithZone();
        *(undefined1 *)
         (IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                   completed) = 0;
        *(undefined8 *)
         (IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                   lastReported) = 0xbff0000000000000;
        puVar1 = (undefined8 *)
                 (IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                           ::onComplete);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)
                 (IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                           ::id);
        *puVar1 = pcVar9;
        puVar1[1] = pvVar19;
        *(undefined8 *)
         (IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::
                   activity) = uVar31;
        (*pcVar36)(IVar11 + _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate
                            ::destinationURL,uVar29,uVar33);
        ((objc_super *)(unaff_x22 + 0xe8))->receiver = IVar11;
        *(ID *)(unaff_x22 + 0xf0) = IVar16;
        _swift_bridgeObjectRetain(pvVar19);
        _swift_retain(uVar31);
        IVar11 = _objc_msgSendSuper2((objc_super *)(unaff_x22 + 0xe8),"init");
        *(ID *)(unaff_x22 + 0x298) = IVar11;
        lVar15 = _TtC7Wallper17VideoLibraryStore::downloadDelegates;
        *(long *)(unaff_x22 + 0x2a0) = _TtC7Wallper17VideoLibraryStore::downloadDelegates;
        _swift_beginAccess(lVar35 + lVar15,unaff_x22 + 0x40,0x21,0);
        _swift_bridgeObjectRetain(pvVar19);
        uVar31 = *(undefined8 *)(lVar35 + lVar15);
        _swift_isUniquelyReferenced_nonNull_native(uVar31);
        uVar28 = *(undefined8 *)(lVar35 + lVar15);
        *(undefined8 *)(lVar35 + lVar15) = 0x8000000000000000;
        FUN_100340cd8(IVar11,pcVar9,pvVar19,uVar31);
        _swift_bridgeObjectRelease(pvVar19);
        *(undefined8 *)(lVar35 + lVar15) = uVar28;
        _swift_endAccess(unaff_x22 + 0x40);
        IVar16 = NSURLSessionConfiguration::defaultSessionConfiguration
                           ((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
        *(undefined **)(unaff_x22 + 0x2a8) = &_OBJC_CLASS___NSURLSession;
        IVar16 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                           ((ID)&_OBJC_CLASS___NSURLSession,IVar16,IVar11,0);
        *(ID *)(unaff_x22 + 0x2b0) = IVar16;
        lVar15 = _TtC7Wallper17VideoLibraryStore::downloadSessions;
        *(long *)(unaff_x22 + 0x2b8) = _TtC7Wallper17VideoLibraryStore::downloadSessions;
        _swift_beginAccess(lVar35 + lVar15,unaff_x22 + 0x58,0x21,0);
        _swift_bridgeObjectRetain(pvVar19);
        uVar31 = *(undefined8 *)(lVar35 + lVar15);
        _swift_isUniquelyReferenced_nonNull_native(uVar31);
        uVar28 = *(undefined8 *)(lVar35 + lVar15);
        *(undefined8 *)(lVar35 + lVar15) = 0x8000000000000000;
        FUN_100340cf4(IVar16,pcVar9,pvVar19,uVar31);
        _swift_bridgeObjectRelease(pvVar19);
        *(undefined8 *)(lVar35 + lVar15) = uVar28;
        _swift_endAccess(unaff_x22 + 0x58);
        plVar17 = (long *)0xe0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x2c0) = plVar17;
        *plVar17 = unaff_x22;
        plVar17[1] = (long)FUN_10026bfe8;
        if (*(long *)PTR____stack_chk_guard_100521138 == lVar21) {
          FUN_10027dcfc(plVar17,*(undefined8 *)(unaff_x22 + 0x1d8),IVar16,IVar11,lVar32 + iVar6);
          return;
        }
        goto LAB_10026bfe4;
      }
LAB_10026b7a0:
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x208),&DAT_10054ea38,&DAT_100426270);
    }
    else {
      uVar31 = *(undefined8 *)(unaff_x22 + 0x1b0);
      FUN_1000087e4(*(undefined8 *)(unaff_x22 + 0x208),*(undefined8 *)(unaff_x22 + 0x218),
                    &DAT_100553d90,&DAT_10041bf10);
      lVar15 = lVar32 + lVar35;
      (*pcVar36)(lVar15,1,uVar31);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x218);
      if ((int)lVar15 == 1) {
        uVar33 = *(undefined8 *)(unaff_x22 + 0x1b0);
        lVar32 = *(long *)(unaff_x22 + 0x1b8);
        FUN_10002a29c(uVar29,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(uVar28,&DAT_100553d90,&DAT_10041bf10);
        (**(code **)(lVar32 + 8))(uVar31,uVar33);
        goto LAB_10026b7a0;
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1b0);
      lVar15 = *(long *)(unaff_x22 + 0x1b8);
      (**(code **)(lVar15 + 0x20))(uVar38,lVar32 + lVar35,uVar33);
      UVar13.unknown = &DAT_100553da0;
      FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
      bVar8 = Swift::Equatable::___infix(uVar31,uVar38,uVar33);
      pcVar36 = *(code **)(lVar15 + 8);
      (*pcVar36)(uVar38,uVar33);
      FUN_10002a29c(uVar29,&DAT_100553d90,&DAT_10041bf10);
      FUN_10002a29c(uVar28,&DAT_100553d90,&DAT_10041bf10);
      (*pcVar36)(uVar31,uVar33);
      FUN_10002a29c(uVar24,&DAT_100553d90,&DAT_10041bf10);
      if (bVar8) goto LAB_10026b9b4;
    }
    uVar31 = *(undefined8 *)(unaff_x22 + 0x250);
    FUN_100029548(*(undefined8 *)(unaff_x22 + 0x248),FUN_10040211c);
    _swift_bridgeObjectRelease(pvVar19);
    _swift_release(uVar31);
  }
  uVar34 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010026b8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10026bfe4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

