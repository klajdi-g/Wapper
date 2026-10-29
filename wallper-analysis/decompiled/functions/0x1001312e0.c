// rea decompile_all
// name: FUN_1001312e0
// address: 0x1001312e0
// body: available
// range: 0x1001312e0-0x100131b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001312e0(void)

{
  undefined *puVar1;
  DispatchTime deadline;
  DispatchTime DVar2;
  DispatchTimeInterval DVar3;
  __int32 fileDescriptor;
  undefined7 extraout_var;
  TimerFlags TVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  FileSystemEvent FVar7;
  NSString *pNVar8;
  ContiguousArray<__int8> CVar9;
  undefined4 extraout_var_00;
  FileSystemEvent FVar10;
  void *pvVar11;
  DispatchQoS DVar12;
  undefined8 uVar13;
  TimerFlags TVar14;
  DispatchTime DVar15;
  undefined8 uVar16;
  long extraout_x8;
  undefined8 *puVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar18;
  long extraout_x12;
  long extraout_x12_00;
  long lVar19;
  long unaff_x20;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  code *pcVar24;
  String SVar25;
  FileSystemEvent aFStack_150 [2];
  long local_140;
  code *local_138;
  TimerFlags local_130;
  long local_128;
  undefined *local_120;
  DispatchTime local_118;
  long local_110;
  undefined *local_108;
  DispatchQoS local_100;
  DispatchWorkItemFlags local_f8;
  long local_f0;
  undefined *puStack_e8;
  long local_e0;
  undefined8 *local_d8;
  DispatchTime local_d0;
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  DVar3 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,DVar3.value);
  local_e0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  puVar17 = (undefined8 *)((long)aFStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_d8 = puVar17;
  puStack_c0 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  puVar18 = (undefined *)((long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_d0.unknown = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = puVar18 + -extraout_x12;
  TVar4 = TimerFlags::_typeMetadataAccessor();
  lVar23 = *(long *)(TVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  puVar21 = puVar18 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar19 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  puVar22 = puVar21 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar20 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  FVar7 = FileSystemEvent::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(FVar7.unknown + -8) + 0x40));
  aFStack_150[1].unknown =
       puVar22 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    local_140 = extraout_x12_00;
    local_138 = (code *)FVar7.unknown;
    local_130.unknown = puVar21;
    local_128 = lVar23;
    local_120 = TVar4.unknown;
    local_118.unknown = puVar18;
    local_100.unknown = puVar22 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
    local_f8.unknown = puVar22;
    local_f0 = lVar20;
    puStack_e8 = DVar6.unknown;
    _NSHomeDirectory();
    if ((code *)FVar7.unknown == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar24 = (code *)SoftwareBreakpoint(1,0x100131b10);
      (*pcVar24)();
    }
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::stringByAppendingPathComponent_((ID)FVar7.unknown,pNVar8);
    SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    CVar9 = Swift::String::get_utf8CString(SVar25);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    fileDescriptor = Darwin::open((UnsafePointer<__int8>)(CVar9.unknown + 0x20),0x8000);
    uVar16 = CONCAT44(extraout_var_00,fileDescriptor);
    _swift_release(CVar9.unknown);
    local_110 = lVar19;
    local_108 = DVar5.unknown;
    if (-1 < fileDescriptor) {
      FUN_100044230(0,&DAT_100554208,&PTR__OBJC_CLASS___OS_dispatch_source_10053fb28);
      FVar7.unknown = &DAT_100554228;
      FUN_100002f94(&DAT_100554228,&DAT_100426e90);
      _swift_allocObject();
      *(undefined8 *)(FVar7.unknown + 0x18) = 6;
      *(undefined8 *)(FVar7.unknown + 0x10) = 3;
      FVar10 = FileSystemEvent::_get_write(FVar7);
      FVar10 = FileSystemEvent::_get_rename(FVar10);
      FileSystemEvent::_get_delete(FVar10);
      puVar18 = &DAT_100554230;
      local_a8 = FVar7.unknown;
      FUN_1000036d0(&DAT_100554230,PTR__typeMetadataAccessor_100524608,
                    PTR__Dispatch__FileSystemEvent_>Swift__SetAlgebra_100524618);
      puVar21 = &DAT_100554238;
      FUN_100002f94(&DAT_100554238,&DAT_100426e98);
      puVar22 = &DAT_100554240;
      FUN_100132684(&DAT_100554240,&DAT_100554238,&DAT_100426e98);
      pcVar24 = local_138;
      FVar7.unknown = aFStack_150[1].unknown;
      Swift::SetAlgebra::_init(aFStack_150[1].unknown,&local_a8,puVar21,puVar22,local_138,puVar18);
      (extension_Dispatch)::__C::OS_dispatch_source::_makeFileSystemObjectSource
                (fileDescriptor,FVar7);
      (**(code **)(local_140 + 8))(FVar7.unknown,pcVar24);
      uVar13 = uVar16;
      _swift_getObjectType(uVar16);
      puVar18 = &DAT_10052d6b0;
      _swift_allocObject(&DAT_10052d6b0,0x18,7);
      _swift_weakInit(puVar18 + 0x10,unaff_x20);
      local_88 = FUN_1001324e8;
      local_a8 = PTR___NSConcreteStackBlock_100521110;
      local_a0 = 0x42000000;
      local_98 = FUN_1000c7e7c;
      puStack_90 = &DAT_10052d6f0;
      local_80 = puVar18;
      pvVar11 = __Block_copy(&local_a8);
      DVar12.unknown = puVar18;
      _swift_retain();
      DVar6.unknown = local_100.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      DVar5.unknown = local_f8.unknown;
      FUN_1001321c8(local_f8.unknown,uVar13);
      (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(DVar6,DVar5);
      __Block_release(pvVar11);
      puVar21 = local_108;
      local_138 = *(code **)(local_110 + 8);
      (*local_138)(DVar5.unknown,local_108);
      puVar22 = puStack_e8;
      pcVar24 = *(code **)(local_f0 + 8);
      (*pcVar24)(DVar6.unknown,puStack_e8);
      puVar1 = local_80;
      _swift_release(puVar18);
      _swift_release(puVar1);
      puVar18 = &DAT_10052d728;
      _swift_allocObject(&DAT_10052d728,0x14,7);
      *(__int32 *)(puVar18 + 0x10) = fileDescriptor;
      local_88 = FUN_100132500;
      local_a8 = PTR___NSConcreteStackBlock_100521110;
      local_a0 = 0x42000000;
      local_98 = FUN_1000c7e7c;
      puStack_90 = &DAT_10052d740;
      local_80 = puVar18;
      DVar12.unknown = __Block_copy(&local_a8);
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      FUN_1001321c8(DVar5.unknown,uVar13);
      (extension_Dispatch)::__C::OS_dispatch_source::_setCancelHandler(DVar6,DVar5);
      __Block_release(DVar12.unknown);
      (*local_138)(DVar5.unknown,puVar21);
      (*pcVar24)(DVar6.unknown,puVar22);
      _swift_release(local_80);
      (extension_Dispatch)::__C::OS_dispatch_source::resume();
      uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar16;
      _swift_unknownObjectRelease(uVar13);
    }
    FUN_100044230(0,&DAT_100554208,&PTR__OBJC_CLASS___OS_dispatch_source_10053fb28);
    local_a8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar18 = &DAT_100554210;
    FUN_1000036d0(&DAT_100554210,PTR__typeMetadataAccessor_1005245d8,
                  PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_1005245e8);
    puVar21 = &DAT_100554218;
    FUN_100002f94(&DAT_100554218,&DAT_100426e88);
    puVar22 = &DAT_100554220;
    FUN_100132684(&DAT_100554220,&DAT_100554218,&DAT_100426e88);
    puVar1 = local_120;
    TVar4.unknown = local_130.unknown;
    Swift::SetAlgebra::_init(local_130.unknown,&local_a8,puVar21,puVar22,local_120,puVar18);
    TVar14.unknown = TVar4.unknown;
    (extension_Dispatch)::__C::OS_dispatch_source::_makeTimerSource(TVar4);
    (**(code **)(local_128 + 8))(TVar4.unknown,puVar1);
    DVar15.unknown = TVar14.unknown;
    _swift_getObjectType();
    DVar2.unknown = local_d0.unknown;
    Dispatch::DispatchTime::now(DVar15);
    deadline.unknown = local_118.unknown;
    Dispatch::__infix(DVar2,60.0);
    puVar18 = puStack_c0;
    pcVar24 = *(code **)(local_c8 + 8);
    (*pcVar24)(DVar2.unknown,puStack_c0);
    puVar17 = local_d8;
    lVar19 = local_e0;
    *local_d8 = 10;
    lVar20 = local_b8;
    DVar5.unknown = local_f8.unknown;
    DVar6.unknown = local_100.unknown;
    (**(code **)(lVar19 + 0x68))
              (puVar17,*(undefined4 *)
                        PTR___enum_case_for_Dispatch_DispatchTimeInterval_seconds_Dispatch_DispatchTimeInterval_Type___>__Swift_Int___>_Dispatch_DispatchTimeInterval_100524498
               ,local_b8);
    (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
              (deadline,60.0,(DispatchTimeInterval)(__int8)puVar17);
    (**(code **)(lVar19 + 8))(puVar17,lVar20);
    (*pcVar24)(deadline.unknown,puVar18);
    puVar18 = &DAT_10052d6b0;
    _swift_allocObject(&DAT_10052d6b0,0x18,7);
    _swift_weakInit(puVar18 + 0x10,unaff_x20);
    local_88 = thunk_FUN_100132508;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_10052d6c8;
    local_80 = puVar18;
    pvVar11 = __Block_copy(&local_a8);
    DVar12.unknown = puVar18;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar12);
    FUN_1001321c8(DVar5.unknown,DVar15.unknown);
    (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(DVar6,DVar5);
    __Block_release(pvVar11);
    (**(code **)(local_110 + 8))(DVar5.unknown,local_108);
    (**(code **)(local_f0 + 8))(DVar6.unknown,puStack_e8);
    puVar21 = local_80;
    _swift_release(puVar18);
    _swift_release(puVar21);
    (extension_Dispatch)::__C::OS_dispatch_source::resume();
    uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x20) = TVar14.unknown;
    _swift_unknownObjectRelease(uVar16);
  }
  return;
}

