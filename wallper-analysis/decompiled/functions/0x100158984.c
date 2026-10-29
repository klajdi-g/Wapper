// rea decompile_all
// name: FUN_100158984
// address: 0x100158984
// body: available
// range: 0x100158984-0x100158e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100158e60 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100158984(undefined8 param_1,_StringGuts param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long unaff_x22;
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
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar20 = *(undefined8 *)(unaff_x22 + 0x248);
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x27,param_2);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0xd000000000000025;
  local_68 = (void *)0x80000001004debf0;
  pcVar16 = (char *)(unaff_x22 + 0x70);
  _swift_getErrorValue(uVar20,unaff_x22 + 0x128);
  SVar25 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar29.bridgeObject = param_4;
  SVar29.str = pcVar16;
  Swift::String::append(SVar25,SVar29);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  puVar6 = local_68;
  SVar25.bridgeObject = local_68;
  SVar25.str = local_70;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0x4f464e49;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x100) = 0xe100000000000000;
  pcVar16 = (char *)0x0;
  puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar26 = (extension_Foundation)::Swift::StringProtocol::_padding(6);
  SVar30.bridgeObject = puVar17;
  SVar30.str = pcVar16;
  Swift::String::append(SVar26,SVar30);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar26.bridgeObject = (void *)0xe300000000000000;
  SVar26.str = (char *)0x5b205d;
  SVar31.bridgeObject = puVar17;
  SVar31.str = pcVar16;
  Swift::String::append(SVar26,SVar31);
  SVar27.bridgeObject = (void *)0xe300000000000000;
  SVar27.str = (char *)0x707061;
  SVar32.bridgeObject = puVar17;
  SVar32.str = pcVar16;
  Swift::String::append(SVar27,SVar32);
  SVar28.bridgeObject = (void *)0xe200000000000000;
  SVar28.str = (char *)0x205d;
  SVar33.bridgeObject = puVar17;
  SVar33.str = pcVar16;
  Swift::String::append(SVar28,SVar33);
  SVar34.bridgeObject = puVar17;
  SVar34.str = pcVar16;
  Swift::String::append(SVar25,SVar34);
  puVar17 = local_68;
  pcVar16 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1b8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x22 + 400);
  lVar2 = *(long *)(unaff_x22 + 0x198);
  puVar8 = &DAT_10052efa0;
  _swift_allocObject(&DAT_10052efa0,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar16;
  *(undefined **)(puVar8 + 0x18) = puVar17;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar8;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052efb8;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar9.unknown = puVar17;
  _swift_bridgeObjectRetain();
  DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1000fedc8();
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar10 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar19,unaff_x22 + 0x130,puVar8,puVar10,uVar23,DVar9.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar2 + 8))(uVar19,uVar23);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar23 = uVar18;
  FUN_100099338(uVar18,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar19,uVar23,uVar18);
  uVar7 = (uint)uVar19;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar11.unknown = puVar17;
  _swift_bridgeObjectRetain();
  pOVar12 = os::Logger::get_logObject(LVar11);
  pOVar13 = pOVar12;
  _os_log_type_enabled(pOVar12,uVar7 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0x178);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x170);
  if ((int)pOVar13 == 0) {
    _swift_bridgeObjectRelease_n(puVar17,2);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar15 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    local_70 = pcVar15;
    FUN_10012dbb0(pcVar16,puVar17,&local_70);
    *(char **)(puVar14 + 1) = pcVar16;
    _swift_bridgeObjectRelease_n(puVar17,2);
    __os_log_impl(0x100000000,pOVar12,uVar7 & 0xff,"%{public}s",puVar14,0xc);
    FUN_100043f24(pcVar15);
    _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar19,uVar23);
  _swift_bridgeObjectRelease(puVar6);
  _swift_errorRelease(uVar20);
  pcVar21 = *(code **)(unaff_x22 + 0x210);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (*pcVar21)(*(undefined8 *)(unaff_x22 + 0x1e0),uVar20);
  (*pcVar21)(uVar19,uVar20);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar18);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100158e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

