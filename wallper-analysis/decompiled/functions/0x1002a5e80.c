// rea decompile_all
// name: FUN_1002a5e80
// address: 0x1002a5e80
// body: available
// range: 0x1002a5e80-0x1002a687f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a6848 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a687c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a5e80(void)

{
  long lVar1;
  undefined8 uVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  MainActor *pMVar9;
  URL UVar10;
  NSString *pNVar11;
  NSURL *pNVar12;
  URL UVar13;
  undefined *puVar14;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  char *pcVar22;
  UnownedSerialExecutor UVar23;
  _StringGuts _Var24;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  char *pcVar25;
  NSURL *pNVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ID IVar30;
  void *pvVar31;
  code *pcVar32;
  long unaff_x22;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcVar37;
  undefined8 uVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar29 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar1 = *(long *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  FUN_100077938(*(undefined8 *)(unaff_x22 + 0x118),uVar8);
  (**(code **)(lVar1 + 0x30))(uVar8,1,uVar29);
  if ((int)uVar8 == 1) {
    pMVar9 = *(MainActor **)(unaff_x22 + 0x110);
    FUN_10002a29c(pMVar9,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    IVar30 = *(ID *)(unaff_x22 + 0x168);
    pcVar37 = *(code **)(*(long *)(unaff_x22 + 0x128) + 0x20);
    (*pcVar37)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x110),
               *(undefined8 *)(unaff_x22 + 0x120));
    UVar10.unknown = (undefined *)objc_stub::defaultManager(IVar30);
    SVar39 = Foundation::URL::get_path(UVar10);
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar39.bridgeObject);
    IVar30 = objc_stub::fileExistsAtPath_((ID)UVar10.unknown,pNVar11);
    if ((int)IVar30 != 0) {
      SVar39 = Foundation::URL::get_lastPathComponent((URL)0x0);
      _Var24.unknown = SVar39.bridgeObject;
      SVar40 = Foundation::URL::get_lastPathComponent((URL)SVar39.str);
      pvVar31 = SVar40.bridgeObject;
      if (SVar39 == SVar40) {
        uVar29 = *(undefined8 *)(unaff_x22 + 0x160);
        _swift_bridgeObjectRelease(_Var24.unknown);
        _swift_bridgeObjectRelease(uVar29);
LAB_1002a5fec:
        pcVar27 = *(code **)(unaff_x22 + 0x198);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x150);
        uVar34 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar1 = *(long *)(unaff_x22 + 0x128);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
        _swift_bridgeObjectRelease(pvVar31);
        FUN_10002a29c(uVar33,&DAT_100553d90,&DAT_10041bf10);
        pcVar32 = *(code **)(lVar1 + 8);
        (*pcVar32)(uVar2,uVar29);
        (*pcVar32)(uVar8,uVar29);
        (*pcVar32)(uVar28,uVar29);
        (*pcVar37)(uVar35,uVar34,uVar29);
      }
      else {
        bVar6 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar39.str,_Var24,
                           (_StringComparisonResult)(__int8)SVar40.str);
        _swift_bridgeObjectRelease(pvVar31);
        _swift_bridgeObjectRelease(_Var24.unknown);
        if (bVar6) {
          pvVar31 = *(void **)(unaff_x22 + 0x160);
          goto LAB_1002a5fec;
        }
        UVar10.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x168));
        pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar10);
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        pNVar26 = (NSURL *)0x1;
        IVar30 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                           ((ID)UVar10.unknown,pNVar12,1,0,unaff_x22 + 0x88);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x88);
        _Var24.unknown = extraout_x1;
        if ((int)IVar30 == 0) {
LAB_1002a635c:
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_70 = (char *)0x0;
          local_68 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2b,_Var24);
          _swift_bridgeObjectRelease(local_68);
          local_70 = &DAT_d000000000000029;
          local_68 = (void *)0x80000001004e3a80;
          pcVar22 = (char *)(unaff_x22 + 0x40);
          _swift_getErrorValue(uVar29,unaff_x22 + 0x90);
          SVar39 = (extension_Foundation)::Swift::Error::get_localizedDescription();
          pvVar31 = SVar39.bridgeObject;
          SVar46.bridgeObject = pNVar26;
          SVar46.str = pcVar22;
          Swift::String::append(SVar39,SVar46);
          _swift_bridgeObjectRelease(pvVar31);
          puVar4 = local_68;
          SVar39.bridgeObject = local_68;
          SVar39.str = local_70;
          local_70 = (char *)0x5b;
          local_68 = (undefined *)0xe100000000000000;
          *(undefined8 *)(unaff_x22 + 0x58) = 0x4e524157;
          *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
          *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
          *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
          FUN_100026df4();
          pcVar25 = (char *)0x0;
          puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,unaff_x22 + 0x68,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pvVar31,pvVar31);
          SVar47.bridgeObject = puVar17;
          SVar47.str = pcVar25;
          Swift::String::append(SVar40,SVar47);
          _swift_bridgeObjectRelease(SVar40.bridgeObject);
          SVar40.bridgeObject = (void *)0xe300000000000000;
          SVar40.str = (char *)0x5b205d;
          SVar48.bridgeObject = puVar17;
          SVar48.str = pcVar25;
          Swift::String::append(SVar40,SVar48);
          SVar41.bridgeObject = (void *)0xea00000000006e65;
          SVar41.str = (char *)0x657263736b636f6c;
          SVar49.bridgeObject = puVar17;
          SVar49.str = pcVar25;
          Swift::String::append(SVar41,SVar49);
          SVar42.bridgeObject = (void *)0xe200000000000000;
          SVar42.str = (char *)0x205d;
          SVar50.bridgeObject = puVar17;
          SVar50.str = pcVar25;
          Swift::String::append(SVar42,SVar50);
          SVar51.bridgeObject = puVar17;
          SVar51.str = pcVar25;
          Swift::String::append(SVar39,SVar51);
          puVar5 = local_68;
          pcVar22 = local_70;
          local_70 = (char *)0x282020;
          local_68 = (undefined *)0xe300000000000000;
          SVar43.bridgeObject = (void *)0x80000001004e3ab0;
          SVar43.str = (char *)0xd000000000000019;
          SVar52.bridgeObject = puVar17;
          SVar52.str = pcVar25;
          Swift::String::append(SVar43,SVar52);
          SVar44.bridgeObject = (void *)0xe100000000000000;
          SVar44.str = (char *)0x3a;
          SVar53.bridgeObject = puVar17;
          SVar53.str = pcVar25;
          Swift::String::append(SVar44,SVar53);
          *(undefined8 *)(unaff_x22 + 0x98) = 0x3c;
          SVar39 = Swift::CustomStringConvertible::get_description();
          SVar54.bridgeObject = puVar17;
          SVar54.str = pcVar25;
          Swift::String::append(SVar39,SVar54);
          _swift_bridgeObjectRelease(SVar39.bridgeObject);
          SVar45.bridgeObject = (void *)0xe100000000000000;
          SVar45.str = (char *)0x29;
          SVar55.bridgeObject = puVar17;
          SVar55.str = pcVar25;
          Swift::String::append(SVar45,SVar55);
          puVar17 = local_68;
          pcVar25 = local_70;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          lVar1 = *(long *)(unaff_x22 + 0x100);
          qos.unknown = *(undefined **)(unaff_x22 + 0x108);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar34 = *(undefined8 *)(unaff_x22 + 0xe0);
          lVar3 = *(long *)(unaff_x22 + 0xe8);
          puVar14 = &DAT_100537968;
          _swift_allocObject(&DAT_100537968,0x30,7);
          *(char **)(puVar14 + 0x10) = pcVar22;
          *(undefined **)(puVar14 + 0x18) = puVar5;
          *(char **)(puVar14 + 0x20) = pcVar25;
          *(undefined **)(puVar14 + 0x28) = puVar17;
          *(code **)(unaff_x22 + 0x30) = FUN_100099310;
          *(undefined **)(unaff_x22 + 0x38) = puVar14;
          *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
          *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
          *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
          *(undefined **)(unaff_x22 + 0x28) = &DAT_100537980;
          pvVar31 = __Block_copy((void *)(unaff_x22 + 0x10));
          DVar15.unknown = puVar5;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar15);
          *(undefined **)(unaff_x22 + 0xa0) = PTR___swiftEmptyArrayStorage_100524190;
          puVar16 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar17 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar14 = puVar17;
          FUN_100077ac0();
          Swift::SetAlgebra::_init(uVar8,unaff_x22 + 0xa0,puVar17,puVar14,uVar34,puVar16);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar31);
          (**(code **)(lVar3 + 8))(uVar8,uVar34);
          (**(code **)(lVar1 + 8))(qos.unknown,uVar28);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          lVar1 = *(long *)(unaff_x22 + 0xd0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar28 = *(undefined8 *)(unaff_x22 + 200);
          uVar34 = uVar28;
          FUN_100099338(uVar28,&DAT_100558f50);
          (**(code **)(lVar1 + 0x10))(uVar8,uVar34,uVar28);
          uVar7 = (uint)uVar8;
          static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::
          _get_default();
          LVar18.unknown = puVar5;
          _swift_bridgeObjectRetain();
          pOVar19 = os::Logger::get_logObject(LVar18);
          pOVar20 = pOVar19;
          _os_log_type_enabled(pOVar19,uVar7 & 0xff);
          lVar1 = *(long *)(unaff_x22 + 0xd0);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar34 = *(undefined8 *)(unaff_x22 + 200);
          if ((int)pOVar20 == 0) {
            _swift_bridgeObjectRelease_n(puVar5,2);
          }
          else {
            puVar21 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar25 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar21 = 0x8220102;
            local_70 = pcVar25;
            FUN_10012dbb0(pcVar22,puVar5,&local_70);
            *(char **)(puVar21 + 1) = pcVar22;
            _swift_bridgeObjectRelease_n(puVar5,2);
            __os_log_impl(0x100000000,pOVar19,uVar7 & 0xff,"%{public}s",puVar21,0xc);
            FUN_100043f24(pcVar25);
            _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar1 + 8))(uVar8,uVar34);
          _swift_bridgeObjectRelease(puVar4);
          _swift_errorRelease(uVar29);
          goto LAB_1002a67c8;
        }
        UVar10.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x168));
        SVar39 = Foundation::URL::get_path(UVar10);
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar39.bridgeObject);
        IVar30 = objc_stub::fileExistsAtPath_((ID)UVar10.unknown,pNVar11);
        if ((int)IVar30 != 0) {
          UVar10.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x168));
          pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar10);
          *(undefined8 *)(unaff_x22 + 0xb0) = 0;
          IVar30 = objc_stub::removeItemAtURL_error_((ID)UVar10.unknown,pNVar12,unaff_x22 + 0xb0);
          uVar29 = *(undefined8 *)(unaff_x22 + 0xb0);
          if ((int)IVar30 == 0) {
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(uVar29);
          }
        }
        UVar10.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x168));
        UVar13.unknown = Foundation::URL::_bridgeToObjectiveC(UVar10);
        pNVar26 = Foundation::URL::_bridgeToObjectiveC(UVar13);
        *(undefined8 *)(unaff_x22 + 0xa8) = 0;
        IVar30 = objc_stub::copyItemAtURL_toURL_error_
                           ((ID)UVar10.unknown,UVar13.unknown,pNVar26,unaff_x22 + 0xa8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0xa8);
        _Var24.unknown = extraout_x1_00;
        if ((int)IVar30 == 0) goto LAB_1002a635c;
        pcVar27 = *(code **)(unaff_x22 + 0x198);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x150);
        uVar34 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar1 = *(long *)(unaff_x22 + 0x128);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar35 = *(undefined8 *)(unaff_x22 + 0xb8);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x160));
        pcVar32 = *(code **)(lVar1 + 8);
        (*pcVar32)(uVar34,uVar29);
        FUN_10002a29c(uVar33,&DAT_100553d90,&DAT_10041bf10);
        (*pcVar32)(uVar8,uVar29);
        (*pcVar32)(uVar28,uVar29);
        (*pcVar37)(uVar35,uVar2,uVar29);
      }
      (*pcVar27)(uVar35,0,1,uVar29);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar36 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar38 = *(undefined8 *)(unaff_x22 + 0xd8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
      _swift_task_dealloc(uVar29);
      _swift_task_dealloc(uVar28);
      _swift_task_dealloc(uVar8);
      _swift_task_dealloc(uVar35);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar34);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar36);
      _swift_task_dealloc(uVar38);
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x0001002a611c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      goto LAB_1002a687c;
    }
LAB_1002a67c8:
    pMVar9 = *(MainActor **)(unaff_x22 + 0x138);
    (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))(pMVar9,*(undefined8 *)(unaff_x22 + 0x120));
  }
  uVar29 = *(undefined8 *)(unaff_x22 + 0x188);
  pMVar9 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x178),pMVar9);
  *(MainActor **)(unaff_x22 + 0x1a0) = pMVar9;
  UVar23 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
    _swift_task_switch(FUN_1002a6880,UVar23.unknown,uVar29);
    return;
  }
LAB_1002a687c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

