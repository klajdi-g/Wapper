// rea decompile_all
// name: FUN_100254e24
// address: 0x100254e24
// body: available
// range: 0x100254e24-0x100255817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255814 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100254e24(undefined8 param_1,void *param_2,undefined8 param_3,long param_4,char *param_5,
                  char *param_6)

{
  String SVar1;
  undefined8 uVar2;
  DispatchWorkItemFlags DVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  URL UVar7;
  NSURL *pNVar8;
  NSDictionary *pNVar9;
  ID IVar10;
  OS_dispatch_queue *pOVar11;
  DispatchTime DVar12;
  void *pvVar13;
  undefined *puVar14;
  char *pcVar15;
  DispatchQoS DVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  Logger LVar20;
  OS_os_log *pOVar21;
  OS_os_log *pOVar22;
  undefined4 *puVar23;
  char *pcVar24;
  undefined *extraout_x1;
  _StringGuts _Var25;
  char *pcVar26;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar27;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  DispatchTime DVar28;
  long lVar29;
  DispatchQoS qos;
  long lVar30;
  long lVar31;
  code *pcVar32;
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
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  long local_160;
  DispatchTime local_158;
  void *local_150;
  undefined8 local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  char *local_120;
  char *local_118;
  DispatchWorkItemFlags local_110;
  undefined *local_108;
  long local_100;
  undefined *puStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  char local_c8 [24];
  undefined1 auStack_b0 [16];
  char *local_a0;
  char *local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_160 = param_4;
  local_120 = param_5;
  local_118 = param_6;
  local_128 = (undefined *)os::Logger::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  lVar29 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar29;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  puVar27 = (undefined *)(lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_110.unknown = puVar27;
  puStack_f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  qos.unknown = puVar27 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_140 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar31 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  DVar28.unknown = qos.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar27 = &DAT_100553d90;
  local_158.unknown = DVar28.unknown + -extraout_x12;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)(DVar28.unknown + -extraout_x12) - extraout_x8_03;
  UVar7.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  FUN_10000802c(0);
  FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
  local_148 = param_3;
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_a0 = (char *)0x0;
  local_150 = param_2;
  IVar10 = NSWorkspace::setDesktopImageURL_forScreen_options_error_
                     ((ID)UVar7.unknown,pNVar8,param_2,pNVar9,&local_a0);
  DVar3.unknown = local_110.unknown;
  if ((int)IVar10 == 0) {
    pcVar15 = local_a0;
    _Var25.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_a0 = (char *)0x0;
    local_98 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var25);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = (char *)0xd000000000000024;
    local_98 = (char *)0x80000001004e24a0;
    SVar34.bridgeObject = local_118;
    SVar34.str = local_120;
    SVar41.bridgeObject = param_2;
    SVar41.str = (char *)pNVar8;
    Swift::String::append(SVar34,SVar41);
    pcVar24 = local_98;
    _swift_errorRetain(pcVar15);
    local_118 = pcVar24;
    _swift_bridgeObjectRetain(pcVar24);
    SVar33.bridgeObject = (void *)0xa500000000000000;
    SVar33.str = (char *)0x209480e220;
    SVar42.bridgeObject = param_2;
    SVar42.str = (char *)pNVar8;
    Swift::String::append(SVar33,SVar42);
    pcVar24 = local_c8;
    _swift_getErrorValue(pcVar15,auStack_b0);
    SVar34 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar13 = SVar34.bridgeObject;
    SVar43.bridgeObject = param_2;
    SVar43.str = pcVar24;
    Swift::String::append(SVar34,SVar43);
    _swift_bridgeObjectRelease(pvVar13);
    pcVar24 = local_98;
    SVar1.bridgeObject = local_98;
    SVar1.str = local_a0;
    local_a0 = (char *)0x5b;
    local_98 = (undefined *)0xe100000000000000;
    local_d8 = (undefined *)0x524f525245;
    uStack_d0 = 0xe500000000000000;
    local_e8 = 0x20;
    uStack_e0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar26 = (char *)0x0;
    puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar13,pvVar13);
    SVar44.bridgeObject = puVar27;
    SVar44.str = pcVar26;
    Swift::String::append(SVar34,SVar44);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar35.bridgeObject = (void *)0xe300000000000000;
    SVar35.str = (char *)0x5b205d;
    SVar45.bridgeObject = puVar27;
    SVar45.str = pcVar26;
    Swift::String::append(SVar35,SVar45);
    SVar36.bridgeObject = (void *)0xe700000000000000;
    SVar36.str = (char *)0x79616c70736964;
    SVar46.bridgeObject = puVar27;
    SVar46.str = pcVar26;
    Swift::String::append(SVar36,SVar46);
    SVar37.bridgeObject = (void *)0xe200000000000000;
    SVar37.str = (char *)0x205d;
    SVar47.bridgeObject = puVar27;
    SVar47.str = pcVar26;
    Swift::String::append(SVar37,SVar47);
    local_120 = pcVar24;
    SVar48.bridgeObject = puVar27;
    SVar48.str = pcVar26;
    Swift::String::append(SVar1,SVar48);
    pcVar4 = local_98;
    pcVar24 = local_a0;
    local_a0 = (char *)0x282020;
    local_98 = (char *)0xe300000000000000;
    SVar38.bridgeObject = (void *)0x80000001004e2470;
    SVar38.str = (char *)0xd000000000000024;
    SVar49.bridgeObject = puVar27;
    SVar49.str = pcVar26;
    Swift::String::append(SVar38,SVar49);
    SVar39.bridgeObject = (void *)0xe100000000000000;
    SVar39.str = (char *)0x3a;
    SVar50.bridgeObject = puVar27;
    SVar50.str = pcVar26;
    Swift::String::append(SVar39,SVar50);
    local_d8 = (undefined *)0x609;
    SVar34 = Swift::CustomStringConvertible::get_description();
    SVar51.bridgeObject = puVar27;
    SVar51.str = pcVar26;
    Swift::String::append(SVar34,SVar51);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar40.bridgeObject = (void *)0xe100000000000000;
    SVar40.str = (char *)0x29;
    SVar52.bridgeObject = puVar27;
    SVar52.str = pcVar26;
    Swift::String::append(SVar40,SVar52);
    pcVar5 = local_98;
    pcVar26 = local_a0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar27 = &DAT_100534208;
    _swift_allocObject(&DAT_100534208,0x30,7);
    *(char **)(puVar27 + 0x10) = pcVar24;
    *(char **)(puVar27 + 0x18) = pcVar4;
    *(char **)(puVar27 + 0x20) = pcVar26;
    *(char **)(puVar27 + 0x28) = pcVar5;
    local_80 = thunk_FUN_100099310;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    local_98 = (char *)0x42000000;
    local_90 = FUN_1000c7e7c;
    puStack_88 = &DAT_100534220;
    local_78 = puVar27;
    pvVar13 = __Block_copy(&local_a0);
    DVar16.unknown = pcVar4;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    local_d8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar27 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar18 = puVar27;
    FUN_100077ac0();
    puVar19 = local_108;
    Swift::SetAlgebra::_init(DVar3.unknown,&local_d8,puVar27,puVar18,local_108,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,(DispatchWorkItemFlags)qos.unknown);
    __Block_release(pvVar13);
    (**(code **)(local_f0 + 8))(DVar3.unknown,puVar19);
    (**(code **)(local_100 + 8))(qos.unknown,puStack_f8);
    _swift_release(local_78);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar27 = local_128;
    puVar19 = local_128;
    FUN_100099338(local_128,&DAT_100558f50);
    lVar31 = local_130;
    lVar29 = local_138;
    lVar30 = local_138;
    (**(code **)(local_130 + 0x10))(local_138,puVar19,puVar27);
    uVar6 = (uint)lVar30;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar20.unknown = pcVar4;
    _swift_bridgeObjectRetain();
    pOVar21 = os::Logger::get_logObject(LVar20);
    pOVar22 = pOVar21;
    _os_log_type_enabled(pOVar21,uVar6 & 0xff);
    if ((int)pOVar22 == 0) {
      _swift_bridgeObjectRelease_n(pcVar4,2);
    }
    else {
      puVar23 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar26 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar23 = 0x8220102;
      local_a0 = pcVar26;
      FUN_10012dbb0(pcVar24,pcVar4,&local_a0);
      *(char **)(puVar23 + 1) = pcVar24;
      _swift_bridgeObjectRelease_n(pcVar4,2);
      __os_log_impl(0x100000000,pOVar21,uVar6 & 0xff,"%{public}s",puVar23,0xc);
      FUN_100043f24(pcVar26);
      _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar31 + 8))(lVar29,puVar27);
    _swift_bridgeObjectRelease(local_120);
    _swift_errorRelease(pcVar15);
    _swift_bridgeObjectRelease(local_118);
    _swift_errorRelease(pcVar15);
  }
  else {
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar30 = *(long *)(UVar7.unknown + -8);
    (**(code **)(lVar30 + 0x10))(lVar29,param_1,UVar7.unknown);
    (**(code **)(lVar30 + 0x38))(lVar29,0,1,UVar7.unknown);
    lVar30 = local_160;
    _swift_beginAccess(local_160 + _TtC7Wallper21VideoWallpaperManager::adaptedWallpaperURLs,
                       &local_a0,0x21,0);
    pcVar24 = local_118;
    _swift_bridgeObjectRetain(local_118);
    FUN_100122fac(lVar29,local_120,pcVar24);
    _swift_endAccess(&local_a0);
    pOVar11 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    DVar12.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar11);
    Dispatch::DispatchTime::now(DVar12);
    DVar12.unknown = local_158.unknown;
    Dispatch::__infix(DVar28,0.5);
    puVar19 = local_140;
    pcVar32 = *(code **)(lVar31 + 8);
    (*pcVar32)(DVar28.unknown,local_140);
    puVar27 = &DAT_100534258;
    _swift_allocObject(&DAT_100534258,0x28,7);
    uVar2 = local_148;
    *(long *)(puVar27 + 0x10) = lVar30;
    *(void **)(puVar27 + 0x18) = local_150;
    *(undefined8 *)(puVar27 + 0x20) = local_148;
    local_80 = FUN_100258270;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    local_98 = (char *)0x42000000;
    local_90 = FUN_1000c7e7c;
    puStack_88 = &DAT_100534270;
    local_78 = puVar27;
    pvVar13 = __Block_copy(&local_a0);
    DVar16.unknown = local_78;
    _swift_bridgeObjectRetain(uVar2);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar27 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = puVar27;
    FUN_100077ac0();
    puVar18 = local_108;
    DVar3.unknown = local_110.unknown;
    Swift::SetAlgebra::_init(local_110.unknown,&local_a0,puVar27,puVar14,local_108,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar12,qos,DVar3);
    __Block_release(pvVar13);
    (**(code **)(local_f0 + 8))(DVar3.unknown,puVar18);
    (**(code **)(local_100 + 8))(qos.unknown,puStack_f8);
    (*pcVar32)(DVar12.unknown,puVar19);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

