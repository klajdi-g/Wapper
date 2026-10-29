// rea decompile_all
// name: FUN_1001a684c
// address: 0x1001a684c
// body: available
// range: 0x1001a684c-0x1001a6e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a6dd0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a684c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  DispatchQoS DVar6;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar7;
  DispatchWorkItemFlags DVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  ulong uVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  MainActor *pMVar20;
  UnownedSerialExecutor UVar21;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  long unaff_x22;
  long lVar25;
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
  String SVar44;
  char *local_68;
  undefined *puStack_60;
  
  uVar24 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
  local_68 = (char *)0x0;
  puStack_60 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,param_2);
  SVar27.bridgeObject = (void *)0x80000001004e07b0;
  SVar27.str = (char *)0x1000000000000036;
  SVar34.bridgeObject = param_4;
  SVar34.str = param_3;
  Swift::String::append(SVar27,SVar34);
  pcVar19 = (char *)(unaff_x22 + 0x40);
  _swift_getErrorValue(uVar24,unaff_x22 + 0x78);
  SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar5 = SVar26.bridgeObject;
  SVar35.bridgeObject = param_4;
  SVar35.str = pcVar19;
  Swift::String::append(SVar26,SVar35);
  _swift_bridgeObjectRelease(pvVar5);
  puVar1 = puStack_60;
  SVar26.bridgeObject = puStack_60;
  SVar26.str = local_68;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
  FUN_100026df4();
  pcVar22 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar27 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x68),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar5,pvVar5);
  SVar36.bridgeObject = puVar11;
  SVar36.str = pcVar22;
  Swift::String::append(SVar27,SVar36);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar28.bridgeObject = (void *)0xe300000000000000;
  SVar28.str = (char *)0x5b205d;
  SVar37.bridgeObject = puVar11;
  SVar37.str = pcVar22;
  Swift::String::append(SVar28,SVar37);
  SVar29.bridgeObject = (void *)0xe500000000000000;
  SVar29.str = (char *)0x616964656d;
  SVar38.bridgeObject = puVar11;
  SVar38.str = pcVar22;
  Swift::String::append(SVar29,SVar38);
  SVar30.bridgeObject = (void *)0xe200000000000000;
  SVar30.str = (char *)0x205d;
  SVar39.bridgeObject = puVar11;
  SVar39.str = pcVar22;
  Swift::String::append(SVar30,SVar39);
  SVar40.bridgeObject = puVar11;
  SVar40.str = pcVar22;
  Swift::String::append(SVar26,SVar40);
  puVar2 = puStack_60;
  pcVar19 = local_68;
  local_68 = (char *)0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar31.bridgeObject = (void *)0x80000001004e07f0;
  SVar31.str = (char *)0xd00000000000003b;
  SVar41.bridgeObject = puVar11;
  SVar41.str = pcVar22;
  Swift::String::append(SVar31,SVar41);
  SVar32.bridgeObject = (void *)0xe100000000000000;
  SVar32.str = (char *)0x3a;
  SVar42.bridgeObject = puVar11;
  SVar42.str = pcVar22;
  Swift::String::append(SVar32,SVar42);
  *(undefined8 *)(unaff_x22 + 0x80) = 0x696;
  SVar26 = Swift::CustomStringConvertible::get_description();
  SVar43.bridgeObject = puVar11;
  SVar43.str = pcVar22;
  Swift::String::append(SVar26,SVar43);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x29;
  SVar44.bridgeObject = puVar11;
  SVar44.str = pcVar22;
  Swift::String::append(SVar33,SVar44);
  puVar11 = puStack_60;
  pcVar22 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar4 = &DAT_100530ed0;
  _swift_allocObject(&DAT_100530ed0,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar19;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(char **)(puVar4 + 0x20) = pcVar22;
  *(undefined **)(puVar4 + 0x28) = puVar11;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100530ee8;
  pvVar5 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar23 = *(long *)(DVar6.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar7.unknown = puVar2;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_1005244a8;
  lVar25 = *(long *)(DVar8.unknown + -8);
  uVar9 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar11,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar12 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar9,unaff_x22 + 0x88,puVar11,puVar12,DVar8.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar5);
  (**(code **)(lVar25 + 8))(uVar9,DVar8.unknown);
  (**(code **)(lVar23 + 8))(qos.unknown,DVar6.unknown);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar13 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar13.unknown,&DAT_100558f50);
  lVar23 = *(long *)(LVar13.unknown + -8);
  uVar14 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar14);
  uVar9 = uVar14;
  (**(code **)(lVar23 + 0x10))();
  uVar3 = (uint)uVar9;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar15.unknown = puVar2;
  _swift_bridgeObjectRetain();
  pOVar16 = os::Logger::get_logObject(LVar15);
  pOVar17 = pOVar16;
  _os_log_type_enabled(pOVar16,uVar3 & 0xff);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(puVar2,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar22 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar18 = 0x8220102;
    local_68 = pcVar22;
    FUN_10012dbb0(pcVar19,puVar2,&local_68);
    *(char **)(puVar18 + 1) = pcVar19;
    _swift_bridgeObjectRelease_n(puVar2,2);
    __os_log_impl(0x100000000,pOVar16,uVar3 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(pcVar22);
    _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar23 + 8))(uVar14,LVar13.unknown);
  _swift_bridgeObjectRelease(puVar1);
  _swift_task_dealloc(uVar14);
  pMVar20 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar20 = Swift::MainActor::get_shared(pMVar20,pMVar20);
  *(MainActor **)(unaff_x22 + 0xd8) = pMVar20;
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar21 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001a6e04,UVar21.unknown,puVar10);
  return;
}

