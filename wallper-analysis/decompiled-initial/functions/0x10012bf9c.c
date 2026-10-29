// rea decompile_all
// name: FUN_10012bf9c
// address: 0x10012bf9c
// body: available
// range: 0x10012bf9c-0x10012c54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012c0d4 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012bf9c(undefined8 param_1)

{
  void *aBlock;
  code *pcVar1;
  uint uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  ID self;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  Logger LVar11;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long lVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  long unaff_x20;
  long lVar20;
  undefined1 *puVar21;
  ID self_00;
  long lVar22;
  long lVar23;
  DispatchWorkItemFlags qos;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_120 [8];
  undefined *local_118;
  undefined8 *local_110;
  void *local_108;
  undefined8 local_100;
  undefined *local_f8;
  long local_f0;
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
  undefined1 *puVar12;
  
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar18 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  puVar21 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar20 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  lVar23 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  qos.unknown = (undefined *)(lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if ((*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::statusItem) != 0) &&
     (self = objc_stub::button(*(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::statusItem)),
     self != 0)) {
    self_00 = *(ID *)(unaff_x20 + _TtC7Wallper17MenuBarController::popover);
    IVar6 = objc_stub::isShown(self_00);
    if ((int)IVar6 != 0) {
      objc_stub::performClose_(self_00,param_1);
      return 0;
    }
    lVar22 = *(long *)(unaff_x20 + _TtC7Wallper17MenuBarController::videoLibrary);
    if (lVar22 != 0) {
      puVar7 = &DAT_100426c68;
      _swift_getKeyPath(&DAT_100426c68);
      puVar8 = &DAT_100426c90;
      _swift_getKeyPath(&DAT_100426c90);
      _swift_retain(lVar22);
      Combine::Published::_get_subscript(&local_b8);
      _swift_release(puVar7);
      _swift_release(puVar8);
      if (((ulong)local_b8 & 1) == 0) {
        local_b8 = (undefined *)0x5b;
        local_b0 = (undefined *)0xe100000000000000;
        local_78 = (undefined *)0x4f464e49;
        uStack_70 = 0xe400000000000000;
        local_88 = 0x20;
        uStack_80 = 0xe100000000000000;
        local_f0 = lVar22;
        FUN_100026df4();
        pcVar17 = (char *)0x0;
        puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,puVar8,puVar8);
        SVar28.bridgeObject = puVar7;
        SVar28.str = pcVar17;
        Swift::String::append(SVar24,SVar28);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        SVar24.bridgeObject = (void *)0xe300000000000000;
        SVar24.str = (char *)0x5b205d;
        SVar29.bridgeObject = puVar7;
        SVar29.str = pcVar17;
        Swift::String::append(SVar24,SVar29);
        SVar25.bridgeObject = (void *)0xe300000000000000;
        SVar25.str = (char *)0x707061;
        SVar30.bridgeObject = puVar7;
        SVar30.str = pcVar17;
        Swift::String::append(SVar25,SVar30);
        SVar26.bridgeObject = (void *)0xe200000000000000;
        SVar26.str = (char *)0x205d;
        SVar31.bridgeObject = puVar7;
        SVar31.str = pcVar17;
        Swift::String::append(SVar26,SVar31);
        SVar27.bridgeObject = (void *)0x80000001004ddd30;
        SVar27.str = (char *)0xd000000000000034;
        SVar32.bridgeObject = puVar7;
        SVar32.str = pcVar17;
        Swift::String::append(SVar27,SVar32);
        puVar8 = local_b0;
        puVar7 = local_b8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_100 = DAT_100559010;
        puVar16 = &DAT_10052d450;
        _swift_allocObject(&DAT_10052d450,0x30,7);
        local_118 = puVar7;
        *(undefined **)(puVar16 + 0x10) = puVar7;
        *(undefined **)(puVar16 + 0x18) = puVar8;
        *(undefined8 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + 0x28) = 0xe000000000000000;
        local_98 = FUN_100099310;
        local_b8 = PTR___NSConcreteStackBlock_100521110;
        local_b0 = (undefined *)0x42000000;
        local_a8 = FUN_1000c7e7c;
        puStack_a0 = &DAT_10052d468;
        local_90 = puVar16;
        local_108 = __Block_copy(&local_b8);
        DVar9.unknown = puVar8;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar9);
        local_78 = PTR___swiftEmptyArrayStorage_100524190;
        puVar10 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar7 = &DAT_100561080;
        local_110 = puVar10;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        local_f8 = puVar8;
        puVar10 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(lVar23,&local_78,puVar7,puVar10,DVar4.unknown,local_110);
        aBlock = local_108;
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(aBlock);
        (**(code **)(lVar20 + 8))(lVar23,DVar4.unknown);
        (**(code **)(lVar19 + 8))(qos.unknown,DVar5.unknown);
        _swift_release(local_90);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar11 = LVar3;
        FUN_100099338(LVar3.unknown,&DAT_100558f50);
        puVar12 = puVar21;
        (**(code **)(lVar18 + 0x10))(puVar21,LVar11.unknown,LVar3.unknown);
        uVar2 = (uint)puVar12;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        puVar7 = local_f8;
        LVar11.unknown = local_f8;
        _swift_bridgeObjectRetain();
        pOVar13 = os::Logger::get_logObject(LVar11);
        pOVar14 = pOVar13;
        _os_log_type_enabled(pOVar13,uVar2 & 0xff);
        if ((int)pOVar14 == 0) {
          _swift_bridgeObjectRelease_n(puVar7,2);
        }
        else {
          puVar15 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          puVar16 = (undefined *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar15 = 0x8220102;
          puVar8 = local_118;
          local_b8 = puVar16;
          FUN_10012dbb0(local_118,puVar7,&local_b8);
          *(undefined **)(puVar15 + 1) = puVar8;
          _swift_bridgeObjectRelease_n(puVar7,2);
          __os_log_impl(0x100000000,pOVar13,uVar2 & 0xff,"%{public}s",puVar15,0xc);
          FUN_100043f24(puVar16);
          _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar18 + 8))(puVar21,LVar3.unknown);
        lVar22 = local_f0;
        FUN_100270f98();
      }
      _swift_release(lVar22);
    }
    if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10012c54c);
      (*pcVar1)();
    }
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_1005212d0,1);
    FUN_10012c54c();
    objc_stub::bounds(self);
    objc_stub::showRelativeToRect_ofView_preferredEdge_(self_00,self,1);
  }
  return 0;
}

