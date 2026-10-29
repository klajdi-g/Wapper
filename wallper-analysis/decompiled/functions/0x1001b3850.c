// rea decompile_all
// name: FUN_1001b3850
// address: 0x1001b3850
// body: available
// range: 0x1001b3850-0x1001b4357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b3850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  String SVar1;
  long lVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  UUID UVar7;
  undefined *puVar8;
  long lVar9;
  Published *pPVar10;
  char *pcVar11;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  UUID UVar21;
  long extraout_x8;
  long extraout_x8_00;
  long lVar22;
  long extraout_x8_01;
  undefined *puVar23;
  long extraout_x8_02;
  long lVar24;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  void *pvVar26;
  long unaff_x20;
  PassthroughSubject *pPVar27;
  char *pcVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  long lVar32;
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
  code *apcStack_160 [2];
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  DispatchWorkItemFlags local_110;
  long local_108;
  undefined *puStack_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  void *local_c0;
  char local_b8;
  undefined7 uStack_b7;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  local_120 = param_2;
  local_118 = param_3;
  local_c0 = (void *)param_1;
  local_d0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar22 = (long)apcStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar22;
  local_e8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar22 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar22;
  puStack_100 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  puVar23 = (undefined *)(lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_10054ac38;
  local_110.unknown = puVar23;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)puVar23 - extraout_x8_02;
  lVar22 = 0;
  local_140 = lVar24;
  FUN_1001b7b68();
  local_128 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  local_c8 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar22 = lVar24 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  puVar6 = &DAT_10054a9c0;
  local_150 = lVar22;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar22 - extraout_x8_05;
  puVar23 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  lVar25 = lVar22 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12_00;
  local_138 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar25 - extraout_x12_02;
  puVar23 = &DAT_10042a740;
  _swift_getKeyPath(&DAT_10042a740);
  puVar8 = &DAT_10042a768;
  _swift_getKeyPath(&DAT_10042a768);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar23);
  _swift_release(puVar8);
  if (local_b8 == '\x01') {
    FUN_1001b6d00(0);
  }
  puVar23 = &DAT_10042a670;
  _swift_getKeyPath(&DAT_10042a670);
  puVar8 = &DAT_10042a698;
  _swift_getKeyPath(&DAT_10042a698);
  Combine::Published::_get_subscript(lVar32);
  _swift_release(puVar23);
  _swift_release(puVar8);
  lVar29 = (long)*(int *)(puVar6 + 0x30);
  FUN_1000087e4(lVar32,lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(local_c0,lVar22 + lVar29,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar31 = *(code **)(local_c8 + 0x30);
  lVar9 = lVar22;
  (*pcVar31)(lVar22,1,UVar7.unknown);
  if ((int)lVar9 == 1) {
    FUN_10002a29c(lVar32,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar29 = lVar22 + lVar29;
    (*pcVar31)(lVar29,1,UVar7.unknown);
    if ((int)lVar29 != 1) {
LAB_1001b3cb4:
      FUN_10002a29c(lVar22,&DAT_10054a9c0,&DAT_100422d20);
      goto LAB_1001b3cd0;
    }
    FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
    pvVar26 = local_c0;
  }
  else {
    FUN_1000087e4(lVar22,lVar25,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar9 = lVar22 + lVar29;
    (*pcVar31)(lVar9,1,UVar7.unknown);
    lVar3 = local_c8;
    lVar2 = local_150;
    if ((int)lVar9 == 1) {
      FUN_10002a29c(lVar32,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(local_c8 + 8))(lVar25,UVar7.unknown);
      goto LAB_1001b3cb4;
    }
    apcStack_160[1] = pcVar31;
    (**(code **)(local_c8 + 0x20))(local_150,lVar22 + lVar29,UVar7.unknown);
    puVar6 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar4 = Swift::Equatable::___infix(lVar25,lVar2,UVar7.unknown,puVar6);
    pcVar31 = apcStack_160[1];
    pcVar30 = *(code **)(lVar3 + 8);
    (*pcVar30)(lVar2,UVar7.unknown);
    FUN_10002a29c(lVar32,&DAT_10054a9c8,&DAT_10041bbe0);
    (*pcVar30)(lVar25,UVar7.unknown);
    FUN_10002a29c(lVar22,&DAT_10054a9c8,&DAT_10041bbe0);
    pvVar26 = local_c0;
    if (bVar4) goto LAB_1001b3d38;
LAB_1001b3cd0:
    pvVar26 = local_c0;
    pPVar10 = (Published *)&DAT_10042a670;
    _swift_getKeyPath(&DAT_10042a670);
    _swift_getKeyPath(&DAT_10042a698);
    lVar22 = local_138;
    FUN_1000087e4(pvVar26,local_138,&DAT_10054a9c8,&DAT_10041bbe0);
    _swift_retain();
    Combine::Published::_set_subscript(pPVar10,lVar22);
    FUN_1001b69c4();
  }
LAB_1001b3d38:
  puVar6 = &DAT_10041bbe0;
  pcVar28 = (char *)0x64656b694c;
  FUN_1001c0830(0,1);
  FUN_1001bbef0();
  pPVar27 = *(PassthroughSubject **)(unaff_x20 + _TtC7Wallper15PlaylistManager::activationChanged);
  FUN_1000087e4(pvVar26,lVar24,&DAT_10054a9c8,&DAT_10041bbe0);
  uVar20 = local_118;
  puVar13 = (undefined8 *)(lVar24 + *(int *)(local_128 + 0x14));
  *puVar13 = local_120;
  puVar13[1] = uVar20;
  _swift_bridgeObjectRetain();
  Combine::PassthroughSubject::send(pPVar27,lVar24);
  pcVar30 = FUN_1001b7b68;
  FUN_100029548(lVar24);
  local_b8 = '\0';
  uStack_b7 = 0;
  local_b0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x18,(_StringGuts)pcVar30);
  _swift_bridgeObjectRelease(local_b0);
  lVar24 = local_130;
  local_b8 = '\x16';
  uStack_b7 = 0x10000000000000;
  local_b0 = (void *)0x80000001004e0ad0;
  FUN_1000087e4(pvVar26,local_130,&DAT_10054a9c8);
  lVar32 = lVar24;
  UVar21 = UVar7;
  (*pcVar31)(lVar24,1);
  lVar25 = local_c8;
  lVar22 = local_148;
  if ((int)lVar32 != 1) {
    (**(code **)(local_c8 + 0x20))(local_148,lVar24,UVar7.unknown);
    lVar24 = local_140;
    FUN_1001b6e74(local_140,lVar22);
    (**(code **)(lVar25 + 8))(lVar22,UVar7.unknown);
    pcVar11 = (char *)0x0;
    FUN_10025ee04();
    lVar22 = lVar24;
    UVar21.unknown = pcVar11;
    (**(code **)(*(long *)(pcVar11 + -8) + 0x30))(lVar24,1);
    if ((int)lVar22 != 1) {
      pcVar28 = *(char **)(lVar24 + *(int *)(pcVar11 + 0x14));
      pvVar26 = (void *)((undefined8 *)(lVar24 + *(int *)(pcVar11 + 0x14)))[1];
      _swift_bridgeObjectRetain(pvVar26);
      FUN_100029548(lVar24,FUN_10025ee04);
      goto LAB_1001b3fa4;
    }
    UVar21.unknown = &DAT_10041e8e0;
    FUN_10002a29c(lVar24,&DAT_10054ac38);
  }
  pvVar26 = (void *)0xe500000000000000;
LAB_1001b3fa4:
  SVar33.bridgeObject = pvVar26;
  SVar33.str = pcVar28;
  SVar37.bridgeObject = puVar6;
  SVar37.str = UVar21.unknown;
  Swift::String::append(SVar33,SVar37);
  _swift_bridgeObjectRelease(pvVar26);
  puVar6 = local_b0;
  SVar1.str._1_7_ = uStack_b7;
  SVar1.str._0_1_ = local_b8;
  SVar1.bridgeObject = local_b0;
  local_b8 = '[';
  uStack_b7 = 0;
  local_b0 = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar28 = (char *)0x0;
  puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar26,pvVar26);
  SVar38.bridgeObject = puVar23;
  SVar38.str = pcVar28;
  Swift::String::append(SVar33,SVar38);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x5b205d;
  SVar39.bridgeObject = puVar23;
  SVar39.str = pcVar28;
  Swift::String::append(SVar34,SVar39);
  SVar35.bridgeObject = (void *)0xe300000000000000;
  SVar35.str = (char *)0x707061;
  SVar40.bridgeObject = puVar23;
  SVar40.str = pcVar28;
  Swift::String::append(SVar35,SVar40);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar41.bridgeObject = puVar23;
  SVar41.str = pcVar28;
  Swift::String::append(SVar36,SVar41);
  local_c0 = puVar6;
  SVar42.bridgeObject = puVar23;
  SVar42.str = pcVar28;
  Swift::String::append(SVar1,SVar42);
  puVar6 = local_b0;
  uVar20 = CONCAT71(uStack_b7,local_b8);
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar23 = &DAT_100531698;
  _swift_allocObject(&DAT_100531698,0x30,7);
  *(undefined8 *)(puVar23 + 0x10) = uVar20;
  *(undefined **)(puVar23 + 0x18) = puVar6;
  *(undefined8 *)(puVar23 + 0x20) = 0;
  *(undefined8 *)(puVar23 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8 = (char)PTR___NSConcreteStackBlock_100521110;
  uStack_b7 = (undefined7)((ulong)PTR___NSConcreteStackBlock_100521110 >> 8);
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_1005316b0;
  local_90 = puVar23;
  pvVar26 = __Block_copy(&local_b8);
  DVar12.unknown = puVar6;
  _swift_bridgeObjectRetain();
  qos.unknown = local_110.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar12);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar13 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar23 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar14 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  puVar8 = local_e8;
  lVar22 = local_f8;
  Swift::SetAlgebra::_init(local_f8,&local_78,puVar23,puVar14,local_e8,puVar13);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar26);
  (**(code **)(local_f0 + 8))(lVar22,puVar8);
  (**(code **)(local_108 + 8))(qos.unknown,puStack_100);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar23 = local_d0;
  puVar8 = local_d0;
  FUN_100099338(local_d0,&DAT_100558f50);
  lVar24 = local_d8;
  lVar22 = local_e0;
  lVar25 = local_e0;
  (**(code **)(local_d8 + 0x10))(local_e0,puVar8,puVar23);
  uVar5 = (uint)lVar25;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar15.unknown = puVar6;
  _swift_bridgeObjectRetain();
  pOVar16 = os::Logger::get_logObject(LVar15);
  pOVar17 = pOVar16;
  _os_log_type_enabled(pOVar16,uVar5 & 0xff);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(puVar6,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar19 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_b8 = (char)uVar19;
    uStack_b7 = (undefined7)((ulong)uVar19 >> 8);
    *puVar18 = 0x8220102;
    FUN_10012dbb0(uVar20,puVar6,&local_b8);
    *(undefined8 *)(puVar18 + 1) = uVar20;
    _swift_bridgeObjectRelease_n(puVar6,2);
    __os_log_impl(0x100000000,pOVar16,uVar5 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(uVar19);
    _swift_slowDealloc(uVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar24 + 8))(lVar22,puVar23);
  _swift_bridgeObjectRelease(local_c0);
  return;
}

