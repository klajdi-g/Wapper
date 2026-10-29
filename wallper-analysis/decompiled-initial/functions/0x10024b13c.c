// rea decompile_all
// name: FUN_10024b13c
// address: 0x10024b13c
// body: available
// range: 0x10024b13c-0x10024bd03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10024b13c(ID param_1,char *param_2,char *param_3)

{
  bool bVar1;
  DispatchWorkItemFlags qos;
  undefined1 *puVar2;
  uint uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  NSString *pNVar17;
  Dictionary<undefined,undefined> DVar18;
  Dictionary<undefined,undefined> DVar19;
  char *pcVar20;
  Date DVar21;
  _StringGuts _Var22;
  char *pcVar23;
  void *pvVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  undefined *puVar26;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ID IVar27;
  long unaff_x20;
  code *pcVar28;
  Date DVar29;
  long lVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  double dVar36;
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
  String SVar54;
  String SVar55;
  undefined1 auStack_1b0 [8];
  code *local_1a8;
  code *local_1a0;
  long local_198;
  long local_190;
  char *local_188;
  ID local_180;
  char *local_178;
  void *local_170;
  DispatchWorkItemFlags local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  undefined1 *local_138;
  long local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  char *local_110;
  undefined *local_108;
  code *local_100;
  undefined *puStack_f8;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 *puVar11;
  
  local_128 = (undefined *)os::Logger::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  local_138 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_140 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar25 = (long)(auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar25;
  local_158 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  puVar26 = (undefined *)(lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar31 = &DAT_10054b950;
  local_168.unknown = puVar26;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar31 + -8) + 0x40));
  lVar25 = (long)puVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_170 = (void *)lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar31 = (undefined *)(lVar25 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = (long)puVar31 - extraout_x12_00;
  local_118 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar33 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar30 = lVar32 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = _TtC7Wallper21VideoWallpaperManager::players;
  local_120 = (undefined *)(lVar30 - extraout_x12_01);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_90,0,0);
  lVar25 = *(long *)(unaff_x20 + lVar25);
  if (*(long *)(lVar25 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(lVar25);
  pcVar23 = param_2;
  local_178 = param_3;
  FUN_10000464c();
  if (((ulong)param_3 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar25);
    return;
  }
  IVar27 = *(ID *)(*(long *)(lVar25 + 0x38) + (long)pcVar23 * 8);
  local_180 = param_1;
  _swift_bridgeObjectRelease(lVar25);
  IVar4 = local_180;
  if (IVar27 != local_180) {
    return;
  }
  pcVar23 = param_2;
  FUN_10023c0d0(param_2,local_178);
  if (((ulong)pcVar23 & 1) == 0) {
    return;
  }
  IVar27 = objc_stub::timeControlStatus(IVar4);
  if (IVar27 != 0) {
    return;
  }
  IVar4 = objc_stub::currentItem(IVar4);
  if (IVar4 == 0) {
    return;
  }
  IVar4 = objc_stub::status(IVar4);
  local_198 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount;
  if (IVar4 != 1) {
    return;
  }
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,auStack_a8,
                     0,0);
  lVar25 = *(long *)(unaff_x20 + local_198);
  local_188 = param_2;
  if (*(long *)(lVar25 + 0x10) == 0) {
    lVar34 = 0;
    pcVar23 = local_178;
    puVar26 = local_118;
    DVar29.unknown = local_120;
  }
  else {
    _swift_bridgeObjectRetain(lVar25);
    pcVar23 = local_178;
    pcVar16 = local_178;
    FUN_10000464c();
    puVar26 = local_118;
    DVar29.unknown = local_120;
    if (((ulong)pcVar16 & 1) == 0) {
      lVar34 = 0;
    }
    else {
      lVar34 = *(long *)(*(long *)(lVar25 + 0x38) + (long)param_2 * 8);
    }
    _swift_bridgeObjectRelease(lVar25);
  }
  lVar25 = _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime,
                     auStack_c0,0,0);
  local_190 = lVar25;
  lVar25 = *(long *)(unaff_x20 + lVar25);
  if (*(long *)(lVar25 + 0x10) == 0) {
    local_1a0 = *(code **)(lVar33 + 0x38);
    (*local_1a0)(lVar32,1,1,puVar26);
  }
  else {
    _swift_bridgeObjectRetain(lVar25);
    pcVar16 = local_188;
    pcVar20 = pcVar23;
    FUN_10000464c(local_188);
    bVar1 = ((ulong)pcVar20 & 1) == 0;
    if (bVar1) {
      local_1a0 = *(code **)(lVar33 + 0x38);
    }
    else {
      (**(code **)(lVar33 + 0x10))
                (lVar32,*(long *)(lVar25 + 0x38) + *(long *)(lVar33 + 0x48) * (long)pcVar16,puVar26)
      ;
      local_1a0 = *(code **)(lVar33 + 0x38);
    }
    (*local_1a0)(lVar32,bVar1,1,puVar26);
    _swift_bridgeObjectRelease(lVar25);
  }
  FUN_100007e1c(lVar32,puVar31,&DAT_10054b950,&DAT_10041d870);
  pcVar28 = *(code **)(lVar33 + 0x30);
  DVar21.unknown = puVar31;
  (*pcVar28)(puVar31,1,puVar26);
  if ((int)DVar21.unknown == 1) {
    Foundation::Date::get_distantPast(DVar21);
    DVar21.unknown = (undefined *)0x1;
    puVar5 = puVar31;
    (*pcVar28)(puVar31,1,puVar26);
    if ((int)puVar5 != 1) {
      DVar21.unknown = &DAT_10054b950;
      FUN_10002a29c(puVar31,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar33 + 0x20))(DVar29.unknown,puVar31,puVar26);
    DVar21.unknown = puVar31;
  }
  if (4 < lVar34) {
    pcVar28 = *(code **)(lVar33 + 8);
LAB_10024bb44:
    (*pcVar28)(DVar29.unknown,puVar26);
    return;
  }
  Foundation::Date::init();
  dVar36 = Foundation::Date::timeIntervalSince(DVar29,DVar21);
  pcVar28 = *(code **)(lVar33 + 8);
  (*pcVar28)(lVar30,puVar26);
  lVar25 = local_198;
  if (dVar36 < 2.0) goto LAB_10024bb44;
  local_1a8 = pcVar28;
  _swift_beginAccess(unaff_x20 + local_198,&local_110,0x21,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar25);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  pcVar16 = local_188;
  local_d0 = *(undefined **)(unaff_x20 + lVar25);
  *(undefined8 *)(unaff_x20 + lVar25) = 0x8000000000000000;
  FUN_1003402f4((undefined *)(lVar34 + 1),local_188,pcVar23,uVar6);
  *(undefined **)(unaff_x20 + lVar25) = local_d0;
  _swift_endAccess(&local_110);
  _swift_bridgeObjectRetain(pcVar23);
  pvVar7 = local_170;
  Foundation::Date::init();
  (*local_1a0)(pvVar7,0,1,puVar26);
  pvVar24 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + local_190,&local_110,0x21);
  _Var22.unknown = pcVar16;
  pcVar20 = pcVar23;
  FUN_1001234d0(pvVar7);
  _swift_endAccess(&local_110);
  local_110 = (char *)0x0;
  local_108 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x3a,_Var22);
  SVar41.bridgeObject = (void *)0x80000001004e26e0;
  SVar41.str = (char *)0xd00000000000001e;
  SVar45.bridgeObject = pvVar24;
  SVar45.str = pcVar20;
  Swift::String::append(SVar41,SVar45);
  SVar37.bridgeObject = pcVar23;
  SVar37.str = pcVar16;
  SVar46.bridgeObject = pvVar24;
  SVar46.str = pcVar20;
  Swift::String::append(SVar37,SVar46);
  SVar38.bridgeObject = (void *)0x80000001004e2700;
  SVar38.str = (char *)0xd000000000000015;
  SVar47.bridgeObject = pvVar24;
  SVar47.str = pcVar20;
  Swift::String::append(SVar38,SVar47);
  local_d0 = (undefined *)(lVar34 + 1);
  SVar39 = Swift::CustomStringConvertible::get_description();
  SVar48.bridgeObject = pvVar24;
  SVar48.str = pcVar20;
  Swift::String::append(SVar39,SVar48);
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  SVar40.bridgeObject = (void *)0xe100000000000000;
  SVar40.str = (char *)0x2f;
  SVar49.bridgeObject = pvVar24;
  SVar49.str = pcVar20;
  Swift::String::append(SVar40,SVar49);
  local_d0 = (undefined *)0x5;
  SVar39 = Swift::CustomStringConvertible::get_description();
  pvVar7 = SVar39.bridgeObject;
  SVar50.bridgeObject = pvVar24;
  SVar50.str = pcVar20;
  Swift::String::append(SVar39,SVar50);
  _swift_bridgeObjectRelease(pvVar7);
  puVar31 = local_108;
  SVar39.bridgeObject = local_108;
  SVar39.str = local_110;
  local_110 = (char *)0x5b;
  local_108 = (undefined *)0xe100000000000000;
  local_d0 = (undefined *)0x4f464e49;
  uStack_c8 = 0xe400000000000000;
  local_e0 = 0x20;
  uStack_d8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar23 = (char *)0x0;
  puVar26 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar41 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar7,pvVar7);
  SVar51.bridgeObject = puVar26;
  SVar51.str = pcVar23;
  Swift::String::append(SVar41,SVar51);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  SVar42.bridgeObject = (void *)0xe300000000000000;
  SVar42.str = (char *)0x5b205d;
  SVar52.bridgeObject = puVar26;
  SVar52.str = pcVar23;
  Swift::String::append(SVar42,SVar52);
  SVar43.bridgeObject = (void *)0xe800000000000000;
  SVar43.str = (char *)0x6b63616279616c70;
  SVar53.bridgeObject = puVar26;
  SVar53.str = pcVar23;
  Swift::String::append(SVar43,SVar53);
  SVar44.bridgeObject = (void *)0xe200000000000000;
  SVar44.str = (char *)0x205d;
  SVar54.bridgeObject = puVar26;
  SVar54.str = pcVar23;
  Swift::String::append(SVar44,SVar54);
  local_170 = puVar31;
  SVar55.bridgeObject = puVar26;
  SVar55.str = pcVar23;
  Swift::String::append(SVar39,SVar55);
  puVar31 = local_108;
  pcVar23 = local_110;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar26 = &DAT_1005347f8;
  _swift_allocObject(&DAT_1005347f8,0x30,7);
  *(char **)(puVar26 + 0x10) = pcVar23;
  *(undefined **)(puVar26 + 0x18) = puVar31;
  *(undefined8 *)(puVar26 + 0x20) = 0;
  *(undefined8 *)(puVar26 + 0x28) = 0xe000000000000000;
  local_f0 = thunk_FUN_100099310;
  local_110 = PTR___NSConcreteStackBlock_100521110;
  local_108 = (undefined *)0x42000000;
  local_100 = FUN_1000c7e7c;
  puStack_f8 = &DAT_100534810;
  local_e8 = puVar26;
  pvVar7 = __Block_copy(&local_110);
  DVar8.unknown = puVar31;
  _swift_bridgeObjectRetain();
  qos.unknown = local_168.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_d0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar26 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar26;
  FUN_100077ac0();
  puVar5 = local_140;
  lVar25 = local_150;
  Swift::SetAlgebra::_init(local_150,&local_d0,puVar26,puVar10,local_140,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar7);
  (**(code **)(local_148 + 8))(lVar25,puVar5);
  (**(code **)(local_160 + 8))(qos.unknown,local_158);
  _swift_release(local_e8);
  puVar2 = local_138;
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar26 = local_128;
  puVar5 = local_128;
  FUN_100099338(local_128,&DAT_100558f50);
  lVar25 = local_130;
  puVar11 = puVar2;
  (**(code **)(local_130 + 0x10))(puVar2,puVar5,puVar26);
  uVar3 = (uint)puVar11;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar12.unknown = puVar31;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar12);
  pOVar14 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar3 & 0xff);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar31,2);
  }
  else {
    puVar15 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar16 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar15 = 0x8220102;
    local_110 = pcVar16;
    FUN_10012dbb0(pcVar23,puVar31,&local_110);
    *(char **)(puVar15 + 1) = pcVar23;
    _swift_bridgeObjectRelease_n(puVar31,2);
    __os_log_impl(0x100000000,pOVar13,uVar3 & 0xff,"%{public}s",puVar15,0xc);
    FUN_100043f24(pcVar16);
    _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar25 + 8))(puVar2,puVar26);
  _swift_bridgeObjectRelease(local_170);
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSUserDefaults::dictionaryForKey_(IVar4,pNVar17);
  puVar31 = local_120;
  if (IVar4 == 0) {
LAB_10024bc44:
    DVar19.unknown = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005c3c();
  }
  else {
    DVar18 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar19 = DVar18;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar18.unknown);
    if (DVar19.unknown == (undefined *)0x0) goto LAB_10024bc44;
  }
  puVar26 = local_118;
  IVar4 = local_180;
  if ((*(long *)(DVar19.unknown + 0x10) == 0) ||
     (pcVar23 = local_188, pcVar16 = local_178, FUN_10000464c(), ((ulong)pcVar16 & 1) == 0)) {
    _swift_bridgeObjectRelease(DVar19.unknown);
    dVar36 = 1.0;
  }
  else {
    dVar36 = *(double *)(*(long *)(DVar19.unknown + 0x38) + (long)pcVar23 * 8);
    _swift_bridgeObjectRelease(DVar19.unknown);
    fVar35 = 1.0;
    if (dVar36 <= 0.0) goto LAB_10024bcb4;
  }
  fVar35 = (float)dVar36;
LAB_10024bcb4:
  objc_stub::playImmediatelyAtRate_(IVar4,(ulong)(uint)fVar35);
  (*local_1a8)(puVar31,puVar26);
  return;
}

