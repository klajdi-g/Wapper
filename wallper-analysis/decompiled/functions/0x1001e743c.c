// rea decompile_all
// name: FUN_1001e743c
// address: 0x1001e743c
// body: available
// range: 0x1001e743c-0x1001e79b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e743c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar6;
  DispatchWorkItemFlags DVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Logger LVar11;
  ulong uVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  char *local_68;
  undefined *local_60;
  
  pcVar21 = ((String *)(unaff_x22 + 0x2c8))->str;
  SVar1 = *(String *)(unaff_x22 + 0x2c8);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x28,param_2);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000026;
  local_60 = (void *)0x80000001004e0dc0;
  SVar33.bridgeObject = param_4;
  SVar33.str = param_3;
  Swift::String::append(SVar1,SVar33);
  puVar2 = local_60;
  SVar1.bridgeObject = local_60;
  SVar1.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x240) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x248) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x250) = 0x20;
  *(undefined8 *)(unaff_x22 + 600) = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x250,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pcVar21,pcVar21);
  SVar34.bridgeObject = puVar18;
  SVar34.str = pcVar17;
  Swift::String::append(SVar30,SVar34);
  _swift_bridgeObjectRelease(SVar30.bridgeObject);
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x5b205d;
  SVar35.bridgeObject = puVar18;
  SVar35.str = pcVar17;
  Swift::String::append(SVar30,SVar35);
  SVar31.bridgeObject = (void *)0xe300000000000000;
  SVar31.str = (char *)0x707061;
  SVar36.bridgeObject = puVar18;
  SVar36.str = pcVar17;
  Swift::String::append(SVar31,SVar36);
  SVar32.bridgeObject = (void *)0xe200000000000000;
  SVar32.str = (char *)0x205d;
  SVar37.bridgeObject = puVar18;
  SVar37.str = pcVar17;
  Swift::String::append(SVar32,SVar37);
  SVar38.bridgeObject = puVar18;
  SVar38.str = pcVar17;
  Swift::String::append(SVar1,SVar38);
  puVar18 = local_60;
  pcVar21 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar4 = &DAT_100531d20;
  _swift_allocObject(&DAT_100531d20,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar21;
  *(undefined **)(puVar4 + 0x18) = puVar18;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x140) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x148) = puVar4;
  *(undefined **)(unaff_x22 + 0x120) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x128) = 0x42000000;
  *(code **)(unaff_x22 + 0x130) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x138) = &DAT_100531d38;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x120));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar5.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar6.unknown = puVar18;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005244a8;
  lVar25 = *(long *)(DVar7.unknown + -8);
  uVar8 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  *(undefined **)(unaff_x22 + 0x268) = PTR___swiftEmptyArrayStorage_100524190;
  puVar9 = &DAT_100553db0;
  FUN_100047f94(&DAT_100553db0,0xff,puVar4,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar8,unaff_x22 + 0x268,puVar4,puVar10,DVar7.unknown,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar25 + 8))(uVar8,DVar7.unknown);
  (**(code **)(lVar19 + 8))(qos.unknown,DVar5.unknown);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar11 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar11.unknown,&DAT_100558f50);
  lVar19 = *(long *)(LVar11.unknown + -8);
  uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  uVar8 = uVar12;
  (**(code **)(lVar19 + 0x10))();
  uVar3 = (uint)uVar8;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar13.unknown = puVar18;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar13);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar3 & 0xff);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar18,2);
    (**(code **)(lVar19 + 8))(uVar12,LVar11.unknown);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar17 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    local_68 = pcVar17;
    FUN_10012dbb0(pcVar21,puVar18,&local_68);
    *(char **)(puVar16 + 1) = pcVar21;
    _swift_bridgeObjectRelease_n(puVar18,2);
    __os_log_impl(0x100000000,pOVar14,uVar3 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(pcVar17);
    _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar19 + 8))(uVar12,LVar11.unknown);
  }
  pcVar27 = *(code **)(unaff_x22 + 0x3e0);
  pcVar28 = *(code **)(unaff_x22 + 0x3d8);
  pcVar29 = *(code **)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x2b8);
  _swift_task_dealloc(uVar12);
  _swift_bridgeObjectRelease(puVar2);
  (*pcVar28)(uVar26,uVar20,uVar22);
  (*pcVar27)(uVar26,0,1,uVar22);
  FUN_1001e85a4(uVar24);
  (*pcVar29)(uVar20,uVar22);
  FUN_10002a29c(uVar23,&DAT_100553d90,&DAT_10041bf10);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001001e7980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

