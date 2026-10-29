// rea decompile_all
// name: FUN_1001a3b9c
// address: 0x1001a3b9c
// body: available
// range: 0x1001a3b9c-0x1001a414b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a409c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a3b9c(void)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  MainActor *pMVar16;
  undefined8 *puVar17;
  UnownedSerialExecutor UVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
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
  undefined8 local_68;
  undefined *puStack_60;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar1 = *(long *)(unaff_x22 + 0xd8);
  uVar21 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x20);
  FUN_10004384c(0,uVar6,*(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x28));
  FUN_1001a422c(uVar21,0x40ae000000000000,0x40a0e00000000000);
  _swift_bridgeObjectRelease(uVar6);
  (**(code **)(lVar1 + 0x30))(uVar21,1,uVar7);
  if ((int)uVar21 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    FUN_10002a29c(uVar7,&DAT_100553d90,&DAT_10041bf10);
    local_68 = 0x5b;
    puStack_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x40) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x20;
    FUN_100026df4();
    pcVar19 = (char *)0x0;
    puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0x50),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar7,uVar7);
    SVar29.bridgeObject = puVar10;
    SVar29.str = pcVar19;
    Swift::String::append(SVar22,SVar29);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar22.bridgeObject = (void *)0xe300000000000000;
    SVar22.str = (char *)0x5b205d;
    SVar30.bridgeObject = puVar10;
    SVar30.str = pcVar19;
    Swift::String::append(SVar22,SVar30);
    SVar23.bridgeObject = (void *)0xe500000000000000;
    SVar23.str = (char *)0x616964656d;
    SVar31.bridgeObject = puVar10;
    SVar31.str = pcVar19;
    Swift::String::append(SVar23,SVar31);
    SVar24.bridgeObject = (void *)0xe200000000000000;
    SVar24.str = (char *)0x205d;
    SVar32.bridgeObject = puVar10;
    SVar32.str = pcVar19;
    Swift::String::append(SVar24,SVar32);
    SVar25.bridgeObject = (void *)0x80000001004e0410;
    SVar25.str = (char *)0xd000000000000033;
    SVar33.bridgeObject = puVar10;
    SVar33.str = pcVar19;
    Swift::String::append(SVar25,SVar33);
    puVar4 = puStack_60;
    uVar7 = local_68;
    local_68 = 0x282020;
    puStack_60 = (undefined *)0xe300000000000000;
    SVar26.bridgeObject = (void *)0x80000001004e0450;
    SVar26.str = (char *)0xd000000000000021;
    SVar34.bridgeObject = puVar10;
    SVar34.str = pcVar19;
    Swift::String::append(SVar26,SVar34);
    SVar27.bridgeObject = (void *)0xe100000000000000;
    SVar27.str = (char *)0x3a;
    SVar35.bridgeObject = puVar10;
    SVar35.str = pcVar19;
    Swift::String::append(SVar27,SVar35);
    *(undefined8 *)(unaff_x22 + 0x60) = 0x5d5;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar36.bridgeObject = puVar10;
    SVar36.str = pcVar19;
    Swift::String::append(SVar22,SVar36);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    SVar28.bridgeObject = (void *)0xe100000000000000;
    SVar28.str = (char *)0x29;
    SVar37.bridgeObject = puVar10;
    SVar37.str = pcVar19;
    Swift::String::append(SVar28,SVar37);
    puVar10 = puStack_60;
    uVar6 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    qos.unknown = *(undefined **)(unaff_x22 + 0xc0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    puVar8 = &DAT_100530bb0;
    _swift_allocObject(&DAT_100530bb0,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar7;
    *(undefined **)(puVar8 + 0x18) = puVar4;
    *(undefined8 *)(puVar8 + 0x20) = uVar6;
    *(undefined **)(puVar8 + 0x28) = puVar10;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar8;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100530bc8;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar9.unknown = puVar4;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    *(undefined **)(unaff_x22 + 0x68) = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar10 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar21,unaff_x22 + 0x68,puVar10,puVar11,uVar20,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar3 + 8))(uVar21,uVar20);
    (**(code **)(lVar1 + 8))(qos.unknown,uVar2);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar21 = uVar20;
    FUN_100099338(uVar20,&DAT_100558f50);
    (**(code **)(lVar1 + 0x10))(uVar6,uVar21,uVar20);
    uVar5 = (uint)uVar6;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar12.unknown = puVar4;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar12);
    pOVar14 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar5 & 0xff);
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x80);
    if ((int)pOVar14 == 0) {
      _swift_bridgeObjectRelease_n(puVar4,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar20 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      local_68 = uVar20;
      FUN_10012dbb0(uVar7,puVar4,&local_68);
      *(undefined8 *)(puVar15 + 1) = uVar7;
      _swift_bridgeObjectRelease_n(puVar4,2);
      __os_log_impl(0x100000000,pOVar13,uVar5 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(uVar20);
      _swift_slowDealloc(uVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar1 + 8))(uVar6,uVar21);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001001a4118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0xd8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 200),
             *(undefined8 *)(unaff_x22 + 0xd0));
  pMVar16 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005246d8;
  pMVar16 = Swift::MainActor::get_shared(pMVar16,pMVar16);
  *(MainActor **)(unaff_x22 + 0xe8) = pMVar16;
  puVar17 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar18 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001a414c,UVar18.unknown,puVar17);
  return;
}

