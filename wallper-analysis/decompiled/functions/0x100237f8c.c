// rea decompile_all
// name: FUN_100237f8c
// address: 0x100237f8c
// body: available
// range: 0x100237f8c-0x10023869f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100237f8c(double param_1,char *param_2,void *param_3)

{
  String SVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  DispatchWorkItemFlags DVar5;
  ID IVar6;
  NSString *pNVar7;
  Dictionary<undefined,undefined> DVar8;
  Dictionary<undefined,undefined> DVar9;
  NSDictionary *pNVar10;
  ID IVar11;
  undefined8 uVar12;
  undefined *puVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  char *pcVar22;
  void *pvVar23;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  _StringGuts _Var24;
  char *pcVar25;
  void *pvVar26;
  undefined *puVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar28;
  long lVar29;
  DispatchWorkItemFlags qos;
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
  String SVar45;
  undefined1 auStack_120 [8];
  long local_118;
  undefined *local_110;
  long local_108;
  char *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 *puVar17;
  
  local_e8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar29 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  qos.unknown = (undefined *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSUserDefaults::dictionaryForKey_(IVar6,pNVar7);
  if (IVar6 != 0) {
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar9 = DVar8;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar8.unknown);
    if (DVar9.unknown != (char *)0x0) goto LAB_10023814c;
  }
  DVar9.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005c3c();
LAB_10023814c:
  pcVar25 = DVar9.unknown;
  _swift_isUniquelyReferenced_nonNull_native(DVar9.unknown);
  local_e0 = DVar9.unknown;
  FUN_100340408(param_1,param_2,param_3,pcVar25);
  pcVar25 = local_e0;
  IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  local_100 = pcVar25;
  pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setObject_forKey_(IVar6,pNVar10,pNVar7);
  lVar28 = _TtC7Wallper21VideoWallpaperManager::players;
  _Var24.unknown = auStack_90;
  pcVar25 = (char *)0x0;
  pvVar26 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players);
  lVar28 = *(long *)(unaff_x20 + lVar28);
  if (*(long *)(lVar28 + 0x10) != 0) {
    _swift_bridgeObjectRetain_n(lVar28,2);
    pcVar22 = param_2;
    pvVar23 = param_3;
    FUN_10000464c();
    if (((ulong)pvVar23 & 1) == 0) {
      _Var24.unknown = (undefined *)0x2;
      _swift_bridgeObjectRelease_n(lVar28);
    }
    else {
      IVar6 = *(ID *)(*(long *)(lVar28 + 0x38) + (long)pcVar22 * 8);
      _swift_bridgeObjectRelease_n(lVar28,2);
      IVar11 = objc_stub::timeControlStatus(IVar6);
      _Var24.unknown = extraout_x1;
      if (IVar11 == 2) {
        objc_stub::setRate_(IVar6,(ulong)(uint)(float)param_1);
        _Var24.unknown = extraout_x1_00;
      }
    }
  }
  local_e0 = (char *)0x0;
  local_d8 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x1b,_Var24);
  SVar33.bridgeObject = (void *)0x80000001004e2a80;
  SVar33.str = (char *)0xd000000000000013;
  SVar37.bridgeObject = pvVar26;
  SVar37.str = pcVar25;
  Swift::String::append(SVar33,SVar37);
  SVar30.bridgeObject = param_3;
  SVar30.str = param_2;
  SVar38.bridgeObject = pvVar26;
  SVar38.str = pcVar25;
  Swift::String::append(SVar30,SVar38);
  SVar31.bridgeObject = (void *)0xe200000000000000;
  SVar31.str = (char *)0x203a;
  SVar39.bridgeObject = pvVar26;
  SVar39.str = pcVar25;
  Swift::String::append(SVar31,SVar39);
  pcVar25 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100523f90
  ;
  double::_write((undefined *)&local_e0,param_1);
  SVar32.bridgeObject = (void *)0xa200000000000000;
  SVar32.str = (char *)0x97c3;
  uVar12 = 0x97c3;
  SVar40.bridgeObject = pvVar26;
  SVar40.str = pcVar25;
  Swift::String::append(SVar32,SVar40);
  puVar3 = local_d8;
  SVar1.bridgeObject = local_d8;
  SVar1.str = local_e0;
  local_e0 = (char *)0x5b;
  local_d8 = (undefined *)0xe100000000000000;
  local_a0 = (undefined *)0x4f464e49;
  uStack_98 = 0xe400000000000000;
  local_b0 = 0x20;
  uStack_a8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar25 = (char *)0x0;
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
  SVar41.bridgeObject = puVar27;
  SVar41.str = pcVar25;
  Swift::String::append(SVar33,SVar41);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x5b205d;
  SVar42.bridgeObject = puVar27;
  SVar42.str = pcVar25;
  Swift::String::append(SVar34,SVar42);
  SVar35.bridgeObject = (void *)0xe800000000000000;
  SVar35.str = (char *)0x6b63616279616c70;
  SVar43.bridgeObject = puVar27;
  SVar43.str = pcVar25;
  Swift::String::append(SVar35,SVar43);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar44.bridgeObject = puVar27;
  SVar44.str = pcVar25;
  Swift::String::append(SVar36,SVar44);
  SVar45.bridgeObject = puVar27;
  SVar45.str = pcVar25;
  Swift::String::append(SVar1,SVar45);
  puVar27 = local_d8;
  pcVar25 = local_e0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar13 = &DAT_1005354a0;
  _swift_allocObject(&DAT_1005354a0,0x30,7);
  *(char **)(puVar13 + 0x10) = pcVar25;
  *(undefined **)(puVar13 + 0x18) = puVar27;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
  local_c0 = thunk_FUN_100099310;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = (undefined *)0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_1005354b8;
  local_b8 = puVar13;
  pvVar26 = __Block_copy(&local_e0);
  DVar14.unknown = puVar27;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar14);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar13 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar16 = puVar13;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar29,&local_a0,puVar13,puVar16,DVar5.unknown,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar26);
  (**(code **)(local_108 + 8))(lVar29,DVar5.unknown);
  (**(code **)(local_118 + 8))(qos.unknown,local_110);
  _swift_release(local_b8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar13 = local_e8;
  puVar16 = local_e8;
  FUN_100099338(local_e8,&DAT_100558f50);
  lVar29 = local_f0;
  puVar2 = local_f8;
  puVar17 = local_f8;
  (**(code **)(local_f0 + 0x10))(local_f8,puVar16,puVar13);
  uVar4 = (uint)puVar17;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar18.unknown = puVar27;
  _swift_bridgeObjectRetain();
  pOVar19 = os::Logger::get_logObject(LVar18);
  pOVar20 = pOVar19;
  _os_log_type_enabled(pOVar19,uVar4 & 0xff);
  if ((int)pOVar20 == 0) {
    _swift_bridgeObjectRelease_n(puVar27,2);
  }
  else {
    puVar21 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar22 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar21 = 0x8220102;
    local_e0 = pcVar22;
    FUN_10012dbb0(pcVar25,puVar27,&local_e0);
    *(char **)(puVar21 + 1) = pcVar25;
    _swift_bridgeObjectRelease_n(puVar27,2);
    __os_log_impl(0x100000000,pOVar19,uVar4 & 0xff,"%{public}s",puVar21,0xc);
    FUN_100043f24(pcVar22);
    _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar29 + 8))(puVar2,puVar13);
  _swift_release(local_100);
  _swift_bridgeObjectRelease(puVar3);
  return;
}

