// rea decompile_all
// name: FUN_10026ca50
// address: 0x10026ca50
// body: available
// range: 0x10026ca50-0x10026d1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026d1e0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026ca50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DispatchWorkItemFlags qos;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long unaff_x22;
  code *pcVar32;
  char *pcVar33;
  ID self;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  undefined8 uVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  char *local_70;
  undefined *puStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x2c8);
  lVar35 = *(long *)(unaff_x22 + 0x2b8);
  self = *(ID *)(unaff_x22 + 0x2b0);
  lVar28 = *(long *)(unaff_x22 + 0x2a0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x270);
  pcVar33 = ((String *)(unaff_x22 + 0x268))->str;
  SVar39 = *(String *)(unaff_x22 + 0x268);
  lVar37 = *(long *)(unaff_x22 + 0x158);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
  objc_stub::finishTasksAndInvalidate(self);
  _swift_beginAccess(lVar37 + lVar28,unaff_x22 + 0x70,0x21,0);
  _swift_bridgeObjectRetain(uVar30);
  FUN_10027ef80(pcVar33,uVar30,thunk_FUN_1001d1dc4,FUN_1001cc824);
  _swift_endAccess(unaff_x22 + 0x70);
  _swift_bridgeObjectRelease(uVar30);
  _swift_beginAccess(lVar37 + lVar35,unaff_x22 + 0x88,0x21,0);
  _swift_bridgeObjectRetain(uVar30);
  pcVar32 = thunk_FUN_1001d1dc4;
  pcVar22 = FUN_1001cc838;
  FUN_10027ef80(pcVar33,uVar30);
  _swift_endAccess(unaff_x22 + 0x88);
  _swift_bridgeObjectRelease(uVar30);
  local_70 = (char *)0x64616f6c6e776f64;
  puStack_68 = (undefined *)0xe90000000000003a;
  SVar47.bridgeObject = pcVar22;
  SVar47.str = (char *)pcVar32;
  Swift::String::append(SVar39,SVar47);
  puVar8 = puStack_68;
  pcVar33 = (char *)0x1;
  FUN_100124e14(0x4000000000000000,local_70,puStack_68);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(uVar30);
  local_70 = (char *)0x64616f6c6e776f44;
  puStack_68 = (void *)0xef64656c69616620;
  _swift_errorRetain(uVar25);
  SVar40.bridgeObject = (void *)0xa500000000000000;
  SVar40.str = (char *)0x209480e220;
  SVar48.bridgeObject = pcVar22;
  SVar48.str = pcVar33;
  Swift::String::append(SVar40,SVar48);
  pcVar33 = (char *)(unaff_x22 + 0xa0);
  _swift_getErrorValue(uVar25,unaff_x22 + 0x128);
  SVar39 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar12 = SVar39.bridgeObject;
  SVar49.bridgeObject = pcVar22;
  SVar49.str = pcVar33;
  Swift::String::append(SVar39,SVar49);
  _swift_bridgeObjectRelease(pvVar12);
  puVar8 = puStack_68;
  SVar39.bridgeObject = puStack_68;
  SVar39.str = local_70;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0x524f525245;
  local_70 = (char *)0x5b;
  puStack_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x108) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x110) = 0xe100000000000000;
  FUN_100026df4();
  pcVar21 = (char *)0x0;
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x108),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
  SVar50.bridgeObject = puVar15;
  SVar50.str = pcVar21;
  Swift::String::append(SVar40,SVar50);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  SVar41.bridgeObject = (void *)0xe300000000000000;
  SVar41.str = (char *)0x5b205d;
  SVar51.bridgeObject = puVar15;
  SVar51.str = pcVar21;
  Swift::String::append(SVar41,SVar51);
  SVar42.bridgeObject = (void *)0xe700000000000000;
  SVar42.str = (char *)0x6b726f7774656e;
  SVar52.bridgeObject = puVar15;
  SVar52.str = pcVar21;
  Swift::String::append(SVar42,SVar52);
  SVar43.bridgeObject = (void *)0xe200000000000000;
  SVar43.str = (char *)0x205d;
  SVar53.bridgeObject = puVar15;
  SVar53.str = pcVar21;
  Swift::String::append(SVar43,SVar53);
  SVar54.bridgeObject = puVar15;
  SVar54.str = pcVar21;
  Swift::String::append(SVar39,SVar54);
  puVar9 = puStack_68;
  pcVar33 = local_70;
  local_70 = (char *)0x282020;
  puStack_68 = (undefined *)0xe300000000000000;
  SVar44.bridgeObject = (void *)0x80000001004e2f80;
  SVar44.str = (char *)0xd000000000000023;
  SVar55.bridgeObject = puVar15;
  SVar55.str = pcVar21;
  Swift::String::append(SVar44,SVar55);
  SVar45.bridgeObject = (void *)0xe100000000000000;
  SVar45.str = (char *)0x3a;
  SVar56.bridgeObject = puVar15;
  SVar56.str = pcVar21;
  Swift::String::append(SVar45,SVar56);
  *(undefined8 *)(unaff_x22 + 0x130) = 0x3a8;
  SVar39 = Swift::CustomStringConvertible::get_description();
  SVar57.bridgeObject = puVar15;
  SVar57.str = pcVar21;
  Swift::String::append(SVar39,SVar57);
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  SVar46.bridgeObject = (void *)0xe100000000000000;
  SVar46.str = (char *)0x29;
  SVar58.bridgeObject = puVar15;
  SVar58.str = pcVar21;
  Swift::String::append(SVar46,SVar58);
  puVar15 = puStack_68;
  pcVar21 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar28 = *(long *)(unaff_x22 + 0x198);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1a0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar26 = *(undefined8 *)(unaff_x22 + 400);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar35 = *(long *)(unaff_x22 + 0x180);
  puVar11 = &DAT_100536188;
  _swift_allocObject(&DAT_100536188,0x30,7);
  *(char **)(puVar11 + 0x10) = pcVar33;
  *(undefined **)(puVar11 + 0x18) = puVar9;
  *(char **)(puVar11 + 0x20) = pcVar21;
  *(undefined **)(puVar11 + 0x28) = puVar15;
  *(code **)(unaff_x22 + 0x30) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar11;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_1005361a0;
  pvVar12 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar13.unknown = puVar9;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  *(undefined **)(unaff_x22 + 0x138) = PTR___swiftEmptyArrayStorage_100524190;
  puVar14 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar15 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar16 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar25,unaff_x22 + 0x138,puVar15,puVar16,uVar30,puVar14);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar12);
  (**(code **)(lVar35 + 8))(uVar25,uVar30);
  (**(code **)(lVar28 + 8))(qos.unknown,uVar26);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar28 = *(long *)(unaff_x22 + 0x168);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar30 = uVar26;
  FUN_100099338(uVar26,&DAT_100558f50);
  (**(code **)(lVar28 + 0x10))(uVar25,uVar30,uVar26);
  uVar10 = (uint)uVar25;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar17.unknown = puVar9;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,uVar10 & 0xff);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x2c8);
  lVar28 = *(long *)(unaff_x22 + 0x168);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x160);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar9,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar21 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar20 = 0x8220102;
    local_70 = pcVar21;
    FUN_10012dbb0(pcVar33,puVar9,&local_70);
    *(char **)(puVar20 + 1) = pcVar33;
    _swift_bridgeObjectRelease_n(puVar9,2);
    __os_log_impl(0x100000000,pOVar18,uVar10 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(pcVar21);
    _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar28 + 8))(uVar25,uVar26);
  _swift_bridgeObjectRelease(puVar8);
  _swift_errorRelease(uVar30);
  _swift_errorRelease(uVar30);
  pcVar32 = *(code **)(unaff_x22 + 0x280);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (*pcVar32)(*(undefined8 *)(unaff_x22 + 0x1e0),uVar26);
  (*pcVar32)(uVar25,uVar26);
  FUN_100029548(uVar30,FUN_10040211c);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x00010026d1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

