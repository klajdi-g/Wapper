// rea decompile_all
// name: FUN_10016e288
// address: 0x10016e288
// body: available
// range: 0x10016e288-0x10016ebe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010016e4a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_10016e288(void)

{
  undefined *puVar1;
  long lVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  NSString *pNVar10;
  undefined *puVar11;
  void *aBlock;
  DispatchQoS DVar12;
  undefined8 *puVar13;
  Logger LVar14;
  undefined1 *puVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  long extraout_x8;
  undefined1 *puVar22;
  long lVar23;
  long extraout_x8_00;
  long lVar24;
  long lVar25;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long lVar26;
  long extraout_x8_02;
  long lVar27;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x20;
  long lVar28;
  code *pcVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  undefined1 auStack_130 [8];
  long local_128;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar21 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  puVar22 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar23 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar24 = (long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar25 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100555938;
  FUN_100002f94(&DAT_100555938,&DAT_1004297a8);
  lVar26 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)qos.unknown - extraout_x8_02;
  puVar11 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  local_128 = *(long *)(puVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar32 = lVar27 - extraout_x8_03;
  puVar19 = &DAT_100555930;
  FUN_100002f94(&DAT_100555930,&DAT_1004297a0);
  lVar31 = *(long *)(puVar19 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar32 - extraout_x8_04;
  puVar7 = &DAT_100555928;
  FUN_100002f94(&DAT_100555928,&DAT_100429798);
  lVar30 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC7Wallper14MonitorManager::_screens;
  puVar1 = PTR___swiftEmptyArrayStorage_100524190;
  local_b8 = PTR___swiftEmptyArrayStorage_100524190;
  puVar8 = &DAT_10054b058;
  FUN_100002f94(&DAT_10054b058,&DAT_10041c288);
  Combine::Published::init(lVar28 - extraout_x8_05,puVar8,puVar8);
  (**(code **)(lVar30 + 0x20))(unaff_x20 + lVar2,lVar28 - extraout_x8_05,puVar7);
  lVar2 = _TtC7Wallper14MonitorManager::_configs;
  puVar8 = puVar1;
  FUN_100005048();
  puVar7 = &DAT_100555770;
  local_b8 = puVar8;
  FUN_100002f94(&DAT_100555770,&DAT_100429490);
  Combine::Published::init(lVar28,puVar7,puVar7);
  (**(code **)(lVar31 + 0x20))(unaff_x20 + lVar2,lVar28,puVar19);
  lVar2 = _TtC7Wallper14MonitorManager::_previewUpdateTick;
  puVar19 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_b8 = (undefined *)0x0;
  Combine::Published::init(lVar32,puVar7,PTR___type_metadata_for_Swift_Int_100523bd8);
  pcVar29 = *(code **)(local_128 + 0x20);
  (*pcVar29)(unaff_x20 + lVar2,lVar32,puVar11);
  lVar2 = _TtC7Wallper14MonitorManager::_selectedIndex;
  local_b8 = (undefined *)0x0;
  Combine::Published::init(lVar32,puVar7,puVar19);
  (*pcVar29)(unaff_x20 + lVar2,lVar32,puVar11);
  lVar2 = _TtC7Wallper14MonitorManager::_monitorStates;
  puVar19 = puVar1;
  FUN_10000515c();
  puVar11 = &DAT_100555780;
  local_b8 = puVar19;
  FUN_100002f94(&DAT_100555780,&DAT_100429498);
  Combine::Published::init(lVar27,puVar11,puVar11);
  (**(code **)(lVar26 + 0x20))(unaff_x20 + lVar2,lVar27,puVar6);
  IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar11 = (undefined *)NSUserDefaults::stringArrayForKey_(IVar9,pNVar10);
  puVar6 = puVar1;
  if (puVar11 != (undefined *)0x0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar6 = puVar11;
  }
  lVar2 = _TtC7Wallper14MonitorManager::disabledScreens;
  puVar11 = puVar6;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(puVar6);
  *(undefined **)(unaff_x20 + lVar2) = puVar11;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::rebuildWorkItem) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::previewTickWorkItem) = 0;
  local_b8 = (undefined *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4f464e49;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar20 = (char *)0x0;
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,puVar6,puVar6);
  SVar37.bridgeObject = puVar11;
  SVar37.str = pcVar20;
  Swift::String::append(SVar33,SVar37);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar33.bridgeObject = (void *)0xe300000000000000;
  SVar33.str = (char *)0x5b205d;
  SVar38.bridgeObject = puVar11;
  SVar38.str = pcVar20;
  Swift::String::append(SVar33,SVar38);
  SVar34.bridgeObject = (void *)0xe700000000000000;
  SVar34.str = (char *)0x79616c70736964;
  SVar39.bridgeObject = puVar11;
  SVar39.str = pcVar20;
  Swift::String::append(SVar34,SVar39);
  SVar35.bridgeObject = (void *)0xe200000000000000;
  SVar35.str = (char *)0x205d;
  SVar40.bridgeObject = puVar11;
  SVar40.str = pcVar20;
  Swift::String::append(SVar35,SVar40);
  SVar36.bridgeObject = (void *)0xed000074696e6920;
  SVar36.str = (char *)0x3a726f74696e6f4d;
  SVar41.bridgeObject = puVar11;
  SVar41.str = pcVar20;
  Swift::String::append(SVar36,SVar41);
  puVar11 = local_b0;
  puVar6 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar19 = &DAT_100530000;
  _swift_allocObject(&DAT_100530000,0x30,7);
  *(undefined **)(puVar19 + 0x10) = puVar6;
  *(undefined **)(puVar19 + 0x18) = puVar11;
  *(undefined8 *)(puVar19 + 0x20) = 0;
  *(undefined8 *)(puVar19 + 0x28) = 0xe000000000000000;
  local_98 = thunk_FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100530018;
  local_90 = puVar19;
  aBlock = __Block_copy(&local_b8);
  DVar12.unknown = puVar11;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar12);
  local_78 = puVar1;
  puVar13 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar19 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar7 = puVar19;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar24,&local_78,puVar19,puVar7,DVar4.unknown,puVar13);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(lVar23 + 8))(lVar24,DVar4.unknown);
  (**(code **)(lVar25 + 8))(qos.unknown,DVar5.unknown);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar14 = LVar3;
  FUN_100099338(LVar3.unknown,&DAT_100558f50);
  puVar15 = puVar22;
  (**(code **)(lVar21 + 0x10))(puVar22,LVar14.unknown,LVar3.unknown);
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar14.unknown = puVar11;
  _swift_bridgeObjectRetain();
  pOVar16 = os::Logger::get_logObject(LVar14);
  pOVar17 = pOVar16;
  _os_log_type_enabled(pOVar16,(uint)puVar15 & 0xff);
  if ((int)pOVar17 == 0) {
    _swift_bridgeObjectRelease_n(puVar11,2);
  }
  else {
    puVar18 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar19 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar18 = 0x8220102;
    local_b8 = puVar19;
    FUN_10012dbb0(puVar6,puVar11,&local_b8);
    *(undefined **)(puVar18 + 1) = puVar6;
    _swift_bridgeObjectRelease_n(puVar11,2);
    __os_log_impl(0x100000000,pOVar16,(uint)puVar15 & 0xff,"%{public}s",puVar18,0xc);
    FUN_100043f24(puVar19);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar21 + 8))(puVar22,LVar3.unknown);
  FUN_10016c740();
  IVar9 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar9,unaff_x20,"handleScreenParametersChanged:",
             *(undefined8 *)PTR__NSApplicationDidChangeScreenParametersNotification_1005212e8,0);
  IVar9 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  lVar2 = DAT_100557aa8;
  _swift_retain(unaff_x20);
  if (lVar2 != -1) {
    _swift_once(&DAT_100557aa8,FUN_100255f78);
  }
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar9,unaff_x20,"handleWallpaperChanged:",DAT_100577d40,0);
  _swift_release(unaff_x20);
  IVar9 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  lVar2 = DAT_100557a88;
  _swift_retain(unaff_x20);
  if (lVar2 != -1) {
    _swift_once(&DAT_100557a88,FUN_100255fac);
  }
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar9,unaff_x20,"handlePlaybackStateChanged:",DAT_100577d48,0);
  _swift_release(unaff_x20);
  IVar9 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  lVar2 = DAT_100557ba8;
  _swift_retain(unaff_x20);
  if (lVar2 != -1) {
    _swift_once(&DAT_100557ba8,FUN_100255fe0);
  }
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar9,unaff_x20,"handleScreensListChanged:",DAT_100577d50,0);
  _swift_release(unaff_x20);
  return unaff_x20;
}

