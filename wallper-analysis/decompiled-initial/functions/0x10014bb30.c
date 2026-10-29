// rea decompile_all
// name: FUN_10014bb30
// address: 0x10014bb30
// body: available
// range: 0x10014bb30-0x10014c0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014bb30(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  Logger LVar8;
  OS_os_log *pOVar9;
  OS_os_log *pOVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Published *pPVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  long lVar23;
  DispatchWorkItemFlags qos;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
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
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  char *local_68;
  undefined *puStack_60;
  
  pcVar21 = *(code **)(unaff_x22 + 0x288);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar23 = *(long *)(unaff_x22 + 0x230);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x228);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x270));
  (**(code **)(lVar23 + 8))(uVar19,uVar20);
  (*pcVar21)(uVar17,uVar16);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
  local_68 = (char *)0xd00000000000001d;
  puStack_60 = (void *)0x80000001004de950;
  _swift_errorRetain(uVar16);
  SVar28.bridgeObject = (void *)0xa500000000000000;
  SVar28.str = (char *)0x209480e220;
  SVar35.bridgeObject = param_4;
  SVar35.str = param_3;
  Swift::String::append(SVar28,SVar35);
  pcVar12 = (char *)(unaff_x22 + 0x120);
  _swift_getErrorValue(uVar16,unaff_x22 + 0x1a8);
  SVar27 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar4 = SVar27.bridgeObject;
  SVar36.bridgeObject = param_4;
  SVar36.str = pcVar12;
  Swift::String::append(SVar27,SVar36);
  _swift_bridgeObjectRelease(pvVar4);
  puVar13 = puStack_60;
  SVar27.bridgeObject = puStack_60;
  SVar27.str = local_68;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x148) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0x150) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x158) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x160) = 0xe100000000000000;
  FUN_100026df4();
  pcVar15 = (char *)0x0;
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar28 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x158,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar4,pvVar4);
  SVar37.bridgeObject = puVar7;
  SVar37.str = pcVar15;
  Swift::String::append(SVar28,SVar37);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  SVar29.bridgeObject = (void *)0xe300000000000000;
  SVar29.str = (char *)0x5b205d;
  SVar38.bridgeObject = puVar7;
  SVar38.str = pcVar15;
  Swift::String::append(SVar29,SVar38);
  SVar30.bridgeObject = (void *)0xe700000000000000;
  SVar30.str = (char *)0x65736e6563696c;
  SVar39.bridgeObject = puVar7;
  SVar39.str = pcVar15;
  Swift::String::append(SVar30,SVar39);
  SVar31.bridgeObject = (void *)0xe200000000000000;
  SVar31.str = (char *)0x205d;
  SVar40.bridgeObject = puVar7;
  SVar40.str = pcVar15;
  Swift::String::append(SVar31,SVar40);
  SVar41.bridgeObject = puVar7;
  SVar41.str = pcVar15;
  Swift::String::append(SVar27,SVar41);
  puVar14 = puStack_60;
  pcVar12 = local_68;
  local_68 = (char *)0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar32.bridgeObject = (void *)0xec00000029287375;
  SVar32.str = (char *)0x7461745364616f6c;
  SVar42.bridgeObject = puVar7;
  SVar42.str = pcVar15;
  Swift::String::append(SVar32,SVar42);
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x3a;
  SVar43.bridgeObject = puVar7;
  SVar43.str = pcVar15;
  Swift::String::append(SVar33,SVar43);
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0xac;
  SVar27 = Swift::CustomStringConvertible::get_description();
  SVar44.bridgeObject = puVar7;
  SVar44.str = pcVar15;
  Swift::String::append(SVar27,SVar44);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar34.bridgeObject = (void *)0xe100000000000000;
  SVar34.str = (char *)0x29;
  SVar45.bridgeObject = puVar7;
  SVar45.str = pcVar15;
  Swift::String::append(SVar34,SVar45);
  puVar7 = puStack_60;
  pcVar15 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x208);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar1 = *(long *)(unaff_x22 + 0x200);
  lVar23 = *(long *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar3 = &DAT_10052e7d0;
  _swift_allocObject(&DAT_10052e7d0,0x30,7);
  *(char **)(puVar3 + 0x10) = pcVar12;
  *(undefined **)(puVar3 + 0x18) = puVar14;
  *(char **)(puVar3 + 0x20) = pcVar15;
  *(undefined **)(puVar3 + 0x28) = puVar7;
  *(code **)(unaff_x22 + 0xe0) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0xe8) = puVar3;
  *(undefined **)(unaff_x22 + 0xc0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
  *(code **)(unaff_x22 + 0xd0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xd8) = &DAT_10052e7e8;
  pvVar4 = __Block_copy((void *)(unaff_x22 + 0xc0));
  DVar5.unknown = puVar14;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  *(undefined **)(unaff_x22 + 0x1b8) = PTR___swiftEmptyArrayStorage_100524190;
  puVar6 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar7 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar3 = puVar7;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar19,unaff_x22 + 0x1b8,puVar7,puVar3,uVar20,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar4);
  (**(code **)(lVar23 + 8))(uVar19,uVar20);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar17);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar23 = *(long *)(unaff_x22 + 0x1d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar19 = uVar20;
  FUN_100099338(uVar20,&DAT_100558f50);
  (**(code **)(lVar23 + 0x10))(uVar17,uVar19,uVar20);
  uVar2 = (uint)uVar17;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar8.unknown = puVar14;
  _swift_bridgeObjectRetain();
  pOVar9 = os::Logger::get_logObject(LVar8);
  pOVar10 = pOVar9;
  _os_log_type_enabled(pOVar9,uVar2 & 0xff);
  lVar23 = *(long *)(unaff_x22 + 0x1d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
  if ((int)pOVar10 == 0) {
    _swift_bridgeObjectRelease_n(puVar14,2);
  }
  else {
    puVar11 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar15 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar11 = 0x8220102;
    local_68 = pcVar15;
    FUN_10012dbb0(pcVar12,puVar14,&local_68);
    *(char **)(puVar11 + 1) = pcVar12;
    _swift_bridgeObjectRelease_n(puVar14,2);
    __os_log_impl(0x100000000,pOVar9,uVar2 & 0xff,"%{public}s",puVar11,0xc);
    FUN_100043f24(pcVar15);
    _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar23 + 8))(uVar17,uVar19);
  _swift_bridgeObjectRelease(puVar13);
  _swift_errorRelease(uVar16);
  pPVar18 = *(Published **)(unaff_x22 + 0x1c0);
  FUN_10014a968();
  puVar13 = &DAT_100428088;
  _swift_getKeyPath(&DAT_100428088);
  puVar14 = &DAT_1004280b0;
  _swift_getKeyPath(&DAT_1004280b0);
  *(undefined1 *)(unaff_x22 + 0x61) = 1;
  _swift_retain(pPVar18);
  Combine::Published::_set_subscript
            (pPVar18,(undefined1 *)(unaff_x22 + 0x61),pPVar18,puVar13,puVar14);
  _swift_errorRelease(uVar16);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar16 = *(undefined8 *)(unaff_x22 + 600);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x268));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x00010014c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

