// rea decompile_all
// name: FUN_1002505dc
// address: 0x1002505dc
// body: available
// range: 0x1002505dc-0x1002512af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002505dc(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint uVar4;
  undefined *puVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  ID IVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined *puVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  OS_dispatch_queue *pOVar17;
  DispatchQoS DVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  _StringGuts extraout_x1;
  char *pcVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar22;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar23;
  long unaff_x20;
  long lVar24;
  DispatchWorkItem *this;
  long lVar25;
  DispatchWorkItemFlags DVar26;
  long lVar27;
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
  undefined1 auStack_160 [8];
  char *local_158;
  void *local_150;
  DispatchWorkItemFlags local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  undefined1 *local_118;
  char *local_110;
  long local_108;
  long local_100;
  void *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b0;
  undefined8 uStack_a8;
  char *local_98;
  undefined *local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  puVar5 = &DAT_10054b950;
  local_f8 = param_2;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1005539e0;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)(auStack_160 + -extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar24 - extraout_x8_01;
  LVar6 = os::Logger::typeMetadataAccessor();
  local_108 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar22 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar22;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar22 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_f0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar27 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  DVar26.unknown = (undefined *)(lVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  IVar8 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread);
  if ((IVar8 & 1) == 0) {
    pOVar17 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar17);
    puVar5 = &DAT_100534410;
    _swift_allocObject(&DAT_100534410,0x28,7);
    pvVar3 = local_f8;
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(char **)(puVar5 + 0x18) = param_1;
    *(void **)(puVar5 + 0x20) = local_f8;
    local_78 = FUN_1002593bc;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = (undefined *)0x42000000;
    local_88 = FUN_1000c7e7c;
    puStack_80 = &DAT_100534428;
    local_70 = puVar5;
    pvVar10 = __Block_copy(&local_98);
    DVar18.unknown = local_70;
    _swift_bridgeObjectRetain(pvVar3);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar18);
    local_98 = PTR___swiftEmptyArrayStorage_100524190;
    puVar19 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar20 = puVar5;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar22,&local_98,puVar5,puVar20,DVar7.unknown,puVar19);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar26);
    __Block_release(pvVar10);
    (**(code **)(local_e8 + 8))(lVar22,DVar7.unknown);
    (**(code **)(lVar27 + 8))(DVar26.unknown,local_f0);
  }
  else {
    local_98 = (char *)0x0;
    local_90 = (undefined *)0xe000000000000000;
    local_148.unknown = DVar26.unknown;
    local_140 = lVar27;
    local_138 = lVar22;
    local_130 = LVar6.unknown;
    local_128 = lVar25;
    local_120 = lVar24;
    local_118 = auStack_160 + -extraout_x8;
    Swift::_StringGuts::grow(0x31,extraout_x1);
    _swift_bridgeObjectRelease(local_90);
    pvVar3 = local_f8;
    local_98 = (char *)0x3a79616c70736944;
    local_90 = (void *)0xe900000000000020;
    SVar29.bridgeObject = local_f8;
    SVar29.str = param_1;
    SVar33.bridgeObject = param_4;
    SVar33.str = param_3;
    local_110 = param_1;
    Swift::String::append(SVar29,SVar33);
    uVar9 = 0x1000000000000026;
    SVar28.bridgeObject = (void *)0x80000001004e2600;
    SVar28.str = (char *)0x1000000000000026;
    SVar34.bridgeObject = param_4;
    SVar34.str = param_3;
    Swift::String::append(SVar28,SVar34);
    puVar5 = local_90;
    SVar1.bridgeObject = local_90;
    SVar1.str = local_98;
    local_98 = (char *)0x5b;
    local_90 = (undefined *)0xe100000000000000;
    local_b0 = (undefined *)0x4f464e49;
    uStack_a8 = 0xe400000000000000;
    local_c8 = 0x20;
    uStack_c0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar21 = (char *)0x0;
    puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_c8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar9,uVar9);
    SVar35.bridgeObject = puVar20;
    SVar35.str = pcVar21;
    Swift::String::append(SVar29,SVar35);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar30.bridgeObject = (void *)0xe300000000000000;
    SVar30.str = (char *)0x5b205d;
    SVar36.bridgeObject = puVar20;
    SVar36.str = pcVar21;
    Swift::String::append(SVar30,SVar36);
    SVar31.bridgeObject = (void *)0xe700000000000000;
    SVar31.str = (char *)0x79616c70736964;
    SVar37.bridgeObject = puVar20;
    SVar37.str = pcVar21;
    Swift::String::append(SVar31,SVar37);
    SVar32.bridgeObject = (void *)0xe200000000000000;
    SVar32.str = (char *)0x205d;
    SVar38.bridgeObject = puVar20;
    SVar38.str = pcVar21;
    Swift::String::append(SVar32,SVar38);
    local_150 = puVar5;
    SVar39.bridgeObject = puVar20;
    SVar39.str = pcVar21;
    Swift::String::append(SVar1,SVar39);
    puVar5 = local_90;
    pcVar21 = local_98;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar20 = &DAT_100534460;
    _swift_allocObject(&DAT_100534460,0x30,7);
    local_158 = pcVar21;
    *(char **)(puVar20 + 0x10) = pcVar21;
    *(undefined **)(puVar20 + 0x18) = puVar5;
    *(undefined8 *)(puVar20 + 0x20) = 0;
    *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
    local_78 = thunk_FUN_100099310;
    local_98 = PTR___NSConcreteStackBlock_100521110;
    local_90 = (undefined *)0x42000000;
    local_88 = FUN_1000c7e7c;
    puStack_80 = &DAT_100534478;
    local_70 = puVar20;
    pvVar10 = __Block_copy(&local_98);
    DVar18.unknown = puVar5;
    _swift_bridgeObjectRetain();
    DVar26.unknown = local_148.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar18);
    local_b0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar19 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar20 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = puVar20;
    FUN_100077ac0();
    lVar22 = local_138;
    Swift::SetAlgebra::_init(local_138,&local_b0,puVar20,puVar11,DVar7.unknown,puVar19);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar26);
    __Block_release(pvVar10);
    (**(code **)(local_e8 + 8))(lVar22,DVar7.unknown);
    (**(code **)(local_140 + 8))(DVar26.unknown,local_f0);
    _swift_release(local_70);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar20 = local_130;
    puVar11 = local_130;
    FUN_100099338(local_130,&DAT_100558f50);
    lVar24 = local_100;
    lVar22 = local_108;
    lVar25 = local_100;
    (**(code **)(local_108 + 0x10))(local_100,puVar11,puVar20);
    uVar4 = (uint)lVar25;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar6.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar6);
    pOVar13 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar4 & 0xff);
    pcVar21 = local_110;
    if ((int)pOVar13 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
      pcVar23 = *(code **)(lVar22 + 8);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar15 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      pcVar16 = local_158;
      local_98 = pcVar15;
      FUN_10012dbb0(local_158,puVar5,&local_98);
      *(char **)(puVar14 + 1) = pcVar16;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar12,uVar4 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar15);
      _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
      pcVar23 = *(code **)(lVar22 + 8);
      lVar24 = local_100;
    }
    (*pcVar23)(lVar24,puVar20);
    _swift_bridgeObjectRelease(local_150);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::transitions,&local_98,0x21,0
                      );
    pcVar16 = pcVar21;
    FUN_1002336e0(pcVar21,pvVar3);
    _swift_endAccess(&local_98);
    FUN_100257470(pcVar16);
    _swift_bridgeObjectRelease(pcVar16);
    lVar22 = _TtC7Wallper21VideoWallpaperManager::players;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,&local_98,0,0);
    lVar24 = *(long *)(unaff_x20 + lVar22);
    if (*(long *)(lVar24 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar24);
      pcVar16 = pcVar21;
      pvVar10 = pvVar3;
      FUN_10000464c();
      if (((ulong)pvVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar24);
      }
      else {
        IVar8 = *(ID *)(*(long *)(lVar24 + 0x38) + (long)pcVar16 * 8);
        _swift_bridgeObjectRelease(lVar24);
        objc_stub::pause(IVar8);
      }
    }
    lVar24 = _TtC7Wallper21VideoWallpaperManager::windows;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,&local_b0,0,0);
    lVar25 = *(long *)(unaff_x20 + lVar24);
    if (*(long *)(lVar25 + 0x10) != 0) {
      _swift_bridgeObjectRetain_n(lVar25,2);
      pcVar16 = pcVar21;
      pvVar10 = pvVar3;
      FUN_10000464c();
      if (((ulong)pvVar10 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar25,2);
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(lVar25 + 0x38) + (long)pcVar16 * 8);
        _swift_bridgeObjectRelease_n(lVar25,2);
        FUN_100257730(uVar9);
      }
    }
    _swift_beginAccess(unaff_x20 + lVar22,&local_c8,0x21,0);
    FUN_10027ec54(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::shownPlayers,&local_c8,0x21,
                       0);
    FUN_10027ec54(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + lVar24,&local_c8,0x21,0);
    FUN_10027ec2c(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,&local_c8,0x21,0);
    FUN_10027ec40(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::silencers,&local_c8,0x21,0);
    pcVar16 = pcVar21;
    FUN_10027ed38(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_release(pcVar16);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       &local_c8,0x21,0);
    lVar22 = local_128;
    FUN_10027ec10(local_128,pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    FUN_10002a29c(lVar22,&DAT_100553d90,&DAT_10041bf10);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,&local_c8,0x21,
                       0);
    FUN_10027ec7c(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,&local_c8,0x21,0);
    pcVar16 = pcVar21;
    FUN_10027ebfc(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_bridgeObjectRelease(pcVar16);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::playerObservers,&local_c8,
                       0x21,0);
    FUN_10027ec68(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::looperObservers,&local_c8,
                       0x21,0);
    FUN_10027ec68(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::failureRebuilds,&local_c8,
                       0x21,0);
    lVar22 = local_120;
    FUN_10027f1a8(local_120,pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    FUN_10002a29c(lVar22,&DAT_1005539e0,&DAT_100426a78);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,&local_c8
                       ,0x21,0);
    FUN_10027ea68(pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime,
                       &local_c8,0x21,0);
    puVar2 = local_118;
    FUN_10027f060(local_118,pcVar21,pvVar3);
    _swift_endAccess(&local_c8);
    FUN_10002a29c(puVar2,&DAT_10054b950,&DAT_10041d870);
    lVar22 = _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem,
                       &local_c8,0,0);
    lVar24 = *(long *)(unaff_x20 + lVar22);
    if (*(long *)(lVar24 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar24);
      pcVar16 = pcVar21;
      pvVar10 = pvVar3;
      FUN_10000464c();
      if (((ulong)pvVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar24);
      }
      else {
        this = *(DispatchWorkItem **)(*(long *)(lVar24 + 0x38) + (long)pcVar16 * 8);
        _swift_retain(this);
        _swift_bridgeObjectRelease(lVar24);
        Dispatch::DispatchWorkItem::cancel(this);
        _swift_release(this);
      }
    }
    _swift_beginAccess(unaff_x20 + lVar22,auStack_e0,0x21,0);
    pcVar16 = pcVar21;
    FUN_10027f04c(pcVar21,pvVar3);
    _swift_endAccess(auStack_e0);
    _swift_release(pcVar16);
    FUN_10023c3ec();
    FUN_100255818();
    FUN_10023bec0(pcVar21,pvVar3);
  }
  return;
}

