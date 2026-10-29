// rea decompile_all
// name: FUN_1001275ac
// address: 0x1001275ac
// body: available
// range: 0x1001275ac-0x100127e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001278f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001275ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  ID self;
  undefined *puVar7;
  ID self_00;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSHostingView *pNVar12;
  code **ppcVar13;
  undefined *puVar14;
  void *aBlock;
  DispatchQoS DVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  code *pcVar21;
  code *pcVar22;
  char *pcVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar24;
  long lVar25;
  DispatchWorkItemFlags qos;
  double extraout_d0;
  double dVar26;
  double dVar27;
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
  String SVar42;
  String SVar43;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  code *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_140;
  undefined *puStack_138;
  code *local_130;
  undefined *puStack_128;
  code *local_120;
  undefined *puStack_118;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *puStack_d0;
  code *local_c8;
  undefined *puStack_c0;
  undefined1 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 uStack_a0;
  
  local_1a0 = (code *)param_5;
  local_198 = (undefined *)param_7;
  LVar4 = os::Logger::typeMetadataAccessor();
  local_1a8 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  local_1b0 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1b8 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b8 + 0x40));
  lVar25 = (long)(auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar24 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  qos.unknown = (undefined *)(lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100127e8c();
  if (DAT_100557eb0 != -1) {
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  self = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
  if (self == 0) {
    local_e8 = (code *)0x5b;
    puStack_e0 = (undefined *)0xe100000000000000;
    local_140 = (code *)0x4e524157;
    puStack_138 = (undefined *)0xe400000000000000;
    local_190 = 0x20;
    local_188 = 0xe100000000000000;
    local_198 = LVar4.unknown;
    FUN_100026df4();
    pcVar23 = (char *)0x0;
    puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar28 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_190,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,self,self);
    SVar35.bridgeObject = puVar16;
    SVar35.str = pcVar23;
    Swift::String::append(SVar28,SVar35);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar28.bridgeObject = (void *)0xe300000000000000;
    SVar28.str = (char *)0x5b205d;
    SVar36.bridgeObject = puVar16;
    SVar36.str = pcVar23;
    Swift::String::append(SVar28,SVar36);
    SVar29.bridgeObject = (void *)0xe300000000000000;
    SVar29.str = (char *)0x707061;
    SVar37.bridgeObject = puVar16;
    SVar37.str = pcVar23;
    Swift::String::append(SVar29,SVar37);
    SVar30.bridgeObject = (void *)0xe200000000000000;
    SVar30.str = (char *)0x205d;
    SVar38.bridgeObject = puVar16;
    SVar38.str = pcVar23;
    Swift::String::append(SVar30,SVar38);
    SVar31.bridgeObject = (void *)0x80000001004ddbd0;
    SVar31.str = (char *)0xd00000000000002d;
    SVar39.bridgeObject = puVar16;
    SVar39.str = pcVar23;
    Swift::String::append(SVar31,SVar39);
    puVar7 = puStack_e0;
    pcVar22 = local_e8;
    local_e8 = (code *)0x282020;
    puStack_e0 = (undefined *)0xe300000000000000;
    SVar32.bridgeObject = (void *)0x80000001004ddc00;
    SVar32.str = (char *)0xd000000000000018;
    SVar40.bridgeObject = puVar16;
    SVar40.str = pcVar23;
    Swift::String::append(SVar32,SVar40);
    SVar33.bridgeObject = (void *)0xe100000000000000;
    SVar33.str = (char *)0x3a;
    SVar41.bridgeObject = puVar16;
    SVar41.str = pcVar23;
    Swift::String::append(SVar33,SVar41);
    local_140 = (code *)0xe;
    SVar28 = Swift::CustomStringConvertible::get_description();
    SVar42.bridgeObject = puVar16;
    SVar42.str = pcVar23;
    Swift::String::append(SVar28,SVar42);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x29;
    SVar43.bridgeObject = puVar16;
    SVar43.str = pcVar23;
    Swift::String::append(SVar34,SVar43);
    puVar16 = puStack_e0;
    pcVar21 = local_e8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar14 = &DAT_10052d270;
    _swift_allocObject(&DAT_10052d270,0x30,7);
    local_1a0 = pcVar22;
    *(code **)(puVar14 + 0x10) = pcVar22;
    *(undefined **)(puVar14 + 0x18) = puVar7;
    *(code **)(puVar14 + 0x20) = pcVar21;
    *(undefined **)(puVar14 + 0x28) = puVar16;
    local_c8 = FUN_100099310;
    local_e8 = (code *)PTR___NSConcreteStackBlock_100521110;
    puStack_e0 = (undefined *)0x42000000;
    local_d8 = FUN_1000c7e7c;
    puStack_d0 = &DAT_10052d288;
    puStack_c0 = puVar14;
    aBlock = __Block_copy(&local_e8);
    DVar15.unknown = puVar7;
    _swift_bridgeObjectRetain();
    DVar15 = Dispatch::DispatchQoS::get_unspecified(DVar15);
    local_140 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar16 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = puVar16;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar25,&local_140,puVar16,puVar14,DVar5.unknown,DVar15.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_1b8 + 8))(lVar25,DVar5.unknown);
    (**(code **)(lVar24 + 8))(qos.unknown,DVar6.unknown);
    _swift_release(puStack_c0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar16 = local_198;
    puVar14 = local_198;
    FUN_100099338(local_198,&DAT_100558f50);
    lVar24 = local_1a8;
    puVar1 = local_1b0;
    puVar17 = local_1b0;
    (**(code **)(local_1a8 + 0x10))(local_1b0,puVar14,puVar16);
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar4.unknown = puVar7;
    _swift_bridgeObjectRetain();
    pOVar18 = os::Logger::get_logObject(LVar4);
    pOVar19 = pOVar18;
    _os_log_type_enabled(pOVar18,(uint)puVar17 & 0xff);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar7,2);
    }
    else {
      puVar20 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar21 = (code *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar20 = 0x8220102;
      pcVar22 = local_1a0;
      local_e8 = pcVar21;
      FUN_10012dbb0(local_1a0,puVar7,&local_e8);
      *(code **)(puVar20 + 1) = pcVar22;
      _swift_bridgeObjectRelease_n(puVar7,2);
      __os_log_impl(0x100000000,pOVar18,(uint)puVar17 & 0xff,"%{public}s",puVar20,0xc);
      FUN_100043f24(pcVar21);
      _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar24 + 8))(puVar1,puVar16);
  }
  else {
    objc_stub::frame(self);
    dVar26 = extraout_d0;
    _CGRectGetMidX();
    dVar27 = extraout_d0;
    _CGRectGetMidY(extraout_d0,param_2,param_3,param_4);
    puVar7 = &_OBJC_CLASS___NSPanel;
    _objc_allocWithZone();
    self_00 = objc_stub::initWithContentRect_styleMask_backing_defer_
                        ((ID)puVar7,dVar26 + -240.0,dVar27 + -126.0,0x407e000000000000,
                         0x406f800000000000,0x8003,2,0);
    objc_stub::setTitleVisibility_(self_00,1);
    objc_stub::setTitlebarAppearsTransparent_(self_00,1);
    objc_stub::setFloatingPanel_(self_00,0);
    objc_stub::setLevel_(self_00,8);
    IVar8 = objc_stub::standardWindowButton_(self_00,2);
    if (IVar8 != 0) {
      objc_stub::setHidden_(IVar8,1);
    }
    IVar8 = objc_stub::standardWindowButton_(self_00,1);
    if (IVar8 != 0) {
      objc_stub::setHidden_(IVar8,1);
    }
    puVar7 = &DAT_10052d2c0;
    puVar9 = puVar7;
    _swift_allocObject(&DAT_10052d2c0,0x18,7);
    _swift_weakInit(puVar9 + 0x10);
    puVar10 = puVar7;
    _swift_allocObject(&DAT_10052d2c0,0x18,7);
    _swift_weakInit(puVar10 + 0x10);
    puVar16 = &DAT_10052d2e8;
    _swift_allocObject(&DAT_10052d2e8,0x28,7);
    *(undefined **)(puVar16 + 0x10) = puVar10;
    *(code **)(puVar16 + 0x18) = local_1a0;
    *(undefined8 *)(puVar16 + 0x20) = param_6;
    _swift_allocObject(&DAT_10052d2c0,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar14 = &DAT_10052d310;
    _swift_allocObject(&DAT_10052d310,0x28,7);
    *(undefined **)(puVar14 + 0x10) = puVar7;
    *(undefined **)(puVar14 + 0x18) = local_198;
    *(undefined8 *)(puVar14 + 0x20) = param_8;
    local_140 = (code *)((ulong)local_140 & 0xffffffffffffff00);
    _swift_retain(puVar9);
    _swift_retain(puVar10);
    _swift_retain(param_6);
    _swift_retain(puVar7);
    _swift_retain(param_8);
    SwiftUI::State::init(&local_e8,puVar14,PTR___type_metadata_for_Swift_Bool_100523b70);
    puVar3 = puStack_e0;
    uVar2 = local_e8._0_1_;
    local_140 = (code *)CONCAT71(local_140._1_7_,2);
    puVar11 = &DAT_100553af0;
    FUN_100002f94(&DAT_100553af0,&DAT_100426b78);
    SwiftUI::State::init(&local_e8,puVar11,puVar11);
    _swift_release(puVar9);
    _swift_release(puVar10);
    _swift_release(puVar7);
    local_a8 = local_e8._0_1_;
    local_e8 = FUN_100128180;
    local_d8 = FUN_100128188;
    local_c8 = thunk_FUN_100128188;
    local_b8 = uVar2;
    uStack_b0 = puVar3;
    uStack_a0 = puStack_e0;
    local_120 = thunk_FUN_100128188;
    uStack_108 = puVar3;
    uStack_f8 = puStack_e0;
    local_130 = FUN_100128188;
    local_140 = FUN_100128180;
    pNVar12 = (NSHostingView *)&DAT_100553af8;
    puStack_138 = puVar9;
    puStack_128 = puVar16;
    puStack_118 = puVar14;
    puStack_e0 = puVar9;
    puStack_d0 = puVar16;
    puStack_c0 = puVar14;
    FUN_100002f94(&DAT_100553af8,&DAT_100426b80);
    _objc_allocWithZone();
    FUN_1001281d4(&local_e8,&local_190);
    ppcVar13 = &local_140;
    SwiftUI::NSHostingView::_init(pNVar12,ppcVar13);
    objc_stub::setContentView_(self_00,ppcVar13);
    *(ID *)(unaff_x20 + 0x10) = self_00;
    objc_stub::beginSheet_completionHandler_(self,self_00,0);
    FUN_100128210(&local_e8);
  }
  return;
}

