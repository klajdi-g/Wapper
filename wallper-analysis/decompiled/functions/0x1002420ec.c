// rea decompile_all
// name: FUN_1002420ec
// address: 0x1002420ec
// body: available
// range: 0x1002420ec-0x10024384b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002420ec(long param_1,char *param_2,char *param_3,ID param_4)

{
  bool bVar1;
  String SVar2;
  long lVar3;
  undefined1 *puVar4;
  DispatchQoS DVar5;
  DispatchWorkItemFlags DVar6;
  uint uVar7;
  ID IVar8;
  undefined8 uVar9;
  OS_dispatch_queue *pOVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  NSString *pNVar21;
  Dictionary<undefined,undefined> DVar22;
  Dictionary<undefined,undefined> DVar23;
  Date DVar24;
  _StringGuts _Var25;
  char *pcVar26;
  void *pvVar27;
  long extraout_x8;
  long lVar28;
  long extraout_x8_00;
  undefined *puVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar30;
  DispatchWorkItem *pDVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  DispatchTime DVar35;
  DispatchTime DVar36;
  long lVar37;
  undefined *puVar38;
  Date DVar39;
  long lVar40;
  float fVar41;
  double dVar42;
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
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  undefined1 auStack_1d0 [8];
  code *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  char *local_1a8;
  long local_1a0;
  long local_198;
  undefined1 *local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  DispatchQoS local_170;
  long local_168;
  undefined *local_160;
  Date local_158;
  undefined *local_150;
  ID local_148;
  code *local_140;
  DispatchTime local_138;
  code *local_130;
  DispatchWorkItemFlags local_128;
  undefined *local_120;
  char *local_118;
  char *local_110;
  code *local_108;
  code *local_100;
  undefined *puStack_f8;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined *local_a8 [3];
  undefined1 auStack_90 [32];
  undefined1 *puVar15;
  
  local_180 = (undefined *)os::Logger::typeMetadataAccessor();
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  local_190 = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = (long)(auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_198 = lVar28;
  local_160 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  puVar29 = (undefined *)(lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar38 = &DAT_10054b950;
  local_170.unknown = puVar29;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar38 + -8) + 0x40));
  lVar28 = (long)puVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1a0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar38 = (undefined *)(lVar28 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = (long)puVar38 - extraout_x12_01;
  local_150 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar40 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar40 + 0x40));
  lVar37 = lVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar29 = (undefined *)(lVar37 - extraout_x12_02);
  local_158.unknown = puVar29;
  local_130 = (code *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_140 = *(code **)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_140 + 0x40));
  DVar35.unknown = puVar29 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar36.unknown = DVar35.unknown + -extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_138.unknown = DVar36.unknown + -extraout_x12_04;
  local_120 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_178 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  local_128.unknown =
       DVar36.unknown + -extraout_x12_04 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_118 = param_2;
  FUN_10023c0d0(param_2,param_3);
  local_148 = param_4;
  IVar8 = objc_stub::timeControlStatus(param_4);
  lVar3 = _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem;
  lVar28 = _TtC7Wallper21VideoWallpaperManager::players;
  if (IVar8 == 2) {
    _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem,
                       auStack_90,0,0);
    lVar28 = *(long *)(param_1 + lVar3);
    if (*(long *)(lVar28 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar28);
      pcVar26 = local_118;
      pcVar20 = param_3;
      FUN_10000464c();
      if (((ulong)pcVar20 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar28);
      }
      else {
        pDVar31 = *(DispatchWorkItem **)(*(long *)(lVar28 + 0x38) + (long)pcVar26 * 8);
        _swift_retain(pDVar31);
        _swift_bridgeObjectRelease(lVar28);
        Dispatch::DispatchWorkItem::cancel(pDVar31);
        _swift_release(pDVar31);
      }
    }
    puVar38 = &DAT_1005340c8;
    _swift_allocObject(&DAT_1005340c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar38 + 0x10,param_1);
    puVar29 = &DAT_1005351f8;
    _swift_allocObject(&DAT_1005351f8,0x28,7);
    pcVar26 = local_118;
    *(undefined **)(puVar29 + 0x10) = puVar38;
    *(char **)(puVar29 + 0x18) = local_118;
    *(char **)(puVar29 + 0x20) = param_3;
    local_f0 = FUN_100259e04;
    local_110 = PTR___NSConcreteStackBlock_100521110;
    local_108 = (code *)0x42000000;
    local_100 = FUN_1000c7e7c;
    puStack_f8 = &DAT_100535210;
    local_e8 = puVar29;
    __Block_copy(&local_110);
    local_a8[0] = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    _swift_retain(puVar38);
    _swift_bridgeObjectRetain(param_3);
    puVar29 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar29;
    FUN_100077ac0();
    DVar6.unknown = local_128.unknown;
    Swift::SetAlgebra::_init(local_128.unknown,local_a8,puVar29,puVar11,local_120,puVar14);
    pDVar31 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
    _swift_allocObject(pDVar31,*(undefined4 *)(pDVar31 + 0x30),*(undefined2 *)(pDVar31 + 0x34));
    pDVar31 = Dispatch::DispatchWorkItem::_init(pDVar31,DVar6);
    puVar29 = local_e8;
    _swift_release(puVar38);
    _swift_release(puVar29);
    _swift_beginAccess(param_1 + lVar3,&local_110,0x21,0);
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(pDVar31);
    uVar9 = *(undefined8 *)(param_1 + lVar3);
    _swift_isUniquelyReferenced_nonNull_native(uVar9);
    local_a8[0] = *(undefined **)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0x8000000000000000;
    FUN_100340fd0(pDVar31,pcVar26,param_3,uVar9);
    _swift_bridgeObjectRelease(param_3);
    *(undefined **)(param_1 + lVar3) = local_a8[0];
    _swift_endAccess(&local_110);
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    DVar35.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    Dispatch::DispatchTime::now(DVar35);
    DVar35.unknown = local_138.unknown;
    Dispatch::__infix(DVar36,3.0);
    pcVar33 = local_130;
    pcVar32 = *(code **)((long)local_140 + 8);
    (*pcVar32)(DVar36.unknown,local_130);
    (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(DVar35,pDVar31);
    _swift_release(pDVar31);
    (*pcVar32)(DVar35.unknown,pcVar33);
    goto LAB_10024279c;
  }
  if (IVar8 != 0 || (((uint)param_2 ^ 0xffffffff) & 1) != 0) goto LAB_10024279c;
  _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::players,auStack_90,0,0);
  lVar28 = *(long *)(param_1 + lVar28);
  if (*(long *)(lVar28 + 0x10) == 0) goto LAB_10024279c;
  _swift_bridgeObjectRetain(lVar28);
  pcVar26 = local_118;
  pcVar20 = param_3;
  FUN_10000464c();
  if (((ulong)pcVar20 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar28);
    goto LAB_10024279c;
  }
  IVar8 = *(ID *)(*(long *)(lVar28 + 0x38) + (long)pcVar26 * 8);
  local_1a8 = param_3;
  _swift_bridgeObjectRelease(lVar28);
  param_3 = local_1a8;
  if (((IVar8 != local_148) || (IVar8 = objc_stub::currentItem(local_148), IVar8 == 0)) ||
     (IVar8 = objc_stub::status(IVar8),
     lVar28 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount, IVar8 != 1))
  goto LAB_10024279c;
  _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,local_a8,0,0)
  ;
  local_1b8 = lVar28;
  lVar28 = *(long *)(param_1 + lVar28);
  if (*(long *)(lVar28 + 0x10) == 0) {
    local_1b0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar28);
    pcVar26 = local_118;
    pcVar20 = param_3;
    FUN_10000464c();
    if (((ulong)pcVar20 & 1) == 0) {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(long *)(*(long *)(lVar28 + 0x38) + (long)pcVar26 * 8);
    }
    _swift_bridgeObjectRelease(lVar28);
  }
  lVar28 = _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime;
  _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime,auStack_c0
                     ,0,0);
  puVar29 = local_150;
  local_1c0 = lVar28;
  lVar28 = *(long *)(param_1 + lVar28);
  if (*(long *)(lVar28 + 0x10) == 0) {
    local_1c8 = *(code **)(lVar40 + 0x38);
    (*local_1c8)(lVar30,1,1,local_150);
  }
  else {
    _swift_bridgeObjectRetain(lVar28);
    pcVar26 = local_118;
    pcVar20 = param_3;
    FUN_10000464c(local_118);
    puVar29 = local_150;
    bVar1 = ((ulong)pcVar20 & 1) == 0;
    if (bVar1) {
      local_1c8 = *(code **)(lVar40 + 0x38);
    }
    else {
      (**(code **)(lVar40 + 0x10))
                (lVar30,*(long *)(lVar28 + 0x38) + *(long *)(lVar40 + 0x48) * (long)pcVar26,
                 local_150);
      local_1c8 = *(code **)(lVar40 + 0x38);
    }
    (*local_1c8)(lVar30,bVar1,1,puVar29);
    _swift_bridgeObjectRelease(lVar28);
  }
  FUN_100007e1c(lVar30,puVar38,&DAT_10054b950,&DAT_10041d870);
  pcVar33 = *(code **)(lVar40 + 0x30);
  DVar24.unknown = puVar38;
  (*pcVar33)(puVar38,1,puVar29);
  DVar39.unknown = local_158.unknown;
  if ((int)DVar24.unknown == 1) {
    Foundation::Date::get_distantPast(DVar24);
    DVar24.unknown = (undefined *)0x1;
    puVar11 = puVar38;
    (*pcVar33)(puVar38,1,puVar29);
    if ((int)puVar11 != 1) {
      DVar24.unknown = &DAT_10054b950;
      FUN_10002a29c(puVar38,&DAT_10054b950,&DAT_10041d870);
    }
  }
  else {
    (**(code **)(lVar40 + 0x20))(local_158.unknown,puVar38,puVar29);
    DVar24.unknown = puVar38;
  }
  Foundation::Date::init();
  dVar42 = Foundation::Date::timeIntervalSince(DVar39,DVar24);
  pcVar33 = *(code **)(lVar40 + 8);
  (*pcVar33)(lVar37,puVar29);
  lVar28 = local_1b8;
  if (4 < local_1b0) {
    if (local_1b0 == 5) {
      _swift_beginAccess(param_1 + local_1b8,&local_110,0x21,0);
      pvVar12 = *(void **)(param_1 + lVar28);
      _swift_isUniquelyReferenced_nonNull_native();
      pcVar26 = local_118;
      local_d0 = *(undefined **)(param_1 + lVar28);
      *(undefined8 *)(param_1 + lVar28) = 0x8000000000000000;
      pcVar20 = param_3;
      FUN_1003402f4(6,local_118);
      *(undefined **)(param_1 + lVar28) = local_d0;
      _swift_endAccess(&local_110);
      _Var25.unknown = param_3;
      FUN_10023382c(pcVar26);
      local_110 = (char *)0x0;
      local_108 = (code *)0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var25);
      SVar46.bridgeObject = (void *)0x80000001004e26e0;
      SVar46.str = (char *)0xd00000000000001e;
      SVar61.bridgeObject = pvVar12;
      SVar61.str = pcVar20;
      Swift::String::append(SVar46,SVar61);
      SVar43.bridgeObject = param_3;
      SVar43.str = pcVar26;
      SVar62.bridgeObject = pvVar12;
      SVar62.str = pcVar20;
      Swift::String::append(SVar43,SVar62);
      SVar44.bridgeObject = (void *)0xef20726574666120;
      SVar44.str = (char *)0x7075206576616720;
      SVar63.bridgeObject = pvVar12;
      SVar63.str = pcVar20;
      Swift::String::append(SVar44,SVar63);
      local_d0 = (undefined *)0x5;
      SVar56 = Swift::CustomStringConvertible::get_description();
      SVar64.bridgeObject = pvVar12;
      SVar64.str = pcVar20;
      Swift::String::append(SVar56,SVar64);
      _swift_bridgeObjectRelease(SVar56.bridgeObject);
      uVar9 = 0x7365697274657220;
      SVar45.bridgeObject = (void *)0xe800000000000000;
      SVar45.str = (char *)0x7365697274657220;
      SVar65.bridgeObject = pvVar12;
      SVar65.str = pcVar20;
      Swift::String::append(SVar45,SVar65);
      pcVar32 = local_108;
      SVar56.bridgeObject = local_108;
      SVar56.str = local_110;
      local_110 = (char *)0x5b;
      local_108 = (code *)0xe100000000000000;
      local_d0 = (undefined *)0x4e524157;
      uStack_c8 = 0xe400000000000000;
      local_e0 = 0x20;
      uStack_d8 = 0xe100000000000000;
      FUN_100026df4();
      pcVar20 = (char *)0x0;
      puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar46 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar9,uVar9);
      SVar66.bridgeObject = puVar38;
      SVar66.str = pcVar20;
      Swift::String::append(SVar46,SVar66);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      SVar47.bridgeObject = (void *)0xe300000000000000;
      SVar47.str = (char *)0x5b205d;
      SVar67.bridgeObject = puVar38;
      SVar67.str = pcVar20;
      Swift::String::append(SVar47,SVar67);
      SVar48.bridgeObject = (void *)0xe800000000000000;
      SVar48.str = (char *)0x6b63616279616c70;
      SVar68.bridgeObject = puVar38;
      SVar68.str = pcVar20;
      Swift::String::append(SVar48,SVar68);
      SVar49.bridgeObject = (void *)0xe200000000000000;
      SVar49.str = (char *)0x205d;
      SVar69.bridgeObject = puVar38;
      SVar69.str = pcVar20;
      Swift::String::append(SVar49,SVar69);
      local_130 = pcVar32;
      SVar70.bridgeObject = puVar38;
      SVar70.str = pcVar20;
      Swift::String::append(SVar56,SVar70);
      pcVar32 = local_108;
      pcVar26 = local_110;
      local_110 = (char *)0x282020;
      local_108 = (code *)0xe300000000000000;
      SVar50.bridgeObject = (void *)0x80000001004e2850;
      SVar50.str = (char *)0xd000000000000067;
      SVar71.bridgeObject = puVar38;
      SVar71.str = pcVar20;
      Swift::String::append(SVar50,SVar71);
      SVar51.bridgeObject = (void *)0xe100000000000000;
      SVar51.str = (char *)0x3a;
      SVar72.bridgeObject = puVar38;
      SVar72.str = pcVar20;
      Swift::String::append(SVar51,SVar72);
      local_d0 = (undefined *)0x313;
      SVar56 = Swift::CustomStringConvertible::get_description();
      SVar73.bridgeObject = puVar38;
      SVar73.str = pcVar20;
      Swift::String::append(SVar56,SVar73);
      _swift_bridgeObjectRelease(SVar56.bridgeObject);
      SVar52.bridgeObject = (void *)0xe100000000000000;
      SVar52.str = (char *)0x29;
      SVar74.bridgeObject = puVar38;
      SVar74.str = pcVar20;
      Swift::String::append(SVar52,SVar74);
      pcVar34 = local_108;
      pcVar20 = local_110;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar38 = &DAT_100535108;
      _swift_allocObject(&DAT_100535108,0x30,7);
      *(char **)(puVar38 + 0x10) = pcVar26;
      *(code **)(puVar38 + 0x18) = pcVar32;
      *(char **)(puVar38 + 0x20) = pcVar20;
      *(code **)(puVar38 + 0x28) = pcVar34;
      local_f0 = thunk_FUN_100099310;
      local_110 = PTR___NSConcreteStackBlock_100521110;
      local_108 = (code *)0x42000000;
      local_100 = FUN_1000c7e7c;
      puStack_f8 = &DAT_100535120;
      local_e8 = puVar38;
      pvVar12 = __Block_copy(&local_110);
      DVar13.unknown = pcVar32;
      _swift_bridgeObjectRetain();
      DVar5.unknown = local_170.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar13);
      local_d0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar14 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar38 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar11 = puVar38;
      FUN_100077ac0();
      puVar29 = local_120;
      DVar6.unknown = local_128.unknown;
      Swift::SetAlgebra::_init(local_128.unknown,&local_d0,puVar38,puVar11,local_120,puVar14);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,(DispatchWorkItemFlags)DVar5.unknown);
      __Block_release(pvVar12);
      (**(code **)(local_178 + 8))(DVar6.unknown,puVar29);
      (**(code **)(local_168 + 8))(DVar5.unknown,local_160);
      _swift_release(local_e8);
      puVar38 = local_180;
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar29 = puVar38;
      FUN_100099338(puVar38,&DAT_100558f50);
      lVar28 = local_188;
      puVar4 = local_190;
      puVar15 = local_190;
      (**(code **)(local_188 + 0x10))(local_190,puVar29,puVar38);
      uVar7 = (uint)puVar15;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar16.unknown = pcVar32;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar16);
      pOVar17 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar7 & 0xff);
      DVar39.unknown = local_158.unknown;
      if ((int)pOVar17 == 0) {
        _swift_bridgeObjectRelease_n(pcVar32,2);
        pcVar32 = *(code **)(lVar28 + 8);
      }
      else {
        puVar19 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar20 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar19 = 0x8220102;
        local_110 = pcVar20;
        FUN_10012dbb0(pcVar26,pcVar32,&local_110);
        *(char **)(puVar19 + 1) = pcVar26;
        _swift_bridgeObjectRelease_n(pcVar32,2);
        __os_log_impl(0x100000000,pOVar18,uVar7 & 0xff,"%{public}s",puVar19,0xc);
        FUN_100043f24(pcVar20);
        _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
        pcVar32 = *(code **)(lVar28 + 8);
      }
      (*pcVar32)(puVar4,puVar38);
      _swift_bridgeObjectRelease(local_130);
      puVar29 = local_150;
      param_3 = local_1a8;
    }
    FUN_10023bec0(local_118,param_3);
    (*pcVar33)(DVar39.unknown,puVar29);
    return;
  }
  if (dVar42 < 2.0) {
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_180 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    Dispatch::DispatchTime::now((DispatchTime)local_180);
    Dispatch::__infix(DVar35,2.0);
    pcVar32 = local_130;
    pcVar34 = *(code **)((long)local_140 + 8);
    local_140 = pcVar34;
    (*pcVar34)(DVar35.unknown,local_130);
    DVar35.unknown = local_138.unknown;
    Dispatch::__infix(DVar36,dVar42);
    (*pcVar34)(DVar36.unknown,pcVar32);
    puVar38 = &DAT_1005340c8;
    _swift_allocObject(&DAT_1005340c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar38 + 0x10,param_1);
    puVar29 = &DAT_100535158;
    _swift_allocObject(&DAT_100535158,0x30,7);
    pcVar26 = local_118;
    *(undefined **)(puVar29 + 0x10) = puVar38;
    *(ID *)(puVar29 + 0x18) = local_148;
    *(char **)(puVar29 + 0x20) = local_118;
    *(char **)(puVar29 + 0x28) = param_3;
    local_f0 = FUN_100259da8;
    local_110 = PTR___NSConcreteStackBlock_100521110;
    local_108 = (code *)0x42000000;
    local_100 = FUN_1000c7e7c;
    puStack_f8 = &DAT_100535170;
    local_e8 = puVar29;
    pvVar12 = __Block_copy(&local_110);
    DVar13.unknown = local_e8;
    _swift_bridgeObjectRetain(param_3);
    _swift_release();
    DVar5.unknown = local_170.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    local_110 = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar38 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar38;
    FUN_100077ac0();
    puVar29 = local_120;
    DVar6.unknown = local_128.unknown;
    Swift::SetAlgebra::_init(local_128.unknown,&local_110,puVar38,puVar11,local_120,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar35,DVar5,DVar6);
    __Block_release(pvVar12);
    (**(code **)(local_178 + 8))(DVar6.unknown,puVar29);
    (**(code **)(local_168 + 8))(DVar5.unknown,local_160);
    (*local_140)(DVar35.unknown,pcVar32);
    FUN_10023bec0(pcVar26,local_1a8);
    (*pcVar33)(local_158.unknown,local_150);
    return;
  }
  puVar38 = (undefined *)(local_1b0 + 1);
  _swift_beginAccess(param_1 + local_1b8,&local_110,0x21,0);
  uVar9 = *(undefined8 *)(param_1 + lVar28);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  pcVar26 = local_118;
  local_d0 = *(undefined **)(param_1 + lVar28);
  *(undefined8 *)(param_1 + lVar28) = 0x8000000000000000;
  FUN_1003402f4(puVar38,local_118,param_3,uVar9);
  *(undefined **)(param_1 + lVar28) = local_d0;
  _swift_endAccess(&local_110);
  _swift_bridgeObjectRetain(param_3);
  lVar28 = local_1a0;
  Foundation::Date::init();
  (*local_1c8)(lVar28,0,1,local_150);
  pvVar27 = (void *)0x0;
  _swift_beginAccess(param_1 + local_1c0,&local_110,0x21);
  _Var25.unknown = pcVar26;
  pcVar20 = param_3;
  FUN_1001234d0(lVar28);
  _swift_endAccess(&local_110);
  local_110 = (char *)0x0;
  local_108 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x3c,_Var25);
  SVar53.bridgeObject = (void *)0x80000001004e26e0;
  SVar53.str = (char *)0xd00000000000001e;
  SVar75.bridgeObject = pvVar27;
  SVar75.str = pcVar20;
  Swift::String::append(SVar53,SVar75);
  SVar54.bridgeObject = param_3;
  SVar54.str = pcVar26;
  SVar76.bridgeObject = pvVar27;
  SVar76.str = pcVar20;
  Swift::String::append(SVar54,SVar76);
  SVar55.bridgeObject = (void *)0x80000001004e2950;
  SVar55.str = (char *)0xd000000000000017;
  SVar77.bridgeObject = pvVar27;
  SVar77.str = pcVar20;
  Swift::String::append(SVar55,SVar77);
  local_d0 = puVar38;
  SVar56 = Swift::CustomStringConvertible::get_description();
  SVar78.bridgeObject = pvVar27;
  SVar78.str = pcVar20;
  Swift::String::append(SVar56,SVar78);
  _swift_bridgeObjectRelease(SVar56.bridgeObject);
  SVar57.bridgeObject = (void *)0xe100000000000000;
  SVar57.str = (char *)0x2f;
  SVar79.bridgeObject = pvVar27;
  SVar79.str = pcVar20;
  Swift::String::append(SVar57,SVar79);
  local_d0 = (undefined *)0x5;
  SVar56 = Swift::CustomStringConvertible::get_description();
  pvVar12 = SVar56.bridgeObject;
  SVar80.bridgeObject = pvVar27;
  SVar80.str = pcVar20;
  Swift::String::append(SVar56,SVar80);
  _swift_bridgeObjectRelease(pvVar12);
  pcVar32 = local_108;
  SVar2.bridgeObject = local_108;
  SVar2.str = local_110;
  local_110 = (char *)0x5b;
  local_108 = (code *)0xe100000000000000;
  local_d0 = (undefined *)0x4f464e49;
  uStack_c8 = 0xe400000000000000;
  local_e0 = 0x20;
  uStack_d8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar26 = (char *)0x0;
  puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
  SVar81.bridgeObject = puVar38;
  SVar81.str = pcVar26;
  Swift::String::append(SVar56,SVar81);
  _swift_bridgeObjectRelease(SVar56.bridgeObject);
  SVar58.bridgeObject = (void *)0xe300000000000000;
  SVar58.str = (char *)0x5b205d;
  SVar82.bridgeObject = puVar38;
  SVar82.str = pcVar26;
  Swift::String::append(SVar58,SVar82);
  SVar59.bridgeObject = (void *)0xe800000000000000;
  SVar59.str = (char *)0x6b63616279616c70;
  SVar83.bridgeObject = puVar38;
  SVar83.str = pcVar26;
  Swift::String::append(SVar59,SVar83);
  SVar60.bridgeObject = (void *)0xe200000000000000;
  SVar60.str = (char *)0x205d;
  SVar84.bridgeObject = puVar38;
  SVar84.str = pcVar26;
  Swift::String::append(SVar60,SVar84);
  SVar85.bridgeObject = puVar38;
  SVar85.str = pcVar26;
  Swift::String::append(SVar2,SVar85);
  pcVar34 = local_108;
  pcVar26 = local_110;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar38 = &DAT_1005351a8;
  local_130 = pcVar33;
  _swift_allocObject(&DAT_1005351a8,0x30,7);
  *(char **)(puVar38 + 0x10) = pcVar26;
  *(code **)(puVar38 + 0x18) = pcVar34;
  *(undefined8 *)(puVar38 + 0x20) = 0;
  *(undefined8 *)(puVar38 + 0x28) = 0xe000000000000000;
  local_f0 = thunk_FUN_100099310;
  local_110 = PTR___NSConcreteStackBlock_100521110;
  local_108 = (code *)0x42000000;
  local_100 = FUN_1000c7e7c;
  puStack_f8 = &DAT_1005351c0;
  local_e8 = puVar38;
  pvVar12 = __Block_copy(&local_110);
  DVar13.unknown = pcVar34;
  _swift_bridgeObjectRetain();
  DVar5.unknown = local_170.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  local_d0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar14 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar38 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar11 = puVar38;
  FUN_100077ac0();
  puVar29 = local_120;
  DVar6.unknown = local_128.unknown;
  Swift::SetAlgebra::_init(local_128.unknown,&local_d0,puVar38,puVar11,local_120,puVar14);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)DVar5.unknown);
  __Block_release(pvVar12);
  (**(code **)(local_178 + 8))(DVar6.unknown,puVar29);
  (**(code **)(local_168 + 8))(DVar5.unknown,local_160);
  _swift_release(local_e8);
  puVar38 = local_180;
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar29 = puVar38;
  FUN_100099338(puVar38,&DAT_100558f50);
  lVar3 = local_188;
  lVar28 = local_198;
  lVar30 = local_198;
  (**(code **)(local_188 + 0x10))(local_198,puVar29,puVar38);
  uVar7 = (uint)lVar30;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar16.unknown = pcVar34;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar16);
  pOVar17 = pOVar18;
  _os_log_type_enabled(pOVar18,uVar7 & 0xff);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(pcVar34,2);
  }
  else {
    puVar19 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar20 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar19 = 0x8220102;
    local_110 = pcVar20;
    FUN_10012dbb0(pcVar26,pcVar34,&local_110);
    *(char **)(puVar19 + 1) = pcVar26;
    _swift_bridgeObjectRelease_n(pcVar34,2);
    __os_log_impl(0x100000000,pOVar18,uVar7 & 0xff,"%{public}s",puVar19,0xc);
    FUN_100043f24(pcVar20);
    _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar3 + 8))(lVar28,puVar38);
  _swift_bridgeObjectRelease(pcVar32);
  DVar39.unknown = local_158.unknown;
  param_3 = local_1a8;
  IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar21 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = NSUserDefaults::dictionaryForKey_(IVar8,pNVar21);
  pcVar33 = local_130;
  if (IVar8 == 0) {
LAB_100243770:
    DVar23.unknown = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005c3c();
  }
  else {
    DVar22 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar23 = DVar22;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar22.unknown);
    if (DVar23.unknown == (undefined *)0x0) goto LAB_100243770;
  }
  if ((*(long *)(DVar23.unknown + 0x10) == 0) ||
     (pcVar26 = local_118, pcVar20 = param_3, FUN_10000464c(), ((ulong)pcVar20 & 1) == 0)) {
    _swift_bridgeObjectRelease(DVar23.unknown);
    dVar42 = 1.0;
LAB_1002437c8:
    fVar41 = (float)dVar42;
  }
  else {
    dVar42 = *(double *)(*(long *)(DVar23.unknown + 0x38) + (long)pcVar26 * 8);
    _swift_bridgeObjectRelease(DVar23.unknown);
    fVar41 = 1.0;
    if (0.0 < dVar42) goto LAB_1002437c8;
  }
  objc_stub::playImmediatelyAtRate_(local_148,(ulong)(uint)fVar41);
  (*pcVar33)(DVar39.unknown,local_150);
LAB_10024279c:
  FUN_10023bec0(local_118,param_3);
  return;
}

