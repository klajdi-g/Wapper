// rea decompile_all
// name: FUN_100145ad0
// address: 0x100145ad0
// body: available
// range: 0x100145ad0-0x1001463df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100145d9c to 0x100139060 FUN_100139060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100145de8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100145ad0(void)

{
  LocalizationValue LVar1;
  DispatchWorkItemFlags qos;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  LocalizationValue LVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  char *pcVar17;
  long lVar18;
  Published *pPVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
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
  String stringLiteral;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 uVar12;
  
  lVar18 = *(long *)(unaff_x22 + 0x90);
  pPVar19 = *(Published **)(lVar18 + 0x18);
  *(Published **)(unaff_x22 + 0x110) = pPVar19;
  if (pPVar19 == (Published *)0x0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    FUN_1001473a0();
    goto LAB_100146350;
  }
  LVar1.unknown = *(undefined **)(unaff_x22 + 0xf0);
  puVar4 = &DAT_100427a80;
  _swift_getKeyPath(&DAT_100427a80);
  puVar5 = &DAT_100427aa8;
  _swift_getKeyPath(&DAT_100427aa8);
  *(undefined1 *)(unaff_x22 + 0x130) = 4;
  _swift_retain(pPVar19);
  _swift_retain(lVar18);
  Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x130,lVar18,puVar4,puVar5);
  SVar24.bridgeObject = (void *)0x80000001004de8c0;
  SVar24.str = (char *)0x1000000000000014;
  LVar6 = LocalizationValue::_init(SVar24);
  Foundation::Locale::get_current((Locale)LVar6.unknown);
  SVar24 = (extension_Foundation)::Swift::String::_init(LVar1,(Locale)0x0);
  _swift_getKeyPath(&DAT_100427ac8);
  _swift_getKeyPath(&DAT_100427af0);
  *(String *)(unaff_x22 + 0x40) = SVar24;
  _swift_retain(lVar18);
  Combine::Published::_set_subscript();
  puVar4 = &DAT_100427da0;
  _swift_getKeyPath(&DAT_100427da0);
  puVar5 = &DAT_100427dc8;
  _swift_getKeyPath(&DAT_100427dc8);
  Combine::Published::_get_subscript(unaff_x22 + 0x131,pPVar19,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  if ((*(byte *)(unaff_x22 + 0x131) & 1) == 0) {
    plVar8 = (long *)0x140;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1001463e0;
    FUN_100139060();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar4 = &DAT_100427da0;
  _swift_getKeyPath(&DAT_100427da0);
  puVar5 = &DAT_100427dc8;
  _swift_getKeyPath(&DAT_100427dc8);
  Combine::Published::_get_subscript(unaff_x22 + 0x132,uVar20,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  if ((*(byte *)(unaff_x22 + 0x132) & 1) == 0) {
    plVar8 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x128) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_100146b9c;
    (extension_Swift)::Swift::Task::_sleep(300000000);
    return;
  }
  uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  puVar4 = &DAT_100427da0;
  _swift_getKeyPath(&DAT_100427da0);
  puVar5 = &DAT_100427dc8;
  _swift_getKeyPath(&DAT_100427dc8);
  Combine::Published::_get_subscript(unaff_x22 + 0x133,uVar20,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  if (*(char *)(unaff_x22 + 0x133) == '\x01') {
    uVar20 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_100138eb0(uVar20);
    lVar18 = 0;
    FUN_100400294();
    (**(code **)(*(long *)(lVar18 + -8) + 0x30))(uVar20,1,lVar18);
    lVar7 = *(long *)(unaff_x22 + 0xe0);
    if ((int)uVar20 == 1) {
      FUN_10002a29c(lVar7,&DAT_100554ab8,&DAT_100427d98);
      goto LAB_10014633c;
    }
    bVar2 = *(byte *)(lVar7 + *(int *)(lVar18 + 0x4c));
    FUN_100029548(lVar7,FUN_100400294);
    if ((bVar2 & 1) == 0) goto LAB_10014633c;
    pPVar19 = *(Published **)(unaff_x22 + 0x110);
    LVar1.unknown = *(undefined **)(unaff_x22 + 0xf0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
    puVar4 = &DAT_100427a80;
    _swift_getKeyPath(&DAT_100427a80);
    puVar5 = &DAT_100427aa8;
    _swift_getKeyPath(&DAT_100427aa8);
    *(undefined1 *)(unaff_x22 + 0x134) = 7;
    _swift_retain(uVar20);
    Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x134,uVar20,puVar4,puVar5);
    stringLiteral.bridgeObject = (void *)0xed00006465696e65;
    stringLiteral.str = (char *)0x4420737365636341;
    LVar6 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar6.unknown);
    SVar24 = (extension_Foundation)::Swift::String::_init(LVar1,(Locale)0x0);
    _swift_getKeyPath(&DAT_100427ac8);
    _swift_getKeyPath(&DAT_100427af0);
    *(String *)(unaff_x22 + 0x70) = SVar24;
    _swift_retain(uVar20);
    Combine::Published::_set_subscript();
    _swift_getKeyPath(&DAT_100427b10);
    _swift_getKeyPath(&DAT_100427b38);
    *(undefined1 *)(unaff_x22 + 0x135) = 1;
    _swift_retain(uVar20);
    Combine::Published::_set_subscript();
    _swift_getKeyPath(&DAT_100427bc0);
    _swift_getKeyPath(&DAT_100427be8);
    *(undefined1 *)(unaff_x22 + 0x136) = 0;
    _swift_retain(uVar20);
    Combine::Published::_set_subscript();
  }
  else {
    local_68 = 0x5b;
    puStack_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xe100000000000000;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x60,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar4,puVar4);
    SVar32.bridgeObject = puVar5;
    SVar32.str = pcVar17;
    Swift::String::append(SVar24,SVar32);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar25.bridgeObject = (void *)0xe300000000000000;
    SVar25.str = (char *)0x5b205d;
    SVar33.bridgeObject = puVar5;
    SVar33.str = pcVar17;
    Swift::String::append(SVar25,SVar33);
    SVar26.bridgeObject = (void *)0xe300000000000000;
    SVar26.str = (char *)0x707061;
    SVar34.bridgeObject = puVar5;
    SVar34.str = pcVar17;
    Swift::String::append(SVar26,SVar34);
    SVar27.bridgeObject = (void *)0xe200000000000000;
    SVar27.str = (char *)0x205d;
    SVar35.bridgeObject = puVar5;
    SVar35.str = pcVar17;
    Swift::String::append(SVar27,SVar35);
    SVar28.bridgeObject = (void *)0x80000001004de8e0;
    SVar28.str = (char *)0x1000000000000048;
    SVar36.bridgeObject = puVar5;
    SVar36.str = pcVar17;
    Swift::String::append(SVar28,SVar36);
    puVar4 = puStack_60;
    uVar20 = local_68;
    local_68 = 0x282020;
    puStack_60 = (undefined *)0xe300000000000000;
    SVar29.bridgeObject = (void *)0xec00000029286574;
    SVar29.str = (char *)0x61476e61426e7572;
    SVar37.bridgeObject = puVar5;
    SVar37.str = pcVar17;
    Swift::String::append(SVar29,SVar37);
    SVar30.bridgeObject = (void *)0xe100000000000000;
    SVar30.str = (char *)0x3a;
    SVar38.bridgeObject = puVar5;
    SVar38.str = pcVar17;
    Swift::String::append(SVar30,SVar38);
    *(undefined8 *)(unaff_x22 + 0x80) = 0xa3;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar39.bridgeObject = puVar5;
    SVar39.str = pcVar17;
    Swift::String::append(SVar24,SVar39);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar31.bridgeObject = (void *)0xe100000000000000;
    SVar31.str = (char *)0x29;
    SVar40.bridgeObject = puVar5;
    SVar40.str = pcVar17;
    Swift::String::append(SVar31,SVar40);
    puVar5 = puStack_60;
    uVar12 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar18 = *(long *)(unaff_x22 + 0xd0);
    qos.unknown = *(undefined **)(unaff_x22 + 0xd8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar23 = *(undefined8 *)(unaff_x22 + 200);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar7 = *(long *)(unaff_x22 + 0xb8);
    puVar9 = &DAT_10052e520;
    _swift_allocObject(&DAT_10052e520,0x30,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar20;
    *(undefined **)(puVar9 + 0x18) = puVar4;
    *(undefined8 *)(puVar9 + 0x20) = uVar12;
    *(undefined **)(puVar9 + 0x28) = puVar5;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar9;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052e538;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar10.unknown = puVar4;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar9 = puVar5;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar22,unaff_x22 + 0x88,puVar5,puVar9,uVar21,puVar11);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar7 + 8))(uVar22,uVar21);
    (**(code **)(lVar18 + 8))(qos.unknown,uVar23);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar18 = *(long *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar22 = uVar21;
    FUN_100099338(uVar21,&DAT_100558f50);
    (**(code **)(lVar18 + 0x10))(uVar12,uVar22,uVar21);
    uVar3 = (uint)uVar12;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar13.unknown = puVar4;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar13);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar3 & 0xff);
    lVar18 = *(long *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x98);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar4,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar21 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      local_68 = uVar21;
      FUN_10012dbb0(uVar20,puVar4,&local_68);
      *(undefined8 *)(puVar16 + 1) = uVar20;
      _swift_bridgeObjectRelease_n(puVar4,2);
      __os_log_impl(0x100000000,pOVar14,uVar3 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(uVar21);
      _swift_slowDealloc(uVar21,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar18 + 8))(uVar12,uVar22);
LAB_10014633c:
    pPVar19 = *(Published **)(unaff_x22 + 0x110);
    FUN_1001473a0();
  }
  _swift_release(pPVar19);
LAB_100146350:
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001001463ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

