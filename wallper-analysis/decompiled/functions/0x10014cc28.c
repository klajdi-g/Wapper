// rea decompile_all
// name: FUN_10014cc28
// address: 0x10014cc28
// body: available
// range: 0x10014cc28-0x10014d7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014d738 to 0x10014acdc FUN_10014acdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014cc28(void)

{
  long lVar1;
  DispatchWorkItemFlags DVar2;
  long lVar3;
  String SVar4;
  uint uVar5;
  ID IVar6;
  JSONDecoder *pJVar7;
  void *pvVar8;
  OS_os_log *pOVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  Published *pPVar13;
  undefined *puVar14;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  long *plVar20;
  char *pcVar21;
  Data in_x3;
  undefined8 uVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
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
  String SVar59;
  code *local_78;
  char *local_70;
  undefined *puStack_68;
  
  IVar6 = objc_stub::statusCode(*(ID *)(unaff_x22 + 0x250));
  if (IVar6 - 200 < 100) {
    pJVar7 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
    pJVar7 = Foundation::JSONDecoder::init(pJVar7);
    *(JSONDecoder **)(unaff_x22 + 0x260) = pJVar7;
    if (DAT_100559110 != -1) {
      _swift_once(&DAT_100559110,FUN_10028f2ac);
    }
    IVar6 = *(ID *)(unaff_x22 + 600);
    pcVar23 = *(char **)(unaff_x22 + 0x248);
    lVar1 = *(long *)(unaff_x22 + 0x1c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1c0);
    in_x3.unknown = *(undefined **)(unaff_x22 + 0x1b0);
    uVar24 = uVar30;
    FUN_100099338(uVar30,&DAT_100577db0);
    (**(code **)(lVar1 + 0x10))(uVar26,uVar24,uVar30);
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar7,(DateDecodingStrategy)(__int8)uVar26);
    FUN_1000036d0(&DAT_100554cf0,FUN_100150a0c,&TargetProtocolConformanceDescriptor_1004286c0);
    Foundation::JSONDecoder::_decode(pJVar7,in_x3);
    if (IVar6 == 0) {
      local_70 = (char *)0x3a65736e6563694c;
      puStack_68 = (void *)0xe900000000000020;
      pcVar21 = (*(String **)(unaff_x22 + 0x1b8))->str;
      SVar54.bridgeObject = in_x3.unknown;
      SVar54.str = pcVar23;
      Swift::String::append(**(String **)(unaff_x22 + 0x1b8),SVar54);
      puVar11 = puStack_68;
      SVar33.bridgeObject = puStack_68;
      SVar33.str = local_70;
      local_70 = (char *)0x5b;
      puStack_68 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x100) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x118) = 0xe100000000000000;
      FUN_100026df4();
      pcVar23 = (char *)0x0;
      puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x110,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pcVar21,pcVar21);
      SVar55.bridgeObject = puVar12;
      SVar55.str = pcVar23;
      Swift::String::append(SVar40,SVar55);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar40.bridgeObject = (void *)0xe300000000000000;
      SVar40.str = (char *)0x5b205d;
      SVar56.bridgeObject = puVar12;
      SVar56.str = pcVar23;
      Swift::String::append(SVar40,SVar56);
      SVar41.bridgeObject = (void *)0xe700000000000000;
      SVar41.str = (char *)0x65736e6563696c;
      SVar57.bridgeObject = puVar12;
      SVar57.str = pcVar23;
      Swift::String::append(SVar41,SVar57);
      SVar42.bridgeObject = (void *)0xe200000000000000;
      SVar42.str = (char *)0x205d;
      SVar58.bridgeObject = puVar12;
      SVar58.str = pcVar23;
      Swift::String::append(SVar42,SVar58);
      SVar59.bridgeObject = puVar12;
      SVar59.str = pcVar23;
      Swift::String::append(SVar33,SVar59);
      puVar12 = puStack_68;
      pcVar23 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      lVar1 = *(long *)(unaff_x22 + 0x1a0);
      DVar2.unknown = *(undefined **)(unaff_x22 + 0x1a8);
      uVar26 = *(undefined8 *)(unaff_x22 + 400);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
      lVar3 = *(long *)(unaff_x22 + 0x188);
      puVar14 = &DAT_10052eb38;
      _swift_allocObject(&DAT_10052eb38,0x30,7);
      *(char **)(puVar14 + 0x10) = pcVar23;
      *(undefined **)(puVar14 + 0x18) = puVar12;
      *(undefined8 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x68) = puVar14;
      *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x58) = &DAT_10052eb50;
      pvVar8 = __Block_copy((void *)(unaff_x22 + 0x40));
      DVar15.unknown = puVar12;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar15);
      *(undefined **)(unaff_x22 + 0x140) = PTR___swiftEmptyArrayStorage_100524190;
      puVar16 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar17 = puVar14;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(uVar26,unaff_x22 + 0x140,puVar14,puVar17,uVar30,puVar16);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
      __Block_release(pvVar8);
      (**(code **)(lVar3 + 8))(uVar26,uVar30);
      (**(code **)(lVar1 + 8))(DVar2.unknown,uVar24);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar1 = *(long *)(unaff_x22 + 0x168);
      uVar30 = uVar26;
      FUN_100099338(uVar26,&DAT_100558f50);
      (**(code **)(lVar1 + 0x10))(uVar24,uVar30,uVar26);
      uVar5 = (uint)uVar24;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar18.unknown = puVar12;
      _swift_bridgeObjectRetain();
      pOVar9 = os::Logger::get_logObject(LVar18);
      pOVar19 = pOVar9;
      _os_log_type_enabled(pOVar9,uVar5 & 0xff);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar1 = *(long *)(unaff_x22 + 0x168);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(puVar12,2);
      }
      else {
        puVar10 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar21 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar10 = 0x8220102;
        local_70 = pcVar21;
        FUN_10012dbb0(pcVar23,puVar12,&local_70);
        *(char **)(puVar10 + 1) = pcVar23;
        _swift_bridgeObjectRelease_n(puVar12,2);
        __os_log_impl(0x100000000,pOVar9,uVar5 & 0xff,"%{public}s",puVar10,0xc);
        FUN_100043f24(pcVar21);
        _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar1 + 8))(uVar30,uVar26);
      _swift_bridgeObjectRelease(puVar11);
      plVar20 = (long *)0x2c0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x268) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_10014ddf4;
      FUN_10014acdc();
      return;
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x240);
    local_78 = *(code **)(unaff_x22 + 0x230);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar1 = *(long *)(unaff_x22 + 0x1e0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
    FUN_100093624(uVar27,uVar25);
    _swift_release(pJVar7);
    (**(code **)(lVar1 + 8))(uVar26,uVar30);
  }
  else {
    IVar6 = *(ID *)(unaff_x22 + 0x250);
    pcVar21 = *(char **)(unaff_x22 + 0x248);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x240);
    local_78 = *(code **)(unaff_x22 + 0x230);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar1 = *(long *)(unaff_x22 + 0x1e0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
    IVar6 = objc_stub::statusCode(IVar6);
    pcVar23 = pcVar21;
    FUN_10014fc1c(IVar6,uVar25);
    _swift_willThrow();
    FUN_100093624(uVar25,pcVar21);
    (**(code **)(lVar1 + 8))(uVar26,uVar30);
  }
  (*local_78)(uVar22,uVar24);
  local_70 = (char *)0xd000000000000019;
  puStack_68 = (void *)0x80000001004dea30;
  _swift_errorRetain(IVar6);
  SVar32.bridgeObject = (void *)0xa500000000000000;
  SVar32.str = (char *)0x209480e220;
  SVar43.bridgeObject = in_x3.unknown;
  SVar43.str = pcVar23;
  Swift::String::append(SVar32,SVar43);
  pcVar23 = (char *)(unaff_x22 + 0x90);
  _swift_getErrorValue(IVar6,unaff_x22 + 0x120);
  SVar33 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar8 = SVar33.bridgeObject;
  SVar44.bridgeObject = in_x3.unknown;
  SVar44.str = pcVar23;
  Swift::String::append(SVar33,SVar44);
  _swift_bridgeObjectRelease(pvVar8);
  puVar11 = puStack_68;
  SVar4.bridgeObject = puStack_68;
  SVar4.str = local_70;
  local_70 = (char *)0x5b;
  puStack_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar21 = (char *)0x0;
  puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0xe0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
  SVar45.bridgeObject = puVar14;
  SVar45.str = pcVar21;
  Swift::String::append(SVar33,SVar45);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x5b205d;
  SVar46.bridgeObject = puVar14;
  SVar46.str = pcVar21;
  Swift::String::append(SVar34,SVar46);
  SVar35.bridgeObject = (void *)0xe700000000000000;
  SVar35.str = (char *)0x65736e6563696c;
  SVar47.bridgeObject = puVar14;
  SVar47.str = pcVar21;
  Swift::String::append(SVar35,SVar47);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar48.bridgeObject = puVar14;
  SVar48.str = pcVar21;
  Swift::String::append(SVar36,SVar48);
  SVar49.bridgeObject = puVar14;
  SVar49.str = pcVar21;
  Swift::String::append(SVar4,SVar49);
  puVar12 = puStack_68;
  pcVar23 = local_70;
  local_70 = (char *)0x282020;
  puStack_68 = (undefined *)0xe300000000000000;
  SVar37.bridgeObject = (void *)0x80000001004dea50;
  SVar37.str = (char *)0xd00000000000001c;
  SVar50.bridgeObject = puVar14;
  SVar50.str = pcVar21;
  Swift::String::append(SVar37,SVar50);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x3a;
  SVar51.bridgeObject = puVar14;
  SVar51.str = pcVar21;
  Swift::String::append(SVar38,SVar51);
  *(undefined8 *)(unaff_x22 + 0x128) = 0xce;
  SVar33 = Swift::CustomStringConvertible::get_description();
  SVar52.bridgeObject = puVar14;
  SVar52.str = pcVar21;
  Swift::String::append(SVar33,SVar52);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0x29;
  SVar53.bridgeObject = puVar14;
  SVar53.str = pcVar21;
  Swift::String::append(SVar39,SVar53);
  puVar14 = puStack_68;
  pcVar21 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar1 = *(long *)(unaff_x22 + 0x1a0);
  DVar2.unknown = *(undefined **)(unaff_x22 + 0x1a8);
  uVar26 = *(undefined8 *)(unaff_x22 + 400);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  puVar17 = &DAT_10052eae8;
  _swift_allocObject(&DAT_10052eae8,0x30,7);
  *(char **)(puVar17 + 0x10) = pcVar23;
  *(undefined **)(puVar17 + 0x18) = puVar12;
  *(char **)(puVar17 + 0x20) = pcVar21;
  *(undefined **)(puVar17 + 0x28) = puVar14;
  *(code **)(unaff_x22 + 0x30) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x38) = puVar17;
  *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x28) = &DAT_10052eb00;
  pvVar8 = __Block_copy((void *)(unaff_x22 + 0x10));
  DVar15.unknown = puVar12;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar15);
  *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_100524190;
  puVar16 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar14 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar17 = puVar14;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar26,unaff_x22 + 0x130,puVar14,puVar17,uVar30,puVar16);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
  __Block_release(pvVar8);
  (**(code **)(lVar3 + 8))(uVar26,uVar30);
  (**(code **)(lVar1 + 8))(DVar2.unknown,uVar24);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar1 = *(long *)(unaff_x22 + 0x168);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar30 = uVar24;
  FUN_100099338(uVar24,&DAT_100558f50);
  (**(code **)(lVar1 + 0x10))(uVar26,uVar30,uVar24);
  uVar5 = (uint)uVar26;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar18.unknown = puVar12;
  _swift_bridgeObjectRetain();
  pOVar9 = os::Logger::get_logObject(LVar18);
  pOVar19 = pOVar9;
  _os_log_type_enabled(pOVar9,uVar5 & 0xff);
  lVar1 = *(long *)(unaff_x22 + 0x168);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x160);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar12,2);
  }
  else {
    puVar10 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar21 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar10 = 0x8220102;
    local_70 = pcVar21;
    FUN_10012dbb0(pcVar23,puVar12,&local_70);
    *(char **)(puVar10 + 1) = pcVar23;
    _swift_bridgeObjectRelease_n(puVar12,2);
    __os_log_impl(0x100000000,pOVar9,uVar5 & 0xff,"%{public}s",puVar10,0xc);
    FUN_100043f24(pcVar21);
    _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar1 + 8))(uVar26,uVar30);
  _swift_bridgeObjectRelease(puVar11);
  _swift_errorRelease(IVar6);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_getErrorValue(IVar6,unaff_x22 + 0x138,unaff_x22 + 0xa8);
  SVar33 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  puVar11 = &DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  puVar12 = &DAT_100428068;
  _swift_getKeyPath(&DAT_100428068);
  *(String *)(unaff_x22 + 0xf0) = SVar33;
  _swift_retain(uVar26);
  Combine::Published::_set_subscript
            ((Published *)SVar33.str,(String *)(unaff_x22 + 0xf0),uVar26,puVar11,puVar12);
  pPVar13 = (Published *)&DAT_100428088;
  _swift_getKeyPath(&DAT_100428088);
  puVar11 = &DAT_1004280b0;
  _swift_getKeyPath(&DAT_1004280b0);
  *(undefined1 *)(unaff_x22 + 0x270) = 1;
  _swift_retain(uVar26);
  Combine::Published::_set_subscript(pPVar13,unaff_x22 + 0x270,uVar26,pPVar13,puVar11);
  _swift_errorRelease(IVar6);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar31 = *(undefined8 *)(unaff_x22 + 400);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x00010014d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

