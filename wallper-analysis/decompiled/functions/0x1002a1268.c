// rea decompile_all
// name: FUN_1002a1268
// address: 0x1002a1268
// body: available
// range: 0x1002a1268-0x1002a1e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a1e4c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a1268(void)

{
  void *pvVar1;
  uint uVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  URL UVar6;
  ulong uVar7;
  void *pvVar8;
  undefined *puVar9;
  void *aBlock;
  DispatchQoS DVar10;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar11;
  DispatchWorkItemFlags DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Logger LVar15;
  ulong uVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  CocoaError CVar22;
  Code CVar23;
  CocoaError CVar24;
  _StringGuts extraout_x1;
  char *pcVar26;
  long lVar27;
  code *pcVar28;
  code *pcVar29;
  undefined8 uVar30;
  ID self;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long unaff_x22;
  Date DVar34;
  undefined8 uVar35;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar36;
  long lVar37;
  double dVar38;
  double dVar39;
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
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  String local_78;
  long local_68;
  Date DVar25;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  self = *(ID *)(unaff_x22 + 0x528);
  IVar3 = objc_stub::status(*(ID *)(unaff_x22 + 0x4f8));
  UVar4.unknown = (undefined *)objc_stub::defaultManager(self);
  if (IVar3 == 3) {
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    *(undefined8 *)(unaff_x22 + 0x310) = 0;
    IVar3 = objc_stub::removeItemAtURL_error_((ID)UVar4.unknown,pNVar5,unaff_x22 + 0x310);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x310);
    if ((int)IVar3 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar31);
    }
    UVar4.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x528));
    UVar6.unknown = Foundation::URL::_bridgeToObjectiveC(UVar4);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar6);
    *(undefined8 *)(unaff_x22 + 0x318) = 0;
    IVar3 = objc_stub::moveItemAtURL_toURL_error_
                      ((ID)UVar4.unknown,UVar6.unknown,pNVar5,unaff_x22 + 0x318);
    if ((int)IVar3 != 0) {
      dVar38 = *(double *)(unaff_x22 + 0x420);
      local_78.str = (char *)0x0;
      local_78.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x23,extraout_x1);
      _swift_bridgeObjectRelease(local_78.bridgeObject);
      local_78.str = (char *)0xd000000000000014;
      pcVar26 = local_78.str;
      local_78.str = (char *)0xd000000000000014;
      local_78.bridgeObject = (void *)0x80000001004e39c0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar38 + dVar38)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1dfc);
        local_78.str = pcVar26;
        (*UNRECOVERED_JUMPTABLE)();
      }
      dVar38 = *(double *)(unaff_x22 + 0x420) + *(double *)(unaff_x22 + 0x420);
      if (dVar38 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e00);
        local_78.str = pcVar26;
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (9.223372036854776e+18 <= dVar38) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e04);
        local_78.str = pcVar26;
        (*UNRECOVERED_JUMPTABLE)();
      }
      dVar39 = *(double *)(unaff_x22 + 0x428);
      *(long *)(unaff_x22 + 800) = (long)dVar38;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar44.bridgeObject = pNVar5;
      SVar44.str = UVar6.unknown;
      Swift::String::append(SVar40,SVar44);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar40.bridgeObject = (void *)0xa200000000000000;
      SVar40.str = (char *)0x97c3;
      SVar48.bridgeObject = pNVar5;
      SVar48.str = UVar6.unknown;
      Swift::String::append(SVar40,SVar48);
      if (0x7fefffffffffffff < (ulong)ABS(dVar39 + dVar39)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e08);
        (*UNRECOVERED_JUMPTABLE)();
      }
      dVar38 = *(double *)(unaff_x22 + 0x428) + *(double *)(unaff_x22 + 0x428);
      if (dVar38 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e0c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (9.223372036854776e+18 <= dVar38) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e10);
        (*UNRECOVERED_JUMPTABLE)();
      }
      DVar34.unknown = *(undefined **)(unaff_x22 + 0x548);
      lVar27 = *(long *)(unaff_x22 + 0x540);
      lVar37 = *(long *)(unaff_x22 + 0x538);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x530);
      *(long *)(unaff_x22 + 0x328) = (long)dVar38;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar49.bridgeObject = pNVar5;
      SVar49.str = UVar6.unknown;
      Swift::String::append(SVar40,SVar49);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      UVar4.unknown = (undefined *)0x666f2079706f6320;
      SVar41.bridgeObject = (void *)0xe900000000000020;
      SVar41.str = (char *)0x666f2079706f6320;
      SVar50.bridgeObject = pNVar5;
      SVar50.str = UVar6.unknown;
      Swift::String::append(SVar41,SVar50);
      pvVar8 = local_78.bridgeObject;
      pcVar26 = local_78.str;
      local_78 = Foundation::URL::get_lastPathComponent(UVar4);
      SVar42.bridgeObject = (void *)0xe400000000000000;
      SVar42.str = (char *)0x206e6920;
      DVar25.unknown = (undefined *)0xe400000000000000;
      SVar51.bridgeObject = pNVar5;
      SVar51.str = UVar6.unknown;
      Swift::String::append(SVar42,SVar51);
      uVar7 = lVar27 + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar7);
      Foundation::Date::init();
      dVar38 = Foundation::Date::timeIntervalSince(DVar34,DVar25);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar37 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar31);
      _swift_task_dealloc(uVar7);
      if (0x7fefffffffffffff < (ulong)ABS(dVar38)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e14);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (dVar38 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (9.223372036854776e+18 <= dVar38) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002a1e1c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      *(long *)(unaff_x22 + 0x330) = (long)dVar38;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar52.bridgeObject = pNVar5;
      SVar52.str = UVar6.unknown;
      Swift::String::append(SVar40,SVar52);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar43.bridgeObject = (void *)0xe100000000000000;
      SVar43.str = (char *)0x73;
      SVar53.bridgeObject = pNVar5;
      SVar53.str = UVar6.unknown;
      Swift::String::append(SVar43,SVar53);
      SVar40 = local_78;
      pvVar1 = local_78.bridgeObject;
      local_78 = (String)CONCAT88(pvVar8,pcVar26);
      _swift_bridgeObjectRetain(pvVar8);
      SVar54.bridgeObject = pNVar5;
      SVar54.str = UVar6.unknown;
      Swift::String::append(SVar40,SVar54);
      _swift_bridgeObjectRelease(pvVar1);
      _swift_bridgeObjectRelease(pvVar8);
      SVar40 = local_78;
      pvVar1 = local_78.bridgeObject;
      local_78.bridgeObject = (void *)0xe100000000000000;
      local_78.str = (char *)0x5b;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0xe100000000000000;
      FUN_100026df4();
      pcVar26 = (char *)0x0;
      puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x2e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
      SVar55.bridgeObject = puVar9;
      SVar55.str = pcVar26;
      Swift::String::append(SVar44,SVar55);
      _swift_bridgeObjectRelease(SVar44.bridgeObject);
      SVar45.bridgeObject = (void *)0xe300000000000000;
      SVar45.str = (char *)0x5b205d;
      SVar56.bridgeObject = puVar9;
      SVar56.str = pcVar26;
      Swift::String::append(SVar45,SVar56);
      SVar46.bridgeObject = (void *)0xe900000000000072;
      SVar46.str = (char *)0x657061706c6c6177;
      SVar57.bridgeObject = puVar9;
      SVar57.str = pcVar26;
      Swift::String::append(SVar46,SVar57);
      SVar47.bridgeObject = (void *)0xe200000000000000;
      SVar47.str = (char *)0x205d;
      SVar58.bridgeObject = puVar9;
      SVar58.str = pcVar26;
      Swift::String::append(SVar47,SVar58);
      SVar59.bridgeObject = puVar9;
      SVar59.str = pcVar26;
      Swift::String::append(SVar40,SVar59);
      pcVar26 = local_78.str;
      pvVar8 = local_78.bridgeObject;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar9 = &DAT_1005377e0;
      _swift_allocObject(&DAT_1005377e0,0x30,7);
      *(char **)(puVar9 + 0x10) = pcVar26;
      *(void **)(puVar9 + 0x18) = pvVar8;
      *(undefined8 *)(puVar9 + 0x20) = 0;
      *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x168) = FUN_100099310;
      *(undefined **)(unaff_x22 + 0x170) = puVar9;
      *(undefined **)(unaff_x22 + 0x148) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x150) = 0x42000000;
      *(code **)(unaff_x22 + 0x158) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x160) = &DAT_1005377f8;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x148));
      DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar27 = *(long *)(DVar10.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar11.unknown = pvVar8;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar11);
      DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar9 = PTR_typeMetadataAccessor_1005244a8;
      lVar37 = *(long *)(DVar12.unknown + -8);
      uVar7 = *(long *)(lVar37 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar7);
      *(undefined **)(unaff_x22 + 0x340) = PTR___swiftEmptyArrayStorage_100524190;
      puVar13 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,puVar9,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar9 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar14 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x340,puVar9,puVar14,DVar12.unknown,puVar13);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(lVar37 + 8))(uVar7,DVar12.unknown);
      (**(code **)(lVar27 + 8))(qos.unknown,DVar10.unknown);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar15 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar15.unknown,&DAT_100558f50);
      lVar27 = *(long *)(LVar15.unknown + -8);
      uVar16 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      uVar7 = uVar16;
      (**(code **)(lVar27 + 0x10))();
      uVar2 = (uint)uVar7;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar17.unknown = pvVar8;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar17);
      pOVar19 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar2 & 0xff);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(pvVar8,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar21 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        local_78.str = pcVar21;
        *puVar20 = 0x8220102;
        FUN_10012dbb0(pcVar26,pvVar8,&local_78);
        *(char **)(puVar20 + 1) = pcVar26;
        _swift_bridgeObjectRelease_n(pvVar8,2);
        __os_log_impl(0x100000000,pOVar18,uVar2 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(pcVar21);
        _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar27 + 8))(uVar16,LVar15.unknown);
      _swift_bridgeObjectRelease(pvVar1);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x548);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x530);
      pcVar29 = *(code **)(unaff_x22 + 0x520);
      pcVar28 = *(code **)(unaff_x22 + 0x518);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x510);
      lVar27 = *(long *)(unaff_x22 + 0x508);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x500);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x368);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x348);
      _swift_task_dealloc(uVar16);
      (*UNRECOVERED_JUMPTABLE)(uVar30,uVar35);
      (*pcVar29)(uVar33,uVar36);
      (*pcVar28)(uVar32,uVar31,uVar36);
      (**(code **)(lVar27 + 0x38))(uVar32,0,1,uVar36);
      _swift_task_dealloc(uVar30);
      _swift_task_dealloc(uVar33);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      if (*(long *)PTR____stack_chk_guard_100521138 != local_68) goto LAB_1002a1e4c;
      goto LAB_1002a1dd4;
    }
    uVar31 = *(undefined8 *)(unaff_x22 + 0x548);
    local_a8 = *(long *)(unaff_x22 + 0x538);
    local_a0 = *(undefined8 *)(unaff_x22 + 0x530);
    local_90 = *(code **)(unaff_x22 + 0x520);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x510);
    local_98 = *(undefined8 *)(unaff_x22 + 0x500);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    *(undefined8 *)(unaff_x22 + 0x308) = 0;
    IVar3 = objc_stub::removeItemAtURL_error_((ID)UVar4.unknown,pNVar5,unaff_x22 + 0x308);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x308);
    if ((int)IVar3 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar31);
    }
    IVar3 = objc_stub::error(*(ID *)(unaff_x22 + 0x4f8));
    if (IVar3 == 0) {
      CVar22 = Foundation::CocoaError::typeMetadataAccessor();
      puVar9 = PTR_typeMetadataAccessor_1005206b0;
      lVar27 = *(long *)(CVar22.unknown + -8);
      uVar7 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar7);
      CVar23 = Foundation::CocoaError::Code::typeMetadataAccessor();
      CVar24.unknown =
           (undefined *)
           (*(long *)(*(long *)(CVar23.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      Foundation::CocoaError::Code::get_fileWriteUnknown((Code)CVar24.unknown);
      FUN_1002b6ddc(PTR___swiftEmptyArrayStorage_100524190);
      FUN_1000036d0(&DAT_100559c48,puVar9,
                    PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_1005206a8
                   );
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
                ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                  )CVar24.unknown);
      _swift_task_dealloc();
      Foundation::CocoaError::get__nsError(CVar24);
      (**(code **)(lVar27 + 8))(uVar7,CVar22.unknown);
      _swift_task_dealloc(uVar7);
    }
    uVar31 = *(undefined8 *)(unaff_x22 + 0x548);
    local_a8 = *(long *)(unaff_x22 + 0x538);
    local_a0 = *(undefined8 *)(unaff_x22 + 0x530);
    local_90 = *(code **)(unaff_x22 + 0x520);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x510);
    local_98 = *(undefined8 *)(unaff_x22 + 0x500);
    _swift_willThrow();
  }
  (**(code **)(local_a8 + 8))(uVar31,local_a0);
  (*local_90)(uVar30,local_98);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar30);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
LAB_1002a1e4c:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
LAB_1002a1dd4:
                    /* WARNING: Could not recover jumptable at 0x0001002a1df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

