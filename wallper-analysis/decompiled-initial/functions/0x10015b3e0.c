// rea decompile_all
// name: FUN_10015b3e0
// address: 0x10015b3e0
// body: available
// range: 0x10015b3e0-0x10015bd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015b3e0(void)

{
  undefined1 *puVar1;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  DispatchQoS DVar2;
  DispatchTime DVar3;
  DispatchTimeInterval DVar4;
  undefined7 extraout_var;
  TimerFlags TVar5;
  Date DVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  Published *pPVar11;
  OS_dispatch_queue *pOVar12;
  TimerFlags TVar13;
  void *aBlock;
  Published *pPVar14;
  Date DVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar16;
  long extraout_x8_01;
  undefined8 *puVar17;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar19;
  DispatchTime DVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  DispatchTime local_150;
  code *local_148;
  undefined *local_140;
  undefined8 *local_138;
  long local_130;
  long local_128;
  long local_120;
  DispatchQoS local_118;
  long local_110;
  undefined *puStack_108;
  DispatchWorkItemFlags local_100;
  long local_f8;
  undefined *puStack_f0;
  DispatchQoS local_e8;
  DispatchTime local_e0;
  long local_d8;
  Published *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [32];
  
  puStack_f0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_f8 = *(long *)(puStack_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  puVar16 = (undefined *)((long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_100.unknown = puVar16;
  puStack_108 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_110 = *(long *)(puStack_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  puVar16 = puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118.unknown = puVar16;
  DVar4 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
  local_120 = CONCAT71(extraout_var,DVar4.value);
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar18 = (long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar18 - extraout_x12);
  local_138 = puVar17;
  local_140 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_148 = *(code **)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_148 + 0x40));
  puVar16 = (undefined *)((long)puVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_e0.unknown = puVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = puVar16 + -extraout_x12_00;
  local_150.unknown = puVar16;
  TVar5 = TimerFlags::_typeMetadataAccessor();
                    /* WARNING: Load size is inaccurate */
  local_e8.unknown = TVar5.unknown[-8];
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_e8.unknown + 0x40));
  DVar20.unknown = puVar16 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar23 = (long)DVar20.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar18 = 0;
  FUN_10015f8e8();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  pdVar24 = (double *)(lVar23 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  lVar19 = *(long *)(unaff_x20 + _TtC7Wallper13LyricsManager::nextLine);
  local_d8 = _TtC7Wallper13LyricsManager::nextLine;
  if (lVar19 == 0) {
    uVar7 = 0;
  }
  else {
    _swift_getObjectType(lVar19);
    _swift_unknownObjectRetain(lVar19);
    (extension_Dispatch)::__C::OS_dispatch_source::cancel();
    _swift_unknownObjectRelease(lVar19);
    uVar7 = *(undefined8 *)(unaff_x20 + local_d8);
  }
  *(undefined8 *)(unaff_x20 + local_d8) = 0;
  _swift_unknownObjectRelease(uVar7);
  puVar16 = &DAT_100428e00;
  _swift_getKeyPath(&DAT_100428e00);
  puVar8 = &DAT_100428e28;
  _swift_getKeyPath(&DAT_100428e28);
  Combine::Published::_get_subscript(&local_d0);
  _swift_release(puVar16);
  _swift_release(puVar8);
  puVar16 = local_d0[2].unknown;
  _swift_bridgeObjectRelease();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = &DAT_100428e48;
    _swift_getKeyPath(&DAT_100428e48);
    puVar8 = &DAT_100428e70;
    _swift_getKeyPath(&DAT_100428e70);
    Combine::Published::_get_subscript(&local_d0);
    _swift_release(puVar16);
    _swift_release(puVar8);
    if (local_d0 != (Published *)0xffffffffffffffff) {
      pPVar14 = (Published *)&DAT_100428e48;
      _swift_getKeyPath(&DAT_100428e48);
      _swift_getKeyPath(&DAT_100428e70);
      local_d0 = (Published *)0xffffffffffffffff;
      _swift_retain();
      Combine::Published::_set_subscript(pPVar14,&local_d0);
    }
  }
  else {
    lVar19 = unaff_x20 + _TtC7Wallper13LyricsManager::clock;
    _swift_beginAccess(lVar19,auStack_a0,0,0);
    DVar15.unknown = (undefined *)pdVar24;
    FUN_100163cc0(lVar19);
    Foundation::Date::init();
    dVar26 = *pdVar24;
    dVar25 = Foundation::Date::timeIntervalSince
                       ((undefined *)((long)pdVar24 + (long)*(int *)(lVar18 + 0x14)),DVar15);
    (**(code **)(lVar21 + 8))(lVar23,DVar6.unknown);
    if (dVar25 < 0.0) {
      dVar25 = 0.0;
    }
    dVar27 = *(double *)((long)pdVar24 + (long)*(int *)(lVar18 + 0x18));
    FUN_100163e94(pdVar24);
    dVar25 = dVar26 + dVar25 * dVar27 + 0.45;
    puVar16 = &DAT_100428e00;
    _swift_getKeyPath(&DAT_100428e00);
    puVar8 = &DAT_100428e28;
    _swift_getKeyPath(&DAT_100428e28);
    Combine::Published::_get_subscript(&local_d0);
    _swift_release(puVar16);
    _swift_release(puVar8);
    pPVar14 = local_d0;
    puVar16 = &DAT_100428e48;
    puVar9 = puVar16;
    _swift_getKeyPath(&DAT_100428e48);
    puVar8 = &DAT_100428e70;
    puVar10 = puVar8;
    _swift_getKeyPath(&DAT_100428e70);
    Combine::Published::_get_subscript(&local_d0);
    _swift_release(puVar9);
    _swift_release(puVar10);
    pPVar11 = pPVar14;
    FUN_100163ed8(dVar25,pPVar14,local_d0);
    _swift_bridgeObjectRelease(pPVar14);
    _swift_getKeyPath(&DAT_100428e48);
    _swift_getKeyPath(&DAT_100428e70);
    Combine::Published::_get_subscript(&local_d0);
    _swift_release(puVar16);
    _swift_release(puVar8);
    if (pPVar11 != local_d0) {
      _swift_getKeyPath(&DAT_100428e48);
      _swift_getKeyPath(&DAT_100428e70);
      local_d0 = pPVar11;
      _swift_retain();
      Combine::Published::_set_subscript(pPVar11,&local_d0);
      puVar16 = &DAT_100428e00;
      _swift_getKeyPath(&DAT_100428e00);
      puVar8 = &DAT_100428e28;
      _swift_getKeyPath(&DAT_100428e28);
      Combine::Published::_get_subscript(&local_d0);
      _swift_release(puVar16);
      _swift_release(puVar8);
      _swift_bridgeObjectRelease(local_d0);
    }
    if (0.0 < *(double *)(lVar19 + *(int *)(lVar18 + 0x18))) {
      puVar1 = (undefined1 *)((long)&pPVar11->unknown + 1);
      if (SCARRY8((long)pPVar11,1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10015bd74);
        (*pcVar22)();
      }
      puVar16 = &DAT_100428e00;
      _swift_getKeyPath(&DAT_100428e00);
      puVar8 = &DAT_100428e28;
      _swift_getKeyPath(&DAT_100428e28);
      Combine::Published::_get_subscript(&local_d0);
      _swift_release(puVar16);
      _swift_release(puVar8);
      puVar16 = local_d0[2].unknown;
      _swift_bridgeObjectRelease();
      if ((long)puVar1 < (long)puVar16) {
        FUN_100044230(0,&DAT_100554208,&PTR__OBJC_CLASS___OS_dispatch_source_10053fb28);
        pOVar12 = (OS_dispatch_queue *)0x0;
        FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
        (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
        local_d0 = (Published *)PTR___swiftEmptyArrayStorage_100524190;
        puVar16 = &DAT_100554210;
        FUN_1000036d0(&DAT_100554210,PTR__typeMetadataAccessor_1005245d8,
                      PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_1005245e8);
        puVar8 = &DAT_100554218;
        FUN_100002f94(&DAT_100554218,&DAT_100426e88);
        puVar9 = &DAT_100554220;
        FUN_1000087a0(&DAT_100554220,&DAT_100554218,&DAT_100426e88,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(DVar20.unknown,&local_d0,puVar8,puVar9,TVar5.unknown,puVar16);
        TVar13.unknown = DVar20.unknown;
        (extension_Dispatch)::__C::OS_dispatch_source::_makeTimerSource((TimerFlags)DVar20.unknown);
        (**(code **)((long)local_e8.unknown + 8))(DVar20.unknown,TVar5.unknown);
        DVar3.unknown = local_e0.unknown;
        Dispatch::DispatchTime::now(DVar20);
        puVar16 = &DAT_100428e00;
        _swift_getKeyPath(&DAT_100428e00);
        puVar8 = &DAT_100428e28;
        _swift_getKeyPath(&DAT_100428e28);
        Combine::Published::_get_subscript(&local_d0);
        _swift_release(puVar16);
        _swift_release(puVar8);
        if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10015bd78);
          (*pcVar22)();
        }
        if (local_d0[2].unknown <= puVar1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10015bd7c);
          (*pcVar22)();
        }
        puVar16 = local_d0[(long)puVar1 * 4 + 5].unknown;
        _swift_bridgeObjectRelease();
        dVar25 = (double)puVar16 - dVar25;
        if (dVar25 <= 0.01) {
          dVar25 = 0.01;
        }
        puVar16 = TVar13.unknown;
        _swift_getObjectType();
        DVar20.unknown = local_150.unknown;
        local_e8.unknown = puVar16;
        Dispatch::__infix(DVar3,dVar25);
        puVar16 = local_140;
        local_148 = *(code **)((long)local_148 + 8);
        (*local_148)(DVar3.unknown,local_140);
        puVar17 = local_138;
        *local_138 = 2;
        lVar21 = local_120;
        lVar19 = local_128;
        pcVar22 = *(code **)(local_128 + 0x68);
        (*pcVar22)(puVar17,*(undefined4 *)
                            PTR___enum_case_for_Dispatch_DispatchTimeInterval_milliseconds_Dispatch_DispatchTimeInterval_Type___>__Swift_Int___>_Dispatch_DispatchTimeInterval_100524488
                   ,local_120);
        lVar18 = local_130;
        (*pcVar22)(local_130,
                   *(undefined4 *)
                    PTR___enum_case_for_Dispatch_DispatchTimeInterval_never_Dispatch_DispatchTimeInterval_Type___>_Dispatch_DispatchTimeInterval_100524490
                   ,lVar21);
        (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
                  (DVar20,(DispatchTimeInterval)(__int8)lVar18,(DispatchTimeInterval)(__int8)puVar17
                  );
        pcVar22 = *(code **)(lVar19 + 8);
        (*pcVar22)(lVar18,lVar21);
        (*pcVar22)(puVar17,lVar21);
        (*local_148)(DVar20.unknown,puVar16);
        puVar16 = &DAT_10052f340;
        _swift_allocObject(&DAT_10052f340,0x18,7);
        _swift_weakInit(puVar16 + 0x10);
        local_b0 = FUN_100163f40;
        local_d0 = (Published *)PTR___NSConcreteStackBlock_100521110;
        local_c8 = 0x42000000;
        local_c0 = FUN_1000c7e7c;
        puStack_b8 = &DAT_10052f380;
        local_a8 = puVar16;
        aBlock = __Block_copy(&local_d0);
        _swift_retain(puVar16);
        DVar2.unknown = local_e8.unknown;
        qos.unknown = local_118.unknown;
        Dispatch::DispatchQoS::get_unspecified(local_e8);
        flags.unknown = local_100.unknown;
        thunk_FUN_1001321c8(local_100.unknown,DVar2.unknown);
        (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(qos,flags);
        __Block_release(aBlock);
        (**(code **)(local_f8 + 8))(flags.unknown,puStack_f0);
        (**(code **)(local_110 + 8))(qos.unknown,puStack_108);
        puVar8 = local_a8;
        _swift_release(puVar16);
        _swift_release(puVar8);
        (extension_Dispatch)::__C::OS_dispatch_source::resume();
        uVar7 = *(undefined8 *)(unaff_x20 + local_d8);
        *(undefined **)(unaff_x20 + local_d8) = TVar13.unknown;
        _swift_unknownObjectRelease(uVar7);
      }
    }
  }
  return;
}

