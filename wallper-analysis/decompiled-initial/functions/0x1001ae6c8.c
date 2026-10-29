// rea decompile_all
// name: FUN_1001ae6c8
// address: 0x1001ae6c8
// body: available
// range: 0x1001ae6c8-0x1001aeef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001aeef4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001aecc0) */

void FUN_1001ae6c8(undefined8 param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ID IVar6;
  char *pcVar7;
  undefined *puVar8;
  DispatchQoS DVar9;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar10;
  DispatchWorkItemFlags DVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  ulong uVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  URL UVar22;
  NSDataReadingOptions contentsOf;
  Data DVar23;
  NSString *pNVar24;
  void *extraout_x1;
  _StringGuts _Var25;
  void *pvVar26;
  char *pcVar27;
  uint uVar28;
  long lVar29;
  _StringGuts _Var30;
  undefined8 uVar31;
  NSData *pNVar32;
  long unaff_x22;
  long lVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
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
  char *local_70;
  undefined *puStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  if ((**(ID **)(unaff_x22 + 0xf0) == 0) ||
     (IVar6 = objc_stub::stringValue(**(ID **)(unaff_x22 + 0xf0)), param_2 = extraout_x1, IVar6 == 0
     )) {
    SVar34.bridgeObject = param_2;
    SVar34.str = (char *)0x6c696e;
    _Var30.unknown = (undefined *)0xe300000000000000;
  }
  else {
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var30.unknown = SVar34.bridgeObject;
  }
  _Var25.unknown = SVar34.bridgeObject;
  pcVar7 = *(char **)(*(long *)(unaff_x22 + 0xf0) + 8);
  if (pcVar7 == (char *)0x0) {
    if ((SVar34.str == (undefined *)0x4b4f) && (_Var30.unknown == (undefined *)0xe200000000000000))
    {
      _swift_bridgeObjectRelease(0xe200000000000000);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar34.str,_Var30,(_StringComparisonResult)0x4f);
      _swift_bridgeObjectRelease(_Var30.unknown);
      if (!bVar4) {
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xe0));
        goto LAB_1001aee64;
      }
    }
    UVar22 = Foundation::URL::typeMetadataAccessor();
    lVar29 = *(long *)(UVar22.unknown + -8);
    contentsOf.unknown = (undefined *)(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    Foundation::URL::_init();
    uVar12 = 0;
    DVar23 = Foundation::Data::_init(contentsOf);
    (**(code **)(lVar29 + 8))(contentsOf.unknown,UVar22.unknown);
    _swift_task_dealloc(contentsOf.unknown);
    uVar5 = (uint)(uVar12 >> 0x20);
    uVar28 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar28 != 0) {
        if ((long)(int)DVar23.unknown != (long)DVar23.unknown >> 0x20) goto LAB_1001aed4c;
        goto LAB_1001aedcc;
      }
      if ((uVar12 & 0xff000000000000) == 0) goto LAB_1001aedcc;
LAB_1001aed4c:
      uVar31 = *(undefined8 *)(unaff_x22 + 0xe0);
      IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      pNVar24 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar31);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0;
      IVar6 = NSFileManager::removeItemAtPath_error_(IVar6,pNVar24,unaff_x22 + 0xc0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0xc0);
      if ((int)IVar6 == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar31);
      }
      pNVar32 = Foundation::Data::_bridgeToObjectiveC(DVar23);
      _CGImageSourceCreateWithData(pNVar32,0);
      if (pNVar32 != (NSData *)0x0) {
        FUN_10010f93c(pNVar32,0x5dc);
        FUN_100093624(DVar23.unknown,uVar12);
        goto LAB_1001aee68;
      }
    }
    else {
      if ((uVar28 == 2) && (*(long *)(DVar23.unknown + 0x10) != *(long *)(DVar23.unknown + 0x18)))
      goto LAB_1001aed4c;
LAB_1001aedcc:
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xe0));
    }
    FUN_100093624(DVar23.unknown,uVar12);
  }
  else {
    uVar31 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_bridgeObjectRelease(_Var30.unknown);
    _swift_bridgeObjectRelease(uVar31);
    local_70 = (char *)0x0;
    puStack_68 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x38,_Var25);
    pvVar26 = (void *)0x80000001004dfde0;
    SVar35.bridgeObject = (void *)0x80000001004dfde0;
    SVar35.str = (char *)0x1000000000000036;
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar35,SVar43);
    FUN_1001adf64();
    SVar36.bridgeObject = pvVar26;
    SVar36.str = pcVar7;
    SVar44.bridgeObject = param_4;
    SVar44.str = param_3;
    Swift::String::append(SVar36,SVar44);
    _swift_bridgeObjectRelease(pvVar26);
    puVar2 = puStack_68;
    SVar1.bridgeObject = puStack_68;
    SVar1.str = local_70;
    local_70 = (char *)0x5b;
    puStack_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xe100000000000000;
    FUN_100026df4();
    pcVar27 = (char *)0x0;
    puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0xb0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar26,pvVar26);
    SVar45.bridgeObject = puVar14;
    SVar45.str = pcVar27;
    Swift::String::append(SVar34,SVar45);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar37.bridgeObject = (void *)0xe300000000000000;
    SVar37.str = (char *)0x5b205d;
    SVar46.bridgeObject = puVar14;
    SVar46.str = pcVar27;
    Swift::String::append(SVar37,SVar46);
    SVar38.bridgeObject = (void *)0xe500000000000000;
    SVar38.str = (char *)0x616964656d;
    SVar47.bridgeObject = puVar14;
    SVar47.str = pcVar27;
    Swift::String::append(SVar38,SVar47);
    SVar39.bridgeObject = (void *)0xe200000000000000;
    SVar39.str = (char *)0x205d;
    SVar48.bridgeObject = puVar14;
    SVar48.str = pcVar27;
    Swift::String::append(SVar39,SVar48);
    SVar49.bridgeObject = puVar14;
    SVar49.str = pcVar27;
    Swift::String::append(SVar1,SVar49);
    puVar3 = puStack_68;
    pcVar7 = local_70;
    local_70 = (char *)0x282020;
    puStack_68 = (undefined *)0xe300000000000000;
    SVar40.bridgeObject = (void *)0x80000001004dfe20;
    SVar40.str = (char *)0xd00000000000001c;
    SVar50.bridgeObject = puVar14;
    SVar50.str = pcVar27;
    Swift::String::append(SVar40,SVar50);
    SVar41.bridgeObject = (void *)0xe100000000000000;
    SVar41.str = (char *)0x3a;
    SVar51.bridgeObject = puVar14;
    SVar51.str = pcVar27;
    Swift::String::append(SVar41,SVar51);
    *(undefined8 *)(unaff_x22 + 200) = 0x464;
    SVar34 = Swift::CustomStringConvertible::get_description();
    SVar52.bridgeObject = puVar14;
    SVar52.str = pcVar27;
    Swift::String::append(SVar34,SVar52);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar42.bridgeObject = (void *)0xe100000000000000;
    SVar42.str = (char *)0x29;
    SVar53.bridgeObject = puVar14;
    SVar53.str = pcVar27;
    Swift::String::append(SVar42,SVar53);
    puVar14 = puStack_68;
    pcVar27 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_1005309a8;
    _swift_allocObject(&DAT_1005309a8,0x30,7);
    *(char **)(puVar8 + 0x10) = pcVar7;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    *(char **)(puVar8 + 0x20) = pcVar27;
    *(undefined **)(puVar8 + 0x28) = puVar14;
    *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x98) = puVar8;
    *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x88) = &DAT_1005309c0;
    pvVar26 = __Block_copy((void *)(unaff_x22 + 0x70));
    DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar29 = *(long *)(DVar9.unknown + -8);
    qos.unknown = (undefined *)(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar10.unknown = puVar3;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    DVar11 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar14 = PTR_typeMetadataAccessor_1005244a8;
    lVar33 = *(long *)(DVar11.unknown + -8);
    uVar12 = *(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar12);
    *(undefined **)(unaff_x22 + 0xd0) = PTR___swiftEmptyArrayStorage_100524190;
    puVar13 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar14,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar14 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar12,unaff_x22 + 0xd0,puVar14,puVar15,DVar11.unknown,puVar13);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar26);
    (**(code **)(lVar33 + 8))(uVar12,DVar11.unknown);
    (**(code **)(lVar29 + 8))(qos.unknown,DVar9.unknown);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(qos.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar16 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar16.unknown,&DAT_100558f50);
    lVar29 = *(long *)(LVar16.unknown + -8);
    uVar17 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar17);
    uVar12 = uVar17;
    (**(code **)(lVar29 + 0x10))();
    uVar5 = (uint)uVar12;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar18.unknown = puVar3;
    _swift_bridgeObjectRetain();
    pOVar19 = os::Logger::get_logObject(LVar18);
    pOVar20 = pOVar19;
    _os_log_type_enabled(pOVar19,uVar5 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar3,2);
    }
    else {
      puVar21 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar27 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar21 = 0x8220102;
      local_70 = pcVar27;
      FUN_10012dbb0(pcVar7,puVar3,&local_70);
      *(char **)(puVar21 + 1) = pcVar7;
      _swift_bridgeObjectRelease_n(puVar3,2);
      __os_log_impl(0x100000000,pOVar19,uVar5 & 0xff,"%{public}s",puVar21,0xc);
      FUN_100043f24(pcVar27);
      _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar29 + 8))(uVar17,LVar16.unknown);
    _swift_bridgeObjectRelease(puVar2);
    _swift_task_dealloc(uVar17);
  }
LAB_1001aee64:
  pNVar32 = (NSData *)0x0;
LAB_1001aee68:
  uVar31 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100029548(uVar31,FUN_10028e828);
  _swift_task_dealloc(uVar31);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x0001001aeec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(pNVar32);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

