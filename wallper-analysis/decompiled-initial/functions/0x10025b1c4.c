// rea decompile_all
// name: FUN_10025b1c4
// address: 0x10025b1c4
// body: available
// range: 0x10025b1c4-0x10025c073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10025b1c4(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  Logger LVar7;
  DispatchWorkItemFlags DVar8;
  DispatchQoS DVar9;
  DispatchQoS DVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  ID self;
  undefined *puVar21;
  Alignment AVar22;
  char *pcVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long lVar25;
  long extraout_x8_02;
  code *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long extraout_x12;
  undefined8 uVar32;
  long unaff_x20;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  long lVar36;
  DispatchWorkItemFlags qos;
  long lVar37;
  long lVar38;
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
  String SVar61;
  String SVar62;
  String SVar63;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 auStack_170 [2];
  undefined *local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  code *local_f8 [7];
  undefined *puStack_c0;
  code *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar21 = &DAT_1005610a0;
  FUN_100002f94(&DAT_1005610a0,&DAT_100436df0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar34 = (long)&local_160 - extraout_x8;
  LVar7 = os::Logger::typeMetadataAccessor();
  lVar33 = *(long *)(LVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar28 = lVar34 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar28 - extraout_x12;
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar24 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar36 = lVar37 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar25 = *(long *)(DVar9.unknown + -8);
  DVar10 = DVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar31 = _TtC7Wallper13WindowManager::injectedVideoLibrary;
  qos.unknown = (undefined *)(lVar36 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if (*(char *)(unaff_x20 + _TtC7Wallper13WindowManager::canOpenUI) == '\x01') {
    puVar35 = *(undefined **)(unaff_x20 + _TtC7Wallper13WindowManager::injectedVideoLibrary);
    if (puVar35 != (undefined *)0x0) {
      puVar11 = &DAT_10042c100;
      _swift_getKeyPath(&DAT_10042c100);
      puVar12 = &DAT_10042c128;
      _swift_getKeyPath(&DAT_10042c128);
      _swift_retain(puVar35);
      Combine::Published::_get_subscript(local_f8 + 4);
      _swift_release(puVar11);
      _swift_release(puVar12);
      if (((ulong)local_f8[4] & 1) == 0) {
        local_148 = lVar31;
        local_f8[4] = (code *)0x5b;
        local_f8[5] = (code *)0xe100000000000000;
        local_f8[2] = (code *)0x4f464e49;
        local_f8[3] = (code *)0xe400000000000000;
        local_f8[0] = (code *)0x20;
        local_f8[1] = (code *)0xe100000000000000;
        FUN_100026df4();
        pcVar23 = (char *)0x0;
        puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,local_f8,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,puVar12,puVar12);
        SVar50.bridgeObject = puVar11;
        SVar50.str = pcVar23;
        Swift::String::append(SVar39,SVar50);
        _swift_bridgeObjectRelease(SVar39.bridgeObject);
        SVar39.bridgeObject = (void *)0xe300000000000000;
        SVar39.str = (char *)0x5b205d;
        SVar51.bridgeObject = puVar11;
        SVar51.str = pcVar23;
        Swift::String::append(SVar39,SVar51);
        SVar40.bridgeObject = (void *)0xe300000000000000;
        SVar40.str = (char *)0x707061;
        SVar52.bridgeObject = puVar11;
        SVar52.str = pcVar23;
        Swift::String::append(SVar40,SVar52);
        SVar41.bridgeObject = (void *)0xe200000000000000;
        SVar41.str = (char *)0x205d;
        SVar53.bridgeObject = puVar11;
        SVar53.str = pcVar23;
        Swift::String::append(SVar41,SVar53);
        SVar42.bridgeObject = (void *)0x80000001004ddd30;
        SVar42.str = (char *)0xd000000000000034;
        SVar54.bridgeObject = puVar11;
        SVar54.str = pcVar23;
        Swift::String::append(SVar42,SVar54);
        pcVar3 = local_f8[5];
        pcVar26 = local_f8[4];
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_158 = DAT_100559010;
        puVar11 = &DAT_100535870;
        _swift_allocObject(&DAT_100535870,0x30,7);
        local_160 = pcVar26;
        *(code **)(puVar11 + 0x10) = pcVar26;
        *(code **)(puVar11 + 0x18) = pcVar3;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
        local_b8 = FUN_100099310;
        local_f8[4] = (code *)PTR___NSConcreteStackBlock_100521110;
        local_f8[5] = (code *)0x42000000;
        local_f8[6] = FUN_1000c7e7c;
        puStack_c0 = &DAT_100535888;
        puStack_b0 = puVar11;
        pvVar13 = __Block_copy(local_f8 + 4);
        DVar10.unknown = pcVar3;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar10);
        local_f8[2] = (code *)PTR___swiftEmptyArrayStorage_100524190;
        puVar14 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        local_150 = pcVar3;
        puVar11 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar15 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(lVar36,local_f8 + 2,puVar11,puVar15,DVar8.unknown,puVar14);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar13);
        (**(code **)(lVar24 + 8))(lVar36,DVar8.unknown);
        (**(code **)(lVar25 + 8))(qos.unknown,DVar9.unknown);
        _swift_release(puStack_b0);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar16 = LVar7;
        FUN_100099338(LVar7.unknown,&DAT_100558f50);
        lVar31 = lVar37;
        (**(code **)(lVar33 + 0x10))(lVar37,LVar16.unknown,LVar7.unknown);
        uVar6 = (uint)lVar31;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        puVar11 = local_150;
        LVar16.unknown = local_150;
        _swift_bridgeObjectRetain();
        pOVar17 = os::Logger::get_logObject(LVar16);
        pOVar18 = pOVar17;
        _os_log_type_enabled(pOVar17,uVar6 & 0xff);
        if ((int)pOVar18 == 0) {
          _swift_bridgeObjectRelease_n(puVar11,2);
          pcVar26 = *(code **)(lVar33 + 8);
        }
        else {
          puVar19 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          puVar20 = (undefined *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar19 = 0x8220102;
          puVar12 = local_160;
          local_f8[4] = (code *)puVar20;
          FUN_10012dbb0(local_160,puVar11,local_f8 + 4);
          *(undefined **)(puVar19 + 1) = puVar12;
          _swift_bridgeObjectRelease_n(puVar11,2);
          __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar19,0xc);
          FUN_100043f24(puVar20);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
          pcVar26 = *(code **)(lVar33 + 8);
        }
        (*pcVar26)(lVar37,LVar7.unknown);
        FUN_100270f98();
        lVar31 = local_148;
      }
      _swift_release(puVar35);
      DVar10.unknown = puVar35;
    }
    lVar2 = _TtC7Wallper13WindowManager::injectedPlaylistManager;
    lVar37 = _TtC7Wallper13WindowManager::injectedPreviewManager;
    lVar38 = *(long *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedLicenseManager);
    if ((((lVar38 != 0) && (lVar31 = *(long *)(unaff_x20 + lVar31), lVar31 != 0)) &&
        (lVar30 = *(long *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedDeviceManager),
        lVar30 != 0)) &&
       (((lVar29 = *(long *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedShuffleManager),
         lVar29 != 0 &&
         (lVar27 = *(long *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedPreviewManager),
         lVar27 != 0)) &&
        (puVar35 = *(undefined **)(unaff_x20 + _TtC7Wallper13WindowManager::injectedPlaylistManager)
        , puVar35 != (undefined *)0x0)))) {
      _swift_retain(lVar30);
      _swift_retain(puVar35);
      _swift_retain(lVar27);
      _swift_retain_n(lVar29,2);
      _swift_retain(lVar31);
      _swift_retain(lVar38);
      _swift_release(lVar29);
      uVar32 = *(undefined8 *)(unaff_x20 + lVar37);
      *(long *)(unaff_x20 + lVar37) = lVar27;
      _swift_retain(lVar27);
      _swift_release(uVar32);
      uVar32 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined **)(unaff_x20 + lVar2) = puVar35;
      _swift_retain(puVar35);
      _swift_release(uVar32);
      FUN_10025ae40(lVar38);
      self = *(ID *)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow);
      if (self != 0) {
        FUN_10025a508();
        objc_stub::makeKeyAndOrderFront_(self,0);
        _swift_release(lVar38);
        _swift_release(lVar31);
        _swift_release(lVar30);
        _swift_release(lVar29);
        _swift_release(lVar27);
        _swift_release(puVar35);
        return;
      }
      FUN_1003a7efc(lVar34);
      uVar32 = 0;
      FUN_10014e37c();
      FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e10;
      FUN_100002f94(&DAT_100557e10,&DAT_10042c148);
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = lVar38;
      uVar32 = 0;
      FUN_100279594();
      FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
      _swift_retain(lVar38);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e20;
      FUN_100002f94(&DAT_100557e20,&DAT_100436e00);
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = lVar31;
      uVar32 = 0;
      FUN_10013b98c();
      FUN_1000036d0(&DAT_100553150,FUN_10013b98c,&TargetProtocolConformanceDescriptor_1004274b8);
      _swift_retain(lVar31);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e30;
      FUN_100002f94(&DAT_100557e30,&DAT_10042c150);
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = lVar30;
      uVar32 = 0;
      FUN_100226ac0();
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      _swift_retain(lVar30);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e40;
      FUN_100002f94(&DAT_100557e40,&DAT_100436e10);
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = lVar29;
      uVar32 = 0;
      FUN_1001eba34();
      FUN_1000036d0(&DAT_100553e00,FUN_1001eba34,&TargetProtocolConformanceDescriptor_10042add0);
      _swift_retain(lVar29);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e50;
      FUN_100002f94(&DAT_100557e50,&DAT_10042c158);
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = lVar27;
      uVar32 = 0;
      FUN_1001b7378();
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      _swift_retain(lVar27);
      (extension_SwiftUI)::Combine::ObservableObject::_get_environmentStore();
      puVar11 = &DAT_100557e60;
      puVar12 = &DAT_100436e20;
      FUN_100002f94();
      iVar1 = *(int *)(puVar11 + 0x24);
      *(undefined8 *)(lVar34 + iVar1) = uVar32;
      ((undefined8 *)(lVar34 + iVar1))[1] = puVar35;
      AVar22.unknown = puVar35;
      _swift_retain();
      AVar22 = SwiftUI::Alignment::get_center(AVar22);
      *(undefined **)(qos.unknown + -0x10) = AVar22.unknown;
      *(undefined **)(qos.unknown + -8) = puVar12;
      qos.unknown[-0x18] = 1;
      *(undefined8 *)(qos.unknown + -0x20) = 0;
      qos.unknown[-0x28] = 1;
      *(undefined8 *)(qos.unknown + -0x30) = 0;
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x4094500000000000);
      puVar14 = (undefined8 *)(lVar34 + *(int *)(puVar21 + 0x24));
      puVar14[9] = uStack_90;
      puVar14[8] = local_98;
      puVar14[0xb] = uStack_80;
      puVar14[10] = local_88;
      puVar14[0xd] = uStack_70;
      puVar14[0xc] = local_78;
      puVar14[1] = local_f8[5];
      *puVar14 = local_f8[4];
      puVar14[3] = puStack_c0;
      puVar14[2] = local_f8[6];
      puVar14[5] = puStack_b0;
      puVar14[4] = local_b8;
      puVar14[7] = uStack_a0;
      puVar14[6] = local_a8;
      FUN_1003f3b14(lVar34);
      FUN_1002a9d18(lVar31);
      _swift_release(lVar38);
      _swift_release(lVar31);
      _swift_release(lVar30);
      _swift_release(lVar29);
      _swift_release(lVar27);
      _swift_release(puVar35);
      FUN_10002a29c(lVar34,&DAT_1005610a0,&DAT_100436df0);
      return;
    }
    local_f8[4] = (code *)0x5b;
    local_f8[5] = (code *)0xe100000000000000;
    local_f8[2] = (code *)0x524f525245;
    local_f8[3] = (code *)0xe500000000000000;
    local_f8[0] = (code *)0x20;
    local_f8[1] = (code *)0xe100000000000000;
    FUN_100026df4();
    pcVar23 = (char *)0x0;
    puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,local_f8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,DVar10.unknown,DVar10.unknown
                       );
    SVar55.bridgeObject = puVar21;
    SVar55.str = pcVar23;
    Swift::String::append(SVar39,SVar55);
    _swift_bridgeObjectRelease(SVar39.bridgeObject);
    SVar43.bridgeObject = (void *)0xe300000000000000;
    SVar43.str = (char *)0x5b205d;
    SVar56.bridgeObject = puVar21;
    SVar56.str = pcVar23;
    Swift::String::append(SVar43,SVar56);
    SVar44.bridgeObject = (void *)0xe200000000000000;
    SVar44.str = (char *)0x6975;
    SVar57.bridgeObject = puVar21;
    SVar57.str = pcVar23;
    Swift::String::append(SVar44,SVar57);
    SVar45.bridgeObject = (void *)0xe200000000000000;
    SVar45.str = (char *)0x205d;
    SVar58.bridgeObject = puVar21;
    SVar58.str = pcVar23;
    Swift::String::append(SVar45,SVar58);
    SVar46.bridgeObject = (void *)0x80000001004e2d10;
    SVar46.str = (char *)0xd000000000000043;
    SVar59.bridgeObject = puVar21;
    SVar59.str = pcVar23;
    Swift::String::append(SVar46,SVar59);
    pcVar4 = local_f8[5];
    pcVar26 = local_f8[4];
    local_f8[4] = (code *)0x282020;
    local_f8[5] = (code *)0xe300000000000000;
    SVar47.bridgeObject = (void *)0xe900000000000029;
    SVar47.str = (char *)0x287070416e65706f;
    SVar60.bridgeObject = puVar21;
    SVar60.str = pcVar23;
    Swift::String::append(SVar47,SVar60);
    SVar48.bridgeObject = (void *)0xe100000000000000;
    SVar48.str = (char *)0x3a;
    SVar61.bridgeObject = puVar21;
    SVar61.str = pcVar23;
    Swift::String::append(SVar48,SVar61);
    local_f8[2] = (code *)0xdc;
    SVar39 = Swift::CustomStringConvertible::get_description();
    SVar62.bridgeObject = puVar21;
    SVar62.str = pcVar23;
    Swift::String::append(SVar39,SVar62);
    _swift_bridgeObjectRelease(SVar39.bridgeObject);
    SVar49.bridgeObject = (void *)0xe100000000000000;
    SVar49.str = (char *)0x29;
    SVar63.bridgeObject = puVar21;
    SVar63.str = pcVar23;
    Swift::String::append(SVar49,SVar63);
    pcVar5 = local_f8[5];
    pcVar3 = local_f8[4];
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar21 = &DAT_1005358c0;
    _swift_allocObject(&DAT_1005358c0,0x30,7);
    *(code **)(puVar21 + 0x10) = pcVar26;
    *(code **)(puVar21 + 0x18) = pcVar4;
    *(code **)(puVar21 + 0x20) = pcVar3;
    *(code **)(puVar21 + 0x28) = pcVar5;
    local_b8 = thunk_FUN_100099310;
    local_f8[4] = (code *)PTR___NSConcreteStackBlock_100521110;
    local_f8[5] = (code *)0x42000000;
    local_f8[6] = FUN_1000c7e7c;
    puStack_c0 = &DAT_1005358d8;
    puStack_b0 = puVar21;
    pvVar13 = __Block_copy(local_f8 + 4);
    DVar10.unknown = pcVar4;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_f8[2] = (code *)PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar21 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar36,local_f8 + 2,puVar21,puVar15,DVar8.unknown,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar13);
    (**(code **)(lVar24 + 8))(lVar36,DVar8.unknown);
    (**(code **)(lVar25 + 8))(qos.unknown,DVar9.unknown);
    _swift_release(puStack_b0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar16 = LVar7;
    FUN_100099338(LVar7.unknown,&DAT_100558f50);
    lVar31 = lVar28;
    (**(code **)(lVar33 + 0x10))(lVar28,LVar16.unknown,LVar7.unknown);
    uVar6 = (uint)lVar31;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar16.unknown = pcVar4;
    _swift_bridgeObjectRetain();
    pOVar17 = os::Logger::get_logObject(LVar16);
    pOVar18 = pOVar17;
    _os_log_type_enabled(pOVar17,uVar6 & 0xff);
    if ((int)pOVar18 == 0) {
      _swift_bridgeObjectRelease_n(pcVar4,2);
      pcVar26 = *(code **)(lVar33 + 8);
    }
    else {
      puVar19 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar21 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar19 = 0x8220102;
      local_f8[4] = (code *)puVar21;
      FUN_10012dbb0(pcVar26,pcVar4,local_f8 + 4);
      *(code **)(puVar19 + 1) = pcVar26;
      _swift_bridgeObjectRelease_n(pcVar4,2);
      __os_log_impl(0x100000000,pOVar17,uVar6 & 0xff,"%{public}s",puVar19,0xc);
      FUN_100043f24(puVar21);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
      pcVar26 = *(code **)(lVar33 + 8);
    }
    (*pcVar26)(lVar28,LVar7.unknown);
  }
  else {
    FUN_100044230(0,&DAT_100557e00,&PTR__OBJC_CLASS___NSSound_10053fc30);
    (extension_AppKit)::__C::NSSound::beep();
  }
  return;
}

