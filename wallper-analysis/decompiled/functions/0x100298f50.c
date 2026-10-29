// rea decompile_all
// name: FUN_100298f50
// address: 0x100298f50
// body: available
// range: 0x100298f50-0x100299577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_100298f50(void)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined *puVar11;
  void *aBlock;
  undefined *puVar12;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x12;
  long extraout_x13;
  ulong uVar21;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  _ArrayBuffer _Var26;
  __int64 _Var27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  undefined1 auStack_130 [8];
  DispatchWorkItemFlags local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined1 *puVar13;
  
  LVar6 = os::Logger::typeMetadataAccessor();
  lVar22 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar24 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar8.unknown + -8) + 0x40));
  local_128.unknown = (undefined *)(lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    local_120 = extraout_x13;
    local_118 = extraout_x12;
    local_100 = DVar7.unknown;
    local_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    _CFRunLoopGetMain();
    _CFRunLoopRemoveSource();
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    _swift_beginAccess(unaff_x20 + 0x18,auStack_80,1,0);
    _Var26.unknown = *(undefined **)(unaff_x20 + 0x18);
    local_110 = lVar25;
    local_108 = lVar24;
    local_f0 = lVar22;
    local_e8 = LVar6.unknown;
    if ((ulong)_Var26.unknown >> 0x3e == 0) {
      _Var27 = *(long *)(((ulong)_Var26.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var26.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var26.unknown) {
        _Var1.unknown = _Var26.unknown;
      }
      _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_bridgeObjectRetain(_Var26.unknown);
    if (_Var27 != 0) {
      uVar23 = 0;
      do {
        if (((ulong)_Var26.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var26.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100299518);
            (*pcVar4)();
          }
          uVar21 = *(ulong *)(_Var26.unknown + uVar23 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar21);
        }
        else {
          uVar21 = uVar23;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var26);
        }
        if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100299170);
          (*pcVar4)();
        }
        lVar22 = uVar23 + 1;
        IVar9 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
        IVar9 = NSWorkspace::notificationCenter(IVar9);
        NSWorkspace::removeObserver_(IVar9,uVar21);
        _swift_unknownObjectRelease(uVar21);
        uVar23 = uVar23 + 1;
      } while (lVar22 != _Var27);
    }
    _swift_bridgeObjectRelease(_Var26.unknown);
    puVar17 = PTR___swiftEmptyArrayStorage_100524190;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100524190;
    _swift_bridgeObjectRelease(uVar10);
    *(undefined1 *)(unaff_x20 + 0x23) = 0;
    if (*(char *)(unaff_x20 + 0x22) == '\x01') {
      *(undefined1 *)(unaff_x20 + 0x22) = 0;
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      uVar10 = 2;
      FUN_10023afe8(2,0);
      local_d0 = (undefined *)0x5b;
      local_c8 = (undefined *)0xe100000000000000;
      local_90 = (undefined *)0x4f464e49;
      uStack_88 = 0xe400000000000000;
      local_a0 = 0x20;
      uStack_98 = 0xe100000000000000;
      FUN_100026df4();
      pcVar19 = (char *)0x0;
      puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar28 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar10,uVar10);
      SVar32.bridgeObject = puVar20;
      SVar32.str = pcVar19;
      Swift::String::append(SVar28,SVar32);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      SVar28.bridgeObject = (void *)0xe300000000000000;
      SVar28.str = (char *)0x5b205d;
      SVar33.bridgeObject = puVar20;
      SVar33.str = pcVar19;
      Swift::String::append(SVar28,SVar33);
      SVar29.bridgeObject = (void *)0xe500000000000000;
      SVar29.str = (char *)0x7265776f70;
      SVar34.bridgeObject = puVar20;
      SVar34.str = pcVar19;
      Swift::String::append(SVar29,SVar34);
      SVar30.bridgeObject = (void *)0xe200000000000000;
      SVar30.str = (char *)0x205d;
      SVar35.bridgeObject = puVar20;
      SVar35.str = pcVar19;
      Swift::String::append(SVar30,SVar35);
      SVar31.bridgeObject = (void *)0x80000001004e3870;
      SVar31.str = (char *)0xd000000000000025;
      SVar36.bridgeObject = puVar20;
      SVar36.str = pcVar19;
      Swift::String::append(SVar31,SVar36);
      puVar3 = local_c8;
      puVar18 = local_d0;
      puVar20 = local_e8;
      lVar22 = local_f0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar11 = &DAT_1005375d8;
      _swift_allocObject(&DAT_1005375d8,0x30,7);
      *(undefined **)(puVar11 + 0x10) = puVar18;
      *(undefined **)(puVar11 + 0x18) = puVar3;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
      local_b0 = thunk_FUN_100099310;
      local_d0 = PTR___NSConcreteStackBlock_100521110;
      local_c8 = (undefined *)0x42000000;
      local_c0 = FUN_1000c7e7c;
      puStack_b8 = &DAT_1005375f0;
      local_a8 = puVar11;
      aBlock = __Block_copy(&local_d0);
      DVar8.unknown = puVar3;
      _swift_bridgeObjectRetain();
      DVar7.unknown = local_128.unknown;
      DVar8 = Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_90 = puVar17;
      FUN_1000fedc8();
      puVar17 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar12 = puVar17;
      FUN_100077ac0();
      puVar11 = local_100;
      lVar24 = local_110;
      Swift::SetAlgebra::_init(local_110,&local_90,puVar17,puVar12,local_100,DVar8.unknown);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar7);
      __Block_release(aBlock);
      (**(code **)(local_108 + 8))(lVar24,puVar11);
      (**(code **)(local_120 + 8))(DVar7.unknown,local_118);
      _swift_release(local_a8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar17 = puVar20;
      FUN_100099338(puVar20,&DAT_100558f50);
      puVar2 = local_f8;
      puVar13 = local_f8;
      (**(code **)(lVar22 + 0x10))(local_f8,puVar17,puVar20);
      uVar5 = (uint)puVar13;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar6.unknown = puVar3;
      _swift_bridgeObjectRetain();
      pOVar14 = os::Logger::get_logObject(LVar6);
      pOVar15 = pOVar14;
      _os_log_type_enabled(pOVar14,uVar5 & 0xff);
      if ((int)pOVar15 == 0) {
        _swift_bridgeObjectRelease_n(puVar3,2);
      }
      else {
        puVar16 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar17 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar16 = 0x8220102;
        local_d0 = puVar17;
        FUN_10012dbb0(puVar18,puVar3,&local_d0);
        *(undefined **)(puVar16 + 1) = puVar18;
        _swift_bridgeObjectRelease_n(puVar3,2);
        __os_log_impl(0x100000000,pOVar14,uVar5 & 0xff,"%{public}s",puVar16,0xc);
        FUN_100043f24(puVar17);
        _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar22 + 8))(puVar2,puVar20);
    }
  }
  return 0;
}

