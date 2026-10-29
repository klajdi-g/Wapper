// rea decompile_all
// name: FUN_1002516a0
// address: 0x1002516a0
// body: available
// range: 0x1002516a0-0x100251e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002516a0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Logger LVar7;
  DispatchWorkItemFlags DVar8;
  DispatchQoS DVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  ID IVar20;
  NSString *pNVar21;
  Dictionary<undefined,undefined> DVar22;
  Dictionary<undefined,undefined> DVar23;
  _StringGuts _Var24;
  char *pcVar25;
  void *pvVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  DispatchWorkItemFlags qos;
  long lVar31;
  long lVar32;
  ID self;
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
  undefined1 auStack_150 [8];
  char *local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  void *local_128;
  undefined *local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  char *local_100;
  undefined *local_f8;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 *puVar15;
  
  LVar7 = os::Logger::typeMetadataAccessor();
  local_110 = *(long *)(LVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  local_118 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar32 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar33 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar34 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  qos.unknown = (undefined *)(lVar33 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  puVar10 = (undefined *)(param_1 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  lVar31 = _TtC7Wallper21VideoWallpaperManager::players;
  if (puVar10 != (undefined *)0x0) {
    pcVar25 = (char *)0x0;
    pvVar26 = (void *)0x0;
    local_120 = LVar7.unknown;
    _swift_beginAccess(puVar10 + _TtC7Wallper21VideoWallpaperManager::players,auStack_a8);
    lVar30 = *(long *)(puVar10 + lVar31);
    lVar31 = lVar30;
    _swift_bridgeObjectRetain();
    _Var24.unknown = puVar10;
    FUN_100258938();
    _swift_bridgeObjectRelease(lVar30);
    if (*(long *)(lVar31 + 0x10) != 0) {
      local_100 = (char *)0x0;
      local_f8 = (void *)0xe000000000000000;
      local_140 = puVar10;
      local_138 = DVar9.unknown;
      local_130 = lVar32;
      _swift_retain(lVar31);
      Swift::_StringGuts::grow(0x4b,_Var24);
      SVar39.bridgeObject = (void *)0xe900000000000020;
      SVar39.str = (char *)0x3a65726f74736552;
      SVar43.bridgeObject = pvVar26;
      SVar43.str = pcVar25;
      Swift::String::append(SVar39,SVar43);
      local_c0 = *(undefined **)(lVar31 + 0x10);
      local_108 = lVar31;
      SVar37 = Swift::CustomStringConvertible::get_description();
      SVar44.bridgeObject = pvVar26;
      SVar44.str = pcVar25;
      Swift::String::append(SVar37,SVar44);
      _swift_bridgeObjectRelease(SVar37.bridgeObject);
      uVar11 = 0x1000000000000040;
      SVar38.bridgeObject = (void *)0x80000001004e25b0;
      SVar38.str = (char *)0x1000000000000040;
      SVar45.bridgeObject = pvVar26;
      SVar45.str = pcVar25;
      Swift::String::append(SVar38,SVar45);
      puVar10 = local_f8;
      SVar37.bridgeObject = local_f8;
      SVar37.str = local_100;
      local_100 = (char *)0x5b;
      local_f8 = (undefined *)0xe100000000000000;
      local_c0 = (undefined *)0x4f464e49;
      uStack_b8 = 0xe400000000000000;
      local_d0 = 0x20;
      uStack_c8 = 0xe100000000000000;
      FUN_100026df4();
      pcVar25 = (char *)0x0;
      puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_d0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar11,uVar11);
      SVar46.bridgeObject = puVar12;
      SVar46.str = pcVar25;
      Swift::String::append(SVar39,SVar46);
      _swift_bridgeObjectRelease(SVar39.bridgeObject);
      SVar40.bridgeObject = (void *)0xe300000000000000;
      SVar40.str = (char *)0x5b205d;
      SVar47.bridgeObject = puVar12;
      SVar47.str = pcVar25;
      Swift::String::append(SVar40,SVar47);
      SVar41.bridgeObject = (void *)0xe800000000000000;
      SVar41.str = (char *)0x6b63616279616c70;
      SVar48.bridgeObject = puVar12;
      SVar48.str = pcVar25;
      Swift::String::append(SVar41,SVar48);
      SVar42.bridgeObject = (void *)0xe200000000000000;
      SVar42.str = (char *)0x205d;
      SVar49.bridgeObject = puVar12;
      SVar49.str = pcVar25;
      Swift::String::append(SVar42,SVar49);
      local_128 = puVar10;
      SVar50.bridgeObject = puVar12;
      SVar50.str = pcVar25;
      Swift::String::append(SVar37,SVar50);
      puVar10 = local_f8;
      pcVar25 = local_100;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar12 = &DAT_1005343c0;
      _swift_allocObject(&DAT_1005343c0,0x30,7);
      local_148 = pcVar25;
      *(char **)(puVar12 + 0x10) = pcVar25;
      *(undefined **)(puVar12 + 0x18) = puVar10;
      *(undefined8 *)(puVar12 + 0x20) = 0;
      *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
      local_e0 = thunk_FUN_100099310;
      local_100 = PTR___NSConcreteStackBlock_100521110;
      local_f8 = (undefined *)0x42000000;
      local_f0 = FUN_1000c7e7c;
      puStack_e8 = &DAT_1005343d8;
      local_d8 = puVar12;
      pvVar26 = __Block_copy(&local_100);
      DVar9.unknown = puVar10;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar9);
      local_c0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar13 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar12 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar14 = puVar12;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar33,&local_c0,puVar12,puVar14,DVar8.unknown,puVar13);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar26);
      (**(code **)(local_130 + 8))(lVar33,DVar8.unknown);
      (**(code **)(lVar34 + 8))(qos.unknown,local_138);
      _swift_release(local_d8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar12 = local_120;
      puVar14 = local_120;
      FUN_100099338(local_120,&DAT_100558f50);
      lVar31 = local_110;
      puVar3 = local_118;
      puVar15 = local_118;
      (**(code **)(local_110 + 0x10))(local_118,puVar14,puVar12);
      uVar6 = (uint)puVar15;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar7.unknown = puVar10;
      _swift_bridgeObjectRetain();
      pOVar16 = os::Logger::get_logObject(LVar7);
      pOVar17 = pOVar16;
      _os_log_type_enabled(pOVar16,uVar6 & 0xff);
      lVar32 = local_108;
      if ((int)pOVar17 == 0) {
        _swift_bridgeObjectRelease_n(puVar10,2);
      }
      else {
        puVar18 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar19 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar18 = 0x8220102;
        pcVar25 = local_148;
        local_100 = pcVar19;
        FUN_10012dbb0(local_148,puVar10,&local_100);
        *(char **)(puVar18 + 1) = pcVar25;
        _swift_bridgeObjectRelease_n(puVar10,2);
        __os_log_impl(0x100000000,pOVar16,uVar6 & 0xff,"%{public}s",puVar18,0xc);
        FUN_100043f24(pcVar19);
        _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar31 + 8))(puVar3,puVar12);
      _swift_release(lVar32);
      _swift_bridgeObjectRelease(local_128);
      lVar31 = 0;
      uVar28 = 1L << ((ulong)*(byte *)(lVar32 + 0x20) & 0x3f);
      uVar29 = 0xffffffffffffffff;
      if ((*(byte *)(lVar32 + 0x20) & 0x3f) < 6) {
        uVar29 = ~(-1L << (uVar28 & 0x3f));
      }
      uVar29 = uVar29 & *(ulong *)(lVar32 + 0x40);
      lVar33 = lVar32;
      do {
        while (uVar29 == 0) {
          bVar5 = SCARRY8(lVar31,1);
          lVar31 = lVar31 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100251e40);
            (*pcVar4)();
          }
          if ((long)(uVar28 + 0x3f >> 6) <= lVar31) {
            _swift_release(lVar33);
            return;
          }
          uVar29 = ((ulong *)(lVar32 + 0x40))[lVar31];
        }
        uVar2 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar27 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar31 << 6;
        plVar1 = (long *)(*(long *)(lVar33 + 0x30) + uVar27 * 0x10);
        lVar34 = *plVar1;
        uVar2 = plVar1[1];
        self = *(ID *)(*(long *)(lVar33 + 0x38) + uVar27 * 8);
        _swift_bridgeObjectRetain(uVar2);
        IVar20 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
        pNVar21 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar20 = NSUserDefaults::dictionaryForKey_(IVar20,pNVar21);
        if (IVar20 == 0) {
          puVar10 = PTR___swiftEmptyDictionarySingleton_100524198;
          if (*(long *)(PTR___swiftEmptyDictionarySingleton_100524198 + 0x10) != 0)
          goto LAB_100251d94;
LAB_100251dc8:
          _swift_bridgeObjectRelease(puVar10);
          dVar36 = 1.0;
LAB_100251dd4:
          fVar35 = (float)dVar36;
        }
        else {
          DVar22 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
          DVar23 = DVar22;
          FUN_10017dc34();
          _swift_bridgeObjectRelease(DVar22.unknown);
          puVar10 = PTR___swiftEmptyDictionarySingleton_100524198;
          if (DVar23.unknown != (undefined *)0x0) {
            puVar10 = DVar23.unknown;
          }
          if (*(long *)(puVar10 + 0x10) == 0) goto LAB_100251dc8;
LAB_100251d94:
          uVar27 = uVar2;
          FUN_10000464c();
          if ((uVar27 & 1) == 0) goto LAB_100251dc8;
          dVar36 = *(double *)(*(long *)(puVar10 + 0x38) + lVar34 * 8);
          _swift_bridgeObjectRelease(puVar10);
          fVar35 = 1.0;
          if (0.0 < dVar36) goto LAB_100251dd4;
        }
        uVar29 = uVar29 - 1 & uVar29;
        objc_stub::playImmediatelyAtRate_(self,(ulong)(uint)fVar35);
        _swift_bridgeObjectRelease(uVar2);
        lVar33 = local_108;
      } while( true );
    }
    _swift_release(lVar31);
  }
  return;
}

