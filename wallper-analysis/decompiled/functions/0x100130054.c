// rea decompile_all
// name: FUN_100130054
// address: 0x100130054
// body: available
// range: 0x100130054-0x1001312df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100130380 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100130054(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  String SVar3;
  bool bVar4;
  uint uVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  Date DVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *puVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  void *pvVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  Logger LVar20;
  undefined1 *puVar21;
  OS_os_log *pOVar22;
  undefined *puVar23;
  Date DVar24;
  char *pcVar25;
  long extraout_x8;
  long lVar26;
  long extraout_x8_00;
  long lVar27;
  long lVar28;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  char *pcVar29;
  code *pcVar30;
  undefined1 *puVar31;
  long lVar32;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 extraout_x13;
  long lVar33;
  code *pcVar34;
  ulong uVar35;
  long unaff_x20;
  undefined *puVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  Date DVar40;
  void *pvVar41;
  ulong uVar42;
  double dVar43;
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
  undefined1 auStack_190 [8];
  long local_188;
  undefined *local_180;
  undefined *local_178;
  char *local_170;
  undefined *local_168;
  long local_160;
  char *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  LVar6 = os::Logger::typeMetadataAccessor();
  lVar33 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  puVar31 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = (long)puVar31 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar32 - extraout_x12_00;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar26 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = lVar38 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar28 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  qos.unknown = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar37 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  DVar40.unknown = qos.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar36 = DVar40.unknown + (-extraout_x12_02 - extraout_x12_01);
  pvVar41 = *(void **)(unaff_x20 + 0x38);
  if (pvVar41 == (void *)0x0) {
    return;
  }
  pcVar29 = *(char **)(unaff_x20 + 0x30);
  pvVar17 = pvVar41;
  _swift_bridgeObjectRetain();
  FUN_10020cc4c();
  if (((ulong)pvVar17 & 1) == 0) {
    _swift_bridgeObjectRelease(pvVar41);
    return;
  }
  local_168 = DVar8.unknown;
  local_160 = lVar33;
  Foundation::Date::init();
  lVar33 = _TtC7Wallper23LockScreenRepairMonitor::pausedUntil;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper23LockScreenRepairMonitor::pausedUntil,auStack_80,0,0);
  pcVar30 = *(code **)(lVar37 + 0x10);
  (*pcVar30)(extraout_x13,unaff_x20 + lVar33,DVar9.unknown);
  puVar10 = &DAT_100554248;
  FUN_1000036d0(&DAT_100554248,PTR_typeMetadataAccessor_100520b80,
                PTR_Foundation__Foundation__Date_>Swift__Comparable_100520ba0);
  DVar24 = DVar9;
  bVar4 = Swift::Comparable::>__infix(puVar36,extraout_x13);
  pcVar34 = *(code **)(lVar37 + 8);
  (*pcVar34)(extraout_x13,DVar9.unknown);
  if (!bVar4) {
    _swift_bridgeObjectRelease(pvVar41);
    (*pcVar34)(puVar36,DVar9.unknown);
    return;
  }
  pcVar11 = (char *)0x656c6449;
  puVar23 = (undefined *)0xe400000000000000;
  FUN_100152af4();
  puVar12 = puVar10;
  local_170 = pcVar11;
  if ((param_1 & 0xff) != 0) {
    pcVar25 = pcVar29;
    puVar12 = puVar23;
    FUN_100152394(pcVar29,pvVar41,pcVar11,puVar23,DVar24.unknown,puVar10);
    if (((ulong)pcVar25 & 1) != 0) {
      _swift_bridgeObjectRelease(pvVar41);
      _swift_bridgeObjectRelease(puVar23);
      _swift_bridgeObjectRelease(puVar10);
      goto LAB_1001311d4;
    }
    FUN_100132520(DVar24.unknown,puVar10,param_1);
    if (((ulong)DVar24.unknown & 1) != 0) {
      _swift_bridgeObjectRelease(pvVar41);
      _swift_bridgeObjectRelease(puVar23);
      _swift_bridgeObjectRelease(puVar10);
      local_d0 = (char *)0x5b;
      local_c8 = (undefined *)0xe100000000000000;
      local_90 = (undefined *)0x4f464e49;
      uStack_88 = 0xe400000000000000;
      local_a0 = 0x20;
      uStack_98 = 0xe100000000000000;
      FUN_100026df4();
      pcVar29 = (char *)0x0;
      puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,puVar10,puVar10);
      SVar62.bridgeObject = puVar12;
      SVar62.str = pcVar29;
      Swift::String::append(SVar44,SVar62);
      _swift_bridgeObjectRelease(SVar44.bridgeObject);
      SVar44.bridgeObject = (void *)0xe300000000000000;
      SVar44.str = (char *)0x5b205d;
      SVar63.bridgeObject = puVar12;
      SVar63.str = pcVar29;
      Swift::String::append(SVar44,SVar63);
      SVar45.bridgeObject = (void *)0xea00000000006e65;
      SVar45.str = (char *)0x657263736b636f6c;
      SVar64.bridgeObject = puVar12;
      SVar64.str = pcVar29;
      Swift::String::append(SVar45,SVar64);
      SVar46.bridgeObject = (void *)0xe200000000000000;
      SVar46.str = (char *)0x205d;
      SVar65.bridgeObject = puVar12;
      SVar65.str = pcVar29;
      Swift::String::append(SVar46,SVar65);
      SVar47.bridgeObject = (void *)0x80000001004ddf90;
      SVar47.str = (char *)0x1000000000000045;
      SVar66.bridgeObject = puVar12;
      SVar66.str = pcVar29;
      Swift::String::append(SVar47,SVar66);
      puVar10 = local_c8;
      pcVar29 = local_d0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar12 = &DAT_10052d840;
      _swift_allocObject(&DAT_10052d840,0x30,7);
      *(char **)(puVar12 + 0x10) = pcVar29;
      *(undefined **)(puVar12 + 0x18) = puVar10;
      *(undefined8 *)(puVar12 + 0x20) = 0;
      *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
      local_b0 = thunk_FUN_100099310;
      local_d0 = PTR___NSConcreteStackBlock_100521110;
      local_c8 = (undefined *)0x42000000;
      local_c0 = FUN_1000c7e7c;
      puStack_b8 = &DAT_10052d858;
      local_a8 = puVar12;
      pvVar41 = __Block_copy(&local_d0);
      DVar8.unknown = puVar10;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_90 = PTR___swiftEmptyArrayStorage_100524190;
      puVar18 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar12 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar19 = &DAT_100553dc0;
      FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
      Swift::SetAlgebra::_init(lVar27,&local_90,puVar12,puVar19,DVar7.unknown,puVar18);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar41);
      (**(code **)(lVar26 + 8))(lVar27,DVar7.unknown);
      (**(code **)(lVar28 + 8))(qos.unknown,local_168);
      _swift_release(local_a8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar20 = LVar6;
      FUN_100099338(LVar6.unknown,&DAT_100558f50);
      lVar26 = local_160;
      lVar27 = lVar38;
      (**(code **)(local_160 + 0x10))(lVar38,LVar20.unknown,LVar6.unknown);
      uVar5 = (uint)lVar27;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar20.unknown = puVar10;
      _swift_bridgeObjectRetain();
      pOVar13 = os::Logger::get_logObject(LVar20);
      pOVar22 = pOVar13;
      _os_log_type_enabled(pOVar13,uVar5 & 0xff);
      if ((int)pOVar22 == 0) {
        _swift_bridgeObjectRelease_n(puVar10,2);
      }
      else {
        puVar14 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar11 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar14 = 0x8220102;
        local_d0 = pcVar11;
        FUN_10012dbb0(pcVar29,puVar10,&local_d0);
        *(char **)(puVar14 + 1) = pcVar29;
        _swift_bridgeObjectRelease_n(puVar10,2);
        __os_log_impl(0x100000000,pOVar13,uVar5 & 0xff,"%{public}s",puVar14,0xc);
        FUN_100043f24(pcVar11);
        _swift_slowDealloc(pcVar11,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar26 + 8))(lVar38,LVar6.unknown);
      FUN_100131b10();
      (*pcVar34)(puVar36,DVar9.unknown);
      return;
    }
  }
  local_188 = lVar33;
  lVar33 = *(long *)(unaff_x20 + 0x40);
  uVar35 = *(ulong *)(lVar33 + 0x10);
  local_180 = puVar23;
  local_178 = puVar10;
  _swift_bridgeObjectRetain(lVar33);
  pcVar11 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar35 != 0) {
    uVar42 = 0;
    do {
      if (*(ulong *)(lVar33 + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100131250);
        (*pcVar30)();
      }
      uVar39 = (ulong)*(byte *)(lVar37 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar37 + 0x50) ^ 0xffffffffffffffff);
      lVar38 = *(long *)(lVar37 + 0x48);
      DVar24.unknown = (undefined *)(lVar33 + uVar39 + lVar38 * uVar42);
      (*pcVar30)(DVar40.unknown,DVar24.unknown,DVar9.unknown);
      dVar43 = Foundation::Date::timeIntervalSince(DVar40,DVar24);
      if (60.0 <= dVar43) {
        (*pcVar34)(DVar40.unknown,DVar9.unknown);
      }
      else {
        pcVar25 = pcVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        local_d0 = pcVar11;
        if (((ulong)pcVar25 & 1) == 0) {
          FUN_1001c5e28(0,*(long *)(pcVar11 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_d0 + 0x10);
        if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5e28(1 < *(ulong *)(local_d0 + 0x18),uVar1 + 1,1);
        }
        pcVar11 = local_d0;
        *(ulong *)(local_d0 + 0x10) = uVar1 + 1;
        (**(code **)(lVar37 + 0x20))
                  (local_d0 + uVar1 * lVar38 + uVar39,DVar40.unknown,DVar9.unknown);
      }
      uVar42 = uVar42 + 1;
    } while (uVar35 != uVar42);
  }
  _swift_bridgeObjectRelease(lVar33);
  puVar10 = &DAT_100554250;
  FUN_100002f94(&DAT_100554250,&DAT_100426ea0);
  bVar2 = *(byte *)(lVar37 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  (*pcVar30)(puVar10 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)),puVar36,
             DVar9.unknown);
  pcVar30 = FUN_1001c447c;
  pcVar25 = PTR_typeMetadataAccessor_100520b80;
  local_d0 = pcVar11;
  FUN_10012f94c(puVar10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  *(char **)(unaff_x20 + 0x40) = local_d0;
  _swift_bridgeObjectRelease(uVar15);
  if (*(ulong *)(*(long *)(unaff_x20 + 0x40) + 0x10) < 9) {
    local_d0 = (char *)0x0;
    local_c8 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x33,(_StringGuts)pcVar30);
    SVar55.bridgeObject = (void *)0x80000001004ddee0;
    SVar55.str = (char *)0xd00000000000001d;
    SVar76.bridgeObject = puVar12;
    SVar76.str = pcVar25;
    Swift::String::append(SVar55,SVar76);
    _swift_bridgeObjectRelease(local_178);
    pcVar11 = (char *)0x656e6f6e;
    if (local_180 != (undefined *)0x0) {
      pcVar11 = local_170;
    }
    puVar10 = (undefined *)0xe400000000000000;
    if (local_180 != (undefined *)0x0) {
      puVar10 = local_180;
    }
    SVar56.bridgeObject = puVar10;
    SVar56.str = pcVar11;
    SVar77.bridgeObject = puVar12;
    SVar77.str = pcVar25;
    Swift::String::append(SVar56,SVar77);
    _swift_bridgeObjectRelease(puVar10);
    SVar57.bridgeObject = (void *)0x80000001004ddf00;
    SVar57.str = (char *)0x1000000000000012;
    SVar78.bridgeObject = puVar12;
    SVar78.str = pcVar25;
    Swift::String::append(SVar57,SVar78);
    SVar58.bridgeObject = pvVar41;
    SVar58.str = pcVar29;
    SVar79.bridgeObject = puVar12;
    SVar79.str = pcVar25;
    pcVar11 = pcVar29;
    Swift::String::append(SVar58,SVar79);
    puVar10 = local_c8;
    SVar3.bridgeObject = local_c8;
    SVar3.str = local_d0;
    local_d0 = (char *)0x5b;
    local_c8 = (undefined *)0xe100000000000000;
    local_90 = (undefined *)0x4f464e49;
    uStack_88 = 0xe400000000000000;
    local_a0 = 0x20;
    uStack_98 = 0xe100000000000000;
    FUN_100026df4();
    pcVar25 = (char *)0x0;
    puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pcVar11,pcVar11);
    SVar80.bridgeObject = puVar12;
    SVar80.str = pcVar25;
    Swift::String::append(SVar44,SVar80);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar59.bridgeObject = (void *)0xe300000000000000;
    SVar59.str = (char *)0x5b205d;
    SVar81.bridgeObject = puVar12;
    SVar81.str = pcVar25;
    Swift::String::append(SVar59,SVar81);
    SVar60.bridgeObject = (void *)0xea00000000006e65;
    SVar60.str = (char *)0x657263736b636f6c;
    SVar82.bridgeObject = puVar12;
    SVar82.str = pcVar25;
    Swift::String::append(SVar60,SVar82);
    SVar61.bridgeObject = (void *)0xe200000000000000;
    SVar61.str = (char *)0x205d;
    SVar83.bridgeObject = puVar12;
    SVar83.str = pcVar25;
    Swift::String::append(SVar61,SVar83);
    SVar84.bridgeObject = puVar12;
    SVar84.str = pcVar25;
    Swift::String::append(SVar3,SVar84);
    puVar12 = local_c8;
    pcVar11 = local_d0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar23 = &DAT_10052d7a0;
    _swift_allocObject(&DAT_10052d7a0,0x30,7);
    *(char **)(puVar23 + 0x10) = pcVar11;
    *(undefined **)(puVar23 + 0x18) = puVar12;
    *(undefined8 *)(puVar23 + 0x20) = 0;
    *(undefined8 *)(puVar23 + 0x28) = 0xe000000000000000;
    local_b0 = FUN_100099310;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    local_c8 = (undefined *)0x42000000;
    local_c0 = FUN_1000c7e7c;
    puStack_b8 = &DAT_10052d7b8;
    local_a8 = puVar23;
    pvVar17 = __Block_copy(&local_d0);
    DVar8.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_90 = PTR___swiftEmptyArrayStorage_100524190;
    puVar18 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar23 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar19 = &DAT_100553dc0;
    FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
    Swift::SetAlgebra::_init(lVar27,&local_90,puVar23,puVar19,DVar7.unknown,puVar18);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar17);
    (**(code **)(lVar26 + 8))(lVar27,DVar7.unknown);
    (**(code **)(lVar28 + 8))(qos.unknown,local_168);
    _swift_release(local_a8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar20 = LVar6;
    FUN_100099338(LVar6.unknown,&DAT_100558f50);
    lVar26 = local_160;
    puVar21 = puVar31;
    (**(code **)(local_160 + 0x10))(puVar31,LVar20.unknown,LVar6.unknown);
    uVar5 = (uint)puVar21;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar20.unknown = puVar12;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar20);
    pOVar22 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar5 & 0xff);
    if ((int)pOVar22 == 0) {
      _swift_bridgeObjectRelease_n(puVar12,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar25 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      local_d0 = pcVar25;
      FUN_10012dbb0(pcVar11,puVar12,&local_d0);
      *(char **)(puVar14 + 1) = pcVar11;
      _swift_bridgeObjectRelease_n(puVar12,2);
      __os_log_impl(0x100000000,pOVar13,uVar5 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar25);
      _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar26 + 8))(puVar31,LVar6.unknown);
    _swift_bridgeObjectRelease(puVar10);
    FUN_1001540ec(pcVar29,pvVar41);
    _swift_bridgeObjectRelease(pvVar41);
    if (((ulong)pcVar29 & 1) != 0) {
      FUN_10020d308();
    }
  }
  else {
    _swift_bridgeObjectRelease(pvVar41);
    _swift_bridgeObjectRelease(local_180);
    DVar40.unknown = local_178;
    _swift_bridgeObjectRelease();
    Foundation::Date::addingTimeInterval(120.0,DVar40);
    lVar33 = local_188;
    _swift_beginAccess(unaff_x20 + local_188,&local_d0,0x21,0);
    (**(code **)(lVar37 + 0x28))(unaff_x20 + lVar33,extraout_x13,DVar9.unknown);
    _swift_endAccess(&local_d0);
    puVar10 = PTR___swiftEmptyArrayStorage_100524190;
    uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined **)(unaff_x20 + 0x40) = PTR___swiftEmptyArrayStorage_100524190;
    _swift_bridgeObjectRelease(uVar15);
    local_d0 = (char *)0x5b;
    local_c8 = (undefined *)0xe100000000000000;
    local_90 = (undefined *)0x4e524157;
    uStack_88 = 0xe400000000000000;
    local_a0 = 0x20;
    uStack_98 = 0xe100000000000000;
    FUN_100026df4();
    pcVar11 = (char *)0x0;
    puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
    SVar67.bridgeObject = puVar23;
    SVar67.str = pcVar11;
    Swift::String::append(SVar44,SVar67);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar48.bridgeObject = (void *)0xe300000000000000;
    SVar48.str = (char *)0x5b205d;
    SVar68.bridgeObject = puVar23;
    SVar68.str = pcVar11;
    Swift::String::append(SVar48,SVar68);
    SVar49.bridgeObject = (void *)0xea00000000006e65;
    SVar49.str = (char *)0x657263736b636f6c;
    SVar69.bridgeObject = puVar23;
    SVar69.str = pcVar11;
    Swift::String::append(SVar49,SVar69);
    SVar50.bridgeObject = (void *)0xe200000000000000;
    SVar50.str = (char *)0x205d;
    SVar70.bridgeObject = puVar23;
    SVar70.str = pcVar11;
    Swift::String::append(SVar50,SVar70);
    SVar51.bridgeObject = (void *)0x80000001004ddf20;
    SVar51.str = (char *)0x1000000000000040;
    SVar71.bridgeObject = puVar23;
    SVar71.str = pcVar11;
    Swift::String::append(SVar51,SVar71);
    puVar12 = local_c8;
    pcVar29 = local_d0;
    local_d0 = (char *)0x282020;
    local_c8 = (undefined *)0xe300000000000000;
    SVar52.bridgeObject = (void *)0x80000001004ddf70;
    SVar52.str = (char *)0xd000000000000013;
    SVar72.bridgeObject = puVar23;
    SVar72.str = pcVar11;
    Swift::String::append(SVar52,SVar72);
    SVar53.bridgeObject = (void *)0xe100000000000000;
    SVar53.str = (char *)0x3a;
    SVar73.bridgeObject = puVar23;
    SVar73.str = pcVar11;
    Swift::String::append(SVar53,SVar73);
    local_90 = (undefined *)0x6c;
    SVar44 = Swift::CustomStringConvertible::get_description();
    SVar74.bridgeObject = puVar23;
    SVar74.str = pcVar11;
    Swift::String::append(SVar44,SVar74);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar54.bridgeObject = (void *)0xe100000000000000;
    SVar54.str = (char *)0x29;
    SVar75.bridgeObject = puVar23;
    SVar75.str = pcVar11;
    Swift::String::append(SVar54,SVar75);
    puVar23 = local_c8;
    pcVar11 = local_d0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar16 = &DAT_10052d7f0;
    _swift_allocObject(&DAT_10052d7f0,0x30,7);
    *(char **)(puVar16 + 0x10) = pcVar29;
    *(undefined **)(puVar16 + 0x18) = puVar12;
    *(char **)(puVar16 + 0x20) = pcVar11;
    *(undefined **)(puVar16 + 0x28) = puVar23;
    local_b0 = thunk_FUN_100099310;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    local_c8 = (undefined *)0x42000000;
    local_c0 = FUN_1000c7e7c;
    puStack_b8 = &DAT_10052d808;
    local_a8 = puVar16;
    pvVar41 = __Block_copy(&local_d0);
    DVar8.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_90 = puVar10;
    puVar18 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar10 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar19 = &DAT_100553dc0;
    FUN_100132684(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90);
    Swift::SetAlgebra::_init(lVar27,&local_90,puVar10,puVar19,DVar7.unknown,puVar18);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar41);
    (**(code **)(lVar26 + 8))(lVar27,DVar7.unknown);
    (**(code **)(lVar28 + 8))(qos.unknown,local_168);
    _swift_release(local_a8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar20 = LVar6;
    FUN_100099338(LVar6.unknown,&DAT_100558f50);
    lVar26 = local_160;
    lVar27 = lVar32;
    (**(code **)(local_160 + 0x10))(lVar32,LVar20.unknown,LVar6.unknown);
    uVar5 = (uint)lVar27;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar20.unknown = puVar12;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar20);
    pOVar22 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar5 & 0xff);
    if ((int)pOVar22 == 0) {
      _swift_bridgeObjectRelease_n(puVar12,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar11 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      local_d0 = pcVar11;
      FUN_10012dbb0(pcVar29,puVar12,&local_d0);
      *(char **)(puVar14 + 1) = pcVar29;
      _swift_bridgeObjectRelease_n(puVar12,2);
      __os_log_impl(0x100000000,pOVar13,uVar5 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar11);
      _swift_slowDealloc(pcVar11,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar26 + 8))(lVar32,LVar6.unknown);
  }
LAB_1001311d4:
  (*pcVar34)(puVar36,DVar9.unknown);
  return;
}

