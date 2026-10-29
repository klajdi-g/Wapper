// rea decompile_all
// name: FUN_1002ae904
// address: 0x1002ae904
// body: available
// range: 0x1002ae904-0x1002aee57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ae904(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  void *pvVar5;
  DispatchQoS DVar6;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar7;
  DispatchWorkItemFlags DVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar12;
  ulong uVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
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
  String SVar41;
  char *local_68;
  undefined *puStack_60;
  
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe0));
  local_68 = (char *)0xd000000000000032;
  puStack_60 = (void *)0x80000001004e3d00;
  _swift_errorRetain(uVar20);
  SVar24.bridgeObject = (void *)0xa500000000000000;
  SVar24.str = (char *)0x209480e220;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar24,SVar31);
  pcVar18 = (char *)(unaff_x22 + 0x40);
  _swift_getErrorValue(uVar20,unaff_x22 + 0x78);
  SVar23 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar5 = SVar23.bridgeObject;
  SVar32.bridgeObject = param_4;
  SVar32.str = pcVar18;
  Swift::String::append(SVar23,SVar32);
  _swift_bridgeObjectRelease(pvVar5);
  puVar1 = puStack_60;
  SVar23.bridgeObject = puStack_60;
  SVar23.str = local_68;
  local_68 = (char *)0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0x60) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
  FUN_100026df4();
  pcVar19 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,(undefined8 *)(unaff_x22 + 0x68),0,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar5,pvVar5);
  SVar33.bridgeObject = puVar11;
  SVar33.str = pcVar19;
  Swift::String::append(SVar24,SVar33);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  SVar34.bridgeObject = puVar11;
  SVar34.str = pcVar19;
  Swift::String::append(SVar25,SVar34);
  SVar26.bridgeObject = (void *)0xe300000000000000;
  SVar26.str = (char *)0x707061;
  SVar35.bridgeObject = puVar11;
  SVar35.str = pcVar19;
  Swift::String::append(SVar26,SVar35);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar36.bridgeObject = puVar11;
  SVar36.str = pcVar19;
  Swift::String::append(SVar27,SVar36);
  SVar37.bridgeObject = puVar11;
  SVar37.str = pcVar19;
  Swift::String::append(SVar23,SVar37);
  puVar2 = puStack_60;
  pcVar18 = local_68;
  local_68 = (char *)0x282020;
  puStack_60 = (undefined *)0xe300000000000000;
  SVar28.bridgeObject = (void *)0x80000001004e3cb0;
  SVar28.str = (char *)0xd00000000000001a;
  SVar38.bridgeObject = puVar11;
  SVar38.str = pcVar19;
  Swift::String::append(SVar28,SVar38);
  SVar29.bridgeObject = (void *)0xe100000000000000;
  SVar29.str = (char *)0x3a;
  SVar39.bridgeObject = puVar11;
  SVar39.str = pcVar19;
  Swift::String::append(SVar29,SVar39);
  *(undefined8 *)(unaff_x22 + 0x80) = 0x60;
  SVar23 = Swift::CustomStringConvertible::get_description();
  SVar40.bridgeObject = puVar11;
  SVar40.str = pcVar19;
  Swift::String::append(SVar23,SVar40);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar30.bridgeObject = (void *)0xe100000000000000;
  SVar30.str = (char *)0x29;
  SVar41.bridgeObject = puVar11;
  SVar41.str = pcVar19;
  Swift::String::append(SVar30,SVar41);
  puVar11 = puStack_60;
  pcVar19 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar4 = &DAT_100537b38;
  _swift_allocObject(&DAT_100537b38,0x30,7);
  *(char **)(puVar4 + 0x10) = pcVar18;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(char **)(puVar4 + 0x20) = pcVar19;
  *(undefined **)(puVar4 + 0x28) = puVar11;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_100537b50;
  pvVar5 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar21 = *(long *)(DVar6.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar7.unknown = puVar2;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_1005244a8;
  lVar22 = *(long *)(DVar8.unknown + -8);
  uVar9 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar11,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar4 = puVar11;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar9,unaff_x22 + 0x88,puVar11,puVar4,DVar8.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar5);
  (**(code **)(lVar22 + 8))(uVar9,DVar8.unknown);
  (**(code **)(lVar21 + 8))(qos.unknown,DVar6.unknown);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar12 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar12.unknown,&DAT_100558f50);
  lVar21 = *(long *)(LVar12.unknown + -8);
  uVar13 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar13);
  uVar9 = uVar13;
  (**(code **)(lVar21 + 0x10))();
  uVar3 = (uint)uVar9;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar14.unknown = puVar2;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar3 & 0xff);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xf0);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(puVar2,2);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar19 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    local_68 = pcVar19;
    FUN_10012dbb0(pcVar18,puVar2,&local_68);
    *(char **)(puVar17 + 1) = pcVar18;
    _swift_bridgeObjectRelease_n(puVar2,2);
    __os_log_impl(0x100000000,pOVar15,uVar3 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(pcVar19);
    _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(uVar13,LVar12.unknown);
  _swift_bridgeObjectRelease(puVar1);
  _swift_errorRelease(uVar20);
  _swift_errorRelease(uVar20);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001002aee24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

