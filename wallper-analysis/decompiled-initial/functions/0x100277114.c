// rea decompile_all
// name: FUN_100277114
// address: 0x100277114
// body: available
// range: 0x100277114-0x1002776e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027769c to 0x1001e4dc0 FUN_1001e4dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100277114(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

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
  undefined8 *puVar10;
  Logger LVar11;
  ulong uVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  long *plVar18;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  char *pcVar22;
  long unaff_x22;
  long lVar23;
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
  String SVar38;
  String SVar39;
  String SVar40;
  char *local_68;
  undefined *local_60;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e8);
  local_68 = (char *)0x0;
  pcVar22 = ((String *)(unaff_x22 + 0x208))->str;
  SVar29 = *(String *)(unaff_x22 + 0x208);
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x23,param_2);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000021;
  local_60 = (void *)0x80000001004e33e0;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar29,SVar31);
  puVar17 = local_60;
  SVar29.bridgeObject = local_60;
  SVar29.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0x4e524157;
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x1b8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar19 = (char *)0x0;
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x1b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar22,pcVar22);
  SVar32.bridgeObject = puVar9;
  SVar32.str = pcVar19;
  Swift::String::append(SVar24,SVar32);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar24.bridgeObject = (void *)0xe300000000000000;
  SVar24.str = (char *)0x5b205d;
  SVar33.bridgeObject = puVar9;
  SVar33.str = pcVar19;
  Swift::String::append(SVar24,SVar33);
  SVar25.bridgeObject = (void *)0xe700000000000000;
  SVar25.str = (char *)0x7972617262696c;
  SVar34.bridgeObject = puVar9;
  SVar34.str = pcVar19;
  Swift::String::append(SVar25,SVar34);
  SVar26.bridgeObject = (void *)0xe200000000000000;
  SVar26.str = (char *)0x205d;
  SVar35.bridgeObject = puVar9;
  SVar35.str = pcVar19;
  Swift::String::append(SVar26,SVar35);
  SVar36.bridgeObject = puVar9;
  SVar36.str = pcVar19;
  Swift::String::append(SVar29,SVar36);
  puVar1 = local_60;
  pcVar22 = local_68;
  local_68 = (char *)0x282020;
  local_60 = (undefined *)0xe300000000000000;
  SVar27.bridgeObject = (void *)0x80000001004e33b0;
  SVar27.str = (char *)0xd00000000000002d;
  SVar37.bridgeObject = puVar9;
  SVar37.str = pcVar19;
  Swift::String::append(SVar27,SVar37);
  SVar28.bridgeObject = (void *)0xe100000000000000;
  SVar28.str = (char *)0x3a;
  SVar38.bridgeObject = puVar9;
  SVar38.str = pcVar19;
  Swift::String::append(SVar28,SVar38);
  *(undefined8 *)(unaff_x22 + 0x1e8) = 0x2af;
  SVar29 = Swift::CustomStringConvertible::get_description();
  SVar39.bridgeObject = puVar9;
  SVar39.str = pcVar19;
  Swift::String::append(SVar29,SVar39);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar30.bridgeObject = (void *)0xe100000000000000;
  SVar30.str = (char *)0x29;
  SVar40.bridgeObject = puVar9;
  SVar40.str = pcVar19;
  Swift::String::append(SVar30,SVar40);
  puVar9 = local_60;
  pcVar19 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar3 = &DAT_100536a60;
  _swift_allocObject(&DAT_100536a60,0x30,7);
  *(char **)(puVar3 + 0x10) = pcVar22;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(char **)(puVar3 + 0x20) = pcVar19;
  *(undefined **)(puVar3 + 0x28) = puVar9;
  *(code **)(unaff_x22 + 0x110) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x118) = puVar3;
  *(undefined **)(unaff_x22 + 0xf0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0x42000000;
  *(code **)(unaff_x22 + 0x100) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x108) = &DAT_100536a78;
  aBlock = __Block_copy((void *)(unaff_x22 + 0xf0));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar21 = *(long *)(DVar4.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar5.unknown = puVar1;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_1005244a8;
  lVar23 = *(long *)(DVar6.unknown + -8);
  uVar7 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  *(undefined **)(unaff_x22 + 0x1f0) = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar9,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar9 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x1f0,puVar9,puVar10,DVar6.unknown,puVar8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar23 + 8))(uVar7,DVar6.unknown);
  (**(code **)(lVar21 + 8))(qos.unknown,DVar4.unknown);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar11 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar11.unknown,&DAT_100558f50);
  lVar21 = *(long *)(LVar11.unknown + -8);
  uVar12 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  uVar7 = uVar12;
  (**(code **)(lVar21 + 0x10))();
  uVar2 = (uint)uVar7;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar13.unknown = puVar1;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar13);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar2 & 0xff);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar19 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    local_68 = pcVar19;
    FUN_10012dbb0(pcVar22,puVar1,&local_68);
    *(char **)(puVar16 + 1) = pcVar22;
    _swift_bridgeObjectRelease_n(puVar1,2);
    __os_log_impl(0x100000000,pOVar14,uVar2 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(pcVar19);
    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(uVar12,LVar11.unknown);
  _swift_bridgeObjectRelease(puVar17);
  _swift_errorRelease(uVar20);
  _swift_task_dealloc(uVar12);
  *(undefined8 *)(unaff_x22 + 0x340) = 0;
  *(undefined8 *)(unaff_x22 + 0x338) = 0;
  puVar17 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar7 = *(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x348) = uVar7;
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  plVar18 = (long *)0x440;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x350) = plVar18;
  *plVar18 = unaff_x22;
  plVar18[1] = (long)FUN_100277fc8;
  FUN_1001e4dc0(plVar18,uVar7,*(undefined8 *)(unaff_x22 + 0x220),*(undefined8 *)(unaff_x22 + 0x208),
                *(undefined8 *)(unaff_x22 + 0x210));
  return;
}

