// rea decompile_all
// name: FUN_10019a25c
// address: 0x10019a25c
// body: available
// range: 0x10019a25c-0x10019ad33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019a25c(char *param_1,undefined *param_2,char *param_3,undefined *param_4,char *param_5,
                  void *param_6)

{
  ulong uVar1;
  String SVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  Logger LVar10;
  DispatchWorkItemFlags DVar11;
  DispatchQoS DVar12;
  undefined *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  Published *pPVar22;
  Task TVar23;
  undefined8 uVar24;
  TaskPriority TVar25;
  MainActor *this;
  MainActor *pMVar26;
  char **ppcVar27;
  _StringGuts _Var28;
  char *pcVar29;
  long extraout_x8;
  long lVar30;
  long extraout_x8_00;
  long lVar31;
  long extraout_x8_01;
  long lVar32;
  long extraout_x8_02;
  undefined8 uVar33;
  long extraout_x12;
  MainActor *unaff_x20;
  undefined *puVar34;
  char *pcVar35;
  long lVar36;
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
  String SVar56;
  long local_150;
  char *local_148;
  DispatchWorkItemFlags local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120;
  void *local_118;
  _StringGuts local_110;
  _StringGuts _Stack_108;
  _StringGuts local_100;
  _StringGuts local_f8;
  void *local_f0;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar34 = &DAT_100561090;
  _Var28.unknown = &DAT_10041c870;
  pcVar29 = param_3;
  puVar13 = param_4;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar34 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar10 = os::Logger::typeMetadataAccessor();
  lVar30 = *(long *)(LVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  lVar31 = ((long)&local_150 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar11 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar36 = *(long *)(DVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar36 + 0x40));
  lVar32 = lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar12 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar12.unknown + -8) + 0x40));
  local_140.unknown = (undefined *)(lVar32 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if (((byte)unaff_x20[_TtC7Wallper17NowPlayingManager::isQuitting] & 1) != 0) {
    return;
  }
  local_b8 = (char *)0x0;
  local_b0 = (undefined *)0xe000000000000000;
  local_150 = (long)&local_150 - extraout_x8;
  local_138 = extraout_x12;
  local_130 = DVar12.unknown;
  local_128 = lVar36;
  local_120 = DVar11.unknown;
  Swift::_StringGuts::grow(0x25,_Var28);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = (char *)0x1000000000000017;
  local_b0 = (void *)0x80000001004df800;
  pcVar35 = (char *)0x6c696e;
  pcVar21 = pcVar35;
  if (param_2 != (undefined *)0x0) {
    pcVar21 = param_1;
  }
  puVar34 = (undefined *)0xe300000000000000;
  if (param_2 != (undefined *)0x0) {
    puVar34 = param_2;
  }
  local_110.unknown = param_1;
  _Stack_108.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar42.bridgeObject = puVar34;
  SVar42.str = pcVar21;
  SVar46.bridgeObject = puVar13;
  SVar46.str = pcVar29;
  Swift::String::append(SVar42,SVar46);
  _swift_bridgeObjectRelease(puVar34);
  SVar37.bridgeObject = (void *)0xe500000000000000;
  SVar37.str = (char *)0x2079622022;
  SVar47.bridgeObject = puVar13;
  SVar47.str = pcVar29;
  Swift::String::append(SVar37,SVar47);
  pcVar21 = pcVar35;
  if (param_4 != (undefined *)0x0) {
    pcVar21 = param_3;
  }
  puVar34 = (undefined *)0xe300000000000000;
  if (param_4 != (undefined *)0x0) {
    puVar34 = param_4;
  }
  local_100.unknown = param_3;
  local_f8.unknown = param_4;
  _swift_bridgeObjectRetain(param_4);
  SVar38.bridgeObject = puVar34;
  SVar38.str = pcVar21;
  SVar48.bridgeObject = puVar13;
  SVar48.str = pcVar29;
  Swift::String::append(SVar38,SVar48);
  _swift_bridgeObjectRelease(puVar34);
  SVar39.bridgeObject = (void *)0xe200000000000000;
  SVar39.str = (char *)0x5b20;
  SVar49.bridgeObject = puVar13;
  SVar49.str = pcVar29;
  Swift::String::append(SVar39,SVar49);
  if (param_6 != (void *)0x0) {
    pcVar35 = param_5;
  }
  pvVar14 = (void *)0xe300000000000000;
  if (param_6 != (void *)0x0) {
    pvVar14 = param_6;
  }
  local_f0 = param_6;
  _swift_bridgeObjectRetain(param_6);
  SVar40.bridgeObject = pvVar14;
  SVar40.str = pcVar35;
  SVar50.bridgeObject = puVar13;
  SVar50.str = pcVar29;
  Swift::String::append(SVar40,SVar50);
  _swift_bridgeObjectRelease(pvVar14);
  SVar41.bridgeObject = (void *)0xe100000000000000;
  SVar41.str = (char *)0x5d;
  uVar24 = 0x5d;
  SVar51.bridgeObject = puVar13;
  SVar51.str = pcVar29;
  Swift::String::append(SVar41,SVar51);
  puVar34 = local_b0;
  SVar2.bridgeObject = local_b0;
  SVar2.str = local_b8;
  local_b8 = (char *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar29 = (char *)0x0;
  puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar42 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar24,uVar24);
  SVar52.bridgeObject = puVar13;
  SVar52.str = pcVar29;
  Swift::String::append(SVar42,SVar52);
  _swift_bridgeObjectRelease(SVar42.bridgeObject);
  SVar43.bridgeObject = (void *)0xe300000000000000;
  SVar43.str = (char *)0x5b205d;
  SVar53.bridgeObject = puVar13;
  SVar53.str = pcVar29;
  Swift::String::append(SVar43,SVar53);
  SVar44.bridgeObject = (void *)0xe500000000000000;
  SVar44.str = (char *)0x616964656d;
  SVar54.bridgeObject = puVar13;
  SVar54.str = pcVar29;
  Swift::String::append(SVar44,SVar54);
  SVar45.bridgeObject = (void *)0xe200000000000000;
  SVar45.str = (char *)0x205d;
  SVar55.bridgeObject = puVar13;
  SVar55.str = pcVar29;
  Swift::String::append(SVar45,SVar55);
  local_118 = puVar34;
  SVar56.bridgeObject = puVar13;
  SVar56.str = pcVar29;
  Swift::String::append(SVar2,SVar56);
  puVar34 = local_b0;
  pcVar29 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar13 = &DAT_100530700;
  _swift_allocObject(&DAT_100530700,0x30,7);
  local_148 = pcVar29;
  *(char **)(puVar13 + 0x10) = pcVar29;
  *(undefined **)(puVar13 + 0x18) = puVar34;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100530718;
  local_90 = puVar13;
  pvVar14 = __Block_copy(&local_b8);
  DVar12.unknown = puVar34;
  _swift_bridgeObjectRetain();
  DVar11.unknown = local_140.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar12);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar13 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar16 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar3 = local_120;
  Swift::SetAlgebra::_init(lVar32,&local_78,puVar13,puVar16,local_120,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar11);
  __Block_release(pvVar14);
  (**(code **)(local_128 + 8))(lVar32,puVar3);
  (**(code **)(local_138 + 8))(DVar11.unknown,local_130);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar17 = LVar10;
  FUN_100099338(LVar10.unknown,&DAT_100558f50);
  lVar32 = lVar31;
  (**(code **)(lVar30 + 0x10))(lVar31,LVar17.unknown,LVar10.unknown);
  uVar9 = (uint)lVar32;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar17.unknown = puVar34;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,uVar9 & 0xff);
  _Var4.unknown = _Stack_108.unknown;
  _Var28.unknown = local_110.unknown;
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar34,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar21 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar20 = 0x8220102;
    pcVar29 = local_148;
    local_b8 = pcVar21;
    FUN_10012dbb0(local_148,puVar34,&local_b8);
    *(char **)(puVar20 + 1) = pcVar29;
    _swift_bridgeObjectRelease_n(puVar34,2);
    __os_log_impl(0x100000000,pOVar18,uVar9 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(pcVar21);
    _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar30 + 8))(lVar31,LVar10.unknown);
  _swift_bridgeObjectRelease(local_118);
  pvVar14 = local_f0;
  puVar34 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  puVar13 = &DAT_100429da0;
  _swift_getKeyPath(&DAT_100429da0);
  Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar34,puVar13);
  _swift_release(puVar34);
  _swift_release(puVar13);
  puVar34 = local_b0;
  _Var6.unknown = local_f8.unknown;
  _Var5.unknown = local_100.unknown;
  if (_Var4.unknown == (undefined *)0x0) {
    if (local_b0 == (undefined *)0x0) goto LAB_10019a8f0;
  }
  else {
    if (local_b0 == (undefined *)0x0) goto LAB_10019a964;
    if ((_Var28.unknown == local_b8) && (_Var4.unknown == local_b0)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var28,_Var4,(_StringComparisonResult)(__int8)local_b8);
      _swift_bridgeObjectRelease(puVar34);
      if (!bVar8) goto LAB_10019a964;
    }
LAB_10019a8f0:
    puVar34 = &DAT_100429dc0;
    _swift_getKeyPath(&DAT_100429dc0);
    puVar13 = &DAT_100429de8;
    _swift_getKeyPath(&DAT_100429de8);
    Combine::Published::_get_subscript(&local_b8,unaff_x20,puVar34,puVar13);
    _swift_release(puVar34);
    _swift_release(puVar13);
    puVar34 = local_b0;
    if (_Var6.unknown != (undefined *)0x0) {
      if (local_b0 != (undefined *)0x0) {
        if ((_Var5.unknown == local_b8) && (_Var6.unknown == local_b0)) {
          _swift_bridgeObjectRelease();
        }
        else {
          bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var5,_Var6,(_StringComparisonResult)(__int8)local_b8);
          _swift_bridgeObjectRelease(puVar34);
          if (!bVar8) goto LAB_10019a964;
        }
LAB_10019acd8:
        if (*(long *)(*(long *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) +
                     0x10) != 0x10) {
          return;
        }
        FUN_1001790d4(1);
        return;
      }
      goto LAB_10019a964;
    }
    if (local_b0 == (undefined *)0x0) goto LAB_10019acd8;
  }
  _swift_bridgeObjectRelease();
LAB_10019a964:
  puVar34 = &DAT_100429d78;
  _swift_getKeyPath(&DAT_100429d78);
  pPVar22 = (Published *)&DAT_100429da0;
  _swift_getKeyPath(&DAT_100429da0);
  local_b8 = _Var28.unknown;
  local_b0 = _Var4.unknown;
  _swift_bridgeObjectRetain(_Var4.unknown);
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar22,&local_b8,unaff_x20,puVar34,pPVar22);
  puVar34 = &DAT_100429dc0;
  _swift_getKeyPath(&DAT_100429dc0);
  pPVar22 = (Published *)&DAT_100429de8;
  _swift_getKeyPath(&DAT_100429de8);
  local_b8 = _Var5.unknown;
  local_b0 = _Var6.unknown;
  _swift_bridgeObjectRetain(_Var6.unknown);
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar22,&local_b8,unaff_x20,puVar34,pPVar22);
  puVar34 = &DAT_100429ed8;
  _swift_getKeyPath(&DAT_100429ed8);
  pPVar22 = (Published *)&DAT_100429f00;
  _swift_getKeyPath(&DAT_100429f00);
  local_b0 = pvVar14;
  local_b8 = param_5;
  _swift_bridgeObjectRetain(pvVar14);
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar22,&local_b8,unaff_x20,puVar34,pPVar22);
  lVar30 = _TtC7Wallper17NowPlayingManager::artworkTask;
  puVar34 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkTask);
  if (puVar34 != (undefined *)0x0) {
    TVar23.unknown = puVar34;
    _swift_retain();
    Swift::Task::cancel(TVar23);
    _swift_release(puVar34);
  }
  pMVar26 = unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkKey;
  uVar24 = *(undefined8 *)(pMVar26 + 8);
  *(undefined8 *)pMVar26 = 0;
  *(undefined8 *)(pMVar26 + 8) = 0;
  _swift_bridgeObjectRelease(uVar24);
  if (_Var4.unknown != (undefined *)0x0) {
    uVar1 = (ulong)_Var28.unknown & 0xffffffffffff;
    if (((ulong)_Var4.unknown & 0x2000000000000000) != 0) {
      uVar1 = (ulong)_Var4.unknown >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      TVar25 = Swift::TaskPriority::typeMetadataAccessor();
      lVar31 = local_150;
      (**(code **)(*(long *)(TVar25.unknown + -8) + 0x38))(local_150,1,1,TVar25.unknown);
      this = Swift::MainActor::typeMetadataAccessor();
      puVar34 = PTR_typeMetadataAccessor_1005246d8;
      _swift_bridgeObjectRetain(_Var4.unknown);
      _swift_bridgeObjectRetain(_Var6.unknown);
      _swift_bridgeObjectRetain(pvVar14);
      pMVar26 = unaff_x20;
      _swift_retain();
      pMVar26 = Swift::MainActor::get_shared(this,pMVar26);
      puVar15 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar34,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar34 = &DAT_100530750;
      _swift_allocObject(&DAT_100530750,0x58,7);
      *(MainActor **)(puVar34 + 0x10) = pMVar26;
      *(undefined8 **)(puVar34 + 0x18) = puVar15;
      *(MainActor **)(puVar34 + 0x20) = unaff_x20;
      *(undefined **)(puVar34 + 0x28) = _Var28.unknown;
      *(undefined **)(puVar34 + 0x30) = _Var4.unknown;
      *(undefined **)(puVar34 + 0x38) = _Var5.unknown;
      *(undefined **)(puVar34 + 0x40) = _Var6.unknown;
      *(char **)(puVar34 + 0x48) = param_5;
      *(void **)(puVar34 + 0x50) = pvVar14;
      uVar24 = 0;
      FUN_1001b1e74(0,0,lVar31,&DAT_100429fb8,puVar34);
      uVar33 = *(undefined8 *)(unaff_x20 + lVar30);
      *(undefined8 *)(unaff_x20 + lVar30) = uVar24;
      _swift_release(uVar33);
      return;
    }
  }
  puVar34 = &DAT_100429f20;
  _swift_getKeyPath(&DAT_100429f20);
  pPVar22 = (Published *)&DAT_100429f48;
  _swift_getKeyPath(&DAT_100429f48);
  local_b8 = (char *)0x0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar22,&local_b8,unaff_x20,puVar34,pPVar22);
  puVar34 = &DAT_100429f68;
  _swift_getKeyPath(&DAT_100429f68);
  puVar13 = &DAT_100429f90;
  _swift_getKeyPath(&DAT_100429f90);
  ppcVar27 = &local_b8;
  pMVar26 = unaff_x20;
  Combine::Published::_modify_subscript();
  if (!SCARRY8(*(long *)pMVar26,1)) {
    *(long *)pMVar26 = *(long *)pMVar26 + 1;
    (*(code *)ppcVar27)(&local_b8,0);
    _swift_release(puVar34);
    _swift_release(puVar13);
    puVar34 = &DAT_100429ce8;
    _swift_getKeyPath(&DAT_100429ce8);
    pPVar22 = (Published *)&DAT_100429d10;
    _swift_getKeyPath(&DAT_100429d10);
    puVar13 = PTR___swiftEmptyArrayStorage_100524190;
    local_b8 = PTR___swiftEmptyArrayStorage_100524190;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar22,&local_b8,unaff_x20,puVar34,pPVar22);
    uVar24 = *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples);
    *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) = puVar13;
    _swift_bridgeObjectRelease(uVar24);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10019ad34);
  (*pcVar7)();
}

