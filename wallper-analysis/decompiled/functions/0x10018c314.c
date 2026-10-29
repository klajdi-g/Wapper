// rea decompile_all
// name: FUN_10018c314
// address: 0x10018c314
// body: available
// range: 0x10018c314-0x10018c823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018c7ec to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018c820 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018c314(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x22;
  DispatchWorkItemFlags qos;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
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
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  SVar1 = *(String *)(unaff_x22 + 0x720);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x8d8));
  local_70 = (char *)0x0;
  local_68 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x22,param_2);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (char *)0xd000000000000017;
  local_68 = (void *)0x80000001004df8b0;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar1,SVar26);
  SVar22.bridgeObject = (void *)0xe700000000000000;
  SVar22.str = (char *)0x206d6f72662022;
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar22,SVar27);
  uVar4 = 0x754d20656c707041;
  SVar21.bridgeObject = (void *)0xeb00000000636973;
  SVar21.str = (char *)0x754d20656c707041;
  SVar28.bridgeObject = param_4;
  SVar28.str = param_3;
  Swift::String::append(SVar21,SVar28);
  puVar2 = local_68;
  SVar1.bridgeObject = local_68;
  SVar1.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x5d0) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x5d8) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x5b0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x5b8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar14 = (char *)0x0;
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x5b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar4,uVar4);
  SVar29.bridgeObject = puVar15;
  SVar29.str = pcVar14;
  Swift::String::append(SVar22,SVar29);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar23.bridgeObject = (void *)0xe300000000000000;
  SVar23.str = (char *)0x5b205d;
  SVar30.bridgeObject = puVar15;
  SVar30.str = pcVar14;
  Swift::String::append(SVar23,SVar30);
  SVar24.bridgeObject = (void *)0xe500000000000000;
  SVar24.str = (char *)0x616964656d;
  SVar31.bridgeObject = puVar15;
  SVar31.str = pcVar14;
  Swift::String::append(SVar24,SVar31);
  SVar25.bridgeObject = (void *)0xe200000000000000;
  SVar25.str = (char *)0x205d;
  SVar32.bridgeObject = puVar15;
  SVar32.str = pcVar14;
  Swift::String::append(SVar25,SVar32);
  SVar33.bridgeObject = puVar15;
  SVar33.str = pcVar14;
  Swift::String::append(SVar1,SVar33);
  puVar15 = local_68;
  pcVar14 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x818);
  lVar16 = *(long *)(unaff_x22 + 0x810);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x800);
  lVar17 = *(long *)(unaff_x22 + 0x7f8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7f0);
  puVar5 = &DAT_1005308b8;
  _swift_allocObject(&DAT_1005308b8,0x30,7);
  *(char **)(puVar5 + 0x10) = pcVar14;
  *(undefined **)(puVar5 + 0x18) = puVar15;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0xc0) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 200) = puVar5;
  *(undefined **)(unaff_x22 + 0xa0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x42000000;
  *(code **)(unaff_x22 + 0xb0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xb8) = &DAT_1005308d0;
  aBlock = __Block_copy((void *)(unaff_x22 + 0xa0));
  DVar6.unknown = puVar15;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  *(undefined **)(unaff_x22 + 0x6c0) = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar18,unaff_x22 + 0x6c0,puVar5,puVar8,uVar19,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar17 + 8))(uVar18,uVar19);
  (**(code **)(lVar16 + 8))(qos.unknown,uVar4);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x7d8);
  lVar16 = *(long *)(unaff_x22 + 0x7b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar4 = uVar19;
  FUN_100099338(uVar19,&DAT_100558f50);
  (**(code **)(lVar16 + 0x10))(uVar18,uVar4,uVar19);
  uVar3 = (uint)uVar18;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar9.unknown = puVar15;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar9);
  pOVar11 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar3 & 0xff);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x860);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7d8);
  lVar16 = *(long *)(unaff_x22 + 0x7b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x7a8);
  if ((int)pOVar11 == 0) {
    _swift_bridgeObjectRelease_n(puVar15,2);
    (**(code **)(lVar16 + 8))(uVar19,uVar20);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(uVar18);
  }
  else {
    puVar12 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar13 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220102;
    local_70 = pcVar13;
    FUN_10012dbb0(pcVar14,puVar15,&local_70);
    *(char **)(puVar12 + 1) = pcVar14;
    _swift_bridgeObjectRelease_n(puVar15,2);
    __os_log_impl(0x100000000,pOVar10,uVar3 & 0xff,"%{public}s",puVar12,0xc);
    FUN_100043f24(pcVar13);
    _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar16 + 8))(uVar19,uVar20);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(uVar18);
  }
  _swift_bridgeObjectRelease(uVar4);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
    _swift_task_switch(FUN_10018c824);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

