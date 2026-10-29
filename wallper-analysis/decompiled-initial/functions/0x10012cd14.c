// rea decompile_all
// name: FUN_10012cd14
// address: 0x10012cd14
// body: available
// range: 0x10012cd14-0x10012d67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010012cffc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10012cd14(undefined8 param_1,long param_2,undefined1 param_3,byte param_4)

{
  undefined1 *puVar1;
  Logger LVar2;
  DispatchWorkItemFlags DVar3;
  long *plVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  FocusState<bool> FVar8;
  undefined8 uVar9;
  NSHostingView *pNVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  void *aBlock;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  Logger LVar16;
  undefined1 *puVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  byte bVar22;
  char *pcVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar24;
  long unaff_x20;
  long lVar25;
  ID IVar26;
  DispatchWorkItemFlags qos;
  long lVar27;
  long lVar28;
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
  String SVar44;
  undefined1 auStack_2c0 [4];
  uint local_2bc;
  undefined8 local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_29c;
  undefined8 local_298;
  undefined *local_290;
  undefined8 uStack_288;
  long local_278;
  undefined1 *local_270;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  code *local_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined *local_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *local_108;
  undefined *puStack_100;
  code *local_f8;
  undefined *puStack_f0;
  code *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined *local_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar25 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  local_270 = auStack_2c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_278 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_278 + 0x40));
  lVar27 = (long)(auStack_2c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  plVar4 = (long *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar28 = *(long *)((long)plVar4 + -8);
  local_290 = (undefined *)plVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  qos.unknown = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_10012d680();
  if (DAT_100557eb0 != -1) {
    plVar4 = &DAT_100557eb0;
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  IVar26 = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
  if (IVar26 == 0) {
    local_108 = (undefined *)0x5b;
    puStack_100 = (undefined *)0xe100000000000000;
    local_1b0 = (undefined *)0x4e524157;
    uStack_1a8 = 0xe400000000000000;
    local_250 = 0x20;
    uStack_248 = 0xe100000000000000;
    FUN_100026df4();
    pcVar23 = (char *)0x0;
    puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_250,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,plVar4,plVar4);
    SVar36.bridgeObject = puVar21;
    SVar36.str = pcVar23;
    Swift::String::append(SVar29,SVar36);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar29.bridgeObject = (void *)0xe300000000000000;
    SVar29.str = (char *)0x5b205d;
    SVar37.bridgeObject = puVar21;
    SVar37.str = pcVar23;
    Swift::String::append(SVar29,SVar37);
    SVar30.bridgeObject = (void *)0xe300000000000000;
    SVar30.str = (char *)0x707061;
    SVar38.bridgeObject = puVar21;
    SVar38.str = pcVar23;
    Swift::String::append(SVar30,SVar38);
    SVar31.bridgeObject = (void *)0xe200000000000000;
    SVar31.str = (char *)0x205d;
    SVar39.bridgeObject = puVar21;
    SVar39.str = pcVar23;
    Swift::String::append(SVar31,SVar39);
    SVar32.bridgeObject = (void *)0x80000001004ddda0;
    SVar32.str = (char *)0xd000000000000027;
    SVar40.bridgeObject = puVar21;
    SVar40.str = pcVar23;
    Swift::String::append(SVar32,SVar40);
    puVar7 = puStack_100;
    puVar5 = local_108;
    local_108 = (undefined *)0x282020;
    puStack_100 = (undefined *)0xe300000000000000;
    SVar33.bridgeObject = (void *)0x80000001004dddd0;
    SVar33.str = (char *)0xd000000000000045;
    SVar41.bridgeObject = puVar21;
    SVar41.str = pcVar23;
    Swift::String::append(SVar33,SVar41);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x3a;
    SVar42.bridgeObject = puVar21;
    SVar42.str = pcVar23;
    Swift::String::append(SVar34,SVar42);
    local_1b0 = (undefined *)0x14;
    SVar29 = Swift::CustomStringConvertible::get_description();
    SVar43.bridgeObject = puVar21;
    SVar43.str = pcVar23;
    Swift::String::append(SVar29,SVar43);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar35.bridgeObject = (void *)0xe100000000000000;
    SVar35.str = (char *)0x29;
    SVar44.bridgeObject = puVar21;
    SVar44.str = pcVar23;
    Swift::String::append(SVar35,SVar44);
    puVar15 = puStack_100;
    puVar21 = local_108;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar12 = &DAT_10052d4d0;
    _swift_allocObject(&DAT_10052d4d0,0x30,7);
    *(undefined **)(puVar12 + 0x10) = puVar5;
    *(undefined **)(puVar12 + 0x18) = puVar7;
    *(undefined **)(puVar12 + 0x20) = puVar21;
    *(undefined **)(puVar12 + 0x28) = puVar15;
    local_e8 = FUN_100099310;
    local_108 = PTR___NSConcreteStackBlock_100521110;
    puStack_100 = (undefined *)0x42000000;
    local_f8 = FUN_1000c7e7c;
    puStack_f0 = &DAT_10052d4e8;
    puStack_e0 = puVar12;
    aBlock = __Block_copy(&local_108);
    DVar13.unknown = puVar7;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    local_1b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar21 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = puVar21;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar27,&local_1b0,puVar21,puVar15,DVar3.unknown,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_278 + 8))(lVar27,DVar3.unknown);
    (**(code **)(lVar28 + 8))(qos.unknown,local_290);
    _swift_release(puStack_e0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar16 = LVar2;
    FUN_100099338(LVar2.unknown,&DAT_100558f50);
    puVar1 = local_270;
    puVar17 = local_270;
    (**(code **)(lVar25 + 0x10))(local_270,LVar16.unknown,LVar2.unknown);
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar16.unknown = puVar7;
    _swift_bridgeObjectRetain();
    pOVar18 = os::Logger::get_logObject(LVar16);
    pOVar19 = pOVar18;
    _os_log_type_enabled(pOVar18,(uint)puVar17 & 0xff);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar7,2);
      pcVar24 = *(code **)(lVar25 + 8);
    }
    else {
      puVar20 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar21 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar20 = 0x8220102;
      local_108 = puVar21;
      FUN_10012dbb0(puVar5,puVar7,&local_108);
      *(undefined **)(puVar20 + 1) = puVar5;
      _swift_bridgeObjectRelease_n(puVar7,2);
      __os_log_impl(0x100000000,pOVar18,(uint)puVar17 & 0xff,"%{public}s",puVar20,0xc);
      FUN_100043f24(puVar21);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      pcVar24 = *(code **)(lVar25 + 8);
    }
    (*pcVar24)(puVar1,LVar2.unknown);
  }
  else {
    puVar5 = &_OBJC_CLASS___NSPanel;
    _objc_allocWithZone();
    local_270 = (undefined1 *)IVar26;
    IVar26 = objc_stub::initWithContentRect_styleMask_backing_defer_
                       ((ID)puVar5,0,0,0x407e000000000000,0x407e200000000000,0x8003,2,0);
    objc_stub::setTitleVisibility_(IVar26,1);
    objc_stub::setTitlebarAppearsTransparent_(IVar26,1);
    objc_stub::setFloatingPanel_(IVar26,0);
    objc_stub::setLevel_(IVar26,8);
    IVar6 = NSAppearance::appearanceNamed_
                      ((ID)&_OBJC_CLASS___NSAppearance,
                       *(undefined8 *)PTR__NSAppearanceNameDarkAqua_1005212d8);
    objc_stub::setAppearance_(IVar26,IVar6);
    IVar6 = objc_stub::standardWindowButton_(IVar26,2);
    if (IVar6 != 0) {
      objc_stub::setHidden_(IVar6,1);
    }
    IVar6 = objc_stub::standardWindowButton_(IVar26,1);
    if (IVar6 != 0) {
      objc_stub::setHidden_(IVar6,1);
    }
    local_278 = *(undefined8 *)(param_2 + 0x10);
    puVar5 = &DAT_10052d520;
    puVar15 = puVar5;
    _swift_allocObject(&DAT_10052d520,0x18,7);
    _swift_weakInit(puVar15 + 0x10);
    puVar21 = &DAT_10052d548;
    _swift_allocObject(&DAT_10052d548,0x29,7);
    *(undefined8 *)(puVar21 + 0x10) = param_1;
    *(long *)(puVar21 + 0x18) = param_2;
    *(undefined **)(puVar21 + 0x20) = puVar15;
    puVar21[0x28] = param_4 & 1;
    bVar22 = 7;
    _swift_allocObject(&DAT_10052d520,0x18);
    _swift_weakInit(puVar5 + 0x10);
    local_1b0 = (undefined *)0x0;
    uStack_1a8 = 0xe000000000000000;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(puVar15);
    _swift_retain(puVar5);
    SwiftUI::State::init(&local_108,puVar5,PTR___type_metadata_for_Swift_String_100523a98);
    uStack_288 = puStack_100;
    local_290 = local_108;
    local_298 = local_f8;
    local_1b0 = (undefined *)((ulong)local_1b0 & 0xffffffffffffff00);
    SwiftUI::State::init(&local_108,puVar5,&DAT_100535e50);
    local_29c = (uint)(byte)local_108;
    local_2a8 = puStack_100;
    local_1b0._0_1_ = 4;
    puVar7 = &DAT_100553f70;
    FUN_100002f94(&DAT_100553f70,&DAT_100426d50);
    SwiftUI::State::init(&local_108,puVar7,puVar7);
    local_2ac = (uint)(byte)local_108;
    local_2b8 = puStack_100;
    local_1b0 = (undefined *)((ulong)local_1b0._1_7_ << 8);
    puVar12 = PTR___type_metadata_for_Swift_Bool_100523b70;
    SwiftUI::State::init(&local_108);
    puVar7 = puStack_100;
    local_2bc = (uint)(byte)local_108;
    FVar8 = SwiftUI::FocusState::_init();
    _swift_release(puVar15);
    _swift_release(puVar5);
    uVar9 = 0;
    FUN_1001b7378();
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
    local_108 = (undefined *)CONCAT71(local_108._1_7_,param_3);
    puStack_100 = (undefined *)local_278;
    local_f8 = FUN_10012e1c8;
    local_e8 = FUN_10012e1d8;
    uStack_d0 = uStack_288;
    local_d8 = local_290;
    local_c8 = local_298;
    uStack_c0 = (undefined1)local_29c;
    local_b8 = local_2a8;
    uStack_b0 = (undefined1)local_2ac;
    local_a8 = local_2b8;
    uStack_a0 = (undefined1)local_2bc;
    local_98 = puVar7;
    uStack_148 = CONCAT71(uStack_9f,uStack_a0);
    uStack_138 = CONCAT71(uStack_8f,(byte)FVar8.unknown) & 0xffffffffffffff01;
    local_150 = local_2b8;
    uStack_140 = puVar7;
    uStack_128 = CONCAT71(uStack_7f,bVar22) & 0xffffffffffffff01;
    local_190 = FUN_10012e1d8;
    uStack_178 = uStack_288;
    puStack_180 = local_290;
    uStack_168 = CONCAT71(uStack_bf,uStack_c0);
    uStack_158 = CONCAT71(uStack_af,uStack_b0);
    local_170 = local_298;
    uStack_160 = local_2a8;
    uStack_1a8 = local_278;
    local_1b0 = local_108;
    pcStack_1a0 = FUN_10012e1c8;
    pNVar10 = (NSHostingView *)&DAT_100553f78;
    puStack_198 = puVar21;
    puStack_188 = puVar5;
    local_130 = puVar12;
    uStack_120 = uVar9;
    uStack_118 = param_1;
    puStack_f0 = puVar21;
    puStack_e0 = puVar5;
    bStack_90 = (byte)FVar8.unknown & 1;
    local_88 = puVar12;
    bStack_80 = bVar22 & 1;
    local_78 = uVar9;
    uStack_70 = param_1;
    FUN_100002f94(&DAT_100553f78,&DAT_100426d58);
    _objc_allocWithZone();
    _swift_retain(param_1);
    FUN_10012e1e0(&local_108,&local_250);
    ppuVar11 = &local_1b0;
    SwiftUI::NSHostingView::_init(pNVar10,ppuVar11);
    objc_stub::setContentView_(IVar26,ppuVar11);
    *(ID *)(unaff_x20 + 0x10) = IVar26;
    objc_stub::beginSheet_completionHandler_((ID)local_270,IVar26,0);
    FUN_10002a29c(&local_108,&DAT_100553f80,&DAT_100426d60);
  }
  return;
}

