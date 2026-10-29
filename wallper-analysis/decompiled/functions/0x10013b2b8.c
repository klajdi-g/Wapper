// rea decompile_all
// name: FUN_10013b2b8
// address: 0x10013b2b8
// body: available
// range: 0x10013b2b8-0x10013b897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013b2b8(void)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published *pPVar6;
  undefined *puVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
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
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  char *local_68;
  undefined *puStack_60;
  
  uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_getErrorValue(uVar19,unaff_x22 + 0xb0,unaff_x22 + 0x40);
  SVar22 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  puVar4 = &DAT_100427540;
  _swift_getKeyPath(&DAT_100427540);
  puVar5 = &DAT_100427568;
  _swift_getKeyPath(&DAT_100427568);
  *(String *)(unaff_x22 + 0x80) = SVar22;
  _swift_retain(uVar21);
  Combine::Published::_set_subscript
            ((Published *)SVar22.str,(String *)(unaff_x22 + 0x80),uVar21,puVar4,puVar5);
  pPVar6 = (Published *)&DAT_100427590;
  _swift_getKeyPath();
  puVar4 = &DAT_1004275b8;
  _swift_getKeyPath();
  *(undefined1 *)(unaff_x22 + 0x149) = 0;
  _swift_retain(uVar21);
  Combine::Published::_set_subscript(pPVar6,unaff_x22 + 0x149,uVar21);
  local_68 = (char *)0xd000000000000023;
  puStack_60 = (void *)0x80000001004de380;
  _swift_errorRetain(uVar19);
  SVar23.bridgeObject = (void *)0xa500000000000000;
  SVar23.str = (char *)0x209480e220;
  SVar30.bridgeObject = puVar4;
  SVar30.str = (char *)pPVar6;
  Swift::String::append(SVar23,SVar30);
  pcVar17 = (char *)(unaff_x22 + 0x58);
  _swift_getErrorValue(uVar19,unaff_x22 + 0xb8);
  SVar22 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar8 = SVar22.bridgeObject;
  SVar31.bridgeObject = puVar4;
  SVar31.str = pcVar17;
  Swift::String::append(SVar22,SVar31);
  _swift_bridgeObjectRelease(pvVar8);
  puVar4 = puStack_60;
  SVar22.bridgeObject = puStack_60;
  SVar22.str = local_68;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x90) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0x98) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0xa0),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
  SVar32.bridgeObject = puVar11;
  SVar32.str = pcVar18;
  Swift::String::append(SVar23,SVar32);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar24.bridgeObject = (void *)0xe300000000000000;
  SVar24.str = (char *)0x5b205d;
  SVar33.bridgeObject = puVar11;
  SVar33.str = pcVar18;
  Swift::String::append(SVar24,SVar33);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x707061;
  SVar34.bridgeObject = puVar11;
  SVar34.str = pcVar18;
  Swift::String::append(SVar25,SVar34);
  SVar26.bridgeObject = (void *)0xe200000000000000;
  SVar26.str = (char *)0x205d;
  SVar35.bridgeObject = puVar11;
  SVar35.str = pcVar18;
  Swift::String::append(SVar26,SVar35);
  SVar36.bridgeObject = puVar11;
  SVar36.str = pcVar18;
  Swift::String::append(SVar22,SVar36);
  puVar5 = puStack_60;
  pcVar17 = local_68;
  local_68 = (char *)0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar27.bridgeObject = (void *)0x80000001004de3b0;
  SVar27.str = (char *)0xd000000000000010;
  SVar37.bridgeObject = puVar11;
  SVar37.str = pcVar18;
  Swift::String::append(SVar27,SVar37);
  SVar28.bridgeObject = (void *)0xe100000000000000;
  SVar28.str = (char *)0x3a;
  SVar38.bridgeObject = puVar11;
  SVar38.str = pcVar18;
  Swift::String::append(SVar28,SVar38);
  *(undefined8 *)(unaff_x22 + 0xc0) = 0x4e;
  SVar22 = Swift::CustomStringConvertible::get_description();
  SVar39.bridgeObject = puVar11;
  SVar39.str = pcVar18;
  Swift::String::append(SVar22,SVar39);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar29.bridgeObject = (void *)0xe100000000000000;
  SVar29.str = (char *)0x29;
  SVar40.bridgeObject = puVar11;
  SVar40.str = pcVar18;
  Swift::String::append(SVar29,SVar40);
  puVar11 = puStack_60;
  pcVar18 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x110);
  qos.unknown = *(undefined **)(unaff_x22 + 0x118);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  puVar7 = &DAT_10052df38;
  _swift_allocObject(&DAT_10052df38,0x30,7);
  *(char **)(puVar7 + 0x10) = pcVar17;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(char **)(puVar7 + 0x20) = pcVar18;
  *(undefined **)(puVar7 + 0x28) = puVar11;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052df50;
  pvVar8 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar9.unknown = puVar5;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 200) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar12 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar19,unaff_x22 + 200,puVar11,puVar12,uVar21,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar8);
  (**(code **)(lVar2 + 8))(uVar19,uVar21);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar21 = uVar20;
  FUN_100099338(uVar20,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar19,uVar21,uVar20);
  uVar3 = (uint)uVar19;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar13.unknown = puVar5;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar13);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar3 & 0xff);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xd8);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar5,2);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar18 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    local_68 = pcVar18;
    FUN_10012dbb0(pcVar17,puVar5,&local_68);
    *(char **)(puVar16 + 1) = pcVar17;
    _swift_bridgeObjectRelease_n(puVar5,2);
    __os_log_impl(0x100000000,pOVar14,uVar3 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(pcVar18);
    _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar19,uVar20);
  _swift_bridgeObjectRelease(puVar4);
  _swift_errorRelease(uVar21);
  _swift_errorRelease(uVar21);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010013b864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

