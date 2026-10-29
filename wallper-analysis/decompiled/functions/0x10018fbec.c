// rea decompile_all
// name: FUN_10018fbec
// address: 0x10018fbec
// body: available
// range: 0x10018fbec-0x1001900fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001900c4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001900f8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018fbec(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  Logger LVar8;
  OS_os_log *pOVar9;
  OS_os_log *pOVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
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
  uVar17 = *(undefined8 *)(unaff_x22 + 0x918);
  SVar1 = *(String *)(unaff_x22 + 0x720);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x980));
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
  SVar21.bridgeObject = (void *)0x80000001004df890;
  SVar21.str = (char *)0xd000000000000010;
  SVar28.bridgeObject = param_4;
  SVar28.str = param_3;
  Swift::String::append(SVar21,SVar28);
  puVar2 = local_68;
  SVar1.bridgeObject = local_68;
  SVar1.str = local_70;
  local_70 = (char *)0x5b;
  local_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x460) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x468) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x470) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x478) = 0xe100000000000000;
  pcVar13 = (char *)0x0;
  puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar22 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x470,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar17,uVar17);
  SVar29.bridgeObject = puVar14;
  SVar29.str = pcVar13;
  Swift::String::append(SVar22,SVar29);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar23.bridgeObject = (void *)0xe300000000000000;
  SVar23.str = (char *)0x5b205d;
  SVar30.bridgeObject = puVar14;
  SVar30.str = pcVar13;
  Swift::String::append(SVar23,SVar30);
  SVar24.bridgeObject = (void *)0xe500000000000000;
  SVar24.str = (char *)0x616964656d;
  SVar31.bridgeObject = puVar14;
  SVar31.str = pcVar13;
  Swift::String::append(SVar24,SVar31);
  SVar25.bridgeObject = (void *)0xe200000000000000;
  SVar25.str = (char *)0x205d;
  SVar32.bridgeObject = puVar14;
  SVar32.str = pcVar13;
  Swift::String::append(SVar25,SVar32);
  SVar33.bridgeObject = puVar14;
  SVar33.str = pcVar13;
  Swift::String::append(SVar1,SVar33);
  puVar14 = local_68;
  pcVar13 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x818);
  lVar15 = *(long *)(unaff_x22 + 0x810);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x800);
  lVar16 = *(long *)(unaff_x22 + 0x7f8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7f0);
  puVar4 = &DAT_100530778;
  _swift_allocObject(&DAT_100530778,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar13;
  *(undefined **)(puVar4 + 0x18) = puVar14;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100530790;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar5.unknown = puVar14;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  *(undefined **)(unaff_x22 + 0x6e0) = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar18,unaff_x22 + 0x6e0,puVar4,puVar7,uVar19,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar16 + 8))(uVar18,uVar19);
  (**(code **)(lVar15 + 8))(qos.unknown,uVar17);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 2000);
  lVar15 = *(long *)(unaff_x22 + 0x7b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar17 = uVar19;
  FUN_100099338(uVar19,&DAT_100558f50);
  (**(code **)(lVar15 + 0x10))(uVar18,uVar17,uVar19);
  uVar3 = (uint)uVar18;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar8.unknown = puVar14;
  _swift_bridgeObjectRetain();
  pOVar9 = os::Logger::get_logObject(LVar8);
  pOVar10 = pOVar9;
  _os_log_type_enabled(pOVar9,uVar3 & 0xff);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x860);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar19 = *(undefined8 *)(unaff_x22 + 2000);
  lVar15 = *(long *)(unaff_x22 + 0x7b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x7a8);
  if ((int)pOVar10 == 0) {
    _swift_bridgeObjectRelease_n(puVar14,2);
    (**(code **)(lVar15 + 8))(uVar19,uVar20);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(uVar18);
  }
  else {
    puVar11 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar12 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar11 = 0x8220102;
    local_70 = pcVar12;
    FUN_10012dbb0(pcVar13,puVar14,&local_70);
    *(char **)(puVar11 + 1) = pcVar13;
    _swift_bridgeObjectRelease_n(puVar14,2);
    __os_log_impl(0x100000000,pOVar9,uVar3 & 0xff,"%{public}s",puVar11,0xc);
    FUN_100043f24(pcVar12);
    _swift_slowDealloc(pcVar12,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
    (**(code **)(lVar15 + 8))(uVar19,uVar20);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(uVar18);
  }
  _swift_bridgeObjectRelease(uVar17);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
    _swift_task_switch(FUN_1001900fc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

