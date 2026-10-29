// rea decompile_all
// name: FUN_100258ba0
// address: 0x100258ba0
// body: available
// range: 0x100258ba0-0x1002592ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002592fc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100258ba0(void *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  URL UVar4;
  ID IVar5;
  URL UVar6;
  NSURL *pNVar7;
  NSDictionary *pNVar8;
  char *pcVar9;
  undefined *puVar10;
  void *pvVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar24;
  long lVar25;
  DispatchWorkItemFlags qos;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
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
  undefined1 auStack_140 [8];
  char *local_138;
  void *local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined1 *local_100;
  long local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  char local_c8 [24];
  undefined1 auStack_b0 [16];
  char *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined1 *puVar16;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puStack_f0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f8 = *(long *)(puStack_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  local_100 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar23 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar23;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  qos.unknown = (undefined *)(lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar25 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar23 - extraout_x12;
  IVar5 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  UVar6.unknown = (undefined *)NSWorkspace::desktopImageURLForScreen_(IVar5,param_1);
  if (UVar6.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    (**(code **)(lVar25 + 0x20))(lVar24,lVar23,UVar4.unknown);
    UVar6.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
    FUN_10000802c(0);
    FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
    pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    local_a0 = (char *)0x0;
    IVar5 = NSWorkspace::setDesktopImageURL_forScreen_options_error_
                      ((ID)UVar6.unknown,pNVar7,param_1,pNVar8,&local_a0);
    if ((int)IVar5 == 0) {
      pcVar9 = local_a0;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      (**(code **)(lVar25 + 8))(lVar24,UVar4.unknown);
      local_a0 = (char *)0xd000000000000019;
      local_98 = (void *)0x80000001004e24d0;
      _swift_errorRetain(pcVar9);
      SVar27.bridgeObject = (void *)0xa500000000000000;
      SVar27.str = (char *)0x209480e220;
      SVar34.bridgeObject = param_1;
      SVar34.str = (char *)pNVar7;
      Swift::String::append(SVar27,SVar34);
      pcVar21 = local_c8;
      _swift_getErrorValue(pcVar9,auStack_b0);
      SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      pvVar11 = SVar26.bridgeObject;
      SVar35.bridgeObject = param_1;
      SVar35.str = pcVar21;
      Swift::String::append(SVar26,SVar35);
      _swift_bridgeObjectRelease(pvVar11);
      puVar2 = local_98;
      SVar26.bridgeObject = local_98;
      SVar26.str = local_a0;
      local_a0 = (char *)0x5b;
      local_98 = (undefined *)0xe100000000000000;
      local_d8 = (undefined *)0x524f525245;
      uStack_d0 = 0xe500000000000000;
      local_e8 = 0x20;
      uStack_e0 = 0xe100000000000000;
      FUN_100026df4();
      pcVar22 = (char *)0x0;
      puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar27 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar11,pvVar11);
      SVar36.bridgeObject = puVar14;
      SVar36.str = pcVar22;
      Swift::String::append(SVar27,SVar36);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      SVar28.bridgeObject = (void *)0xe300000000000000;
      SVar28.str = (char *)0x5b205d;
      SVar37.bridgeObject = puVar14;
      SVar37.str = pcVar22;
      Swift::String::append(SVar28,SVar37);
      SVar29.bridgeObject = (void *)0xe900000000000072;
      SVar29.str = (char *)0x657061706c6c6177;
      SVar38.bridgeObject = puVar14;
      SVar38.str = pcVar22;
      Swift::String::append(SVar29,SVar38);
      SVar30.bridgeObject = (void *)0xe200000000000000;
      SVar30.str = (char *)0x205d;
      SVar39.bridgeObject = puVar14;
      SVar39.str = pcVar22;
      Swift::String::append(SVar30,SVar39);
      local_130 = puVar2;
      SVar40.bridgeObject = puVar14;
      SVar40.str = pcVar22;
      Swift::String::append(SVar26,SVar40);
      puVar2 = local_98;
      pcVar21 = local_a0;
      local_a0 = (char *)0x282020;
      local_98 = (undefined *)0xe300000000000000;
      SVar31.bridgeObject = (void *)0x80000001004e24f0;
      SVar31.str = (char *)0xd000000000000020;
      SVar41.bridgeObject = puVar14;
      SVar41.str = pcVar22;
      Swift::String::append(SVar31,SVar41);
      SVar32.bridgeObject = (void *)0xe100000000000000;
      SVar32.str = (char *)0x3a;
      SVar42.bridgeObject = puVar14;
      SVar42.str = pcVar22;
      Swift::String::append(SVar32,SVar42);
      local_d8 = (undefined *)0x5d4;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar43.bridgeObject = puVar14;
      SVar43.str = pcVar22;
      Swift::String::append(SVar26,SVar43);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar33.bridgeObject = (void *)0xe100000000000000;
      SVar33.str = (char *)0x29;
      SVar44.bridgeObject = puVar14;
      SVar44.str = pcVar22;
      Swift::String::append(SVar33,SVar44);
      puVar14 = local_98;
      pcVar22 = local_a0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar10 = &DAT_1005342a8;
      _swift_allocObject(&DAT_1005342a8,0x30,7);
      local_138 = pcVar21;
      *(char **)(puVar10 + 0x10) = pcVar21;
      *(undefined **)(puVar10 + 0x18) = puVar2;
      *(char **)(puVar10 + 0x20) = pcVar22;
      *(undefined **)(puVar10 + 0x28) = puVar14;
      local_80 = thunk_FUN_100099310;
      local_a0 = PTR___NSConcreteStackBlock_100521110;
      local_98 = (undefined *)0x42000000;
      local_90 = FUN_1000c7e7c;
      puStack_88 = &DAT_1005342c0;
      local_78 = puVar10;
      pvVar11 = __Block_copy(&local_a0);
      DVar12.unknown = puVar2;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      local_d8 = PTR___swiftEmptyArrayStorage_100524190;
      puVar13 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar15 = puVar14;
      FUN_100077ac0();
      puVar10 = local_108;
      lVar23 = local_118;
      Swift::SetAlgebra::_init(local_118,&local_d8,puVar14,puVar15,local_108,puVar13);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar11);
      (**(code **)(local_110 + 8))(lVar23,puVar10);
      (**(code **)(local_128 + 8))(qos.unknown,local_120);
      _swift_release(local_78);
      puVar14 = puStack_f0;
      lVar23 = local_f8;
      puVar1 = local_100;
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar10 = puVar14;
      FUN_100099338(puVar14,&DAT_100558f50);
      puVar16 = puVar1;
      (**(code **)(lVar23 + 0x10))(puVar1,puVar10,puVar14);
      uVar3 = (uint)puVar16;
      static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
      LVar17.unknown = puVar2;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar17);
      pOVar19 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar3 & 0xff);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(puVar2,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar22 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar20 = 0x8220102;
        pcVar21 = local_138;
        local_a0 = pcVar22;
        FUN_10012dbb0(local_138,puVar2,&local_a0);
        *(char **)(puVar20 + 1) = pcVar21;
        _swift_bridgeObjectRelease_n(puVar2,2);
        __os_log_impl(0x100000000,pOVar18,uVar3 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(pcVar22);
        _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar23 + 8))(puVar1,puVar14);
      _swift_bridgeObjectRelease(local_130);
      _swift_errorRelease(pcVar9);
      _swift_errorRelease(pcVar9);
    }
    else {
      (**(code **)(lVar25 + 8))(lVar24,UVar4.unknown);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

