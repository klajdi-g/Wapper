// rea decompile_all
// name: FUN_100128290
// address: 0x100128290
// body: available
// range: 0x100128290-0x100129213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100128a6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100128290(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,
                  undefined8 param_5)

{
  int iVar1;
  String SVar2;
  DispatchWorkItemFlags DVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  void *pvVar7;
  OS_os_log *pOVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ID IVar12;
  ID IVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  EnvironmentObject<undefined> EVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  EnvironmentObject<undefined> EVar20;
  undefined8 uVar21;
  ObservedObject<undefined> OVar22;
  NSHostingView *pNVar23;
  UUID UVar24;
  long lVar25;
  Logger LVar26;
  OS_os_log *pOVar27;
  _StringGuts _Var28;
  char *pcVar29;
  long extraout_x8;
  long extraout_x8_00;
  long lVar30;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar31;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar32;
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
  String SVar60;
  undefined *local_180 [2];
  DispatchWorkItemFlags local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  void *local_148;
  undefined *local_140;
  char *local_138;
  undefined *local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  DispatchWorkItemFlags local_f0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar11 = &DAT_100553ba0;
  _Var28.unknown = &DAT_100426bb8;
  pcVar29 = param_3;
  local_148 = param_4;
  local_140 = (undefined *)param_5;
  local_120 = param_1;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar25 = (long)local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar32 = (undefined8 *)(lVar25 - extraout_x12);
  local_150 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_158 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_158 + 0x40));
  lVar30 = (long)puVar32 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_160 = (undefined *)lVar30;
  LVar4 = os::Logger::typeMetadataAccessor();
  local_f8 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar30 = lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_128 = lVar30 - extraout_x12_00;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_100 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar31 = (lVar30 - extraout_x12_00) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar31;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_118 = *(long *)(DVar6.unknown + -8);
  local_108 = DVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  local_f0.unknown = (undefined *)(lVar31 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  FUN_1002af264();
  if (DVar6.unknown == (undefined *)0x0) {
    local_160 = puVar11;
    local_158 = param_2;
    local_150 = (undefined *)lVar25;
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      puVar11 = &_OBJC_CLASS___NSPanel;
      local_138 = param_3;
      _objc_allocWithZone();
      IVar12 = objc_stub::initWithContentRect_styleMask_backing_defer_
                         ((ID)puVar11,0,0,0x408c200000000000,0x4082c00000000000,0x8003,2,0);
      objc_stub::setTitleVisibility_(IVar12,1);
      objc_stub::setTitlebarAppearsTransparent_(IVar12,1);
      objc_stub::setFloatingPanel_(IVar12,0);
      objc_stub::setLevel_(IVar12,8);
      IVar13 = objc_stub::standardWindowButton_(IVar12,2);
      if (IVar13 != 0) {
        objc_stub::setHidden_(IVar13,1);
      }
      local_168 = DVar5;
      local_130 = LVar4.unknown;
      IVar13 = objc_stub::standardWindowButton_(IVar12,1);
      puVar11 = local_140;
      if (IVar13 != 0) {
        objc_stub::setHidden_(IVar13,1);
      }
      puVar14 = &DAT_10052d338;
      local_128 = lVar30;
      _swift_allocObject(&DAT_10052d338,0x18,7);
      _swift_weakInit(puVar14 + 0x10);
      uVar15 = 0;
      FUN_10016ed68();
      puVar16 = &DAT_10054aba0;
      FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
      _swift_bridgeObjectRetain(puVar11);
      _swift_retain(puVar14);
      local_180[1] = puVar16;
      EVar17 = SwiftUI::EnvironmentObject::init();
      uVar18 = 0;
      FUN_100279594();
      puVar19 = &DAT_100553dd0;
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      local_180[0] = (undefined *)puVar19;
      EVar20 = SwiftUI::EnvironmentObject::init();
      *puVar32 = EVar17.unknown;
      puVar32[1] = puVar16;
      puVar32[2] = EVar20.unknown;
      puVar32[3] = puVar19;
      pvVar7 = local_148;
      if (DAT_100556f80 != -1) {
        _swift_once(&DAT_100556f80,FUN_1001dd604);
      }
      uVar10 = DAT_100577cf0;
      uVar21 = 0;
      FUN_1001eba34();
      puVar16 = &DAT_100553e00;
      FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
      _swift_retain(uVar10);
      OVar22 = SwiftUI::ObservedObject::init(puVar16,uVar21,puVar16);
      puVar32[4] = OVar22.unknown;
      puVar32[5] = uVar21;
      lVar30 = 0;
      FUN_1003009dc();
      FUN_10002f154(local_120,(long)puVar32 + (long)*(int *)(lVar30 + 0x1c));
      puVar19 = (undefined8 *)((long)puVar32 + (long)*(int *)(lVar30 + 0x20));
      *puVar19 = pvVar7;
      puVar19[1] = puVar11;
      puVar19 = (undefined8 *)((long)puVar32 + (long)*(int *)(lVar30 + 0x24));
      *puVar19 = FUN_100129340;
      puVar19[1] = puVar14;
      iVar1 = *(int *)(lVar30 + 0x28);
      local_b8 = SUB81(PTR___swiftEmptySetSingleton_1005241a0,0);
      uStack_b7 = (undefined7)((ulong)PTR___swiftEmptySetSingleton_1005241a0 >> 8);
      puVar11 = &DAT_100553ba8;
      FUN_100002f94(&DAT_100553ba8,&DAT_100426bc0);
      SwiftUI::State::init((long)puVar32 + (long)iVar1,puVar11,puVar11);
      local_b8 = 0;
      SwiftUI::State::init
                ((long)puVar32 + (long)*(int *)(lVar30 + 0x2c),puVar11,
                 PTR___type_metadata_for_Swift_Bool_100523b70);
      _swift_release(puVar14);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100553bb0;
      FUN_100002f94(&DAT_100553bb0,&DAT_100426bc8);
      lVar30 = local_158;
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)((long)puVar32 + (long)iVar1) = uVar15;
      ((undefined8 *)((long)puVar32 + (long)iVar1))[1] = lVar30;
      _swift_retain();
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      pcVar29 = local_138;
      iVar1 = *(int *)(local_160 + 0x24);
      *(undefined8 *)((long)puVar32 + (long)iVar1) = uVar18;
      ((undefined8 *)((long)puVar32 + (long)iVar1))[1] = pcVar29;
      puVar11 = local_150;
      FUN_100129348(puVar32,local_150);
      pNVar23 = (NSHostingView *)&DAT_100553bb8;
      FUN_100002f94(&DAT_100553bb8,&DAT_100426bd0);
      _objc_allocWithZone();
      _swift_retain(pcVar29);
      SwiftUI::NSHostingView::_init(pNVar23,puVar11);
      objc_stub::setContentView_(IVar12,puVar11);
      FUN_100129398(puVar32);
      *(ID *)(unaff_x20 + 0x10) = IVar12;
      LVar4.unknown = local_130;
      lVar30 = local_128;
      DVar5.unknown = local_168.unknown;
    }
    DVar3.unknown = local_f0.unknown;
    if (DAT_100557eb0 != -1) {
      _swift_once(&DAT_100557eb0,FUN_10025a3bc);
    }
    IVar12 = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
    if (IVar12 == 0) {
      local_b8 = 0x5b;
      uStack_b7 = 0;
      local_b0 = (undefined *)0xe100000000000000;
      local_78 = (undefined *)0x4e524157;
      uStack_70 = 0xe400000000000000;
      local_88 = 0x20;
      uStack_80 = 0xe100000000000000;
      local_128 = lVar30;
      FUN_100026df4();
      pcVar29 = (char *)0x0;
      puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,IVar12,IVar12);
      SVar52.bridgeObject = puVar14;
      SVar52.str = pcVar29;
      Swift::String::append(SVar34,SVar52);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      SVar34.bridgeObject = (void *)0xe300000000000000;
      SVar34.str = (char *)0x5b205d;
      SVar53.bridgeObject = puVar14;
      SVar53.str = pcVar29;
      Swift::String::append(SVar34,SVar53);
      SVar39.bridgeObject = (void *)0xe200000000000000;
      SVar39.str = (char *)0x6975;
      SVar54.bridgeObject = puVar14;
      SVar54.str = pcVar29;
      Swift::String::append(SVar39,SVar54);
      SVar40.bridgeObject = (void *)0xe200000000000000;
      SVar40.str = (char *)0x205d;
      SVar55.bridgeObject = puVar14;
      SVar55.str = pcVar29;
      Swift::String::append(SVar40,SVar55);
      SVar41.bridgeObject = (void *)0x80000001004ddc20;
      SVar41.str = (char *)0xd000000000000027;
      SVar56.bridgeObject = puVar14;
      SVar56.str = pcVar29;
      Swift::String::append(SVar41,SVar56);
      puVar11 = local_b0;
      uVar15 = CONCAT71(uStack_b7,local_b8);
      local_b8 = 0x20;
      uStack_b7 = 0x2820;
      local_b0 = (undefined *)0xe300000000000000;
      SVar42.bridgeObject = (void *)0x80000001004ddc50;
      SVar42.str = (char *)0xd000000000000039;
      SVar57.bridgeObject = puVar14;
      SVar57.str = pcVar29;
      Swift::String::append(SVar42,SVar57);
      SVar43.bridgeObject = (void *)0xe100000000000000;
      SVar43.str = (char *)0x3a;
      SVar58.bridgeObject = puVar14;
      SVar58.str = pcVar29;
      Swift::String::append(SVar43,SVar58);
      local_78 = (undefined *)0x30;
      SVar34 = Swift::CustomStringConvertible::get_description();
      SVar59.bridgeObject = puVar14;
      SVar59.str = pcVar29;
      Swift::String::append(SVar34,SVar59);
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      SVar44.bridgeObject = (void *)0xe100000000000000;
      SVar44.str = (char *)0x29;
      SVar60.bridgeObject = puVar14;
      SVar60.str = pcVar29;
      Swift::String::append(SVar44,SVar60);
      puVar14 = local_b0;
      uVar18 = CONCAT71(uStack_b7,local_b8);
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar16 = &DAT_10052d360;
      _swift_allocObject(&DAT_10052d360,0x30,7);
      *(undefined8 *)(puVar16 + 0x10) = uVar15;
      *(undefined **)(puVar16 + 0x18) = puVar11;
      *(undefined8 *)(puVar16 + 0x20) = uVar18;
      *(undefined **)(puVar16 + 0x28) = puVar14;
      local_98 = FUN_100099310;
      local_b8 = SUB81(PTR___NSConcreteStackBlock_100521110,0);
      uStack_b7 = (undefined7)((ulong)PTR___NSConcreteStackBlock_100521110 >> 8);
      local_b0 = (undefined *)0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_10052d378;
      local_90 = puVar16;
      pvVar7 = __Block_copy(&local_b8);
      DVar6.unknown = puVar11;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar6);
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar32 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar16 = puVar14;
      FUN_100077ac0();
      lVar30 = local_110;
      Swift::SetAlgebra::_init(local_110,&local_78,puVar14,puVar16,DVar5.unknown,puVar32);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar3);
      __Block_release(pvVar7);
      (**(code **)(local_100 + 8))(lVar30,DVar5.unknown);
      (**(code **)(local_118 + 8))(DVar3.unknown,local_108);
      _swift_release(local_90);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar14 = LVar4.unknown;
      FUN_100099338(LVar4.unknown,&DAT_100558f50);
      lVar31 = local_f8;
      lVar30 = local_128;
      lVar25 = local_128;
      (**(code **)(local_f8 + 0x10))(local_128,puVar14,LVar4.unknown);
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar26.unknown = puVar11;
      _swift_bridgeObjectRetain();
      pOVar8 = os::Logger::get_logObject(LVar26);
      pOVar27 = pOVar8;
      _os_log_type_enabled(pOVar8,(uint)lVar25 & 0xff);
      if ((int)pOVar27 == 0) {
        _swift_bridgeObjectRelease_n(puVar11,2);
      }
      else {
        puVar9 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar18 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        local_b8 = (undefined1)uVar18;
        uStack_b7 = (undefined7)((ulong)uVar18 >> 8);
        *puVar9 = 0x8220102;
        FUN_10012dbb0(uVar15,puVar11,&local_b8);
        *(undefined8 *)(puVar9 + 1) = uVar15;
        _swift_bridgeObjectRelease_n(puVar11,2);
        __os_log_impl(0x100000000,pOVar8,(uint)lVar25 & 0xff,"%{public}s",puVar9,0xc);
        FUN_100043f24(uVar18);
        _swift_slowDealloc(uVar18,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar31 + 8))(lVar30,LVar4.unknown);
    }
    else if (*(long *)(unaff_x20 + 0x10) != 0) {
      objc_stub::beginSheet_completionHandler_(IVar12,*(long *)(unaff_x20 + 0x10),0);
    }
  }
  else {
    local_b8 = 0;
    uStack_b7 = 0;
    local_b0 = (void *)0xe000000000000000;
    local_138 = param_3;
    local_130 = LVar4.unknown;
    Swift::_StringGuts::grow(0x36,_Var28);
    SVar33.bridgeObject = (void *)0x80000001004ddc90;
    SVar33.str = (char *)0xd000000000000034;
    SVar45.bridgeObject = param_4;
    SVar45.str = pcVar29;
    Swift::String::append(SVar33,SVar45);
    local_140 = DVar6.unknown;
    objc_stub::localizedName((ID)DVar6.unknown);
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar7 = SVar34.bridgeObject;
    SVar46.bridgeObject = param_4;
    SVar46.str = pcVar29;
    Swift::String::append(SVar34,SVar46);
    _swift_bridgeObjectRelease(pvVar7);
    puVar11 = local_b0;
    SVar2.str._1_7_ = uStack_b7;
    SVar2.str._0_1_ = local_b8;
    SVar2.bridgeObject = local_b0;
    local_b8 = 0x5b;
    uStack_b7 = 0;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    FUN_100026df4();
    pcVar29 = (char *)0x0;
    puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar34 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar7,pvVar7);
    SVar47.bridgeObject = puVar14;
    SVar47.str = pcVar29;
    Swift::String::append(SVar34,SVar47);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    SVar35.bridgeObject = (void *)0xe300000000000000;
    SVar35.str = (char *)0x5b205d;
    SVar48.bridgeObject = puVar14;
    SVar48.str = pcVar29;
    Swift::String::append(SVar35,SVar48);
    SVar36.bridgeObject = (void *)0xe700000000000000;
    SVar36.str = (char *)0x79616c70736964;
    SVar49.bridgeObject = puVar14;
    SVar49.str = pcVar29;
    Swift::String::append(SVar36,SVar49);
    SVar37.bridgeObject = (void *)0xe200000000000000;
    SVar37.str = (char *)0x205d;
    SVar50.bridgeObject = puVar14;
    SVar50.str = pcVar29;
    Swift::String::append(SVar37,SVar50);
    local_148 = puVar11;
    SVar51.bridgeObject = puVar14;
    SVar51.str = pcVar29;
    Swift::String::append(SVar2,SVar51);
    puVar11 = local_b0;
    uVar15 = CONCAT71(uStack_b7,local_b8);
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar14 = &DAT_10052d3b0;
    _swift_allocObject(&DAT_10052d3b0,0x30,7);
    *(undefined8 *)(puVar14 + 0x10) = uVar15;
    *(undefined **)(puVar14 + 0x18) = puVar11;
    *(undefined8 *)(puVar14 + 0x20) = 0;
    *(undefined8 *)(puVar14 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8 = SUB81(PTR___NSConcreteStackBlock_100521110,0);
    uStack_b7 = (undefined7)((ulong)PTR___NSConcreteStackBlock_100521110 >> 8);
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10052d3c8;
    local_168.unknown = (undefined *)uVar15;
    local_90 = puVar14;
    pvVar7 = __Block_copy(&local_b8);
    DVar6.unknown = puVar11;
    _swift_bridgeObjectRetain();
    DVar3.unknown = local_f0.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar32 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar14 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = puVar14;
    FUN_100077ac0();
    lVar30 = local_110;
    Swift::SetAlgebra::_init(local_110,&local_78,puVar14,puVar16,DVar5.unknown,puVar32);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar3);
    __Block_release(pvVar7);
    (**(code **)(local_100 + 8))(lVar30,DVar5.unknown);
    (**(code **)(local_118 + 8))(DVar3.unknown,local_108);
    _swift_release(local_90);
    lVar30 = local_128;
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar14 = local_130;
    puVar16 = local_130;
    FUN_100099338(local_130,&DAT_100558f50);
    lVar31 = local_f8;
    lVar25 = lVar30;
    (**(code **)(local_f8 + 0x10))(lVar30,puVar16,puVar14);
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar4.unknown = puVar11;
    _swift_bridgeObjectRetain();
    pOVar8 = os::Logger::get_logObject(LVar4);
    pOVar27 = pOVar8;
    _os_log_type_enabled(pOVar8,(uint)lVar25 & 0xff);
    uVar15 = local_120;
    if ((int)pOVar27 == 0) {
      _swift_bridgeObjectRelease_n(puVar11,2);
    }
    else {
      puVar9 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar10 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_b8 = (undefined1)uVar10;
      uStack_b7 = (undefined7)((ulong)uVar10 >> 8);
      *puVar9 = 0x8220102;
      uVar18 = local_168.unknown;
      FUN_10012dbb0(local_168.unknown,puVar11,&local_b8);
      *(undefined8 *)(puVar9 + 1) = uVar18;
      _swift_bridgeObjectRelease_n(puVar11,2);
      __os_log_impl(0x100000000,pOVar8,(uint)lVar25 & 0xff,"%{public}s",puVar9,0xc);
      FUN_100043f24(uVar10);
      _swift_slowDealloc(uVar10,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar31 + 8))(lVar30,puVar14);
    _swift_bridgeObjectRelease(local_148);
    uVar18 = uVar15;
    FUN_10026a7c8(uVar15);
    puVar11 = &DAT_100549eb0;
    FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
    _swift_initStackObject();
    *(undefined8 *)(puVar11 + 0x18) = 2;
    *(undefined8 *)(puVar11 + 0x10) = 1;
    puVar16 = puVar11;
    FUN_100174ed8();
    lVar30 = (long)local_160;
    if (puVar16 == (undefined *)0x0) {
      UVar24 = Foundation::UUID::init();
      SVar34 = Foundation::UUID::get_uuidString(UVar24);
      pvVar7 = SVar34.bridgeObject;
      puVar16 = local_150;
      (**(code **)(local_158 + 8))(lVar30,local_150);
      SVar38.bridgeObject = puVar16;
      SVar38.str = SVar34.str;
    }
    else {
      objc_stub::stringValue((ID)puVar16);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar7 = SVar38.bridgeObject;
    }
    *(char **)(puVar11 + 0x20) = SVar38.str;
    *(void **)(puVar11 + 0x28) = pvVar7;
    puVar16 = puVar11;
    FUN_100268018(puVar11);
    _swift_setDeallocating(puVar11);
    FUN_100043c00(puVar11 + 0x20);
    FUN_1002ab9c0(uVar15,uVar18,puVar14,puVar16);
    _swift_bridgeObjectRelease(puVar14);
    _swift_bridgeObjectRelease(puVar16);
  }
  return;
}

