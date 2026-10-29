// rea decompile_all
// name: FUN_1001444b8
// address: 0x1001444b8
// body: available
// range: 0x1001444b8-0x100144a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100144a24 to 0x10014595c FUN_10014595c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001444b8(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar5;
  DispatchWorkItemFlags DVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  Logger LVar10;
  ulong uVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
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
  
  if (*(char *)(unaff_x22 + 0x3af) == '\x01') {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x380);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x378);
    lVar24 = *(long *)(unaff_x22 + 0x370);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2c8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    _swift_release(uVar21);
    _swift_release(uVar23);
    FUN_100029548(uVar19,FUN_100137890);
    (**(code **)(lVar24 + 8))(uVar18,uVar20);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x000100144568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  local_68 = 0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x158) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x160) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x248) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x250) = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x248,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1);
  SVar32.bridgeObject = puVar9;
  SVar32.str = pcVar17;
  Swift::String::append(SVar25,SVar32);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  SVar33.bridgeObject = puVar9;
  SVar33.str = pcVar17;
  Swift::String::append(SVar25,SVar33);
  SVar26.bridgeObject = (void *)0xe300000000000000;
  SVar26.str = (char *)0x707061;
  SVar34.bridgeObject = puVar9;
  SVar34.str = pcVar17;
  Swift::String::append(SVar26,SVar34);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar35.bridgeObject = puVar9;
  SVar35.str = pcVar17;
  Swift::String::append(SVar27,SVar35);
  SVar28.bridgeObject = (void *)0x80000001004de7d0;
  SVar28.str = (char *)0x1000000000000047;
  SVar36.bridgeObject = puVar9;
  SVar36.str = pcVar17;
  Swift::String::append(SVar28,SVar36);
  puVar1 = puStack_60;
  uVar18 = local_68;
  local_68 = 0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar29.bridgeObject = (void *)0x80000001004de820;
  SVar29.str = (char *)0xd000000000000010;
  SVar37.bridgeObject = puVar9;
  SVar37.str = pcVar17;
  Swift::String::append(SVar29,SVar37);
  SVar30.bridgeObject = (void *)0xe100000000000000;
  SVar30.str = (char *)0x3a;
  SVar38.bridgeObject = puVar9;
  SVar38.str = pcVar17;
  Swift::String::append(SVar30,SVar38);
  *(undefined8 *)(unaff_x22 + 0x290) = 0x8c;
  SVar25 = Swift::CustomStringConvertible::get_description();
  SVar39.bridgeObject = puVar9;
  SVar39.str = pcVar17;
  Swift::String::append(SVar25,SVar39);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar31.bridgeObject = (void *)0xe100000000000000;
  SVar31.str = (char *)0x29;
  SVar40.bridgeObject = puVar9;
  SVar40.str = pcVar17;
  Swift::String::append(SVar31,SVar40);
  puVar9 = puStack_60;
  uVar19 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar3 = &DAT_10052e480;
  _swift_allocObject(&DAT_10052e480,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar18;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar19;
  *(undefined **)(puVar3 + 0x28) = puVar9;
  *(code **)(unaff_x22 + 0x128) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x130) = puVar3;
  *(undefined **)(unaff_x22 + 0x108) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x110) = 0x42000000;
  *(code **)(unaff_x22 + 0x118) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x120) = &DAT_10052e498;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x108));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar22 = *(long *)(DVar4.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar5.unknown = puVar1;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_1005244a8;
  lVar24 = *(long *)(DVar6.unknown + -8);
  uVar7 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  *(undefined **)(unaff_x22 + 0x268) = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar9,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar3 = puVar9;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x268,puVar9,puVar3,DVar6.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar24 + 8))(uVar7,DVar6.unknown);
  (**(code **)(lVar22 + 8))(qos.unknown,DVar4.unknown);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar10 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar10.unknown,&DAT_100558f50);
  lVar24 = *(long *)(LVar10.unknown + -8);
  uVar11 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar11);
  uVar7 = uVar11;
  (**(code **)(lVar24 + 0x10))();
  uVar2 = (uint)uVar7;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar12.unknown = puVar1;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar12);
  pOVar14 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar2 & 0xff);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    puVar15 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar19 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar15 = 0x8220102;
    local_68 = uVar19;
    FUN_10012dbb0(uVar18,puVar1,&local_68);
    *(undefined8 *)(puVar15 + 1) = uVar18;
    _swift_bridgeObjectRelease_n(puVar1,2);
    __os_log_impl(0x100000000,pOVar13,uVar2 & 0xff,"%{public}s",puVar15,0xc);
    FUN_100043f24(uVar19);
    _swift_slowDealloc(uVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar24 + 8))(uVar11,LVar10.unknown);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar24 = *(long *)(unaff_x22 + 0x370);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x368);
  _swift_task_dealloc(uVar11);
  FUN_100029548(uVar18,FUN_100137890);
  (**(code **)(lVar24 + 8))(uVar19,uVar20);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x378);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x380));
  _swift_task_dealloc(uVar18);
  plVar16 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x398) = plVar16;
  *plVar16 = unaff_x22;
  plVar16[1] = (long)FUN_100144a58;
  FUN_10014595c();
  return;
}

