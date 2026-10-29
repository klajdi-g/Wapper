// rea decompile_all
// name: FUN_1001a5690
// address: 0x1001a5690
// body: available
// range: 0x1001a5690-0x1001a61d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a61d4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a5690(void)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  URL UVar9;
  UUID UVar10;
  _ArrayBuffer _Var11;
  ID IVar12;
  Dictionary<undefined,undefined> DVar13;
  NSString *pNVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  UUID UVar17;
  ID IVar18;
  URL self;
  NSURL *pNVar19;
  NSDictionary *pNVar20;
  ID IVar21;
  undefined *puVar22;
  void *pvVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  OS_os_log *pOVar26;
  OS_os_log *pOVar27;
  undefined4 *puVar28;
  undefined *puVar29;
  ulong uVar30;
  char *pcVar31;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar32;
  long lVar33;
  long extraout_x8_02;
  long lVar34;
  long lVar35;
  long extraout_x8_03;
  long lVar36;
  long extraout_x12;
  long unaff_x20;
  long lVar37;
  long lVar38;
  ID IVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  undefined *local_190;
  long local_188;
  long local_180;
  undefined *local_178;
  undefined *local_170;
  DispatchWorkItemFlags local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  LVar6 = os::Logger::typeMetadataAccessor();
  local_150 = *(long *)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar38 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar38;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar37 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  lVar38 = lVar38 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_160 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  puVar32 = (undefined *)(lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_168.unknown = puVar32;
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar33 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar36 = (long)puVar32 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar36 - extraout_x12;
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar35 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  lVar2 = _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs,
                     auStack_88,1,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar2) + 0x10) != 0) {
    local_180 = lVar37;
    local_178 = DVar7.unknown;
    _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_190 = DVar8.unknown;
    local_188 = lVar38;
    local_170 = LVar6.unknown;
    if ((ulong)_Var11.unknown >> 0x3e == 0) {
      IVar12 = *(ID *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
        _Var1.unknown = _Var11.unknown;
      }
      IVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (IVar12 != 0) {
      if ((long)IVar12 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001a61d4);
        (*pcVar4)();
      }
      IVar39 = 0;
      do {
        puVar32 = PTR___type_metadata_for_Any_100524178;
        if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
          IVar21 = *(ID *)(_Var11.unknown + IVar39 * 8 + 0x20);
        }
        else {
          IVar21 = IVar39;
          Swift::_ArrayBuffer::__getElementSlowPath(IVar39,_Var11);
        }
        objc_stub::deviceDescription(IVar21);
        FUN_100008054(0);
        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
        DVar13 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar30 = 0;
        pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar13.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar14), (uVar30 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar13.unknown);
LAB_1001a5ae0:
          UVar17 = Foundation::UUID::init();
          SVar40 = Foundation::UUID::get_uuidString(UVar17);
          (**(code **)(lVar35 + 8))
                    (lVar34 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0),UVar10.unknown);
        }
        else {
          FUN_1000280d4(*(long *)(DVar13.unknown + 0x38) + (long)pNVar14 * 0x20,&local_b8);
          _swift_bridgeObjectRelease(DVar13.unknown);
          uVar15 = 0;
          FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
          ppuVar16 = &local_c8;
          _swift_dynamicCast(ppuVar16,&local_b8,puVar32 + 8,uVar15,6);
          if (((ulong)ppuVar16 & 1) == 0) goto LAB_1001a5ae0;
          objc_stub::stringValue((ID)local_c8);
          SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        pvVar23 = SVar40.bridgeObject;
        _swift_beginAccess(unaff_x20 + lVar2,&local_b8,0x20,0);
        lVar38 = *(long *)(unaff_x20 + lVar2);
        if (*(long *)(lVar38 + 0x10) == 0) {
LAB_1001a5944:
          _swift_bridgeObjectRelease(pvVar23);
          _swift_endAccess(&local_b8);
        }
        else {
          _swift_bridgeObjectRetain(lVar38);
          FUN_10000464c(SVar40.str);
          if (((ulong)SVar40.bridgeObject & 1) == 0) {
            _swift_bridgeObjectRelease(lVar38);
            goto LAB_1001a5944;
          }
          (**(code **)(lVar33 + 0x10))
                    (lVar36,*(long *)(lVar38 + 0x38) + *(long *)(lVar33 + 0x48) * (long)SVar40.str,
                     UVar9.unknown);
          (**(code **)(lVar33 + 0x20))(lVar34,lVar36,UVar9.unknown);
          _swift_endAccess(&local_b8);
          _swift_bridgeObjectRelease(lVar38);
          _swift_bridgeObjectRelease(pvVar23);
          IVar18 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
          IVar18 = NSWorkspace::desktopImageOptionsForScreen_(IVar18,IVar21);
          if (IVar18 == 0) {
            DVar13.unknown = PTR___swiftEmptyArrayStorage_100524190;
            FUN_100005d38(PTR___swiftEmptyArrayStorage_100524190);
          }
          else {
            FUN_10000802c(0);
            FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,
                          &TargetProtocolConformanceDescriptor_10041b3c8);
            DVar13 = (extension_Foundation)::Swift::Dictionary::
                     __unconditionallyBridgeFromObjectiveC();
          }
          self.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
          pNVar19 = Foundation::URL::_bridgeToObjectiveC(self);
          FUN_10000802c(0);
          FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8)
          ;
          pNVar20 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(DVar13.unknown);
          local_b8 = (undefined *)0x0;
          IVar21 = NSWorkspace::setDesktopImageURL_forScreen_options_error_
                             ((ID)self.unknown,pNVar19,IVar21,pNVar20,&local_b8);
          if ((int)IVar21 == 0) {
            puVar32 = local_b8;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_errorRelease(puVar32);
            (**(code **)(lVar33 + 8))(lVar34,UVar9.unknown);
          }
          else {
            (**(code **)(lVar33 + 8))(lVar34,UVar9.unknown);
          }
        }
        IVar39 = IVar39 + 1;
      } while (IVar12 != IVar39);
    }
    _swift_bridgeObjectRelease(_Var11.unknown);
    puVar32 = PTR___swiftEmptyArrayStorage_100524190;
    puVar22 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005684();
    uVar15 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar22;
    _swift_bridgeObjectRelease(uVar15);
    local_b8 = (undefined *)0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_c8 = (undefined *)0x4f464e49;
    uStack_c0 = 0xe400000000000000;
    local_d8 = 0x20;
    uStack_d0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar31 = (char *)0x0;
    puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
    SVar44.bridgeObject = puVar22;
    SVar44.str = pcVar31;
    Swift::String::append(SVar40,SVar44);
    _swift_bridgeObjectRelease(SVar40.bridgeObject);
    SVar40.bridgeObject = (void *)0xe300000000000000;
    SVar40.str = (char *)0x5b205d;
    SVar45.bridgeObject = puVar22;
    SVar45.str = pcVar31;
    Swift::String::append(SVar40,SVar45);
    SVar41.bridgeObject = (void *)0xe500000000000000;
    SVar41.str = (char *)0x616964656d;
    SVar46.bridgeObject = puVar22;
    SVar46.str = pcVar31;
    Swift::String::append(SVar41,SVar46);
    SVar42.bridgeObject = (void *)0xe200000000000000;
    SVar42.str = (char *)0x205d;
    SVar47.bridgeObject = puVar22;
    SVar47.str = pcVar31;
    Swift::String::append(SVar42,SVar47);
    SVar43.bridgeObject = (void *)0x80000001004e0830;
    SVar43.str = &DAT_d000000000000030;
    SVar48.bridgeObject = puVar22;
    SVar48.str = pcVar31;
    Swift::String::append(SVar43,SVar48);
    puVar3 = local_b0;
    puVar22 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar29 = &DAT_100530f48;
    _swift_allocObject(&DAT_100530f48,0x30,7);
    *(undefined **)(puVar29 + 0x10) = puVar22;
    *(undefined **)(puVar29 + 0x18) = puVar3;
    *(undefined8 *)(puVar29 + 0x20) = 0;
    *(undefined8 *)(puVar29 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_100530f60;
    local_90 = puVar29;
    pvVar23 = __Block_copy(&local_b8);
    DVar8.unknown = puVar3;
    _swift_bridgeObjectRetain();
    DVar7.unknown = local_168.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_c8 = puVar32;
    puVar24 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar32 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar25 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar29 = local_178;
    lVar2 = local_188;
    Swift::SetAlgebra::_init(local_188,&local_c8,puVar32,puVar25,local_178,puVar24);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar7);
    __Block_release(pvVar23);
    (**(code **)(local_180 + 8))(lVar2,puVar29);
    (**(code **)(local_160 + 8))(DVar7.unknown,local_190);
    _swift_release(local_90);
    lVar2 = local_158;
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar32 = local_170;
    puVar29 = local_170;
    FUN_100099338(local_170,&DAT_100558f50);
    lVar38 = local_150;
    lVar33 = lVar2;
    (**(code **)(local_150 + 0x10))(lVar2,puVar29,puVar32);
    uVar5 = (uint)lVar33;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar6.unknown = puVar3;
    _swift_bridgeObjectRetain();
    pOVar26 = os::Logger::get_logObject(LVar6);
    pOVar27 = pOVar26;
    _os_log_type_enabled(pOVar26,uVar5 & 0xff);
    if ((int)pOVar27 == 0) {
      _swift_bridgeObjectRelease_n(puVar3,2);
    }
    else {
      puVar28 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar29 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar28 = 0x8220102;
      local_b8 = puVar29;
      FUN_10012dbb0(puVar22,puVar3,&local_b8);
      *(undefined **)(puVar28 + 1) = puVar22;
      _swift_bridgeObjectRelease_n(puVar3,2);
      __os_log_impl(0x100000000,pOVar26,uVar5 & 0xff,"%{public}s",puVar28,0xc);
      FUN_100043f24(puVar29);
      _swift_slowDealloc(puVar29,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar28,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar38 + 8))(lVar2,puVar32);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

