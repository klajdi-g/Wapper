// rea decompile_all
// name: FUN_100270318
// address: 0x100270318
// body: available
// range: 0x100270318-0x100270adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100270318(void)

{
  DispatchWorkItemFlags qos;
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Logger LVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  _StringGuts _Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Published *pPVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  char *pcVar23;
  undefined8 uVar24;
  long lVar25;
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
  char *local_68;
  undefined *local_60;
  
  lVar25 = *(long *)(unaff_x22 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1f8));
  uVar15 = *(undefined8 *)(unaff_x22 + 0x138);
  puVar4 = &DAT_10042d458;
  _swift_getKeyPath(&DAT_10042d458);
  puVar5 = &DAT_10042d480;
  _swift_getKeyPath(&DAT_10042d480);
  Combine::Published::_get_subscript(unaff_x22 + 0x130,lVar25,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  pcVar23 = *(char **)(unaff_x22 + 0x130);
  puVar4 = &DAT_10042d3b8;
  _swift_getKeyPath(&DAT_10042d3b8);
  puVar5 = &DAT_10042d3e0;
  _swift_getKeyPath(&DAT_10042d3e0);
  Combine::Published::_get_subscript(unaff_x22 + 0x128,lVar25,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  local_68 = pcVar23;
  FUN_10012f3c8(*(undefined8 *)(unaff_x22 + 0x128));
  pcVar23 = local_68;
  pcVar13 = local_68;
  FUN_100281ba0(local_68,uVar15);
  _swift_bridgeObjectRelease(pcVar23);
  _swift_bridgeObjectRelease(uVar15);
  pPVar18 = (Published *)&DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  puVar4 = &DAT_10042d248;
  _swift_getKeyPath(&DAT_10042d248);
  *(undefined8 *)(unaff_x22 + 0xd0) = pcVar13;
  _swift_retain(lVar25);
  Combine::Published::_set_subscript(pPVar18,(undefined8 *)(unaff_x22 + 0xd0),lVar25,pPVar18,puVar4)
  ;
  uVar15 = *(undefined8 *)(lVar25 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache);
  *(undefined8 *)(lVar25 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache) = 0;
  _swift_bridgeObjectRelease(uVar15);
  puVar4 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar5 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(unaff_x22 + 200,lVar25,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  lVar25 = *(long *)(*(long *)(unaff_x22 + 200) + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar25 == 0) {
    pPVar18 = *(Published **)(unaff_x22 + 0x148);
    puVar4 = &DAT_10042d220;
    _swift_getKeyPath(&DAT_10042d220);
    puVar5 = &DAT_10042d248;
    _swift_getKeyPath(&DAT_10042d248);
    Combine::Published::_get_subscript(unaff_x22 + 0xe0,pPVar18,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar4 = &DAT_10042d1d8;
    _swift_getKeyPath(&DAT_10042d1d8);
    puVar5 = &DAT_10042d200;
    _swift_getKeyPath(&DAT_10042d200);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar15;
    _swift_retain(pPVar18);
    Combine::Published::_set_subscript
              (pPVar18,(undefined8 *)(unaff_x22 + 0xe8),pPVar18,puVar4,puVar5);
    puVar7 = (undefined8 *)((long)&pPVar18->unknown + _TtC7Wallper17VideoLibraryStore::lookupCache);
    uVar15 = *puVar7;
    uVar21 = puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_10027f5e8(uVar15,uVar21);
  }
  puVar20 = *(undefined **)(unaff_x22 + 0x148);
  FUN_100270b2c();
  pPVar18 = (Published *)&DAT_10042d4e8;
  _swift_getKeyPath(&DAT_10042d4e8);
  puVar4 = &DAT_10042d510;
  _swift_getKeyPath();
  *(undefined1 *)(unaff_x22 + 0x228) = 1;
  _swift_retain(puVar20);
  _Var14.unknown = puVar20;
  Combine::Published::_set_subscript(pPVar18,unaff_x22 + 0x228,puVar20,pPVar18);
  local_68 = (char *)0x0;
  local_60 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x22,_Var14);
  _swift_bridgeObjectRelease(local_60);
  local_68 = (char *)0xd000000000000010;
  local_60 = (void *)0x80000001004e3150;
  puVar5 = &DAT_10042d220;
  _swift_getKeyPath(&DAT_10042d220);
  pcVar23 = &DAT_10042d248;
  _swift_getKeyPath();
  pcVar13 = pcVar23;
  Combine::Published::_get_subscript(unaff_x22 + 0xb8,puVar20,puVar5);
  _swift_release(pcVar23);
  _swift_release(puVar5);
  uVar15 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb8) + 0x10);
  _swift_bridgeObjectRelease();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar15;
  SVar27 = Swift::CustomStringConvertible::get_description();
  SVar32.bridgeObject = puVar4;
  SVar32.str = pcVar13;
  Swift::String::append(SVar27,SVar32);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  uVar15 = 0xd000000000000010;
  SVar28.bridgeObject = (void *)0x80000001004e3170;
  SVar28.str = (char *)0xd000000000000010;
  SVar33.bridgeObject = puVar4;
  SVar33.str = pcVar13;
  Swift::String::append(SVar28,SVar33);
  puVar4 = local_60;
  SVar27.bridgeObject = local_60;
  SVar27.str = local_68;
  local_68 = (char *)0x5b;
  local_60 = (undefined *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x78) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0xe100000000000000;
  FUN_100026df4();
  pcVar23 = (char *)0x0;
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar28 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0xa0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
  SVar34.bridgeObject = puVar5;
  SVar34.str = pcVar23;
  Swift::String::append(SVar28,SVar34);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  SVar29.bridgeObject = (void *)0xe300000000000000;
  SVar29.str = (char *)0x5b205d;
  SVar35.bridgeObject = puVar5;
  SVar35.str = pcVar23;
  Swift::String::append(SVar29,SVar35);
  SVar30.bridgeObject = (void *)0xe300000000000000;
  SVar30.str = (char *)0x707061;
  SVar36.bridgeObject = puVar5;
  SVar36.str = pcVar23;
  Swift::String::append(SVar30,SVar36);
  SVar31.bridgeObject = (void *)0xe200000000000000;
  SVar31.str = (char *)0x205d;
  SVar37.bridgeObject = puVar5;
  SVar37.str = pcVar23;
  Swift::String::append(SVar31,SVar37);
  SVar38.bridgeObject = puVar5;
  SVar38.str = pcVar23;
  Swift::String::append(SVar27,SVar38);
  puVar5 = local_60;
  pcVar23 = local_68;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  lVar25 = *(long *)(unaff_x22 + 0x1a0);
  qos.unknown = *(undefined **)(unaff_x22 + 0x1a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 400);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar19 = *(long *)(unaff_x22 + 0x188);
  puVar20 = &DAT_100536598;
  _swift_allocObject(&DAT_100536598,0x30,7);
  *(char **)(puVar20 + 0x10) = pcVar23;
  *(undefined **)(puVar20 + 0x18) = puVar5;
  *(undefined8 *)(puVar20 + 0x20) = 0;
  *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0x68) = puVar20;
  *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
  *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0x58) = &DAT_1005365b0;
  aBlock = __Block_copy((void *)(unaff_x22 + 0x40));
  DVar6.unknown = puVar5;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  *(undefined **)(unaff_x22 + 0xd8) = PTR___swiftEmptyArrayStorage_100524190;
  puVar7 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar20 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar8 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar15,unaff_x22 + 0xd8,puVar20,puVar8,uVar21,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar19 + 8))(uVar15,uVar21);
  (**(code **)(lVar25 + 8))(qos.unknown,uVar16);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  lVar25 = *(long *)(unaff_x22 + 0x168);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar21 = uVar16;
  FUN_100099338(uVar16,&DAT_100558f50);
  (**(code **)(lVar25 + 0x10))(uVar15,uVar21,uVar16);
  uVar3 = (uint)uVar15;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar9.unknown = puVar5;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar9);
  pOVar11 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar3 & 0xff);
  lVar25 = *(long *)(unaff_x22 + 0x168);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x160);
  if ((int)pOVar11 == 0) {
    _swift_bridgeObjectRelease_n(puVar5,2);
  }
  else {
    puVar12 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar13 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220102;
    local_68 = pcVar13;
    FUN_10012dbb0(pcVar23,puVar5,&local_68);
    *(char **)(puVar12 + 1) = pcVar23;
    _swift_bridgeObjectRelease_n(puVar5,2);
    __os_log_impl(0x100000000,pOVar10,uVar3 & 0xff,"%{public}s",puVar12,0xc);
    FUN_100043f24(pcVar13);
    _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar25 + 8))(uVar15,uVar21);
  _swift_bridgeObjectRelease(puVar4);
  lVar25 = *(long *)(unaff_x22 + 0x210);
  lVar19 = *(long *)(unaff_x22 + 0x148);
  FUN_100270f98();
  *(undefined1 *)(lVar19 + lVar25) = 0;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar24 = *(undefined8 *)(unaff_x22 + 400);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x000100270aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

