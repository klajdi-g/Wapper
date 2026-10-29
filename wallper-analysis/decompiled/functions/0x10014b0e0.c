// rea decompile_all
// name: FUN_10014b0e0
// address: 0x10014b0e0
// body: available
// range: 0x10014b0e0-0x10014bb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014b0e0(void)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  JSONDecoder *pJVar6;
  undefined *puVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined *in_x3;
  char *pcVar19;
  undefined8 uVar20;
  ID IVar21;
  Published *pPVar22;
  long unaff_x22;
  undefined8 uVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  DispatchWorkItemFlags qos;
  undefined8 uVar28;
  long lVar29;
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
  char *local_70;
  undefined *puStack_68;
  
  IVar21 = *(ID *)(unaff_x22 + 0x2a8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x270));
  IVar21 = objc_stub::statusCode(IVar21);
  if (IVar21 - 200 < 100) {
    pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar6 = Foundation::JSONDecoder::init(pJVar6);
    if (DAT_100559110 != -1) {
      _swift_once(&DAT_100559110,FUN_10028f2ac);
    }
    IVar21 = *(ID *)(unaff_x22 + 0x2b0);
    pcVar19 = *(char **)(unaff_x22 + 0x2a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar29 = *(long *)(unaff_x22 + 0x218);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar20 = uVar26;
    FUN_100099338(uVar26,&DAT_100577db0);
    (**(code **)(lVar29 + 0x10))(uVar23,uVar20,uVar26);
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar6,(DateDecodingStrategy)(__int8)uVar23);
    FUN_1001500e4();
    in_x3 = &DAT_10052e900;
    Foundation::JSONDecoder::_decode(pJVar6,(Data)0x10052e900);
    if (IVar21 == 0) {
      pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
      *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined1 *)(unaff_x22 + 0xb8) = *(undefined1 *)(unaff_x22 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x10);
      cVar2 = *(char *)(unaff_x22 + 0x78);
      puVar16 = &DAT_100427fb0;
      _swift_getKeyPath(&DAT_100427fb0);
      puVar17 = &DAT_100427fd8;
      _swift_getKeyPath(&DAT_100427fd8);
      *(char *)(unaff_x22 + 0x62) = cVar2;
      _swift_retain(pPVar22);
      Combine::Published::_set_subscript(pPVar22,unaff_x22 + 0x62,pPVar22,puVar16,puVar17);
      cVar3 = *(char *)(unaff_x22 + 0x79);
      _swift_getKeyPath(&DAT_100427f68);
      _swift_getKeyPath(&DAT_100427f90);
      *(char *)(unaff_x22 + 99) = cVar3;
      _swift_retain(pPVar22);
      Combine::Published::_set_subscript();
      uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar4 = *(undefined1 *)(unaff_x22 + 0xb8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar29 = *(long *)(unaff_x22 + 0x98);
      _swift_getKeyPath(&DAT_100427ff8);
      _swift_getKeyPath(&DAT_100428020);
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar25;
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar27;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar23;
      *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
      *(undefined1 *)(unaff_x22 + 0x118) = uVar4;
      _swift_bridgeObjectRetain(lVar29);
      _swift_retain(pPVar22);
      Combine::Published::_set_subscript();
      FUN_10014a3a8();
      uVar20 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x88);
      _swift_getKeyPath(&DAT_1004280e0);
      _swift_getKeyPath(&DAT_100428108);
      *(undefined8 *)(unaff_x22 + 0x198) = uVar20;
      *(undefined1 *)(unaff_x22 + 0x1a0) = uVar4;
      _swift_retain(pPVar22);
      Combine::Published::_set_subscript();
      if (cVar2 == '\x01') {
        pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
        FUN_10015012c(unaff_x22 + 0x68);
        puVar16 = &DAT_100428040;
        _swift_getKeyPath(&DAT_100428040);
        puVar17 = &DAT_100428068;
        _swift_getKeyPath(&DAT_100428068);
        *(undefined8 *)(unaff_x22 + 0x188) = 0;
        *(undefined8 *)(unaff_x22 + 400) = 4;
        _swift_retain(pPVar22);
        lVar29 = unaff_x22 + 0x188;
      }
      else {
        if (cVar3 == '\0') {
          FUN_10015012c(unaff_x22 + 0x68);
        }
        else {
          _swift_bridgeObjectRetain(lVar29);
          FUN_10015012c(unaff_x22 + 0x68);
          if (lVar29 != 0) {
            pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
            _swift_bridgeObjectRelease(lVar29);
            puVar16 = &DAT_100428040;
            _swift_getKeyPath(&DAT_100428040);
            puVar17 = &DAT_100428068;
            _swift_getKeyPath(&DAT_100428068);
            *(undefined8 *)(unaff_x22 + 0x178) = 0;
            *(undefined8 *)(unaff_x22 + 0x180) = 2;
            _swift_retain(pPVar22);
            lVar29 = unaff_x22 + 0x178;
            goto LAB_10014ba24;
          }
        }
        pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
        puVar16 = &DAT_100428040;
        _swift_getKeyPath(&DAT_100428040);
        puVar17 = &DAT_100428068;
        _swift_getKeyPath(&DAT_100428068);
        *(undefined8 *)(unaff_x22 + 0x168) = 0;
        *(undefined8 *)(unaff_x22 + 0x170) = 3;
        _swift_retain(pPVar22);
        lVar29 = unaff_x22 + 0x168;
      }
LAB_10014ba24:
      Combine::Published::_set_subscript(pPVar22,lVar29,pPVar22,puVar16,puVar17);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x2a0);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x298);
      pcVar24 = *(code **)(unaff_x22 + 0x288);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x238);
      lVar29 = *(long *)(unaff_x22 + 0x230);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x228);
      pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
      FUN_10014df70();
      puVar16 = &DAT_100428088;
      _swift_getKeyPath(&DAT_100428088);
      puVar17 = &DAT_1004280b0;
      _swift_getKeyPath(&DAT_1004280b0);
      *(undefined1 *)(unaff_x22 + 100) = 1;
      _swift_retain(pPVar22);
      Combine::Published::_set_subscript(pPVar22,unaff_x22 + 100,pPVar22,puVar16,puVar17);
      FUN_100093624(uVar27,uVar26);
      _swift_release(pJVar6);
      (**(code **)(lVar29 + 8))(uVar25,uVar28);
      (*pcVar24)(uVar23,uVar20);
      goto LAB_10014b740;
    }
    pcVar24 = *(code **)(unaff_x22 + 0x288);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar29 = *(long *)(unaff_x22 + 0x230);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x228);
    FUN_100093624(*(undefined8 *)(unaff_x22 + 0x298),*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_release(pJVar6);
    (**(code **)(lVar29 + 8))(uVar26,uVar27);
    (*pcVar24)(uVar20,uVar23);
  }
  else {
    pcVar18 = *(char **)(unaff_x22 + 0x2a0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    pcVar24 = *(code **)(unaff_x22 + 0x288);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar29 = *(long *)(unaff_x22 + 0x230);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x228);
    IVar21 = objc_stub::statusCode(*(ID *)(unaff_x22 + 0x2a8));
    pcVar19 = pcVar18;
    FUN_10014fc1c(IVar21,uVar23);
    _swift_willThrow();
    FUN_100093624(uVar23,pcVar18);
    (**(code **)(lVar29 + 8))(uVar26,uVar25);
    (*pcVar24)(uVar20,uVar27);
  }
  local_70 = (char *)0xd00000000000001d;
  puStack_68 = (void *)0x80000001004de950;
  _swift_errorRetain(IVar21);
  SVar33.bridgeObject = (void *)0xa500000000000000;
  SVar33.str = (char *)0x209480e220;
  SVar40.bridgeObject = in_x3;
  SVar40.str = pcVar19;
  Swift::String::append(SVar33,SVar40);
  pcVar19 = (char *)(unaff_x22 + 0x120);
  _swift_getErrorValue(IVar21,unaff_x22 + 0x1a8);
  SVar32 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar8 = SVar32.bridgeObject;
  SVar41.bridgeObject = in_x3;
  SVar41.str = pcVar19;
  Swift::String::append(SVar32,SVar41);
  _swift_bridgeObjectRelease(pvVar8);
  puVar16 = puStack_68;
  SVar32.bridgeObject = puStack_68;
  SVar32.str = local_70;
  local_70 = (char *)0x5b;
  puStack_68 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x148) = 0x524f525245;
  *(undefined8 *)(unaff_x22 + 0x150) = 0xe500000000000000;
  *(undefined8 *)(unaff_x22 + 0x158) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x160) = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x158,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar8,pvVar8);
  SVar42.bridgeObject = puVar11;
  SVar42.str = pcVar18;
  Swift::String::append(SVar33,SVar42);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x5b205d;
  SVar43.bridgeObject = puVar11;
  SVar43.str = pcVar18;
  Swift::String::append(SVar34,SVar43);
  SVar35.bridgeObject = (void *)0xe700000000000000;
  SVar35.str = (char *)0x65736e6563696c;
  SVar44.bridgeObject = puVar11;
  SVar44.str = pcVar18;
  Swift::String::append(SVar35,SVar44);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar45.bridgeObject = puVar11;
  SVar45.str = pcVar18;
  Swift::String::append(SVar36,SVar45);
  SVar46.bridgeObject = puVar11;
  SVar46.str = pcVar18;
  Swift::String::append(SVar32,SVar46);
  puVar17 = puStack_68;
  pcVar19 = local_70;
  local_70 = (char *)0x282020;
  puStack_68 = (undefined *)0xe300000000000000;
  SVar37.bridgeObject = (void *)0xec00000029287375;
  SVar37.str = (char *)0x7461745364616f6c;
  SVar47.bridgeObject = puVar11;
  SVar47.str = pcVar18;
  Swift::String::append(SVar37,SVar47);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x3a;
  SVar48.bridgeObject = puVar11;
  SVar48.str = pcVar18;
  Swift::String::append(SVar38,SVar48);
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0xac;
  SVar32 = Swift::CustomStringConvertible::get_description();
  SVar49.bridgeObject = puVar11;
  SVar49.str = pcVar18;
  Swift::String::append(SVar32,SVar49);
  _swift_bridgeObjectRelease(SVar32.bridgeObject);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0x29;
  SVar50.bridgeObject = puVar11;
  SVar50.str = pcVar18;
  Swift::String::append(SVar39,SVar50);
  puVar11 = puStack_68;
  pcVar18 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x208);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f8);
  lVar1 = *(long *)(unaff_x22 + 0x200);
  lVar29 = *(long *)(unaff_x22 + 0x1e8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar7 = &DAT_10052e7d0;
  _swift_allocObject(&DAT_10052e7d0,0x30,7);
  *(char **)(puVar7 + 0x10) = pcVar19;
  *(undefined **)(puVar7 + 0x18) = puVar17;
  *(char **)(puVar7 + 0x20) = pcVar18;
  *(undefined **)(puVar7 + 0x28) = puVar11;
  *(code **)(unaff_x22 + 0xe0) = FUN_100099310;
  *(undefined **)(unaff_x22 + 0xe8) = puVar7;
  *(undefined **)(unaff_x22 + 0xc0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 200) = 0x42000000;
  *(code **)(unaff_x22 + 0xd0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xd8) = &DAT_10052e7e8;
  pvVar8 = __Block_copy((void *)(unaff_x22 + 0xc0));
  DVar9.unknown = puVar17;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar9);
  *(undefined **)(unaff_x22 + 0x1b8) = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar11 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = puVar11;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar23,unaff_x22 + 0x1b8,puVar11,puVar7,uVar26,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar8);
  (**(code **)(lVar29 + 8))(uVar23,uVar26);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar29 = *(long *)(unaff_x22 + 0x1d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar23 = uVar26;
  FUN_100099338(uVar26,&DAT_100558f50);
  (**(code **)(lVar29 + 0x10))(uVar20,uVar23,uVar26);
  uVar5 = (uint)uVar20;
  static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
  LVar12.unknown = puVar17;
  _swift_bridgeObjectRetain();
  pOVar13 = os::Logger::get_logObject(LVar12);
  pOVar14 = pOVar13;
  _os_log_type_enabled(pOVar13,uVar5 & 0xff);
  lVar29 = *(long *)(unaff_x22 + 0x1d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1c8);
  if ((int)pOVar14 == 0) {
    _swift_bridgeObjectRelease_n(puVar17,2);
  }
  else {
    puVar15 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar18 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar15 = 0x8220102;
    local_70 = pcVar18;
    FUN_10012dbb0(pcVar19,puVar17,&local_70);
    *(char **)(puVar15 + 1) = pcVar19;
    _swift_bridgeObjectRelease_n(puVar17,2);
    __os_log_impl(0x100000000,pOVar13,uVar5 & 0xff,"%{public}s",puVar15,0xc);
    FUN_100043f24(pcVar18);
    _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar29 + 8))(uVar20,uVar23);
  _swift_bridgeObjectRelease(puVar16);
  _swift_errorRelease(IVar21);
  pPVar22 = *(Published **)(unaff_x22 + 0x1c0);
  FUN_10014a968();
  puVar16 = &DAT_100428088;
  _swift_getKeyPath(&DAT_100428088);
  puVar17 = &DAT_1004280b0;
  _swift_getKeyPath(&DAT_1004280b0);
  *(undefined1 *)(unaff_x22 + 0x61) = 1;
  _swift_retain(pPVar22);
  Combine::Published::_set_subscript(pPVar22,unaff_x22 + 0x61,pPVar22,puVar16,puVar17);
  _swift_errorRelease(IVar21);
LAB_10014b740:
  uVar23 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar20 = *(undefined8 *)(unaff_x22 + 600);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x268));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar31);
                    /* WARNING: Could not recover jumptable at 0x00010014b7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

