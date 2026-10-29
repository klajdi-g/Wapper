// rea decompile_all
// name: FUN_1001410b0
// address: 0x1001410b0
// body: available
// range: 0x1001410b0-0x100141877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100141298 to 0x100139060 FUN_100139060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100141844 to 0x1001484f8 FUN_1001484f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001410b0(undefined8 param_1)

{
  uint uVar1;
  LocalizationValue LVar2;
  Locale LVar3;
  long *plVar4;
  undefined *puVar5;
  void *aBlock;
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
  undefined8 uVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  undefined8 uVar22;
  Published *pPVar23;
  long unaff_x22;
  long lVar24;
  String stringLiteral;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String stringLiteral_00;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 local_68;
  undefined *puStack_60;
  
  if ((*(byte *)(unaff_x22 + 0x3ab) & 1) != 0) {
    pPVar23 = *(Published **)(unaff_x22 + 0x2c8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x298);
    puVar19 = &DAT_100427c18;
    _swift_getKeyPath(&DAT_100427c18);
    puVar5 = &DAT_100427c40;
    _swift_getKeyPath(&DAT_100427c40);
    *(undefined1 *)(unaff_x22 + 0x3a9) = 0;
    _swift_retain(uVar22);
    Combine::Published::_set_subscript(pPVar23,unaff_x22 + 0x3a9,uVar22,puVar19,puVar5);
    _swift_getKeyPath(&DAT_100427a80);
    _swift_getKeyPath(&DAT_100427aa8);
    *(undefined1 *)(unaff_x22 + 0x3a8) = 1;
    _swift_retain(uVar22);
    Combine::Published::_set_subscript();
    LVar2 = LocalizationValue::_typeMetadataAccessor();
    lVar21 = *(long *)(*(long *)(LVar2.unknown + -8) + 0x40);
    *(long *)(unaff_x22 + 0x2e8) = lVar21;
    LVar2.unknown = (undefined *)(lVar21 + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    stringLiteral.bridgeObject = (void *)0x80000001004de640;
    stringLiteral.str = (char *)0x1000000000000017;
    LocalizationValue::_init(stringLiteral);
    LVar3 = Foundation::Locale::typeMetadataAccessor();
    lVar21 = *(long *)(*(long *)(LVar3.unknown + -8) + 0x40);
    *(long *)(unaff_x22 + 0x2f0) = lVar21;
    LVar3.unknown = (undefined *)(lVar21 + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    Foundation::Locale::get_current(LVar3);
    SVar25 = (extension_Foundation)::Swift::String::_init(LVar2,(Locale)0x0);
    _swift_task_dealloc(LVar3.unknown);
    _swift_task_dealloc(LVar2.unknown);
    _swift_getKeyPath(&DAT_100427ac8);
    _swift_getKeyPath(&DAT_100427af0);
    *(String *)(unaff_x22 + 0x178) = SVar25;
    _swift_retain(uVar22);
    Combine::Published::_set_subscript();
    plVar4 = (long *)0x140;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2f8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100141a8c;
    FUN_100139060();
    return;
  }
  local_68 = 0x5b;
  puStack_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x148) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x150) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x1b8) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x1c0) = 0xe100000000000000;
  FUN_100026df4();
  pcVar20 = (char *)0x0;
  puVar19 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x1b8,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1);
  SVar29.bridgeObject = puVar19;
  SVar29.str = pcVar20;
  Swift::String::append(SVar25,SVar29);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  SVar30.bridgeObject = puVar19;
  SVar30.str = pcVar20;
  Swift::String::append(SVar25,SVar30);
  SVar26.bridgeObject = (void *)0xe300000000000000;
  SVar26.str = (char *)0x707061;
  SVar31.bridgeObject = puVar19;
  SVar31.str = pcVar20;
  Swift::String::append(SVar26,SVar31);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar32.bridgeObject = puVar19;
  SVar32.str = pcVar20;
  Swift::String::append(SVar27,SVar32);
  SVar28.bridgeObject = (void *)0x80000001004de6b0;
  SVar28.str = (char *)0x1000000000000048;
  SVar33.bridgeObject = puVar19;
  SVar33.str = pcVar20;
  Swift::String::append(SVar28,SVar33);
  puVar19 = puStack_60;
  uVar22 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar5 = &DAT_10052e390;
  _swift_allocObject(&DAT_10052e390,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar22;
  *(undefined **)(puVar5 + 0x18) = puVar19;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0xf8) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x100) = puVar5;
  *(undefined **)(unaff_x22 + 0xd8) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x42000000;
  *(code **)(unaff_x22 + 0xe8) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xf0) = &DAT_10052e3a8;
  aBlock = __Block_copy((void *)(unaff_x22 + 0xd8));
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar24 = *(long *)(DVar6.unknown + -8);
  qos.unknown = (undefined *)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar7.unknown = puVar19;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar7);
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_1005244a8;
  lVar21 = *(long *)(DVar8.unknown + -8);
  uVar9 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  *(undefined **)(unaff_x22 + 0x278) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar5,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar5 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar11 = puVar5;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar9,unaff_x22 + 0x278,puVar5,puVar11,DVar8.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar21 + 8))(uVar9,DVar8.unknown);
  (**(code **)(lVar24 + 8))(qos.unknown,DVar6.unknown);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(qos.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
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
  uVar1 = (uint)uVar9;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar14.unknown = puVar19;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar1 & 0xff);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(puVar19,2);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar18 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    local_68 = uVar18;
    FUN_10012dbb0(uVar22,puVar19,&local_68);
    *(undefined8 *)(puVar17 + 1) = uVar22;
    _swift_bridgeObjectRelease_n(puVar19,2);
    __os_log_impl(0x100000000,pOVar15,uVar1 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(uVar18);
    _swift_slowDealloc(uVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(uVar13,LVar12.unknown);
  pPVar23 = *(Published **)(unaff_x22 + 0x298);
  _swift_task_dealloc(uVar13);
  puVar19 = &DAT_100427a80;
  _swift_getKeyPath(&DAT_100427a80);
  puVar5 = &DAT_100427aa8;
  _swift_getKeyPath(&DAT_100427aa8);
  *(undefined1 *)(unaff_x22 + 0x3a3) = 6;
  _swift_retain(pPVar23);
  Combine::Published::_set_subscript(pPVar23,unaff_x22 + 0x3a3,pPVar23,puVar19,puVar5);
  LVar2 = LocalizationValue::_typeMetadataAccessor();
  LVar2.unknown =
       (undefined *)(*(long *)(*(long *)(LVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  stringLiteral_00.bridgeObject = (void *)0x80000001004de700;
  stringLiteral_00.str = (char *)0x1000000000000017;
  LocalizationValue::_init(stringLiteral_00);
  LVar3 = Foundation::Locale::typeMetadataAccessor();
  LVar3.unknown =
       (undefined *)(*(long *)(*(long *)(LVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  Foundation::Locale::get_current(LVar3);
  SVar25 = (extension_Foundation)::Swift::String::_init(LVar2,(Locale)0x0);
  _swift_task_dealloc(LVar3.unknown);
  _swift_task_dealloc(LVar2.unknown);
  _swift_getKeyPath(&DAT_100427ac8);
  _swift_getKeyPath(&DAT_100427af0);
  *(String *)(unaff_x22 + 0x218) = SVar25;
  _swift_retain(pPVar23);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427c18);
  _swift_getKeyPath(&DAT_100427c40);
  *(undefined1 *)(unaff_x22 + 0x3a7) = 1;
  _swift_retain(pPVar23);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427bc0);
  _swift_getKeyPath(&DAT_100427be8);
  *(undefined1 *)(unaff_x22 + 0x71) = 1;
  _swift_retain(pPVar23);
  Combine::Published::_set_subscript();
  plVar4 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100141878;
  FUN_1001484f8(0,1);
  return;
}

