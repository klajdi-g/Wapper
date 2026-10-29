// rea decompile_all
// name: FUN_100146bfc
// address: 0x100146bfc
// body: available
// range: 0x100146bfc-0x10014739f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100146ce8 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100146bfc(void)

{
  DispatchWorkItemFlags qos;
  LocalizationValue localized;
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  LocalizationValue LVar16;
  char *pcVar17;
  undefined8 uVar18;
  Published *pPVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String stringLiteral;
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
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 uVar11;
  
  dVar23 = *(double *)(unaff_x22 + 0x120) + 0.3;
  *(double *)(unaff_x22 + 0x120) = dVar23;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar3 = &DAT_100427da0;
  _swift_getKeyPath(&DAT_100427da0);
  puVar4 = &DAT_100427dc8;
  _swift_getKeyPath(&DAT_100427dc8);
  Combine::Published::_get_subscript(unaff_x22 + 0x132,uVar18,puVar3,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  if (((*(byte *)(unaff_x22 + 0x132) & 1) == 0) && (dVar23 < 10.0)) {
    plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x128) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100146b9c;
    (extension_Swift)::Swift::Task::_sleep(300000000);
    return;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  puVar3 = &DAT_100427da0;
  _swift_getKeyPath(&DAT_100427da0);
  puVar4 = &DAT_100427dc8;
  _swift_getKeyPath(&DAT_100427dc8);
  Combine::Published::_get_subscript(unaff_x22 + 0x133,uVar18,puVar3,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar3);
  if (*(char *)(unaff_x22 + 0x133) == '\x01') {
    uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_100138eb0(uVar18);
    lVar6 = 0;
    FUN_100400294();
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(uVar18,1,lVar6);
    lVar7 = *(long *)(unaff_x22 + 0xe0);
    if ((int)uVar18 == 1) {
      FUN_10002a29c(lVar7,&DAT_100554ab8,&DAT_100427d98);
    }
    else {
      bVar1 = *(byte *)(lVar7 + *(int *)(lVar6 + 0x4c));
      FUN_100029548(lVar7,FUN_100400294);
      if ((bVar1 & 1) != 0) {
        pPVar19 = *(Published **)(unaff_x22 + 0x110);
        localized.unknown = *(undefined **)(unaff_x22 + 0xf0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
        puVar3 = &DAT_100427a80;
        _swift_getKeyPath(&DAT_100427a80);
        puVar4 = &DAT_100427aa8;
        _swift_getKeyPath(&DAT_100427aa8);
        *(undefined1 *)(unaff_x22 + 0x134) = 7;
        _swift_retain(uVar18);
        Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x134,uVar18,puVar3,puVar4);
        stringLiteral.bridgeObject = (void *)0xed00006465696e65;
        stringLiteral.str = (char *)0x4420737365636341;
        LVar16 = LocalizationValue::_init(stringLiteral);
        Foundation::Locale::get_current((Locale)LVar16.unknown);
        SVar30 = (extension_Foundation)::Swift::String::_init(localized,(Locale)0x0);
        _swift_getKeyPath(&DAT_100427ac8);
        _swift_getKeyPath(&DAT_100427af0);
        *(String *)(unaff_x22 + 0x70) = SVar30;
        _swift_retain(uVar18);
        Combine::Published::_set_subscript();
        _swift_getKeyPath(&DAT_100427b10);
        _swift_getKeyPath(&DAT_100427b38);
        *(undefined1 *)(unaff_x22 + 0x135) = 1;
        _swift_retain(uVar18);
        Combine::Published::_set_subscript();
        _swift_getKeyPath(&DAT_100427bc0);
        _swift_getKeyPath(&DAT_100427be8);
        *(undefined1 *)(unaff_x22 + 0x136) = 0;
        _swift_retain(uVar18);
        Combine::Published::_set_subscript();
        goto LAB_100147308;
      }
    }
  }
  else {
    local_70 = 0x5b;
    puStack_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x68) = 0xe100000000000000;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x60,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar3,puVar3);
    SVar31.bridgeObject = puVar4;
    SVar31.str = pcVar17;
    Swift::String::append(SVar30,SVar31);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    SVar30.bridgeObject = (void *)0xe300000000000000;
    SVar30.str = (char *)0x5b205d;
    SVar32.bridgeObject = puVar4;
    SVar32.str = pcVar17;
    Swift::String::append(SVar30,SVar32);
    SVar24.bridgeObject = (void *)0xe300000000000000;
    SVar24.str = (char *)0x707061;
    SVar33.bridgeObject = puVar4;
    SVar33.str = pcVar17;
    Swift::String::append(SVar24,SVar33);
    SVar25.bridgeObject = (void *)0xe200000000000000;
    SVar25.str = (char *)0x205d;
    SVar34.bridgeObject = puVar4;
    SVar34.str = pcVar17;
    Swift::String::append(SVar25,SVar34);
    SVar26.bridgeObject = (void *)0x80000001004de8e0;
    SVar26.str = (char *)0x1000000000000048;
    SVar35.bridgeObject = puVar4;
    SVar35.str = pcVar17;
    Swift::String::append(SVar26,SVar35);
    puVar3 = puStack_68;
    uVar18 = local_70;
    local_70 = 0x282020;
    puStack_68 = (undefined *)0xe300000000000000;
    SVar27.bridgeObject = (void *)0xec00000029286574;
    SVar27.str = (char *)0x61476e61426e7572;
    SVar36.bridgeObject = puVar4;
    SVar36.str = pcVar17;
    Swift::String::append(SVar27,SVar36);
    SVar28.bridgeObject = (void *)0xe100000000000000;
    SVar28.str = (char *)0x3a;
    SVar37.bridgeObject = puVar4;
    SVar37.str = pcVar17;
    Swift::String::append(SVar28,SVar37);
    *(undefined8 *)(unaff_x22 + 0x80) = 0xa3;
    SVar30 = Swift::CustomStringConvertible::get_description();
    SVar38.bridgeObject = puVar4;
    SVar38.str = pcVar17;
    Swift::String::append(SVar30,SVar38);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    SVar29.bridgeObject = (void *)0xe100000000000000;
    SVar29.str = (char *)0x29;
    SVar39.bridgeObject = puVar4;
    SVar39.str = pcVar17;
    Swift::String::append(SVar29,SVar39);
    puVar4 = puStack_68;
    uVar11 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar6 = *(long *)(unaff_x22 + 0xd0);
    qos.unknown = *(undefined **)(unaff_x22 + 0xd8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar22 = *(undefined8 *)(unaff_x22 + 200);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar7 = *(long *)(unaff_x22 + 0xb8);
    puVar8 = &DAT_10052e520;
    _swift_allocObject(&DAT_10052e520,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar18;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    *(undefined8 *)(puVar8 + 0x20) = uVar11;
    *(undefined **)(puVar8 + 0x28) = puVar4;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar8;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052e538;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar9.unknown = puVar3;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
    puVar10 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = puVar4;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar21,unaff_x22 + 0x88,puVar4,puVar8,uVar20,puVar10);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar7 + 8))(uVar21,uVar20);
    (**(code **)(lVar6 + 8))(qos.unknown,uVar22);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar6 = *(long *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar21 = uVar20;
    FUN_100099338(uVar20,&DAT_100558f50);
    (**(code **)(lVar6 + 0x10))(uVar11,uVar21,uVar20);
    uVar2 = (uint)uVar11;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar12.unknown = puVar3;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar12);
    pOVar14 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar2 & 0xff);
    lVar6 = *(long *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x98);
    if ((int)pOVar14 == 0) {
      _swift_bridgeObjectRelease_n(puVar3,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar20 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      local_70 = uVar20;
      FUN_10012dbb0(uVar18,puVar3,&local_70);
      *(undefined8 *)(puVar15 + 1) = uVar18;
      _swift_bridgeObjectRelease_n(puVar3,2);
      __os_log_impl(0x100000000,pOVar13,uVar2 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(uVar20);
      _swift_slowDealloc(uVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar6 + 8))(uVar11,uVar21);
  }
  pPVar19 = *(Published **)(unaff_x22 + 0x110);
  FUN_1001473a0();
LAB_100147308:
  _swift_release(pPVar19);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010014736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

