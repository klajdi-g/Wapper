// rea decompile_all
// name: FUN_100156a60
// address: 0x100156a60
// body: available
// range: 0x100156a60-0x100156fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100156a60(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  Logger LVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  ID IVar18;
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
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  char *local_68;
  undefined *local_60;
  
  IVar18 = *(ID *)(unaff_x22 + 0x1c0);
  SVar24 = *(String *)(unaff_x22 + 0xf0);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,param_2);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000021;
  local_60 = (void *)0x80000001004dec90;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar24,SVar30);
  SVar26.bridgeObject = (void *)0xe900000000000020;
  SVar26.str = (char *)0x7375746174732820;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar26,SVar31);
  IVar18 = objc_stub::statusCode(IVar18);
  *(ID *)(unaff_x22 + 0xd8) = IVar18;
  SVar24 = Swift::CustomStringConvertible::get_description();
  SVar32.bridgeObject = param_4;
  SVar32.str = param_3;
  Swift::String::append(SVar24,SVar32);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar25.bridgeObject = (void *)0xe100000000000000;
  SVar25.str = (char *)0x29;
  uVar7 = 0x29;
  SVar33.bridgeObject = param_4;
  SVar33.str = param_3;
  Swift::String::append(SVar25,SVar33);
  puVar5 = local_60;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x4f464e49;
  SVar24.bridgeObject = local_60;
  SVar24.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0xe100000000000000;
  FUN_100026df4();
  pcVar16 = (char *)0x0;
  puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar26 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0xb8),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar7,uVar7);
  SVar34.bridgeObject = puVar17;
  SVar34.str = pcVar16;
  Swift::String::append(SVar26,SVar34);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar27.bridgeObject = (void *)0xe300000000000000;
  SVar27.str = (char *)0x5b205d;
  SVar35.bridgeObject = puVar17;
  SVar35.str = pcVar16;
  Swift::String::append(SVar27,SVar35);
  SVar28.bridgeObject = (void *)0xe300000000000000;
  SVar28.str = (char *)0x707061;
  SVar36.bridgeObject = puVar17;
  SVar36.str = pcVar16;
  Swift::String::append(SVar28,SVar36);
  SVar29.bridgeObject = (void *)0xe200000000000000;
  SVar29.str = (char *)0x205d;
  SVar37.bridgeObject = puVar17;
  SVar37.str = pcVar16;
  Swift::String::append(SVar29,SVar37);
  SVar38.bridgeObject = puVar17;
  SVar38.str = pcVar16;
  Swift::String::append(SVar24,SVar38);
  puVar17 = local_60;
  pcVar16 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x140);
  qos.unknown = *(undefined **)(unaff_x22 + 0x148);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar2 = *(long *)(unaff_x22 + 0x128);
  puVar8 = &DAT_10052f0b8;
  _swift_allocObject(&DAT_10052f0b8,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar16;
  *(undefined **)(puVar8 + 0x18) = puVar17;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x68) = puVar8;
  *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
  *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x58) = &DAT_10052f0d0;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x40));
  DVar9.unknown = puVar17;
  _swift_bridgeObjectRetain();
  DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 0xe0) = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0xe0,puVar8,puVar10,uVar20,DVar9.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar2 + 8))(uVar7,uVar20);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar21);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar1 = *(long *)(unaff_x22 + 0x108);
  uVar20 = uVar7;
  FUN_100099338(uVar7,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar21,uVar20,uVar7);
  uVar6 = (uint)uVar21;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar11.unknown = puVar17;
  _swift_bridgeObjectRetain();
  pOVar12 = os::Logger::get_logObject(LVar11);
  pOVar13 = pOVar12;
  _os_log_type_enabled(pOVar12,uVar6 & 0xff);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar1 = *(long *)(unaff_x22 + 0x108);
  if ((int)pOVar13 == 0) {
    _swift_bridgeObjectRelease_n(puVar17,2);
    (**(code **)(lVar1 + 8))(uVar19,uVar21);
    FUN_100093624(uVar7,uVar3);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar15 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    local_68 = pcVar15;
    FUN_10012dbb0(pcVar16,puVar17,&local_68);
    *(char **)(puVar14 + 1) = pcVar16;
    _swift_bridgeObjectRelease_n(puVar17,2);
    __os_log_impl(0x100000000,pOVar12,uVar6 & 0xff,"%{public}s",puVar14,0xc);
    FUN_100043f24(pcVar15);
    _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar1 + 8))(uVar19,uVar21);
    FUN_100093624(uVar7,uVar3);
  }
  FUN_100093624(uVar20,uVar4);
  lVar1 = *(long *)(unaff_x22 + 0x188);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_bridgeObjectRelease(puVar5);
  (**(code **)(lVar1 + 8))(uVar7,uVar20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 400));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x000100156f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

