// rea decompile_all
// name: FUN_10014d7b4
// address: 0x10014d7b4
// body: available
// range: 0x10014d7b4-0x10014ddf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014d7b4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  Published *pPVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
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
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  char *local_68;
  undefined *puStack_60;
  
  pcVar23 = *(code **)(unaff_x22 + 0x230);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar1 = *(long *)(unaff_x22 + 0x1e0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
  (**(code **)(lVar1 + 8))(uVar19,uVar20);
  (*pcVar23)(uVar18,uVar24);
  uVar19 = *(undefined8 *)(unaff_x22 + 600);
  local_68 = (char *)0xd000000000000019;
  puStack_60 = (void *)0x80000001004dea30;
  _swift_errorRetain(uVar19);
  SVar29.bridgeObject = (void *)0xa500000000000000;
  SVar29.str = (char *)0x209480e220;
  SVar36.bridgeObject = param_4;
  SVar36.str = param_3;
  Swift::String::append(SVar29,SVar36);
  pcVar13 = (char *)(unaff_x22 + 0x90);
  _swift_getErrorValue(uVar19,unaff_x22 + 0x120);
  SVar28 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar5 = SVar28.bridgeObject;
  SVar37.bridgeObject = param_4;
  SVar37.str = pcVar13;
  Swift::String::append(SVar28,SVar37);
  _swift_bridgeObjectRelease(pvVar5);
  puVar14 = puStack_60;
  SVar28.bridgeObject = puStack_60;
  SVar28.str = local_68;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x524f525245;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar17 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0xe0),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar5,pvVar5);
  SVar38.bridgeObject = puVar8;
  SVar38.str = pcVar17;
  Swift::String::append(SVar29,SVar38);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x5b205d;
  SVar39.bridgeObject = puVar8;
  SVar39.str = pcVar17;
  Swift::String::append(SVar30,SVar39);
  SVar31.bridgeObject = (void *)0xe700000000000000;
  SVar31.str = (char *)0x65736e6563696c;
  SVar40.bridgeObject = puVar8;
  SVar40.str = pcVar17;
  Swift::String::append(SVar31,SVar40);
  SVar32.bridgeObject = (void *)0xe200000000000000;
  SVar32.str = (char *)0x205d;
  SVar41.bridgeObject = puVar8;
  SVar41.str = pcVar17;
  Swift::String::append(SVar32,SVar41);
  SVar42.bridgeObject = puVar8;
  SVar42.str = pcVar17;
  Swift::String::append(SVar28,SVar42);
  puVar15 = puStack_60;
  pcVar13 = local_68;
  local_68 = (char *)0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar33.bridgeObject = (void *)0x80000001004dea50;
  SVar33.str = (char *)0xd00000000000001c;
  SVar43.bridgeObject = puVar8;
  SVar43.str = pcVar17;
  Swift::String::append(SVar33,SVar43);
  SVar34.bridgeObject = (void *)0xe100000000000000;
  SVar34.str = (char *)0x3a;
  SVar44.bridgeObject = puVar8;
  SVar44.str = pcVar17;
  Swift::String::append(SVar34,SVar44);
  *(undefined8 *)(unaff_x22 + 0x128) = 0xce;
  SVar28 = Swift::CustomStringConvertible::get_description();
  SVar45.bridgeObject = puVar8;
  SVar45.str = pcVar17;
  Swift::String::append(SVar28,SVar45);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  SVar35.bridgeObject = (void *)0xe100000000000000;
  SVar35.str = (char *)0x29;
  SVar46.bridgeObject = puVar8;
  SVar46.str = pcVar17;
  Swift::String::append(SVar35,SVar46);
  puVar8 = puStack_60;
  pcVar17 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x1a0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 400);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar2 = *(long *)(unaff_x22 + 0x188);
  puVar4 = &DAT_10052eae8;
  _swift_allocObject(&DAT_10052eae8,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar13;
  *(undefined **)(puVar4 + 0x18) = puVar15;
  *(char **)(puVar4 + 0x20) = pcVar17;
  *(undefined **)(puVar4 + 0x28) = puVar8;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052eb00;
  pvVar5 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar6.unknown = puVar15;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar4 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar20,unaff_x22 + 0x130,puVar8,puVar4,uVar24,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar5);
  (**(code **)(lVar2 + 8))(uVar20,uVar24);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0x168);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar24 = uVar18;
  FUN_100099338(uVar18,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar20,uVar24,uVar18);
  uVar3 = (uint)uVar20;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar9.unknown = puVar15;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar9);
  pOVar11 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar3 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0x168);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
  if ((int)pOVar11 == 0) {
    _swift_bridgeObjectRelease_n(puVar15,2);
  }
  else {
    puVar12 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar17 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220102;
    local_68 = pcVar17;
    FUN_10012dbb0(pcVar13,puVar15,&local_68);
    *(char **)(puVar12 + 1) = pcVar13;
    _swift_bridgeObjectRelease_n(puVar15,2);
    __os_log_impl(0x100000000,pOVar10,uVar3 & 0xff,"%{public}s",puVar12,0xc);
    FUN_100043f24(pcVar17);
    _swift_slowDealloc(pcVar17,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar20,uVar24);
  _swift_bridgeObjectRelease(puVar14);
  _swift_errorRelease(uVar19);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_getErrorValue(uVar19,unaff_x22 + 0x138,unaff_x22 + 0xa8);
  SVar28 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  puVar14 = &DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  puVar15 = &DAT_100428068;
  _swift_getKeyPath(&DAT_100428068);
  *(String *)(unaff_x22 + 0xf0) = SVar28;
  _swift_retain(uVar20);
  Combine::Published::_set_subscript
            ((Published *)SVar28.str,(String *)(unaff_x22 + 0xf0),uVar20,puVar14,puVar15);
  pPVar16 = (Published *)&DAT_100428088;
  _swift_getKeyPath(&DAT_100428088);
  puVar14 = &DAT_1004280b0;
  _swift_getKeyPath(&DAT_1004280b0);
  *(undefined1 *)(unaff_x22 + 0x270) = 1;
  _swift_retain(uVar20);
  Combine::Published::_set_subscript(pPVar16,unaff_x22 + 0x270,uVar20,pPVar16,puVar14);
  _swift_errorRelease(uVar19);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar27 = *(undefined8 *)(unaff_x22 + 400);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010014ddc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

