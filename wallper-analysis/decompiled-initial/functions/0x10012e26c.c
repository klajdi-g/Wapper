// rea decompile_all
// name: FUN_10012e26c
// address: 0x10012e26c
// body: available
// range: 0x10012e26c-0x10012ea07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012e26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  ID self;
  undefined *puVar6;
  ID self_00;
  ID IVar7;
  NSHostingView *pNVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  void *aBlock;
  DispatchQoS DVar11;
  undefined *puVar12;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar19;
  long lVar20;
  DispatchWorkItemFlags qos;
  double extraout_d0;
  double dVar21;
  double dVar22;
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
  undefined1 auStack_240 [8];
  undefined *local_238;
  long local_230;
  undefined1 *local_228;
  long local_220;
  undefined *local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined *puStack_110;
  code *local_108;
  undefined *puStack_100;
  code *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *puVar13;
  
  local_218 = (undefined *)param_5;
  local_210 = (undefined *)param_7;
  LVar4 = os::Logger::typeMetadataAccessor();
  local_220 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_220 + 0x40));
  local_228 = auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_230 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_230 + 0x40));
  lVar19 = (long)(auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_238 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar20 = *(long *)(local_238 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100127e8c();
  if (DAT_100557eb0 != -1) {
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  self = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
  if (self == 0) {
    local_118 = (undefined *)0x5b;
    puStack_110 = (undefined *)0xe100000000000000;
    local_190 = (undefined *)0x4e524157;
    uStack_188 = 0xe400000000000000;
    local_208 = 0x20;
    uStack_200 = 0xe100000000000000;
    local_210 = LVar4.unknown;
    FUN_100026df4();
    pcVar18 = (char *)0x0;
    puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar23 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_208,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,self,self);
    SVar30.bridgeObject = puVar12;
    SVar30.str = pcVar18;
    Swift::String::append(SVar23,SVar30);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar23.bridgeObject = (void *)0xe300000000000000;
    SVar23.str = (char *)0x5b205d;
    SVar31.bridgeObject = puVar12;
    SVar31.str = pcVar18;
    Swift::String::append(SVar23,SVar31);
    SVar24.bridgeObject = (void *)0xe200000000000000;
    SVar24.str = (char *)0x6975;
    SVar32.bridgeObject = puVar12;
    SVar32.str = pcVar18;
    Swift::String::append(SVar24,SVar32);
    SVar25.bridgeObject = (void *)0xe200000000000000;
    SVar25.str = (char *)0x205d;
    SVar33.bridgeObject = puVar12;
    SVar33.str = pcVar18;
    Swift::String::append(SVar25,SVar33);
    SVar26.bridgeObject = (void *)0x80000001004dde20;
    SVar26.str = (char *)0xd000000000000024;
    SVar34.bridgeObject = puVar12;
    SVar34.str = pcVar18;
    Swift::String::append(SVar26,SVar34);
    puVar2 = puStack_110;
    puVar6 = local_118;
    local_118 = (undefined *)0x282020;
    puStack_110 = (undefined *)0xe300000000000000;
    SVar27.bridgeObject = (void *)0x80000001004dde50;
    SVar27.str = (char *)0xd000000000000018;
    SVar35.bridgeObject = puVar12;
    SVar35.str = pcVar18;
    Swift::String::append(SVar27,SVar35);
    SVar28.bridgeObject = (void *)0xe100000000000000;
    SVar28.str = (char *)0x3a;
    SVar36.bridgeObject = puVar12;
    SVar36.str = pcVar18;
    Swift::String::append(SVar28,SVar36);
    local_190 = (undefined *)0xe;
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar37.bridgeObject = puVar12;
    SVar37.str = pcVar18;
    Swift::String::append(SVar23,SVar37);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    SVar29.bridgeObject = (void *)0xe100000000000000;
    SVar29.str = (char *)0x29;
    SVar38.bridgeObject = puVar12;
    SVar38.str = pcVar18;
    Swift::String::append(SVar29,SVar38);
    puVar17 = puStack_110;
    puVar12 = local_118;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar10 = &DAT_10052d570;
    _swift_allocObject(&DAT_10052d570,0x30,7);
    local_218 = puVar6;
    *(undefined **)(puVar10 + 0x10) = puVar6;
    *(undefined **)(puVar10 + 0x18) = puVar2;
    *(undefined **)(puVar10 + 0x20) = puVar12;
    *(undefined **)(puVar10 + 0x28) = puVar17;
    local_f8 = FUN_100099310;
    local_118 = PTR___NSConcreteStackBlock_100521110;
    puStack_110 = (undefined *)0x42000000;
    local_108 = FUN_1000c7e7c;
    puStack_100 = &DAT_10052d588;
    puStack_f0 = puVar10;
    aBlock = __Block_copy(&local_118);
    DVar11.unknown = puVar2;
    _swift_bridgeObjectRetain();
    DVar11 = Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_190 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = puVar6;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar19,&local_190,puVar6,puVar12,DVar5.unknown,DVar11.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_230 + 8))(lVar19,DVar5.unknown);
    (**(code **)(lVar20 + 8))(qos.unknown,local_238);
    _swift_release(puStack_f0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar6 = local_210;
    puVar12 = local_210;
    FUN_100099338(local_210,&DAT_100558f50);
    lVar19 = local_220;
    puVar1 = local_228;
    puVar13 = local_228;
    (**(code **)(local_220 + 0x10))(local_228,puVar12,puVar6);
    uVar3 = (uint)puVar13;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar4.unknown = puVar2;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar4);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar3 & 0xff);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar17 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      puVar12 = local_218;
      local_118 = puVar17;
      FUN_10012dbb0(local_218,puVar2,&local_118);
      *(undefined **)(puVar16 + 1) = puVar12;
      _swift_bridgeObjectRelease_n(puVar2,2);
      __os_log_impl(0x100000000,pOVar14,uVar3 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(puVar17);
      _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar19 + 8))(puVar1,puVar6);
  }
  else {
    objc_stub::frame(self);
    dVar21 = extraout_d0;
    _CGRectGetMidX();
    dVar22 = extraout_d0;
    _CGRectGetMidY(extraout_d0,param_2,param_3,param_4);
    puVar6 = &_OBJC_CLASS___NSPanel;
    _objc_allocWithZone();
    self_00 = objc_stub::initWithContentRect_styleMask_backing_defer_
                        ((ID)puVar6,dVar21 + -225.0,dVar22 + -300.0,0x407c200000000000,
                         0x4082c00000000000,0x8003,2,0);
    objc_stub::setTitleVisibility_(self_00,1);
    objc_stub::setTitlebarAppearsTransparent_(self_00,1);
    objc_stub::setFloatingPanel_(self_00,0);
    objc_stub::setLevel_(self_00,8);
    IVar7 = objc_stub::standardWindowButton_(self_00,2);
    if (IVar7 != 0) {
      objc_stub::setHidden_(IVar7,1);
    }
    IVar7 = objc_stub::standardWindowButton_(self_00,1);
    if (IVar7 != 0) {
      objc_stub::setHidden_(IVar7,1);
    }
    puVar6 = &DAT_10052d5c0;
    _swift_allocObject(&DAT_10052d5c0,0x18,7);
    _swift_weakInit(puVar6 + 0x10);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_8);
    FUN_1003b9868(&local_118,local_218,param_6,local_210,param_8,FUN_100128180,puVar6);
    uStack_138 = uStack_c0;
    local_140 = local_c8;
    uStack_128 = uStack_b0;
    uStack_130 = local_b8;
    uStack_188 = puStack_110;
    local_190 = local_118;
    uStack_178 = puStack_100;
    local_180 = local_108;
    uStack_168 = puStack_f0;
    uStack_170 = local_f8;
    local_120 = local_a8;
    uStack_158 = uStack_e0;
    local_160 = local_e8;
    uStack_148 = uStack_d0;
    uStack_150 = local_d8;
    pNVar8 = (NSHostingView *)&DAT_100554060;
    FUN_100002f94(&DAT_100554060,&DAT_100426db0);
    _objc_allocWithZone();
    FUN_10012ea94(&local_118,&local_208);
    ppuVar9 = &local_190;
    SwiftUI::NSHostingView::_init(pNVar8,ppuVar9);
    objc_stub::setContentView_(self_00,ppuVar9);
    *(ID *)(unaff_x20 + 0x10) = self_00;
    objc_stub::beginSheet_completionHandler_(self,self_00,0);
    FUN_10012ead0(&local_118);
  }
  return;
}

