// rea decompile_all
// name: FUN_100134fbc
// address: 0x100134fbc
// body: available
// range: 0x100134fbc-0x10013567f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100135548 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100134fbc(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  DispatchWorkItemFlags qos;
  undefined *puVar5;
  uint uVar6;
  JSONDecoder *pJVar7;
  undefined *puVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  undefined *puVar11;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  MainActor *pMVar18;
  undefined8 *puVar19;
  UnownedSerialExecutor UVar20;
  _StringGuts _Var21;
  char *pcVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  MainActor *pMVar26;
  long unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
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
  String SVar46;
  String SVar47;
  char *local_70;
  undefined *local_68;
  undefined8 uVar12;
  
  lVar3 = *(long *)(unaff_x22 + 0x1e0);
  pJVar7 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
  pJVar7 = Foundation::JSONDecoder::init(pJVar7);
  FUN_1001380bc();
  puVar23 = &DAT_10052daf0;
  Foundation::JSONDecoder::_decode(pJVar7,(Data)0x10052daf0);
  if (lVar3 == 0) {
    _swift_release(pJVar7);
    pMVar18 = *(MainActor **)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x40);
    *(MainActor **)(unaff_x22 + 0x1f0) = pMVar18;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar12;
    *(ulong *)(unaff_x22 + 0x200) = *(ulong *)(unaff_x22 + 0x60);
    pMVar26 = *(MainActor **)(unaff_x22 + 0x68);
    *(MainActor **)(unaff_x22 + 0x208) = pMVar26;
    if (pMVar26 == (MainActor *)0x0) {
      FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8));
    }
    else {
      uVar1 = *(ulong *)(unaff_x22 + 0x60) & 0xffffffffffff;
      if (((ulong)pMVar26 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pMVar26 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        pMVar18 = Swift::MainActor::typeMetadataAccessor();
        puVar23 = PTR_typeMetadataAccessor_1005246d8;
        _swift_bridgeObjectRetain();
        pMVar18 = Swift::MainActor::get_shared(pMVar18,pMVar26);
        *(MainActor **)(unaff_x22 + 0x210) = pMVar18;
        puVar19 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        UVar20 = Swift::Actor::get_unownedExecutor();
        _swift_task_switch(FUN_100135680,UVar20.unknown,puVar19);
        return;
      }
      FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8));
      _swift_bridgeObjectRelease(pMVar18);
      pMVar18 = pMVar26;
    }
    _swift_bridgeObjectRelease(pMVar18);
    _swift_bridgeObjectRelease(uVar12);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar3 = *(long *)(unaff_x22 + 0x1a8);
    (**(code **)(*(long *)(unaff_x22 + 0x188) + 8))
              (*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x180));
    (**(code **)(lVar3 + 8))(uVar30,uVar12);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1b8);
    _Var21.unknown = *(undefined **)(unaff_x22 + 0x1a0);
    lVar4 = *(long *)(unaff_x22 + 0x1a8);
    lVar2 = *(long *)(unaff_x22 + 0x188);
    uVar25 = *(undefined8 *)(unaff_x22 + 400);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x180);
    _swift_release(pJVar7);
    FUN_100093624(uVar12,uVar30);
    (**(code **)(lVar2 + 8))(uVar25,uVar29);
    (**(code **)(lVar4 + 8))(uVar24);
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2f,_Var21);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0x100000000000002d;
    local_68 = (void *)0x80000001004de180;
    pcVar17 = (char *)(unaff_x22 + 0xa0);
    _swift_getErrorValue(lVar3,unaff_x22 + 0x108);
    SVar31 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar9 = SVar31.bridgeObject;
    SVar38.bridgeObject = puVar23;
    SVar38.str = pcVar17;
    Swift::String::append(SVar31,SVar38);
    _swift_bridgeObjectRelease(pvVar9);
    puVar23 = local_68;
    SVar31.bridgeObject = local_68;
    SVar31.str = local_70;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x4e524157;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 200) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar22 = (char *)0x0;
    puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 200),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
    SVar39.bridgeObject = puVar11;
    SVar39.str = pcVar22;
    Swift::String::append(SVar32,SVar39);
    _swift_bridgeObjectRelease(SVar32.bridgeObject);
    SVar32.bridgeObject = (void *)0xe300000000000000;
    SVar32.str = (char *)0x5b205d;
    SVar40.bridgeObject = puVar11;
    SVar40.str = pcVar22;
    Swift::String::append(SVar32,SVar40);
    SVar33.bridgeObject = (void *)0xe300000000000000;
    SVar33.str = (char *)0x707061;
    SVar41.bridgeObject = puVar11;
    SVar41.str = pcVar22;
    Swift::String::append(SVar33,SVar41);
    SVar34.bridgeObject = (void *)0xe200000000000000;
    SVar34.str = (char *)0x205d;
    SVar42.bridgeObject = puVar11;
    SVar42.str = pcVar22;
    Swift::String::append(SVar34,SVar42);
    SVar43.bridgeObject = puVar11;
    SVar43.str = pcVar22;
    Swift::String::append(SVar31,SVar43);
    puVar5 = local_68;
    pcVar17 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar35.bridgeObject = (void *)0x80000001004de1b0;
    SVar35.str = (char *)0xd000000000000013;
    SVar44.bridgeObject = puVar11;
    SVar44.str = pcVar22;
    Swift::String::append(SVar35,SVar44);
    SVar36.bridgeObject = (void *)0xe100000000000000;
    SVar36.str = (char *)0x3a;
    SVar45.bridgeObject = puVar11;
    SVar45.str = pcVar22;
    Swift::String::append(SVar36,SVar45);
    *(undefined8 *)(unaff_x22 + 0x110) = 0x77;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar46.bridgeObject = puVar11;
    SVar46.str = pcVar22;
    Swift::String::append(SVar31,SVar46);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar37.bridgeObject = (void *)0xe100000000000000;
    SVar37.str = (char *)0x29;
    SVar47.bridgeObject = puVar11;
    SVar47.str = pcVar22;
    Swift::String::append(SVar37,SVar47);
    puVar11 = local_68;
    pcVar22 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar2 = *(long *)(unaff_x22 + 0x170);
    qos.unknown = *(undefined **)(unaff_x22 + 0x178);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x150);
    lVar4 = *(long *)(unaff_x22 + 0x158);
    puVar8 = &DAT_10052d958;
    _swift_allocObject(&DAT_10052d958,0x30,7);
    *(char **)(puVar8 + 0x10) = pcVar17;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    *(char **)(puVar8 + 0x20) = pcVar22;
    *(undefined **)(puVar8 + 0x28) = puVar11;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar8;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052d970;
    pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar10.unknown = puVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined **)(unaff_x22 + 0x118) = PTR___swiftEmptyArrayStorage_100524190;
    puVar19 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar11 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = puVar11;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar12,unaff_x22 + 0x118,puVar11,puVar8,uVar30,puVar19);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar9);
    (**(code **)(lVar4 + 8))(uVar12,uVar30);
    (**(code **)(lVar2 + 8))(qos.unknown,uVar25);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar2 = *(long *)(unaff_x22 + 0x138);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar30 = uVar25;
    FUN_100099338(uVar25,&DAT_100558f50);
    (**(code **)(lVar2 + 0x10))(uVar12,uVar30,uVar25);
    uVar6 = (uint)uVar12;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar13.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar13);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar6 & 0xff);
    lVar2 = *(long *)(unaff_x22 + 0x138);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x130);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar22 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      local_70 = pcVar22;
      FUN_10012dbb0(pcVar17,puVar5,&local_70);
      *(char **)(puVar16 + 1) = pcVar17;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar14,uVar6 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(pcVar22);
      _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar2 + 8))(uVar12,uVar30);
    _swift_bridgeObjectRelease(puVar23);
    _swift_errorRelease(lVar3);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar30 = *(undefined8 *)(unaff_x22 + 400);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010013564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

