// rea decompile_all
// name: FUN_1001565a8
// address: 0x1001565a8
// body: available
// range: 0x1001565a8-0x100156a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001565a8(void)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined *puVar10;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  void *in_x3;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  _StringGuts _Var21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
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
  char *local_68;
  undefined *local_60;
  undefined8 uVar11;
  
  uVar19 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
  lVar1 = *(long *)(unaff_x22 + 0x188);
  uVar24 = *(undefined8 *)(unaff_x22 + 400);
  _Var21.unknown = *(undefined **)(unaff_x22 + 0x180);
  FUN_100093624(*(undefined8 *)(unaff_x22 + 0x1a8),*(undefined8 *)(unaff_x22 + 0x1b0));
  FUN_100093624(uVar19,uVar11);
  (**(code **)(lVar1 + 8))(uVar24);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x25,_Var21);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000023;
  local_60 = (void *)0x80000001004dec60;
  pcVar17 = (char *)(unaff_x22 + 0x70);
  _swift_getErrorValue(uVar19,unaff_x22 + 200);
  SVar25 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar8 = SVar25.bridgeObject;
  SVar29.bridgeObject = in_x3;
  SVar29.str = pcVar17;
  Swift::String::append(SVar25,SVar29);
  _swift_bridgeObjectRelease(pvVar8);
  puVar5 = local_60;
  SVar25.bridgeObject = local_60;
  SVar25.str = local_68;
  *(undefined8 *)(unaff_x22 + 0x88) = 0x4f464e49;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x90) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar26 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x98),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
  SVar30.bridgeObject = puVar18;
  SVar30.str = pcVar17;
  Swift::String::append(SVar26,SVar30);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar26.bridgeObject = (void *)0xe300000000000000;
  SVar26.str = (char *)0x5b205d;
  SVar31.bridgeObject = puVar18;
  SVar31.str = pcVar17;
  Swift::String::append(SVar26,SVar31);
  SVar27.bridgeObject = (void *)0xe300000000000000;
  SVar27.str = (char *)0x707061;
  SVar32.bridgeObject = puVar18;
  SVar32.str = pcVar17;
  Swift::String::append(SVar27,SVar32);
  SVar28.bridgeObject = (void *)0xe200000000000000;
  SVar28.str = (char *)0x205d;
  SVar33.bridgeObject = puVar18;
  SVar33.str = pcVar17;
  Swift::String::append(SVar28,SVar33);
  SVar34.bridgeObject = puVar18;
  SVar34.str = pcVar17;
  Swift::String::append(SVar25,SVar34);
  puVar18 = local_60;
  pcVar17 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x140);
  qos.unknown = *(undefined **)(unaff_x22 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar2 = *(long *)(unaff_x22 + 0x128);
  puVar7 = &DAT_10052f068;
  _swift_allocObject(&DAT_10052f068,0x30,7);
  *(char **)(puVar7 + 0x10) = pcVar17;
  *(undefined **)(puVar7 + 0x18) = puVar18;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052f080;
  pvVar8 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar9.unknown = puVar18;
  _swift_bridgeObjectRetain();
  DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 0xd0) = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar7;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar11,unaff_x22 + 0xd0,puVar7,puVar10,uVar24,DVar9.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar8);
  (**(code **)(lVar2 + 8))(uVar11,uVar24);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar24 = uVar20;
  FUN_100099338(uVar20,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar11,uVar24,uVar20);
  uVar6 = (uint)uVar11;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar12.unknown = puVar18;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar12);
  pOVar14 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar6 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x100);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar18,2);
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
    __os_log_impl(0x100000000,pOVar13,uVar6 & 0xff,"%{public}s",puVar15,0xc);
    FUN_100043f24(pcVar16);
    _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar11,uVar24);
  _swift_bridgeObjectRelease(puVar5);
  _swift_errorRelease(uVar19);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x000100156a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

