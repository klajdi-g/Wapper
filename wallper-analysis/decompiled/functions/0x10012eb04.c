// rea decompile_all
// name: FUN_10012eb04
// address: 0x10012eb04
// body: available
// range: 0x10012eb04-0x10012f17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012eb04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  NSHostingView *pNVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  void *aBlock;
  DispatchQoS DVar12;
  undefined *puVar13;
  Logger LVar15;
  OS_os_log *pOVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  char *pcVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar21;
  long lVar22;
  DispatchWorkItemFlags qos;
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
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  long lVar14;
  
  local_f0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar21 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_100 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar22 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_108 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  qos.unknown = (undefined *)(lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    puVar6 = &_OBJC_CLASS___NSPanel;
    _objc_allocWithZone();
    IVar7 = objc_stub::initWithContentRect_styleMask_backing_defer_
                      ((ID)puVar6,0,0,0x408c200000000000,0x4082c00000000000,0x8003,2,0);
    objc_stub::setTitleVisibility_(IVar7,1);
    objc_stub::setTitlebarAppearsTransparent_(IVar7,1);
    objc_stub::setFloatingPanel_(IVar7,0);
    objc_stub::setLevel_(IVar7,8);
    IVar8 = objc_stub::standardWindowButton_(IVar7,2);
    if (IVar8 != 0) {
      objc_stub::setHidden_(IVar8,1);
    }
    IVar8 = objc_stub::standardWindowButton_(IVar7,1);
    if (IVar8 != 0) {
      objc_stub::setHidden_(IVar8,1);
    }
    puVar6 = &DAT_10052d5e8;
    _swift_allocObject(&DAT_10052d5e8,0x28,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = param_2;
    _swift_retain();
    _swift_retain(param_2);
    FUN_1000bb944(&local_c8,FUN_10012f27c,puVar6);
    pNVar9 = (NSHostingView *)&DAT_100554108;
    FUN_100002f94(&DAT_100554108,&DAT_100426de8);
    _objc_allocWithZone();
    ppuVar10 = &local_c8;
    SwiftUI::NSHostingView::_init(pNVar9,ppuVar10);
    objc_stub::setContentView_(IVar7,ppuVar10);
    *(ID *)(unaff_x20 + 0x10) = IVar7;
  }
  if (DAT_100557eb0 != -1) {
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  IVar7 = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
  if (IVar7 == 0) {
    local_c8 = (undefined *)0x5b;
    local_c0 = (undefined *)0xe100000000000000;
    local_d8 = (undefined *)0x4e524157;
    uStack_d0 = 0xe400000000000000;
    local_e8 = 0x20;
    uStack_e0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar20 = (char *)0x0;
    puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,IVar7,IVar7);
    SVar30.bridgeObject = puVar13;
    SVar30.str = pcVar20;
    Swift::String::append(SVar23,SVar30);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar23.bridgeObject = (void *)0xe300000000000000;
    SVar23.str = (char *)0x5b205d;
    SVar31.bridgeObject = puVar13;
    SVar31.str = pcVar20;
    Swift::String::append(SVar23,SVar31);
    SVar24.bridgeObject = (void *)0xe200000000000000;
    SVar24.str = (char *)0x6975;
    SVar32.bridgeObject = puVar13;
    SVar32.str = pcVar20;
    Swift::String::append(SVar24,SVar32);
    SVar25.bridgeObject = (void *)0xe200000000000000;
    SVar25.str = (char *)0x205d;
    SVar33.bridgeObject = puVar13;
    SVar33.str = pcVar20;
    Swift::String::append(SVar25,SVar33);
    SVar26.bridgeObject = (void *)0x80000001004dde70;
    SVar26.str = (char *)0xd000000000000027;
    SVar34.bridgeObject = puVar13;
    SVar34.str = pcVar20;
    Swift::String::append(SVar26,SVar34);
    puVar1 = local_c0;
    puVar6 = local_c8;
    local_c8 = (undefined *)0x282020;
    local_c0 = (undefined *)0xe300000000000000;
    SVar27.bridgeObject = (void *)0xef293a6873696e69;
    SVar27.str = (char *)0x466e6f28776f6873;
    SVar35.bridgeObject = puVar13;
    SVar35.str = pcVar20;
    Swift::String::append(SVar27,SVar35);
    SVar28.bridgeObject = (void *)0xe100000000000000;
    SVar28.str = (char *)0x3a;
    SVar36.bridgeObject = puVar13;
    SVar36.str = pcVar20;
    Swift::String::append(SVar28,SVar36);
    local_d8 = (undefined *)0x24;
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar37.bridgeObject = puVar13;
    SVar37.str = pcVar20;
    Swift::String::append(SVar23,SVar37);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar29.bridgeObject = (void *)0xe100000000000000;
    SVar29.str = (char *)0x29;
    SVar38.bridgeObject = puVar13;
    SVar38.str = pcVar20;
    Swift::String::append(SVar29,SVar38);
    puVar19 = local_c0;
    puVar13 = local_c8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar11 = &DAT_10052d610;
    _swift_allocObject(&DAT_10052d610,0x30,7);
    local_110 = puVar6;
    *(undefined **)(puVar11 + 0x10) = puVar6;
    *(undefined **)(puVar11 + 0x18) = puVar1;
    *(undefined **)(puVar11 + 0x20) = puVar13;
    *(undefined **)(puVar11 + 0x28) = puVar19;
    local_a8 = FUN_100099310;
    local_c8 = PTR___NSConcreteStackBlock_100521110;
    local_c0 = (undefined *)0x42000000;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_10052d628;
    local_a0 = puVar11;
    aBlock = __Block_copy(&local_c8);
    DVar12.unknown = puVar1;
    _swift_bridgeObjectRetain();
    DVar12 = Dispatch::DispatchQoS::get_unspecified(DVar12);
    local_d8 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar13 = puVar6;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar22,&local_d8,puVar6,puVar13,DVar4.unknown,DVar12.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_100 + 8))(lVar22,DVar4.unknown);
    (**(code **)(local_108 + 8))(qos.unknown,DVar5.unknown);
    _swift_release(local_a0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar6 = local_f0;
    puVar13 = local_f0;
    FUN_100099338(local_f0,&DAT_100558f50);
    lVar22 = local_f8;
    lVar14 = lVar21;
    (**(code **)(local_f8 + 0x10))(lVar21,puVar13,puVar6);
    uVar3 = (uint)lVar14;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar15.unknown = puVar1;
    _swift_bridgeObjectRetain();
    pOVar16 = os::Logger::get_logObject(LVar15);
    pOVar17 = pOVar16;
    _os_log_type_enabled(pOVar16,uVar3 & 0xff);
    if ((int)pOVar17 == 0) {
      _swift_bridgeObjectRelease_n(puVar1,2);
    }
    else {
      puVar18 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar19 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar18 = 0x8220102;
      puVar13 = local_110;
      local_c8 = puVar19;
      FUN_10012dbb0(local_110,puVar1,&local_c8);
      *(undefined **)(puVar18 + 1) = puVar13;
      _swift_bridgeObjectRelease_n(puVar1,2);
      __os_log_impl(0x100000000,pOVar16,uVar3 & 0xff,"%{public}s",puVar18,0xc);
      FUN_100043f24(puVar19);
      _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar22 + 8))(lVar21,puVar6);
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10012f180);
      (*pcVar2)();
    }
    objc_stub::beginSheet_completionHandler_(IVar7,*(long *)(unaff_x20 + 0x10),0);
  }
  return;
}

