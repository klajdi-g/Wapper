// rea decompile_all
// name: FUN_10026f754
// address: 0x10026f754
// body: available
// range: 0x10026f754-0x1002702c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100270260 to 0x100413514 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$get_value (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010026f998) */
/* WARNING: Removing unreachable block (ram,0x00010026f904) */

void FUN_10026f754(void)

{
  Data DVar1;
  DispatchWorkItemFlags qos;
  String SVar2;
  ID self;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  Data DVar7;
  JSONDecoder *pJVar8;
  Published *pPVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *aBlock;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined *extraout_x1;
  _StringGuts _Var22;
  code *pcVar23;
  URL UVar24;
  char *pcVar25;
  undefined8 uVar26;
  NSDataReadingOptions contentsOf;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  undefined8 uVar34;
  code *pcVar35;
  undefined8 uVar36;
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
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  char *local_70;
  undefined *local_68;
  
  lVar30 = _TtC7Wallper17VideoLibraryStore::isLoadingAll;
  lVar29 = *(long *)(unaff_x22 + 0x148);
  *(long *)(unaff_x22 + 0x210) = _TtC7Wallper17VideoLibraryStore::isLoadingAll;
  if ((*(byte *)(lVar29 + lVar30) & 1) == 0) {
    *(undefined1 *)(lVar29 + lVar30) = 1;
    puVar4 = &DAT_10042d458;
    _swift_getKeyPath(&DAT_10042d458);
    puVar5 = &DAT_10042d480;
    _swift_getKeyPath(&DAT_10042d480);
    Combine::Published::_get_subscript(unaff_x22 + 0xb0,lVar29,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    TVar6.unknown = *(undefined **)(unaff_x22 + 0xb0);
    lVar30 = *(long *)(TVar6.unknown + 0x10);
    _swift_bridgeObjectRelease();
    if (lVar30 == 0) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0x148);
      puVar4 = &DAT_10042d3b8;
      _swift_getKeyPath(&DAT_10042d3b8);
      puVar5 = &DAT_10042d3e0;
      _swift_getKeyPath(&DAT_10042d3e0);
      Combine::Published::_get_subscript(unaff_x22 + 0xf0,uVar31,puVar4,puVar5);
      _swift_release(puVar5);
      _swift_release(puVar4);
      TVar6.unknown = *(undefined **)(unaff_x22 + 0xf0);
      lVar30 = *(long *)(TVar6.unknown + 0x10);
      _swift_bridgeObjectRelease();
      if (lVar30 == 0) {
        contentsOf.unknown = *(undefined **)(unaff_x22 + 0x1f0);
        FUN_100274688(contentsOf.unknown);
        uVar21 = 0;
        DVar7 = Foundation::Data::_init(contentsOf);
        DVar1.unknown = *(undefined **)(unaff_x22 + 0x1b8);
        pcVar35 = *(code **)(*(long *)(unaff_x22 + 0x1d8) + 8);
        (*pcVar35)(*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1d0));
        pJVar8 = Foundation::JSONDecoder::typeMetadataAccessor();
        _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
        pJVar8 = Foundation::JSONDecoder::init(pJVar8);
        FUN_1000036d0(&DAT_100558ca0,FUN_100282f08,&TargetProtocolConformanceDescriptor_10042d590);
        Foundation::JSONDecoder::_decode(pJVar8,DVar1);
        puVar4 = *(undefined **)(unaff_x22 + 0x1e0);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x1e8);
        puVar13 = *(undefined8 **)(unaff_x22 + 0x1c8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1d0);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x1b8);
        lVar30 = *(long *)(unaff_x22 + 0x1c0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x1b0);
        lVar29 = *(long *)(unaff_x22 + 0x148);
        FUN_100093624(DVar7.unknown,uVar21);
        _swift_release(pJVar8);
        (**(code **)(lVar30 + 0x38))(uVar33,0,1,uVar31);
        pcVar23 = FUN_100282f08;
        FUN_100007e64(uVar33,puVar13);
        pcVar25 = (char *)*puVar13;
        uVar31 = puVar13[1];
        _swift_bridgeObjectRetain(pcVar25);
        _swift_bridgeObjectRetain(uVar31);
        FUN_100029548(puVar13,FUN_100282f08);
        SVar40.bridgeObject = (void *)0xed00006f65646976;
        SVar40.str = (char *)0x2d7265706c6c6177;
        Foundation::URL::appendingPathComponent(SVar40,(URL)pcVar23);
        SVar37.bridgeObject = (void *)0xe800000000000000;
        SVar37.str = (char *)0x7377656976657270;
        Foundation::URL::appendingPathComponent(SVar37,(URL)pcVar23);
        pcVar19 = pcVar25;
        UVar24.unknown = puVar4;
        FUN_100280fec(pcVar25,uVar27);
        (*pcVar35)(puVar4,uVar28);
        (*pcVar35)(uVar27,uVar28);
        SVar38.bridgeObject = (void *)0x80000001004e2fe0;
        SVar38.str = (char *)0xd000000000000016;
        Foundation::URL::appendingPathComponent(SVar38,UVar24);
        SVar39.bridgeObject = (void *)0xe800000000000000;
        SVar39.str = (char *)0x7377656976657270;
        Foundation::URL::appendingPathComponent(SVar39,UVar24);
        uVar21 = uVar31;
        FUN_100280fec(uVar31,uVar27,puVar4);
        _swift_bridgeObjectRelease(pcVar25);
        _swift_bridgeObjectRelease(uVar31);
        (*pcVar35)(puVar4,uVar28);
        (*pcVar35)(uVar27,uVar28);
        pPVar9 = (Published *)&DAT_10042d458;
        _swift_getKeyPath(&DAT_10042d458);
        puVar4 = &DAT_10042d480;
        _swift_getKeyPath(&DAT_10042d480);
        *(char **)(unaff_x22 + 0xf8) = pcVar19;
        _swift_bridgeObjectRetain();
        _swift_retain(lVar29);
        Combine::Published::_set_subscript(pPVar9,unaff_x22 + 0xf8,lVar29,pPVar9,puVar4);
        pPVar9 = (Published *)&DAT_10042d3b8;
        _swift_getKeyPath(&DAT_10042d3b8);
        puVar4 = &DAT_10042d3e0;
        _swift_getKeyPath(&DAT_10042d3e0);
        *(undefined8 *)(unaff_x22 + 0x100) = uVar21;
        _swift_retain(lVar29);
        _swift_bridgeObjectRetain(uVar21);
        Combine::Published::_set_subscript(pPVar9,unaff_x22 + 0x100,lVar29,pPVar9,puVar4);
        local_70 = pcVar19;
        FUN_10012f3c8(uVar21);
        pcVar25 = local_70;
        puVar4 = &DAT_10042d1d8;
        puVar10 = puVar4;
        _swift_getKeyPath(&DAT_10042d1d8);
        puVar5 = &DAT_10042d200;
        puVar11 = puVar5;
        _swift_getKeyPath();
        *(char **)(unaff_x22 + 0x108) = pcVar25;
        _swift_retain(lVar29);
        Combine::Published::_set_subscript
                  ((Published *)&DAT_10042d1d8,unaff_x22 + 0x108,lVar29,puVar10);
        puVar13 = (undefined8 *)(lVar29 + _TtC7Wallper17VideoLibraryStore::lookupCache);
        uVar31 = *puVar13;
        uVar27 = puVar13[1];
        *puVar13 = 0;
        puVar13[1] = 0;
        FUN_10027f5e8(uVar31,uVar27);
        _swift_getKeyPath(puVar4);
        _swift_getKeyPath(&DAT_10042d200);
        Combine::Published::_get_subscript(unaff_x22 + 0x110,lVar29,puVar4,puVar5);
        _swift_release(puVar5);
        _swift_release(puVar4);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x110);
        uVar31 = uVar27;
        FUN_1002816b4();
        _swift_bridgeObjectRelease(uVar27);
        if (DAT_100558868 != -1) {
          _swift_once(&DAT_100558868,FUN_100268a88);
        }
        self = DAT_100558858;
        objc_stub::lock(DAT_100558858);
        if (DAT_100558860 != -1) {
          _swift_once(&DAT_100558860,FUN_100268ab0);
        }
        uVar27 = DAT_100558850;
        uVar28 = *(undefined8 *)(unaff_x22 + 0x148);
        DAT_100558850 = uVar31;
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRelease(uVar27);
        objc_stub::unlock(self);
        _Var22.unknown = extraout_x1;
        _swift_bridgeObjectRelease(uVar31);
        local_70 = (char *)0x0;
        local_68 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x30,_Var22);
        _swift_bridgeObjectRelease(local_68);
        local_70 = (char *)0x1000000000000025;
        local_68 = (undefined *)0x80000001004e3190;
        puVar4 = &DAT_10042d1d8;
        _swift_getKeyPath(&DAT_10042d1d8);
        pcVar25 = &DAT_10042d200;
        _swift_getKeyPath();
        pcVar19 = pcVar25;
        Combine::Published::_get_subscript(unaff_x22 + 0x118,uVar28,puVar4);
        _swift_release(pcVar25);
        _swift_release(puVar4);
        uVar31 = *(undefined8 *)(*(long *)(unaff_x22 + 0x118) + 0x10);
        _swift_bridgeObjectRelease();
        *(undefined8 *)(unaff_x22 + 0x120) = uVar31;
        SVar40 = Swift::CustomStringConvertible::get_description();
        SVar45.bridgeObject = puVar11;
        SVar45.str = pcVar19;
        Swift::String::append(SVar40,SVar45);
        _swift_bridgeObjectRelease(SVar40.bridgeObject);
        uVar31 = 0x73286f6564697620;
        SVar41.bridgeObject = (void *)0xe900000000000029;
        SVar41.str = (char *)0x73286f6564697620;
        SVar46.bridgeObject = puVar11;
        SVar46.str = pcVar19;
        Swift::String::append(SVar41,SVar46);
        TVar6.unknown = local_68;
        SVar2.bridgeObject = local_68;
        SVar2.str = local_70;
        local_70 = (char *)0x5b;
        local_68 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x90) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x98) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x88) = 0xe100000000000000;
        FUN_100026df4();
        pcVar25 = (char *)0x0;
        puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x80,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar31,uVar31);
        SVar47.bridgeObject = puVar4;
        SVar47.str = pcVar25;
        Swift::String::append(SVar40,SVar47);
        _swift_bridgeObjectRelease(SVar40.bridgeObject);
        SVar42.bridgeObject = (void *)0xe300000000000000;
        SVar42.str = (char *)0x5b205d;
        SVar48.bridgeObject = puVar4;
        SVar48.str = pcVar25;
        Swift::String::append(SVar42,SVar48);
        SVar43.bridgeObject = (void *)0xe300000000000000;
        SVar43.str = (char *)0x707061;
        SVar49.bridgeObject = puVar4;
        SVar49.str = pcVar25;
        Swift::String::append(SVar43,SVar49);
        SVar44.bridgeObject = (void *)0xe200000000000000;
        SVar44.str = (char *)0x205d;
        SVar50.bridgeObject = puVar4;
        SVar50.str = pcVar25;
        Swift::String::append(SVar44,SVar50);
        SVar51.bridgeObject = puVar4;
        SVar51.str = pcVar25;
        Swift::String::append(SVar2,SVar51);
        puVar4 = local_68;
        pcVar25 = local_70;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        lVar30 = *(long *)(unaff_x22 + 0x1a0);
        qos.unknown = *(undefined **)(unaff_x22 + 0x1a8);
        uVar31 = *(undefined8 *)(unaff_x22 + 400);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x180);
        lVar29 = *(long *)(unaff_x22 + 0x188);
        puVar5 = &DAT_1005365e8;
        _swift_allocObject(&DAT_1005365e8,0x30,7);
        *(char **)(puVar5 + 0x10) = pcVar25;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0x38) = puVar5;
        *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
        *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x28) = &DAT_100536600;
        aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
        DVar12.unknown = puVar4;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar12);
        *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
        puVar13 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar5 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar14 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(uVar31,unaff_x22 + 0x140,puVar5,puVar14,uVar27,puVar13);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar29 + 8))(uVar31,uVar27);
        (**(code **)(lVar30 + 8))(qos.unknown,uVar28);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        uVar28 = *(undefined8 *)(unaff_x22 + 0x178);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x160);
        lVar30 = *(long *)(unaff_x22 + 0x168);
        uVar27 = uVar31;
        FUN_100099338(uVar31,&DAT_100558f50);
        (**(code **)(lVar30 + 0x10))(uVar28,uVar27,uVar31);
        uVar3 = (uint)uVar28;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar15.unknown = puVar4;
        _swift_bridgeObjectRetain();
        pOVar16 = os::Logger::get_logObject(LVar15);
        pOVar17 = pOVar16;
        _os_log_type_enabled(pOVar16,uVar3 & 0xff);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x178);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x160);
        lVar30 = *(long *)(unaff_x22 + 0x168);
        if ((int)pOVar17 == 0) {
          _swift_bridgeObjectRelease_n(puVar4,2);
        }
        else {
          puVar18 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar19 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar18 = 0x8220102;
          local_70 = pcVar19;
          FUN_10012dbb0(pcVar25,puVar4,&local_70);
          *(char **)(puVar18 + 1) = pcVar25;
          _swift_bridgeObjectRelease_n(puVar4,2);
          __os_log_impl(0x100000000,pOVar16,uVar3 & 0xff,"%{public}s",puVar18,0xc);
          FUN_100043f24(pcVar19);
          _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar30 + 8))(uVar27,uVar31);
        _swift_bridgeObjectRelease();
      }
    }
    uVar31 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x158);
    Swift::TaskPriority::get_userInitiated(TVar6);
    TVar6 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(uVar27,0,1,TVar6.unknown);
    puVar4 = &DAT_100536570;
    _swift_allocObject(&DAT_100536570,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(undefined8 *)(puVar4 + 0x20) = uVar31;
    uVar31 = 0;
    FUN_1001776e0(0,0,uVar27,&DAT_10042d4d8,puVar4);
    *(undefined8 *)(unaff_x22 + 0x218) = uVar31;
    FUN_10002a29c(uVar27,&DAT_100561090,&DAT_10041c870);
    plVar20 = (long *)(ulong)*(uint *)(PTR__get_value_100524738 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x220) = plVar20;
    FUN_100002f94(&DAT_1005564d0,&DAT_10042a3a0);
    *plVar20 = unaff_x22;
    plVar20[1] = (long)FUN_1002702c4;
    (extension_Swift)::Swift::Task::_get_value((undefined *)(unaff_x22 + 0x138));
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1f8));
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar34 = *(undefined8 *)(unaff_x22 + 400);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar36);
                    /* WARNING: Could not recover jumptable at 0x00010026f820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

