// rea decompile_all
// name: FUN_1002386a0
// address: 0x1002386a0
// body: available
// range: 0x1002386a0-0x1002391df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002386a0(double param_1)

{
  long lVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  DispatchWorkItemFlags qos;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  Logger LVar9;
  UUID UVar10;
  ID IVar11;
  NSString *pNVar12;
  Dictionary<undefined,undefined> DVar13;
  Dictionary<undefined,undefined> DVar14;
  _ArrayBuffer _Var15;
  long lVar16;
  undefined8 uVar17;
  ID *pIVar18;
  UUID UVar19;
  NSDictionary *pNVar20;
  ID IVar21;
  undefined *puVar22;
  DispatchQoS DVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  Logger LVar26;
  OS_os_log *pOVar27;
  OS_os_log *pOVar28;
  undefined4 *puVar29;
  char *pcVar30;
  _StringGuts _Var31;
  ID *extraout_x1;
  ID *extraout_x1_00;
  char *pcVar32;
  void *pvVar33;
  long extraout_x8;
  long extraout_x8_00;
  long lVar34;
  long extraout_x8_01;
  undefined *puVar35;
  long extraout_x8_02;
  ulong uVar36;
  long unaff_x20;
  ulong uVar37;
  long lVar38;
  undefined *puVar39;
  long lVar40;
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
  DispatchWorkItemFlags local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  undefined *local_138;
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
  ID local_90 [4];
  
  LVar9 = os::Logger::typeMetadataAccessor();
  lVar40 = *(long *)(LVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar40 + 0x40));
  lVar38 = (long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_148 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar34 = lVar38 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar34;
  local_160 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  puVar35 = (undefined *)(lVar34 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_170.unknown = puVar35;
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar34 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  local_138 = &_OBJC_CLASS___NSUserDefaults;
  IVar11 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = NSUserDefaults::dictionaryForKey_(IVar11,pNVar12);
  puVar39 = PTR___type_metadata_for_Any_100524178;
  if (IVar11 != 0) {
    DVar13 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar14 = DVar13;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar13.unknown);
    if (DVar14.unknown != (char *)0x0) goto LAB_1002388c0;
  }
  DVar14.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005c3c();
LAB_1002388c0:
  _Var15.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var15.unknown >> 0x3e == 0) {
    lVar16 = *(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var15.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
      _Var3.unknown = _Var15.unknown;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  local_140 = lVar38;
  if (lVar16 != 0) {
    lVar38 = 4;
    do {
      uVar37 = lVar38 - 4;
      if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100239184);
          (*pcVar6)();
        }
        uVar36 = *(ulong *)(_Var15.unknown + lVar38 * 8);
      }
      else {
        uVar36 = uVar37;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar37,_Var15);
      }
      lVar1 = lVar38 + -3;
      if (SCARRY8(uVar37,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100239178);
        (*pcVar6)();
      }
      objc_stub::deviceDescription(uVar36);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar13 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar37 = 0;
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar13.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar12), (uVar37 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar13.unknown);
LAB_100238afc:
        UVar19 = Foundation::UUID::init();
        SVar41 = Foundation::UUID::get_uuidString(UVar19);
        (**(code **)(lVar34 + 8))
                  ((long)puVar35 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),UVar10.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar13.unknown + 0x38) + (long)pNVar12 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(DVar13.unknown);
        uVar17 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar18 = local_90;
        _swift_dynamicCast(pIVar18,&local_e0,puVar39 + 8,uVar17,6);
        if (((ulong)pIVar18 & 1) == 0) goto LAB_100238afc;
        objc_stub::stringValue(local_90[0]);
        SVar41 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pcVar32 = DVar14.unknown;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar43 = SVar41;
      local_e0 = DVar14.unknown;
      FUN_10000464c();
      pcVar30 = SVar43.str;
      uVar37 = (ulong)~(uint)SVar43.bridgeObject & 1;
      lVar2 = *(long *)(DVar14.unknown + 0x10) + uVar37;
      if (SCARRY8(*(long *)(DVar14.unknown + 0x10),uVar37)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10023917c);
        (*pcVar6)();
      }
      if (*(long *)(DVar14.unknown + 0x18) < lVar2) {
        FUN_1001cdc30(lVar2,pcVar32);
        SVar42 = SVar41;
        FUN_10000464c();
        pcVar30 = SVar42.str;
        if (((uint)SVar43.bridgeObject & 1) != ((uint)SVar42.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002391e0);
          (*pcVar6)();
        }
      }
      else if (((ulong)pcVar32 & 1) == 0) {
        FUN_1001cb094();
      }
      DVar14.unknown = local_e0;
      if (((ulong)SVar43.bridgeObject & 1) == 0) {
        *(ulong *)(local_e0 + ((ulong)pcVar30 >> 6) * 8 + 0x40) =
             *(ulong *)(local_e0 + ((ulong)pcVar30 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar30 & 0x3f)
        ;
        *(String *)(*(long *)(local_e0 + 0x30) + (long)pcVar30 * 0x10) = SVar41;
        *(double *)(*(long *)(local_e0 + 0x38) + (long)pcVar30 * 8) = param_1;
        if (SCARRY8(*(long *)(local_e0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100239180);
          (*pcVar6)();
        }
        *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + 1;
      }
      else {
        *(double *)(*(long *)(local_e0 + 0x38) + (long)pcVar30 * 8) = param_1;
        _swift_bridgeObjectRelease(SVar41.bridgeObject);
      }
      lVar38 = lVar38 + 1;
      puVar39 = PTR___type_metadata_for_Any_100524178;
    } while (lVar1 != lVar16);
  }
  _swift_bridgeObjectRelease(_Var15.unknown);
  IVar11 = objc_stub::standardUserDefaults((ID)local_138);
  pNVar20 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setObject_forKey_(IVar11,pNVar20,pNVar12);
  lVar34 = _TtC7Wallper21VideoWallpaperManager::players;
  _Var31.unknown = (undefined *)local_90;
  pcVar32 = (char *)0x0;
  pvVar33 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players);
  lVar34 = *(long *)(unaff_x20 + lVar34);
  uVar36 = 1L << ((ulong)*(byte *)(lVar34 + 0x20) & 0x3f);
  uVar37 = 0xffffffffffffffff;
  if ((*(byte *)(lVar34 + 0x20) & 0x3f) < 6) {
    uVar37 = ~(-1L << (uVar36 & 0x3f));
  }
  uVar37 = uVar37 & *(ulong *)(lVar34 + 0x40);
  _swift_bridgeObjectRetain(lVar34);
  lVar38 = 0;
  while( true ) {
    for (; uVar37 != 0; uVar37 = uVar37 - 1 & uVar37) {
      uVar4 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      IVar11 = *(ID *)(*(long *)(lVar34 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                      lVar38 * 0x200);
      IVar21 = objc_stub::timeControlStatus(IVar11);
      _Var31.unknown = (undefined *)extraout_x1;
      if (IVar21 == 2) {
        objc_stub::setRate_(IVar11,(ulong)(uint)(float)param_1);
        _Var31.unknown = (undefined *)extraout_x1_00;
      }
    }
    bVar7 = SCARRY8(lVar38,1);
    lVar38 = lVar38 + 1;
    if (bVar7) break;
    if ((long)(uVar36 + 0x3f >> 6) <= lVar38) {
      _swift_release(lVar34);
      local_e0 = (char *)0x0;
      local_d8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x24,_Var31);
      SVar43.bridgeObject = (void *)0x80000001004e2a50;
      SVar43.str = (char *)0xd000000000000020;
      SVar47.bridgeObject = pvVar33;
      SVar47.str = pcVar32;
      Swift::String::append(SVar43,SVar47);
      pcVar32 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100523f90
      ;
      double::_write((undefined *)&local_e0,param_1);
      SVar42.bridgeObject = (void *)0xa200000000000000;
      SVar42.str = (char *)0x97c3;
      uVar17 = 0x97c3;
      SVar48.bridgeObject = pvVar33;
      SVar48.str = pcVar32;
      Swift::String::append(SVar42,SVar48);
      puVar39 = local_d8;
      SVar41.bridgeObject = local_d8;
      SVar41.str = local_e0;
      local_e0 = (char *)0x5b;
      local_d8 = (undefined *)0xe100000000000000;
      local_a0 = (undefined *)0x4f464e49;
      uStack_98 = 0xe400000000000000;
      local_b0 = 0x20;
      uStack_a8 = 0xe100000000000000;
      FUN_100026df4();
      pcVar32 = (char *)0x0;
      puVar35 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar43 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar17,uVar17);
      SVar49.bridgeObject = puVar35;
      SVar49.str = pcVar32;
      Swift::String::append(SVar43,SVar49);
      _swift_bridgeObjectRelease(SVar43.bridgeObject);
      SVar44.bridgeObject = (void *)0xe300000000000000;
      SVar44.str = (char *)0x5b205d;
      SVar50.bridgeObject = puVar35;
      SVar50.str = pcVar32;
      Swift::String::append(SVar44,SVar50);
      SVar45.bridgeObject = (void *)0xe800000000000000;
      SVar45.str = (char *)0x6b63616279616c70;
      SVar51.bridgeObject = puVar35;
      SVar51.str = pcVar32;
      Swift::String::append(SVar45,SVar51);
      SVar46.bridgeObject = (void *)0xe200000000000000;
      SVar46.str = (char *)0x205d;
      SVar52.bridgeObject = puVar35;
      SVar52.str = pcVar32;
      Swift::String::append(SVar46,SVar52);
      SVar53.bridgeObject = puVar35;
      SVar53.str = pcVar32;
      Swift::String::append(SVar41,SVar53);
      puVar35 = local_d8;
      pcVar32 = local_e0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar22 = &DAT_100535450;
      _swift_allocObject(&DAT_100535450,0x30,7);
      *(char **)(puVar22 + 0x10) = pcVar32;
      *(undefined **)(puVar22 + 0x18) = puVar35;
      *(undefined8 *)(puVar22 + 0x20) = 0;
      *(undefined8 *)(puVar22 + 0x28) = 0xe000000000000000;
      local_c0 = thunk_FUN_100099310;
      local_e0 = PTR___NSConcreteStackBlock_100521110;
      local_d8 = (undefined *)0x42000000;
      local_d0 = FUN_1000c7e7c;
      puStack_c8 = &DAT_100535468;
      local_b8 = puVar22;
      pvVar33 = __Block_copy(&local_e0);
      DVar23.unknown = puVar35;
      _swift_bridgeObjectRetain();
      qos.unknown = local_170.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar23);
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar24 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar22 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar25 = puVar22;
      FUN_100077ac0();
      puVar5 = local_148;
      lVar34 = local_158;
      Swift::SetAlgebra::_init(local_158,&local_a0,puVar22,puVar25,local_148,puVar24);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar33);
      (**(code **)(local_150 + 8))(lVar34,puVar5);
      (**(code **)(local_168 + 8))(qos.unknown,local_160);
      _swift_release(local_b8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar26 = LVar9;
      FUN_100099338(LVar9.unknown,&DAT_100558f50);
      lVar34 = local_140;
      lVar38 = local_140;
      (**(code **)(lVar40 + 0x10))(local_140,LVar26.unknown,LVar9.unknown);
      uVar8 = (uint)lVar38;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar26.unknown = puVar35;
      _swift_bridgeObjectRetain();
      pOVar27 = os::Logger::get_logObject(LVar26);
      pOVar28 = pOVar27;
      _os_log_type_enabled(pOVar27,uVar8 & 0xff);
      if ((int)pOVar28 == 0) {
        _swift_bridgeObjectRelease_n(puVar35,2);
      }
      else {
        puVar29 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar30 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar29 = 0x8220102;
        local_e0 = pcVar30;
        FUN_10012dbb0(pcVar32,puVar35,&local_e0);
        *(char **)(puVar29 + 1) = pcVar32;
        _swift_bridgeObjectRelease_n(puVar35,2);
        __os_log_impl(0x100000000,pOVar27,uVar8 & 0xff,"%{public}s",puVar29,0xc);
        FUN_100043f24(pcVar30);
        _swift_slowDealloc(pcVar30,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar29,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar40 + 8))(lVar34,LVar9.unknown);
      _swift_bridgeObjectRelease(DVar14.unknown);
      _swift_bridgeObjectRelease(puVar39);
      return;
    }
    uVar37 = ((ulong *)(lVar34 + 0x40))[lVar38];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100239174);
  (*pcVar6)();
}

