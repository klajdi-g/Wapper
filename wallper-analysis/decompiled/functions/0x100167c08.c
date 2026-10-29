// rea decompile_all
// name: FUN_100167c08
// address: 0x100167c08
// body: available
// range: 0x100167c08-0x10016802b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100167c08(long param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  DispatchQoS qos;
  DispatchWorkItemFlags DVar4;
  Date DVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  DispatchTime DVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  Date DVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  Date DVar16;
  long lVar17;
  DispatchTime deadline;
  DispatchTime DVar18;
  double dVar19;
  double dVar20;
  undefined auStack_120 [8];
  code *local_118;
  undefined *local_110;
  DispatchQoS local_108;
  long local_100;
  undefined *puStack_f8;
  DispatchWorkItemFlags local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  puVar6 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0.unknown = puVar6;
  puStack_f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  local_108.unknown = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  lVar15 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  DVar18.unknown =
       puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = DVar18.unknown + -extraout_x12;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  DVar16.unknown = deadline.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  puVar6 = (undefined *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar6 != (undefined *)0x0) {
    if (puVar6[_TtC7Wallper21MediaRemoteController::isRunning] == '\x01') {
      puVar6[_TtC7Wallper21MediaRemoteController::isRunning] = 0;
      cVar1 = puVar6[0x30];
      puVar6[0x30] = 0;
      local_110 = DVar4.unknown;
      if ((cVar1 == '\x01') && (pcVar13 = *(code **)(puVar6 + 0x20), pcVar13 != (code *)0x0)) {
        uVar14 = *(undefined8 *)(puVar6 + 0x28);
        _swift_retain(uVar14);
        (*pcVar13)(0);
        FUN_10002f6dc(pcVar13,uVar14);
      }
      Foundation::Date::init();
      lVar2 = _TtC7Wallper21MediaRemoteController::startedAt;
      _swift_beginAccess(puVar6 + _TtC7Wallper21MediaRemoteController::startedAt,auStack_a8,0,0);
      DVar12.unknown = puVar6 + lVar2;
      (**(code **)(lVar17 + 0x10))(DVar16.unknown,DVar12.unknown,DVar5.unknown);
      dVar19 = Foundation::Date::timeIntervalSince(DVar16,DVar12);
      pcVar13 = *(code **)(lVar17 + 8);
      (*pcVar13)(DVar16.unknown,DVar5.unknown);
      (*pcVar13)((long)DVar16.unknown - extraout_x12_00,DVar5.unknown);
      lVar17 = _TtC7Wallper21MediaRemoteController::restartDelay;
      dVar20 = 2.0;
      if (dVar19 <= 30.0) {
        dVar19 = *(double *)(puVar6 + _TtC7Wallper21MediaRemoteController::restartDelay) +
                 *(double *)(puVar6 + _TtC7Wallper21MediaRemoteController::restartDelay);
        dVar20 = 60.0;
        if (dVar19 <= 60.0) {
          dVar20 = dVar19;
        }
      }
      *(double *)(puVar6 + _TtC7Wallper21MediaRemoteController::restartDelay) = dVar20;
      pOVar7 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      DVar8.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar7);
      Dispatch::DispatchTime::now(DVar8);
      Dispatch::__infix(DVar18,*(double *)(puVar6 + lVar17));
      local_118 = *(code **)(lVar15 + 8);
      (*local_118)(DVar18.unknown,local_e0);
      local_b8 = thunk_FUN_1001649c8;
      local_d8 = PTR___NSConcreteStackBlock_100521110;
      local_d0 = 0x42000000;
      local_c8 = FUN_1000c7e7c;
      puStack_c0 = &DAT_10052f8b8;
      local_b0 = puVar6;
      aBlock = __Block_copy(&local_d8);
      DVar9.unknown = local_b0;
      _swift_retain(puVar6);
      _swift_release();
      qos.unknown = local_108.unknown;
      DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
      local_d8 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1000fedc8();
      puVar10 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar11 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      DVar4.unknown = local_f0.unknown;
      puVar3 = local_110;
      Swift::SetAlgebra::_init(local_f0.unknown,&local_d8,puVar10,puVar11,local_110,DVar9.unknown);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,DVar4);
      __Block_release(aBlock);
      _swift_release(puVar6);
      (**(code **)(local_e8 + 8))(DVar4.unknown,puVar3);
      (**(code **)(local_100 + 8))(qos.unknown,puStack_f8);
      (*local_118)(deadline.unknown,local_e0);
    }
    else {
      _swift_release(puVar6);
    }
  }
  return;
}

