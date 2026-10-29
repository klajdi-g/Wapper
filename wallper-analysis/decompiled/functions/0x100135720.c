// rea decompile_all
// name: FUN_100135720
// address: 0x100135720
// body: available
// range: 0x100135720-0x100135c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100135720(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  undefined8 uVar4;
  String SVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  char *local_68;
  undefined *local_60;
  
  uVar19 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1f8);
  SVar5 = *(String *)(unaff_x22 + 0x1e8);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x27,param_2);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000025;
  local_60 = (void *)0x80000001004de1d0;
  _swift_bridgeObjectRetain(uVar1);
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar5,SVar27);
  _swift_bridgeObjectRelease_n(uVar1,2);
  _swift_bridgeObjectRelease(uVar19);
  _swift_bridgeObjectRelease(uVar21);
  puVar6 = local_60;
  SVar5.bridgeObject = local_60;
  SVar5.str = local_68;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0x4f464e49;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x100) = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0xf8),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar21,uVar21);
  SVar28.bridgeObject = puVar18;
  SVar28.str = pcVar17;
  Swift::String::append(SVar24,SVar28);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar24.bridgeObject = (void *)0xe300000000000000;
  SVar24.str = (char *)0x5b205d;
  SVar29.bridgeObject = puVar18;
  SVar29.str = pcVar17;
  Swift::String::append(SVar24,SVar29);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x707061;
  SVar30.bridgeObject = puVar18;
  SVar30.str = pcVar17;
  Swift::String::append(SVar25,SVar30);
  SVar26.bridgeObject = (void *)0xe200000000000000;
  SVar26.str = (char *)0x205d;
  SVar31.bridgeObject = puVar18;
  SVar31.str = pcVar17;
  Swift::String::append(SVar26,SVar31);
  SVar32.bridgeObject = puVar18;
  SVar32.str = pcVar17;
  Swift::String::append(SVar5,SVar32);
  puVar18 = local_60;
  pcVar17 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar2 = *(long *)(unaff_x22 + 0x170);
  qos.unknown = *(undefined **)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar3 = *(long *)(unaff_x22 + 0x158);
  puVar8 = &DAT_10052d9a8;
  _swift_allocObject(&DAT_10052d9a8,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar17;
  *(undefined **)(puVar8 + 0x18) = puVar18;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x98) = puVar8;
  *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
  *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x88) = &DAT_10052d9c0;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x70));
  DVar9.unknown = puVar18;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 0x120) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar11 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar1,unaff_x22 + 0x120,puVar8,puVar11,uVar21,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar3 + 8))(uVar1,uVar21);
  (**(code **)(lVar2 + 8))(qos.unknown,uVar19);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar2 = *(long *)(unaff_x22 + 0x138);
  uVar21 = uVar1;
  FUN_100099338(uVar1,&DAT_100558f50);
  (**(code **)(lVar2 + 0x10))(uVar19,uVar21,uVar1);
  uVar7 = (uint)uVar19;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar12.unknown = puVar18;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar12);
  pOVar14 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar7 & 0xff);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar2 = *(long *)(unaff_x22 + 0x138);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar18,2);
    (**(code **)(lVar2 + 8))(uVar20,uVar21);
  }
  else {
    puVar15 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar16 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar15 = 0x8220102;
    local_68 = pcVar16;
    FUN_10012dbb0(pcVar17,puVar18,&local_68);
    *(char **)(puVar15 + 1) = pcVar17;
    _swift_bridgeObjectRelease_n(puVar18,2);
    __os_log_impl(0x100000000,pOVar13,uVar7 & 0xff,"%{public}s",puVar15,0xc);
    FUN_100043f24(pcVar16);
    _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar2 + 8))(uVar20,uVar21);
  }
  FUN_100093624(uVar1,uVar19);
  _swift_bridgeObjectRelease(puVar6);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar2 = *(long *)(unaff_x22 + 0x1a8);
  (**(code **)(*(long *)(unaff_x22 + 0x188) + 8))
            (*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x180));
  (**(code **)(lVar2 + 8))(uVar21,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar21 = *(undefined8 *)(unaff_x22 + 400);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000100135bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

