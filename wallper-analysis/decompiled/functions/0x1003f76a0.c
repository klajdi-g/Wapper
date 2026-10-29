// rea decompile_all
// name: FUN_1003f76a0
// address: 0x1003f76a0
// body: available
// range: 0x1003f76a0-0x1003f805f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f76a0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  TaskPriority TVar15;
  MainActor *this;
  MainActor *pMVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar18;
  MainActor *pMVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  DispatchWorkItemFlags qos;
  code *pcVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
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
  undefined1 auStack_180 [8];
  undefined *local_178;
  undefined *local_170;
  code *local_168;
  code *local_160;
  code *local_158;
  undefined8 *local_150;
  undefined *local_148;
  undefined8 *local_140;
  long local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined1 *local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
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
  
  puVar3 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_100 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar18 = (long)(auStack_180 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar18 - extraout_x12;
  local_e8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar20 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar24 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar23 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    local_e0 = (undefined *)0x5b;
    local_d8 = (undefined *)0xe100000000000000;
    local_a0 = (undefined *)0x4f464e49;
    uStack_98 = 0xe400000000000000;
    local_b0 = 0x20;
    uStack_a8 = 0xe100000000000000;
    local_128 = lVar18;
    local_120 = lVar21;
    local_118 = lVar24;
    local_110 = auStack_180 + -extraout_x8;
    local_108 = param_2;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
    local_138 = param_2;
    SVar26 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,param_2,param_2);
    SVar34.bridgeObject = puVar3;
    SVar34.str = pcVar17;
    Swift::String::append(SVar26,SVar34);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar26.bridgeObject = (void *)0xe300000000000000;
    SVar26.str = (char *)0x5b205d;
    SVar35.bridgeObject = puVar3;
    SVar35.str = pcVar17;
    Swift::String::append(SVar26,SVar35);
    SVar27.bridgeObject = (void *)0xe900000000000065;
    SVar27.str = (char *)0x6c6379636566696c;
    SVar36.bridgeObject = puVar3;
    SVar36.str = pcVar17;
    Swift::String::append(SVar27,SVar36);
    SVar28.bridgeObject = (void *)0xe200000000000000;
    SVar28.str = (char *)0x205d;
    SVar37.bridgeObject = puVar3;
    SVar37.str = pcVar17;
    Swift::String::append(SVar28,SVar37);
    SVar29.bridgeObject = (void *)0x80000001004e7170;
    SVar29.str = (char *)0x1000000000000035;
    SVar38.bridgeObject = puVar3;
    SVar38.str = pcVar17;
    Swift::String::append(SVar29,SVar38);
    puVar14 = local_d8;
    puVar3 = local_e0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    uVar22 = DAT_100559010;
    puVar4 = &DAT_10053e890;
    _swift_allocObject(&DAT_10053e890,0x30,7);
    local_178 = puVar3;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined **)(puVar4 + 0x18) = puVar14;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0xe000000000000000;
    local_c0 = thunk_FUN_100099310;
    local_e0 = PTR___NSConcreteStackBlock_100521110;
    local_d8 = (undefined *)0x42000000;
    local_d0 = FUN_1000c7e7c;
    puStack_c8 = &DAT_10053e8a8;
    local_b8 = puVar4;
    pvVar5 = __Block_copy(&local_e0);
    DVar6.unknown = puVar14;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar7 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar3 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar4 = local_e8;
    lVar18 = local_118;
    local_150 = puVar8;
    local_148 = puVar3;
    local_140 = puVar7;
    Swift::SetAlgebra::_init(&local_a0,puVar3,puVar8,local_e8,puVar7);
    local_130 = uVar22;
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar5);
    local_158 = *(code **)(lVar20 + 8);
    (*local_158)(lVar18,puVar4);
    local_160 = *(code **)(lVar23 + 8);
    (*local_160)(qos.unknown,local_f0);
    _swift_release(local_b8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar3 = local_f8;
    puVar4 = local_f8;
    FUN_100099338(local_f8,&DAT_100558f50);
    lVar21 = local_100;
    lVar20 = local_120;
    local_168 = *(code **)(local_100 + 0x10);
    lVar23 = local_120;
    local_170 = puVar4;
    (*local_168)(local_120,puVar4,puVar3);
    uVar2 = (uint)lVar23;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar9.unknown = puVar14;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar9);
    pOVar11 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar2 & 0xff);
    if ((int)pOVar11 == 0) {
      _swift_bridgeObjectRelease_n(puVar14,2);
    }
    else {
      puVar12 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar13 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar12 = 0x8220102;
      puVar4 = local_178;
      local_e0 = puVar13;
      FUN_10012dbb0(local_178,puVar14,&local_e0);
      *(undefined **)(puVar12 + 1) = puVar4;
      _swift_bridgeObjectRelease_n(puVar14,2);
      __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar12,0xc);
      FUN_100043f24(puVar13);
      _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    pcVar25 = *(code **)(lVar21 + 8);
    (*pcVar25)(lVar20,puVar3);
    lVar20 = local_108;
    uVar22 = *(undefined8 *)(local_108 + _TtC7Wallper11AppDelegate::videoLibrary);
    puVar14 = &DAT_100436ca8;
    _swift_getKeyPath(&DAT_100436ca8);
    puVar4 = &DAT_100436cd0;
    _swift_getKeyPath(&DAT_100436cd0);
    Combine::Published::_get_subscript(&local_e0,uVar22,puVar14,puVar4);
    _swift_release(puVar14);
    _swift_release(puVar4);
    if (((ulong)local_e0 & 1) == 0) {
      local_e0 = (undefined *)0x5b;
      local_d8 = (undefined *)0xe100000000000000;
      local_a0 = (undefined *)0x4f464e49;
      uStack_98 = 0xe400000000000000;
      local_b0 = 0x20;
      uStack_a8 = 0xe100000000000000;
      pcVar17 = (char *)0x0;
      puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar26 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,local_138,local_138);
      SVar39.bridgeObject = puVar14;
      SVar39.str = pcVar17;
      Swift::String::append(SVar26,SVar39);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar30.bridgeObject = (void *)0xe300000000000000;
      SVar30.str = (char *)0x5b205d;
      SVar40.bridgeObject = puVar14;
      SVar40.str = pcVar17;
      Swift::String::append(SVar30,SVar40);
      SVar31.bridgeObject = (void *)0xe300000000000000;
      SVar31.str = (char *)0x707061;
      SVar41.bridgeObject = puVar14;
      SVar41.str = pcVar17;
      Swift::String::append(SVar31,SVar41);
      SVar32.bridgeObject = (void *)0xe200000000000000;
      SVar32.str = (char *)0x205d;
      SVar42.bridgeObject = puVar14;
      SVar42.str = pcVar17;
      Swift::String::append(SVar32,SVar42);
      SVar33.bridgeObject = (void *)0x80000001004ddd30;
      SVar33.str = (char *)0xd000000000000034;
      SVar43.bridgeObject = puVar14;
      SVar43.str = pcVar17;
      Swift::String::append(SVar33,SVar43);
      puVar13 = local_d8;
      puVar4 = local_e0;
      puVar14 = &DAT_10053e8e0;
      _swift_allocObject(&DAT_10053e8e0,0x30,7);
      *(undefined **)(puVar14 + 0x10) = puVar4;
      *(undefined **)(puVar14 + 0x18) = puVar13;
      *(undefined8 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + 0x28) = 0xe000000000000000;
      local_c0 = thunk_FUN_100099310;
      local_e0 = PTR___NSConcreteStackBlock_100521110;
      local_d8 = (undefined *)0x42000000;
      local_d0 = FUN_1000c7e7c;
      puStack_c8 = &DAT_10053e8f8;
      local_b8 = puVar14;
      pvVar5 = __Block_copy(&local_e0);
      DVar6.unknown = puVar13;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar6);
      puVar14 = local_e8;
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      Swift::SetAlgebra::_init(lVar18,&local_a0,local_148,local_150,local_e8,local_140);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
      (*local_158)(lVar18,puVar14);
      (*local_160)(qos.unknown,local_f0);
      _swift_release(local_b8);
      lVar18 = local_128;
      lVar20 = local_128;
      (*local_168)(local_128,local_170,puVar3);
      uVar2 = (uint)lVar20;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar9.unknown = puVar13;
      _swift_bridgeObjectRetain();
      pOVar10 = os::Logger::get_logObject(LVar9);
      pOVar11 = pOVar10;
      _os_log_type_enabled(pOVar10,uVar2 & 0xff);
      if ((int)pOVar11 == 0) {
        _swift_bridgeObjectRelease_n(puVar13,2);
      }
      else {
        puVar12 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar14 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar12 = 0x8220102;
        local_e0 = puVar14;
        FUN_10012dbb0(puVar4,puVar13,&local_e0);
        *(undefined **)(puVar12 + 1) = puVar4;
        _swift_bridgeObjectRelease_n(puVar13,2);
        __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar12,0xc);
        FUN_100043f24(puVar14);
        _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
      }
      (*pcVar25)(lVar18,puVar3);
      FUN_100270f98();
      lVar20 = local_108;
    }
    uVar22 = *(undefined8 *)(lVar20 + _TtC7Wallper11AppDelegate::licenseManager);
    _swift_retain(uVar22);
    FUN_100148ae4();
    _swift_release(uVar22);
    pMVar19 = *(MainActor **)(lVar20 + _TtC7Wallper11AppDelegate::applicationManager);
    TVar15 = Swift::TaskPriority::typeMetadataAccessor();
    puVar1 = local_110;
    pcVar25 = *(code **)(*(long *)(TVar15.unknown + -8) + 0x38);
    (*pcVar25)(local_110,1,1,TVar15.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar3 = PTR_typeMetadataAccessor_1005246d8;
    pMVar16 = pMVar19;
    _swift_retain();
    pMVar16 = Swift::MainActor::get_shared(this,pMVar16);
    puVar7 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar3 = &DAT_10053e930;
    _swift_allocObject(&DAT_10053e930,0x28,7);
    *(MainActor **)(puVar3 + 0x10) = pMVar16;
    *(undefined8 **)(puVar3 + 0x18) = puVar7;
    *(MainActor **)(puVar3 + 0x20) = pMVar19;
    FUN_1001b1e74(0,0,puVar1,&DAT_100436cf0,puVar3);
    _swift_release();
    (*pcVar25)(puVar1,1,1,TVar15.unknown);
    puVar3 = &DAT_10053e958;
    _swift_allocObject(&DAT_10053e958,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(long *)(puVar3 + 0x20) = lVar20;
    FUN_1001b1e74(0,0,puVar1,&DAT_100436d00,puVar3);
    _swift_release();
  }
  return;
}

