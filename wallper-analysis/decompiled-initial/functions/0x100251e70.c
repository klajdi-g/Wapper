// rea decompile_all
// name: FUN_100251e70
// address: 0x100251e70
// body: available
// range: 0x100251e70-0x100252c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100252c0c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100252c10 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100251e70(void)

{
  _CocoaArrayWrapper _Var1;
  DispatchWorkItemFlags qos;
  code *pcVar2;
  uint uVar3;
  URL UVar4;
  UUID UVar5;
  void *self;
  Dictionary<undefined,undefined> DVar6;
  NSString *pNVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  UUID UVar10;
  ID IVar11;
  NSURL *pNVar12;
  NSDictionary *pNVar13;
  char *pcVar14;
  undefined *puVar15;
  DispatchQoS DVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  Logger LVar20;
  OS_os_log *pOVar21;
  OS_os_log *pOVar22;
  undefined4 *puVar23;
  char *pcVar24;
  ulong uVar25;
  undefined *extraout_x1;
  _StringGuts _Var26;
  char *pcVar27;
  long extraout_x8;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  undefined *puVar29;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar30;
  long extraout_x12;
  void *pvVar31;
  long unaff_x20;
  long lVar32;
  long lVar33;
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
  undefined8 local_210;
  undefined8 uStack_208;
  char *local_200;
  void *local_1f8;
  long local_1f0;
  long local_1e8;
  DispatchWorkItemFlags local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  char *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  ulong local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  _ArrayBuffer local_140;
  long local_138;
  ulong local_130;
  char *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  char local_f0 [24];
  undefined1 auStack_d8 [16];
  char *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  local_1b0 = (undefined *)os::Logger::typeMetadataAccessor();
  lVar32 = *(long *)(local_1b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar33 = (long)&local_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1c0 = *(long *)(local_1b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c0 + 0x40));
  lVar28 = lVar33 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar28;
  local_1d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1d8 = *(long *)(local_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d8 + 0x40));
  puVar29 = (undefined *)(lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_1e0.unknown = puVar29;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar28 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar30 = (long)puVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = lVar30 - extraout_x12;
  local_160 = lVar30;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  local_150 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  local_158 = lVar30 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar29 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar29 >> 0x3e == 0) {
    lVar30 = *(long *)(((ulong)puVar29 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar29 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar29) {
      _Var1.unknown = puVar29;
    }
    lVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar30 == 0) {
    if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
      _swift_bridgeObjectRelease(puVar29);
      return;
    }
  }
  else {
    local_130 = (ulong)puVar29 & 0xc000000000000001;
    local_1f0 = lVar33;
    local_1e8 = lVar32;
    local_138 = _TtC7Wallper21VideoWallpaperManager::adaptedWallpaperURLs;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::adaptedWallpaperURLs,
                       auStack_98,0,0);
    local_170 = (ulong)puVar29 & 0xffffffffffffff8;
    local_1f8 = (void *)0x80000001004e2570;
    local_200 = "Menu: Failed reapply on ";
    lVar33 = 4;
    uStack_208 = 0;
    local_210 = 0x8220102;
    local_190 = UVar5.unknown;
    local_188 = lVar28;
    local_180 = UVar4.unknown;
    local_148 = lVar30;
    local_140.unknown = puVar29;
    do {
      puVar29 = PTR___type_metadata_for_Any_100524178;
      pvVar31 = (void *)(lVar33 - 4);
      if (local_130 == 0) {
        if (*(void **)(local_170 + 0x10) <= pvVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100252bb8);
          (*pcVar2)();
        }
        self = *(void **)(local_140.unknown + lVar33 * 8);
      }
      else {
        self = pvVar31;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pvVar31,local_140);
      }
      if (SCARRY8((long)pvVar31,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100252bb4);
        (*pcVar2)();
      }
      objc_stub::deviceDescription((ID)self);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar25 = 0;
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar6.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar7), (uVar25 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar6.unknown);
LAB_100252334:
        lVar30 = local_158;
        UVar10 = Foundation::UUID::init();
        SVar34 = Foundation::UUID::get_uuidString(UVar10);
        (**(code **)(local_150 + 8))(lVar30,UVar5.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar6.unknown + 0x38) + (long)pNVar7 * 0x20,&local_c8);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar8 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppuVar9 = &local_100;
        _swift_dynamicCast(ppuVar9,&local_c8,puVar29 + 8,uVar8,6);
        if (((ulong)ppuVar9 & 1) == 0) goto LAB_100252334;
        objc_stub::stringValue((ID)local_100);
        SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar31 = SVar34.bridgeObject;
      local_120 = SVar34.str;
      lVar30 = *(long *)(unaff_x20 + local_138);
      lVar32 = *(long *)(lVar30 + 0x10);
      _swift_bridgeObjectRetain(lVar30);
      if (lVar32 == 0) {
LAB_100252178:
        _swift_bridgeObjectRelease(pvVar31);
        _swift_bridgeObjectRelease(lVar30);
        lVar30 = lVar33 + -3;
      }
      else {
        SVar35 = SVar34;
        FUN_10000464c(local_120);
        lVar32 = local_178;
        if (((ulong)SVar35.bridgeObject & 1) == 0) goto LAB_100252178;
        local_168 = lVar33 + -3;
        (**(code **)(lVar28 + 0x10))
                  (local_178,*(long *)(lVar30 + 0x38) + *(long *)(lVar28 + 0x48) * (long)SVar35.str,
                   UVar4.unknown);
        _swift_bridgeObjectRelease(lVar30);
        (**(code **)(lVar28 + 0x20))(local_160,lVar32,UVar4.unknown);
        IVar11 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
        IVar11 = NSWorkspace::desktopImageOptionsForScreen_(IVar11,self);
        if (IVar11 == 0) {
          DVar6.unknown = PTR___swiftEmptyArrayStorage_100524190;
          FUN_100005d38(PTR___swiftEmptyArrayStorage_100524190);
        }
        else {
          FUN_10000802c(0);
          FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8)
          ;
          DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC()
          ;
        }
        UVar4.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
        pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar4);
        FUN_10000802c(0);
        FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
        pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(DVar6.unknown);
        local_c8 = (char *)0x0;
        IVar11 = NSWorkspace::setDesktopImageURL_forScreen_options_error_
                           ((ID)UVar4.unknown,pNVar12,self,pNVar13,&local_c8);
        UVar4.unknown = local_180;
        lVar28 = local_188;
        if ((int)IVar11 == 0) {
          pcVar14 = local_c8;
          _Var26.unknown = extraout_x1;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_c8 = (char *)0x0;
          local_c0 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1a,_Var26);
          _swift_bridgeObjectRelease(local_c0);
          local_c8 = (char *)0xd000000000000018;
          local_c0 = local_1f8;
          SVar42.bridgeObject = self;
          SVar42.str = (char *)pNVar12;
          Swift::String::append(SVar34,SVar42);
          _swift_bridgeObjectRelease(pvVar31);
          puVar29 = local_c0;
          _swift_errorRetain(pcVar14);
          local_198 = puVar29;
          _swift_bridgeObjectRetain(puVar29);
          SVar35.bridgeObject = (void *)0xa500000000000000;
          SVar35.str = (char *)0x209480e220;
          SVar43.bridgeObject = self;
          SVar43.str = (char *)pNVar12;
          Swift::String::append(SVar35,SVar43);
          pcVar24 = local_f0;
          _swift_getErrorValue(pcVar14,auStack_d8);
          SVar34 = (extension_Foundation)::Swift::Error::get_localizedDescription();
          pvVar31 = SVar34.bridgeObject;
          SVar44.bridgeObject = self;
          SVar44.str = pcVar24;
          Swift::String::append(SVar34,SVar44);
          _swift_bridgeObjectRelease(pvVar31);
          puVar29 = local_c0;
          SVar34.bridgeObject = local_c0;
          SVar34.str = local_c8;
          local_c8 = (char *)0x5b;
          local_c0 = (undefined *)0xe100000000000000;
          local_108 = 0xe100000000000000;
          local_100 = (undefined *)0x524f525245;
          local_f8 = 0xe500000000000000;
          local_110 = 0x20;
          FUN_100026df4();
          pcVar27 = (char *)0x0;
          puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,&local_110,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pvVar31,pvVar31);
          SVar45.bridgeObject = puVar18;
          SVar45.str = pcVar27;
          Swift::String::append(SVar35,SVar45);
          _swift_bridgeObjectRelease(SVar35.bridgeObject);
          SVar36.bridgeObject = (void *)0xe300000000000000;
          SVar36.str = (char *)0x5b205d;
          SVar46.bridgeObject = puVar18;
          SVar46.str = pcVar27;
          Swift::String::append(SVar36,SVar46);
          SVar37.bridgeObject = (void *)0xe700000000000000;
          SVar37.str = (char *)0x79616c70736964;
          SVar47.bridgeObject = puVar18;
          SVar47.str = pcVar27;
          Swift::String::append(SVar37,SVar47);
          SVar38.bridgeObject = (void *)0xe200000000000000;
          SVar38.str = (char *)0x205d;
          SVar48.bridgeObject = puVar18;
          SVar48.str = pcVar27;
          Swift::String::append(SVar38,SVar48);
          local_1a0 = puVar29;
          SVar49.bridgeObject = puVar18;
          SVar49.str = pcVar27;
          Swift::String::append(SVar34,SVar49);
          puVar29 = local_c0;
          pcVar24 = local_c8;
          local_c8 = (char *)0x282020;
          local_c0 = (undefined *)0xe300000000000000;
          SVar39.bridgeObject = (void *)((ulong)local_200 | 0x8000000000000000);
          SVar39.str = (char *)0xd00000000000001a;
          SVar50.bridgeObject = puVar18;
          SVar50.str = pcVar27;
          Swift::String::append(SVar39,SVar50);
          SVar40.bridgeObject = (void *)0xe100000000000000;
          SVar40.str = (char *)0x3a;
          SVar51.bridgeObject = puVar18;
          SVar51.str = pcVar27;
          Swift::String::append(SVar40,SVar51);
          local_100 = (undefined *)0x596;
          SVar34 = Swift::CustomStringConvertible::get_description();
          SVar52.bridgeObject = puVar18;
          SVar52.str = pcVar27;
          Swift::String::append(SVar34,SVar52);
          _swift_bridgeObjectRelease(SVar34.bridgeObject);
          SVar41.bridgeObject = (void *)0xe100000000000000;
          SVar41.str = (char *)0x29;
          SVar53.bridgeObject = puVar18;
          SVar53.str = pcVar27;
          Swift::String::append(SVar41,SVar53);
          puVar18 = local_c0;
          pcVar27 = local_c8;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          puVar15 = &DAT_100534348;
          _swift_allocObject(&DAT_100534348,0x30,7);
          local_1a8 = pcVar24;
          *(char **)(puVar15 + 0x10) = pcVar24;
          *(undefined **)(puVar15 + 0x18) = puVar29;
          *(char **)(puVar15 + 0x20) = pcVar27;
          *(undefined **)(puVar15 + 0x28) = puVar18;
          local_a8 = thunk_FUN_100099310;
          local_c8 = PTR___NSConcreteStackBlock_100521110;
          local_c0 = (undefined *)0x42000000;
          local_b8 = FUN_1000c7e7c;
          puStack_b0 = &DAT_100534360;
          local_a0 = puVar15;
          pvVar31 = __Block_copy(&local_c8);
          DVar16.unknown = puVar29;
          _swift_bridgeObjectRetain();
          qos.unknown = local_1e0.unknown;
          Dispatch::DispatchQoS::get_unspecified(DVar16);
          local_100 = PTR___swiftEmptyArrayStorage_100524190;
          puVar17 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar18 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar19 = puVar18;
          FUN_100077ac0();
          puVar15 = local_1b8;
          lVar28 = local_1c8;
          Swift::SetAlgebra::_init(local_1c8,&local_100,puVar18,puVar19,local_1b8,puVar17);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar31);
          (**(code **)(local_1c0 + 8))(lVar28,puVar15);
          (**(code **)(local_1d8 + 8))(qos.unknown,local_1d0);
          _swift_release(local_a0);
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          puVar18 = local_1b0;
          puVar15 = local_1b0;
          FUN_100099338(local_1b0,&DAT_100558f50);
          lVar30 = local_1e8;
          lVar28 = local_1f0;
          lVar32 = local_1f0;
          (**(code **)(local_1e8 + 0x10))(local_1f0,puVar15,puVar18);
          uVar3 = (uint)lVar32;
          static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
          LVar20.unknown = puVar29;
          _swift_bridgeObjectRetain();
          pOVar21 = os::Logger::get_logObject(LVar20);
          pOVar22 = pOVar21;
          _os_log_type_enabled(pOVar21,uVar3 & 0xff);
          if ((int)pOVar22 == 0) {
            _swift_bridgeObjectRelease_n(puVar29,2);
          }
          else {
            puVar23 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar27 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar23 = (int)local_210;
            pcVar24 = local_1a8;
            local_c8 = pcVar27;
            FUN_10012dbb0(local_1a8,puVar29,&local_c8);
            *(char **)(puVar23 + 1) = pcVar24;
            _swift_bridgeObjectRelease_n(puVar29,2);
            __os_log_impl(0x100000000,pOVar21,uVar3 & 0xff,"%{public}s",puVar23,0xc);
            FUN_100043f24(pcVar27);
            _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar30 + 8))(lVar28,puVar18);
          _swift_bridgeObjectRelease(local_1a0);
          _swift_errorRelease(pcVar14);
          UVar5.unknown = local_190;
          _swift_bridgeObjectRelease(local_198);
          _swift_errorRelease(pcVar14);
          UVar4.unknown = local_180;
          lVar28 = local_188;
          (**(code **)(local_188 + 8))(local_160,local_180);
          lVar30 = local_168;
        }
        else {
          (**(code **)(local_188 + 8))(local_160,local_180);
          _swift_bridgeObjectRelease(pvVar31);
          UVar5.unknown = local_190;
          lVar30 = local_168;
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar30 != local_148);
    _swift_bridgeObjectRelease(local_140.unknown);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

