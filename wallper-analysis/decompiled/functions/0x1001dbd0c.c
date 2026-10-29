// rea decompile_all
// name: FUN_1001dbd0c
// address: 0x1001dbd0c
// body: available
// range: 0x1001dbd0c-0x1001dd193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001dd190 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001dbd0c(char *param_1,undefined *param_2,undefined8 param_3)

{
  ulong uVar1;
  String SVar2;
  String SVar3;
  code *pcVar4;
  uint uVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  undefined8 uVar8;
  OS_os_log *pOVar9;
  undefined4 *puVar10;
  NSURL *pNVar11;
  char *pcVar12;
  NSURL *pNVar13;
  undefined *puVar14;
  undefined *puVar15;
  URL UVar16;
  NSURL *pNVar17;
  NSURL **ppNVar18;
  NSString *pNVar19;
  ID IVar20;
  NSURL *pNVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  Logger LVar24;
  OS_os_log *pOVar25;
  _StringGuts _Var26;
  void *pvVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar28;
  long extraout_x8_03;
  long lVar29;
  long lVar30;
  char *pcVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  bool bVar32;
  long lVar33;
  ID self;
  long unaff_x20;
  char *pcVar34;
  long lVar35;
  URL UVar36;
  undefined *puVar37;
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
  char acStack_1a0 [8];
  NSURL *local_198;
  code *local_190;
  undefined8 local_188;
  void *local_180;
  code *local_178;
  code *local_170;
  char *local_168;
  long local_160;
  DispatchWorkItemFlags local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  undefined8 local_128;
  char *local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  NSURL *local_f0;
  NSURL *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  NSURL *local_b8;
  NSURL *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  puVar37 = &DAT_100553d90;
  local_128 = param_3;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar37 + -8) + 0x40));
  local_120 = acStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)(acStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_118 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - extraout_x12_00;
  local_e8 = (NSURL *)Foundation::URL::typeMetadataAccessor();
  local_f0 = *(NSURL **)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar30 = lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar36.unknown = (undefined *)(lVar30 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_f8 = (long)UVar36.unknown - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar37 = (undefined *)(((long)UVar36.unknown - extraout_x12_02) - extraout_x12_03);
  local_100 = (undefined *)os::Logger::typeMetadataAccessor();
  local_108 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar30 = (long)puVar37 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar31 = (char *)(lVar30 - extraout_x12_04);
  local_168 = pcVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = (long)pcVar31 - extraout_x12_05;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar35 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  lVar28 = lVar33 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar28;
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar7.unknown + -8) + 0x40));
  lVar30 = _TtC7Wallper14PreviewManager::inFlightIDs;
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) goto LAB_1001dd09c;
  pvVar27 = (void *)0x0;
  local_158.unknown = (undefined *)(lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_150 = lVar35;
  local_148 = extraout_x12_06;
  local_140 = DVar6.unknown;
  local_138 = DVar7.unknown;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs,auStack_88,0);
  pcVar34 = *(char **)(unaff_x20 + lVar30);
  _swift_bridgeObjectRetain(pcVar34);
  pcVar31 = param_1;
  _Var26.unknown = param_2;
  pcVar12 = pcVar34;
  FUN_1002165a4();
  _swift_bridgeObjectRelease(pcVar34);
  lVar30 = _TtC7Wallper14PreviewManager::transparentRetryCount;
  if (((ulong)pcVar31 & 1) != 0) {
    local_b8 = (NSURL *)0x0;
    local_b0 = (NSURL *)0xe000000000000000;
    Swift::_StringGuts::grow(0x42,_Var26);
    SVar40.bridgeObject = (void *)0x80000001004e0cc0;
    SVar40.str = (char *)0xd00000000000002a;
    SVar59.bridgeObject = pvVar27;
    SVar59.str = pcVar12;
    Swift::String::append(SVar40,SVar59);
    SVar38.bridgeObject = param_2;
    SVar38.str = param_1;
    SVar60.bridgeObject = pvVar27;
    SVar60.str = pcVar12;
    Swift::String::append(SVar38,SVar60);
    uVar8 = 0x1000000000000016;
    SVar39.bridgeObject = (void *)0x80000001004e0d20;
    SVar39.str = (char *)0x1000000000000016;
    SVar61.bridgeObject = pvVar27;
    SVar61.str = pcVar12;
    Swift::String::append(SVar39,SVar61);
    pNVar21 = local_b0;
    SVar47.bridgeObject = local_b0;
    SVar47.str = (char *)local_b8;
    local_b8 = (NSURL *)0x5b;
    local_b0 = (NSURL *)0xe100000000000000;
    local_c8 = (undefined *)0x4f464e49;
    uStack_c0 = 0xe400000000000000;
    local_d8 = 0x20;
    uStack_d0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar31 = (char *)0x0;
    puVar37 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
    SVar62.bridgeObject = puVar37;
    SVar62.str = pcVar31;
    Swift::String::append(SVar40,SVar62);
    _swift_bridgeObjectRelease(SVar40.bridgeObject);
    SVar41.bridgeObject = (void *)0xe300000000000000;
    SVar41.str = (char *)0x5b205d;
    SVar63.bridgeObject = puVar37;
    SVar63.str = pcVar31;
    Swift::String::append(SVar41,SVar63);
    SVar42.bridgeObject = (void *)0xe300000000000000;
    SVar42.str = (char *)0x707061;
    SVar64.bridgeObject = puVar37;
    SVar64.str = pcVar31;
    Swift::String::append(SVar42,SVar64);
    SVar43.bridgeObject = (void *)0xe200000000000000;
    SVar43.str = (char *)0x205d;
    SVar65.bridgeObject = puVar37;
    SVar65.str = pcVar31;
    Swift::String::append(SVar43,SVar65);
    local_e8 = pNVar21;
    SVar66.bridgeObject = puVar37;
    SVar66.str = pcVar31;
    Swift::String::append(SVar47,SVar66);
    pNVar17 = local_b0;
    pNVar21 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar37 = &DAT_100531be0;
    _swift_allocObject(&DAT_100531be0,0x30,7);
    local_f0 = pNVar21;
    *(NSURL **)(puVar37 + 0x10) = pNVar21;
    *(NSURL **)(puVar37 + 0x18) = pNVar17;
    *(undefined8 *)(puVar37 + 0x20) = 0;
    *(undefined8 *)(puVar37 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8 = (NSURL *)PTR___NSConcreteStackBlock_100521110;
    local_b0 = (NSURL *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_100531bf8;
    local_90 = puVar37;
    pvVar27 = __Block_copy(&local_b8);
    DVar7.unknown = pNVar17;
    _swift_bridgeObjectRetain();
    DVar6.unknown = local_158.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar7);
    local_c8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar22 = &DAT_100553db0;
    FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar37 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar23 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    lVar30 = local_110;
    puVar14 = local_140;
    Swift::SetAlgebra::_init(local_110,&local_c8,puVar37,puVar23,local_140,puVar22);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
    __Block_release(pvVar27);
    (**(code **)(local_150 + 8))(lVar30,puVar14);
    (**(code **)(local_148 + 8))(DVar6.unknown,local_138);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar37 = local_100;
    puVar14 = local_100;
    FUN_100099338(local_100,&DAT_100558f50);
    lVar30 = local_108;
    lVar28 = lVar33;
    (**(code **)(local_108 + 0x10))(lVar33,puVar14,puVar37);
    uVar5 = (uint)lVar28;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar24.unknown = pNVar17;
    _swift_bridgeObjectRetain();
    pOVar9 = os::Logger::get_logObject(LVar24);
    pOVar25 = pOVar9;
    _os_log_type_enabled(pOVar9,uVar5 & 0xff);
    if ((int)pOVar25 == 0) {
      _swift_bridgeObjectRelease_n(pNVar17,2);
    }
    else {
      puVar10 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pNVar11 = (NSURL *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar10 = 0x8220102;
      pNVar21 = local_f0;
      local_b8 = pNVar11;
      FUN_10012dbb0(local_f0,pNVar17,&local_b8);
      *(NSURL **)(puVar10 + 1) = pNVar21;
      _swift_bridgeObjectRelease_n(pNVar17,2);
      __os_log_impl(0x100000000,pOVar9,uVar5 & 0xff,"%{public}s",puVar10,0xc);
      FUN_100043f24(pNVar11);
      _swift_slowDealloc(pNVar11,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar30 + 8))(lVar33,puVar37);
    pNVar21 = local_e8;
LAB_1001dc7b4:
    _swift_bridgeObjectRelease(pNVar21);
    goto LAB_1001dd09c;
  }
  pcVar31 = (char *)0x20;
  pvVar27 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::transparentRetryCount,&local_b8);
  pNVar17 = local_e8;
  pNVar21 = local_f0;
  lVar30 = *(long *)(unaff_x20 + lVar30);
  if (*(long *)(lVar30 + 0x10) == 0) {
LAB_1001dc7c4:
    _swift_endAccess(&local_b8);
  }
  else {
    _swift_bridgeObjectRetain(lVar30);
    pcVar12 = param_1;
    _Var26.unknown = param_2;
    FUN_10000464c();
    if (((ulong)_Var26.unknown & 1) == 0) {
      _swift_bridgeObjectRelease(lVar30);
      goto LAB_1001dc7c4;
    }
    lVar28 = *(long *)(*(long *)(lVar30 + 0x38) + (long)pcVar12 * 8);
    _swift_endAccess(&local_b8);
    _swift_bridgeObjectRelease(lVar30);
    if (1 < lVar28) {
      local_b8 = (NSURL *)0x0;
      local_b0 = (NSURL *)0xe000000000000000;
      Swift::_StringGuts::grow(0x51,_Var26);
      SVar44.bridgeObject = (void *)0x80000001004e0cc0;
      SVar44.str = (char *)0xd00000000000002a;
      SVar67.bridgeObject = pvVar27;
      SVar67.str = pcVar31;
      Swift::String::append(SVar44,SVar67);
      SVar45.bridgeObject = param_2;
      SVar45.str = param_1;
      SVar68.bridgeObject = pvVar27;
      SVar68.str = pcVar31;
      Swift::String::append(SVar45,SVar68);
      uVar8 = 0x1000000000000025;
      SVar46.bridgeObject = (void *)0x80000001004e0cf0;
      SVar46.str = (char *)0x1000000000000025;
      SVar69.bridgeObject = pvVar27;
      SVar69.str = pcVar31;
      Swift::String::append(SVar46,SVar69);
      pNVar21 = local_b0;
      SVar2.bridgeObject = local_b0;
      SVar2.str = (char *)local_b8;
      local_b8 = (NSURL *)0x5b;
      local_b0 = (NSURL *)0xe100000000000000;
      local_c8 = (undefined *)0x4f464e49;
      uStack_c0 = 0xe400000000000000;
      local_d8 = 0x20;
      uStack_d0 = 0xe100000000000000;
      FUN_100026df4();
      pcVar31 = (char *)0x0;
      puVar37 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar47 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
      SVar70.bridgeObject = puVar37;
      SVar70.str = pcVar31;
      Swift::String::append(SVar47,SVar70);
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      SVar48.bridgeObject = (void *)0xe300000000000000;
      SVar48.str = (char *)0x5b205d;
      SVar71.bridgeObject = puVar37;
      SVar71.str = pcVar31;
      Swift::String::append(SVar48,SVar71);
      SVar49.bridgeObject = (void *)0xe300000000000000;
      SVar49.str = (char *)0x707061;
      SVar72.bridgeObject = puVar37;
      SVar72.str = pcVar31;
      Swift::String::append(SVar49,SVar72);
      SVar50.bridgeObject = (void *)0xe200000000000000;
      SVar50.str = (char *)0x205d;
      SVar73.bridgeObject = puVar37;
      SVar73.str = pcVar31;
      Swift::String::append(SVar50,SVar73);
      SVar74.bridgeObject = puVar37;
      SVar74.str = pcVar31;
      Swift::String::append(SVar2,SVar74);
      pNVar11 = local_b0;
      pNVar17 = local_b8;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar37 = &DAT_100531b90;
      _swift_allocObject(&DAT_100531b90,0x30,7);
      local_e8 = pNVar17;
      *(NSURL **)(puVar37 + 0x10) = pNVar17;
      *(NSURL **)(puVar37 + 0x18) = pNVar11;
      *(undefined8 *)(puVar37 + 0x20) = 0;
      *(undefined8 *)(puVar37 + 0x28) = 0xe000000000000000;
      local_98 = thunk_FUN_100099310;
      local_b8 = (NSURL *)PTR___NSConcreteStackBlock_100521110;
      local_b0 = (NSURL *)0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_100531ba8;
      local_90 = puVar37;
      pvVar27 = __Block_copy(&local_b8);
      DVar7.unknown = pNVar11;
      _swift_bridgeObjectRetain();
      DVar6.unknown = local_158.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar7);
      local_c8 = PTR___swiftEmptyArrayStorage_100524190;
      puVar22 = &DAT_100553db0;
      FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar37 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar23 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      lVar30 = local_110;
      puVar14 = local_140;
      Swift::SetAlgebra::_init(local_110,&local_c8,puVar37,puVar23,local_140,puVar22);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
      __Block_release(pvVar27);
      (**(code **)(local_150 + 8))(lVar30,puVar14);
      (**(code **)(local_148 + 8))(DVar6.unknown,local_138);
      _swift_release(local_90);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar37 = local_100;
      puVar14 = local_100;
      FUN_100099338(local_100,&DAT_100558f50);
      lVar30 = local_108;
      pcVar31 = local_168;
      pcVar12 = local_168;
      (**(code **)(local_108 + 0x10))(local_168,puVar14,puVar37);
      uVar5 = (uint)pcVar12;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar24.unknown = pNVar11;
      _swift_bridgeObjectRetain();
      pOVar9 = os::Logger::get_logObject(LVar24);
      pOVar25 = pOVar9;
      _os_log_type_enabled(pOVar9,uVar5 & 0xff);
      if ((int)pOVar25 == 0) {
        _swift_bridgeObjectRelease_n(pNVar11,2);
      }
      else {
        puVar10 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pNVar13 = (NSURL *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar10 = 0x8220102;
        pNVar17 = local_e8;
        local_b8 = pNVar13;
        FUN_10012dbb0(local_e8,pNVar11,&local_b8);
        *(NSURL **)(puVar10 + 1) = pNVar17;
        _swift_bridgeObjectRelease_n(pNVar11,2);
        __os_log_impl(0x100000000,pOVar9,uVar5 & 0xff,"%{public}s",puVar10,0xc);
        FUN_100043f24(pNVar13);
        _swift_slowDealloc(pNVar13,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar30 + 8))(pcVar31,puVar37);
      goto LAB_1001dc7b4;
    }
  }
  puVar14 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar15 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar14);
  _swift_release(puVar15);
  pNVar11 = local_b8;
  if (*(long *)(local_b8 + 0x10) == 0) {
    bVar32 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_b8);
    pcVar31 = param_1;
    puVar14 = param_2;
    FUN_10000464c(param_1);
    bVar32 = ((ulong)puVar14 & 1) == 0;
    if (!bVar32) {
      (**(code **)(pNVar21 + 0x10))
                (lVar29,*(long *)(pNVar11 + 0x38) + *(long *)(pNVar21 + 0x48) * (long)pcVar31,
                 pNVar17);
    }
    _swift_bridgeObjectRelease(pNVar11);
  }
  local_190 = *(code **)(pNVar21 + 0x38);
  (*local_190)(lVar29,bVar32,1,pNVar17);
  _swift_bridgeObjectRelease(pNVar11);
  local_170 = *(code **)(pNVar21 + 0x30);
  lVar30 = lVar29;
  (*local_170)(lVar29,1,pNVar17);
  if ((int)lVar30 == 1) {
    UVar16.unknown = &DAT_10041bf10;
    FUN_10002a29c(lVar29,&DAT_100553d90);
  }
  else {
    UVar16.unknown = puVar37;
    (**(code **)(pNVar21 + 0x20))(puVar37,lVar29,pNVar17);
    IVar20 = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
    pNVar17 = Foundation::URL::_bridgeToObjectiveC(UVar16);
    local_b8 = (NSURL *)0x0;
    IVar20 = objc_stub::removeItemAtURL_error_(IVar20,pNVar17,&local_b8);
    pNVar21 = local_b8;
    if ((int)IVar20 == 0) {
      pNVar17 = local_b8;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pNVar17);
      pNVar17 = pNVar21;
    }
    puVar14 = &DAT_10042ae68;
    _swift_getKeyPath(&DAT_10042ae68);
    puVar15 = &DAT_10042ae90;
    _swift_getKeyPath(&DAT_10042ae90);
    ppNVar18 = &local_b8;
    Combine::Published::_modify_subscript((Published *)pNVar17);
    lVar30 = local_118;
    FUN_10027ec10(local_118,param_1,param_2);
    (*(code *)ppNVar18)(&local_b8,0);
    _swift_release(puVar14);
    _swift_release(puVar15);
    UVar16.unknown = &DAT_10041bf10;
    FUN_10002a29c(lVar30,&DAT_100553d90);
    pNVar17 = local_e8;
    pNVar21 = local_f0;
    (**(code **)(local_f0 + 8))(puVar37,local_e8);
  }
  SVar51.bridgeObject = param_2;
  SVar51.str = param_1;
  Foundation::URL::appendingPathComponent(SVar51,UVar16);
  SVar52.bridgeObject = (void *)0xe300000000000000;
  SVar52.str = (char *)0x676e70;
  Foundation::URL::appendingPathExtension(SVar52,UVar16);
  local_178 = *(code **)(pNVar21 + 8);
  (*local_178)(UVar36.unknown,pNVar17);
  self = *(ID *)(unaff_x20 + _TtC7Wallper14PreviewManager::fm);
  SVar47 = Foundation::URL::get_path(UVar36);
  pNVar19 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar47.bridgeObject);
  IVar20 = objc_stub::fileExistsAtPath_(self,pNVar19);
  if ((int)IVar20 != 0) {
    pNVar21 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    local_b8 = (NSURL *)0x0;
    IVar20 = objc_stub::removeItemAtURL_error_(self,pNVar21,&local_b8);
    if ((int)IVar20 == 0) {
      pNVar21 = local_b8;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pNVar21);
    }
  }
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::failedIDs,&local_b8,0x21,0);
  FUN_10027ea68(param_1,param_2);
  _swift_endAccess(&local_b8);
  pcVar31 = (char *)0x21;
  pvVar27 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs,&local_b8);
  puVar37 = param_2;
  FUN_100227384(param_1);
  _Var26.unknown = puVar37;
  _swift_endAccess(&local_b8);
  _swift_bridgeObjectRelease(puVar37);
  local_b8 = (NSURL *)0x0;
  local_b0 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x43,_Var26);
  SVar53.bridgeObject = (void *)0x80000001004e0c70;
  SVar53.str = &DAT_d000000000000028;
  SVar75.bridgeObject = pvVar27;
  SVar75.str = pcVar31;
  Swift::String::append(SVar53,SVar75);
  SVar54.bridgeObject = param_2;
  SVar54.str = param_1;
  SVar76.bridgeObject = pvVar27;
  SVar76.str = pcVar31;
  local_168 = param_1;
  Swift::String::append(SVar54,SVar76);
  uVar8 = 0xd000000000000019;
  SVar55.bridgeObject = (void *)0x80000001004e0ca0;
  SVar55.str = (char *)0xd000000000000019;
  SVar77.bridgeObject = pvVar27;
  SVar77.str = pcVar31;
  Swift::String::append(SVar55,SVar77);
  pNVar21 = local_b0;
  SVar3.bridgeObject = local_b0;
  SVar3.str = (char *)local_b8;
  local_b8 = (NSURL *)0x5b;
  local_b0 = (NSURL *)0xe100000000000000;
  local_c8 = (undefined *)0x4f464e49;
  uStack_c0 = 0xe400000000000000;
  local_d8 = 0x20;
  uStack_d0 = 0xe100000000000000;
  FUN_100026df4();
  pcVar31 = (char *)0x0;
  puVar37 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar47 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
  SVar78.bridgeObject = puVar37;
  SVar78.str = pcVar31;
  Swift::String::append(SVar47,SVar78);
  _swift_bridgeObjectRelease(SVar47.bridgeObject);
  SVar56.bridgeObject = (void *)0xe300000000000000;
  SVar56.str = (char *)0x5b205d;
  SVar79.bridgeObject = puVar37;
  SVar79.str = pcVar31;
  Swift::String::append(SVar56,SVar79);
  SVar57.bridgeObject = (void *)0xe300000000000000;
  SVar57.str = (char *)0x707061;
  SVar80.bridgeObject = puVar37;
  SVar80.str = pcVar31;
  Swift::String::append(SVar57,SVar80);
  SVar58.bridgeObject = (void *)0xe200000000000000;
  SVar58.str = (char *)0x205d;
  SVar81.bridgeObject = puVar37;
  SVar81.str = pcVar31;
  Swift::String::append(SVar58,SVar81);
  local_180 = pNVar21;
  SVar82.bridgeObject = puVar37;
  SVar82.str = pcVar31;
  Swift::String::append(SVar3,SVar82);
  pNVar17 = local_b0;
  pNVar21 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  local_188 = DAT_100559010;
  puVar37 = &DAT_100531b40;
  _swift_allocObject(&DAT_100531b40,0x30,7);
  local_198 = pNVar21;
  *(NSURL **)(puVar37 + 0x10) = pNVar21;
  *(NSURL **)(puVar37 + 0x18) = pNVar17;
  *(undefined8 *)(puVar37 + 0x20) = 0;
  *(undefined8 *)(puVar37 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8 = (NSURL *)PTR___NSConcreteStackBlock_100521110;
  local_b0 = (NSURL *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100531b58;
  local_90 = puVar37;
  pvVar27 = __Block_copy(&local_b8);
  DVar7.unknown = pNVar17;
  _swift_bridgeObjectRetain();
  DVar6.unknown = local_158.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  local_c8 = PTR___swiftEmptyArrayStorage_100524190;
  puVar22 = &DAT_100553db0;
  FUN_100047f94(&DAT_100553db0,0xff,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar37 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar23 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  lVar30 = local_110;
  puVar14 = local_140;
  Swift::SetAlgebra::_init(local_110,&local_c8,puVar37,puVar23,local_140,puVar22);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar6);
  __Block_release(pvVar27);
  (**(code **)(local_150 + 8))(lVar30,puVar14);
  (**(code **)(local_148 + 8))(DVar6.unknown,local_138);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar37 = local_100;
  puVar14 = local_100;
  FUN_100099338(local_100,&DAT_100558f50);
  lVar28 = local_108;
  lVar30 = local_130;
  lVar29 = local_130;
  (**(code **)(local_108 + 0x10))(local_130,puVar14,puVar37);
  uVar5 = (uint)lVar29;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar24.unknown = pNVar17;
  _swift_bridgeObjectRetain();
  pOVar9 = os::Logger::get_logObject(LVar24);
  pOVar25 = pOVar9;
  _os_log_type_enabled(pOVar9,uVar5 & 0xff);
  if ((int)pOVar25 == 0) {
    _swift_bridgeObjectRelease_n(pNVar17,2);
  }
  else {
    puVar10 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pNVar11 = (NSURL *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar10 = 0x8220102;
    pNVar21 = local_198;
    local_b8 = pNVar11;
    FUN_10012dbb0(local_198,pNVar17,&local_b8);
    *(NSURL **)(puVar10 + 1) = pNVar21;
    _swift_bridgeObjectRelease_n(pNVar17,2);
    __os_log_impl(0x100000000,pOVar9,uVar5 & 0xff,"%{public}s",puVar10,0xc);
    FUN_100043f24(pNVar11);
    _swift_slowDealloc(pNVar11,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar28 + 8))(lVar30,puVar37);
  _swift_bridgeObjectRelease(local_180);
  pNVar21 = local_f0;
  pcVar12 = local_120;
  pcVar31 = local_168;
  FUN_100077938(local_128,local_120);
  pNVar17 = local_e8;
  pcVar34 = pcVar12;
  (*local_170)(pcVar12,1,local_e8);
  lVar30 = local_160;
  if ((int)pcVar34 == 1) {
    FUN_10002a29c(pcVar12,&DAT_100553d90,&DAT_10041bf10);
    FUN_1001da998(pcVar31,param_2);
    (*local_178)(local_f8,pNVar17);
  }
  else {
    (**(code **)(pNVar21 + 0x20))(local_160,pcVar12,pNVar17);
    lVar28 = local_118;
    (**(code **)(pNVar21 + 0x10))(local_118,lVar30,pNVar17);
    (*local_190)(lVar28,0,1,pNVar17);
    FUN_1001dee2c(pcVar31,param_2,lVar28);
    FUN_10002a29c(lVar28,&DAT_100553d90,&DAT_10041bf10);
    pcVar4 = local_178;
    (*local_178)(lVar30,pNVar17);
    (*pcVar4)(local_f8,pNVar17);
  }
LAB_1001dd09c:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

