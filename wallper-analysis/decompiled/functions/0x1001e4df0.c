// rea decompile_all
// name: FUN_1001e4df0
// address: 0x1001e4df0
// body: available
// range: 0x1001e4df0-0x1001e53cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e4ee8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e4df0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar8;
  DispatchWorkItemFlags DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  ulong uVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  URL UVar20;
  char *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x22;
  long lVar24;
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
  String SVar38;
  String SVar39;
  String SVar40;
  undefined8 local_68;
  undefined *puStack_60;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x2c8) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x2d0) & 0x2000000000000000) != 0) {
    uVar3 = *(ulong *)(unaff_x22 + 0x2d0) >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    puVar2 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    lVar22 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
    *(long *)(unaff_x22 + 0x2e8) = lVar22;
    uVar3 = lVar22 + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x2f0) = uVar3;
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_1005246d8;
    *(MainActor **)(unaff_x22 + 0x2f8) = pMVar4;
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
    *(MainActor **)(unaff_x22 + 0x300) = pMVar4;
    puVar10 = &DAT_100558b80;
    FUN_100047f94(&DAT_100558b80,0xff,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    *(undefined8 **)(unaff_x22 + 0x308) = puVar10;
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1001e53cc,UVar5.unknown,puVar10);
    return;
  }
  local_68 = 0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x1f8) = 0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x200) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x208) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x1f0) = 0x20;
  FUN_100026df4();
  pcVar21 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x1f0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1);
  SVar32.bridgeObject = puVar11;
  SVar32.str = pcVar21;
  Swift::String::append(SVar25,SVar32);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  SVar33.bridgeObject = puVar11;
  SVar33.str = pcVar21;
  Swift::String::append(SVar25,SVar33);
  SVar26.bridgeObject = (void *)0xe700000000000000;
  SVar26.str = (char *)0x7972617262696c;
  SVar34.bridgeObject = puVar11;
  SVar34.str = pcVar21;
  Swift::String::append(SVar26,SVar34);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar35.bridgeObject = puVar11;
  SVar35.str = pcVar21;
  Swift::String::append(SVar27,SVar35);
  SVar28.bridgeObject = (void *)0x80000001004e0e30;
  SVar28.str = (char *)0xd000000000000018;
  SVar36.bridgeObject = puVar11;
  SVar36.str = pcVar21;
  Swift::String::append(SVar28,SVar36);
  puVar2 = puStack_60;
  uVar23 = local_68;
  local_68 = 0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar29.bridgeObject = (void *)0x80000001004e0d40;
  SVar29.str = (char *)0xd000000000000019;
  SVar37.bridgeObject = puVar11;
  SVar37.str = pcVar21;
  Swift::String::append(SVar29,SVar37);
  SVar30.bridgeObject = (void *)0xe100000000000000;
  SVar30.str = (char *)0x3a;
  SVar38.bridgeObject = puVar11;
  SVar38.str = pcVar21;
  Swift::String::append(SVar30,SVar38);
  *(undefined8 *)(unaff_x22 + 0x2a0) = 0x139;
  SVar25 = Swift::CustomStringConvertible::get_description();
  SVar39.bridgeObject = puVar11;
  SVar39.str = pcVar21;
  Swift::String::append(SVar25,SVar39);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar31.bridgeObject = (void *)0xe100000000000000;
  SVar31.str = (char *)0x29;
  SVar40.bridgeObject = puVar11;
  SVar40.str = pcVar21;
  Swift::String::append(SVar31,SVar40);
  puVar11 = puStack_60;
  uVar19 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar6 = &DAT_100531dc0;
  _swift_allocObject(&DAT_100531dc0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar23;
  *(undefined **)(puVar6 + 0x18) = puVar2;
  *(undefined8 *)(puVar6 + 0x20) = uVar19;
  *(undefined **)(puVar6 + 0x28) = puVar11;
  *(code **)(unaff_x22 + 0x80) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x88) = puVar6;
  *(undefined **)(unaff_x22 + 0x60) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x42000000;
  *(code **)(unaff_x22 + 0x70) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x78) = &DAT_100531dd8;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x60));
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar22 = *(long *)(DVar7.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar8.unknown = puVar2;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  DVar9 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_1005244a8;
  lVar24 = *(long *)(DVar9.unknown + -8);
  uVar3 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  *(undefined **)(unaff_x22 + 0x2b0) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_100047f94(&DAT_100553db0,0xff,puVar11,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar12 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar3,unaff_x22 + 0x2b0,puVar11,puVar12,DVar9.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar24 + 8))(uVar3,DVar9.unknown);
  (**(code **)(lVar22 + 8))(qos.unknown,DVar7.unknown);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar13 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar13.unknown,&DAT_100558f50);
  lVar22 = *(long *)(LVar13.unknown + -8);
  uVar14 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar14);
  uVar3 = uVar14;
  (**(code **)(lVar22 + 0x10))();
  uVar1 = (uint)uVar3;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar15.unknown = puVar2;
  _swift_bridgeObjectRetain();
  pOVar16 = os::Logger::get_logObject(LVar15);
  pOVar17 = pOVar16;
  _os_log_type_enabled(pOVar16,uVar1 & 0xff);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(puVar2,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar19 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar18 = 0x8220102;
    local_68 = uVar19;
    FUN_10012dbb0(uVar23,puVar2,&local_68);
    *(undefined8 *)(puVar18 + 1) = uVar23;
    _swift_bridgeObjectRelease_n(puVar2,2);
    __os_log_impl(0x100000000,pOVar16,uVar1 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(uVar19);
    _swift_slowDealloc(uVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar22 + 8))(uVar14,LVar13.unknown);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_task_dealloc(uVar14);
  UVar20 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar20.unknown + -8) + 0x38))(uVar23,1,1,UVar20.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001001e5398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

