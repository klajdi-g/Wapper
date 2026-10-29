// rea decompile_all
// name: FUN_1002ab9c0
// address: 0x1002ab9c0
// body: available
// range: 0x1002ab9c0-0x1002acb97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002ab9c0(undefined8 *param_1,undefined8 param_2,MainActor *param_3,ulong param_4)

{
  String *pSVar1;
  _CocoaArrayWrapper _Var2;
  byte bVar3;
  byte bVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  DispatchWorkItemFlags DVar10;
  DispatchQoS DVar11;
  long lVar12;
  URL UVar13;
  undefined *puVar14;
  void *pvVar15;
  DispatchQoS DVar16;
  _ArrayBuffer _Var17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  ID self;
  Dictionary<undefined,undefined> DVar24;
  NSString *pNVar25;
  undefined8 uVar26;
  ID *pIVar27;
  undefined **ppuVar28;
  UUID UVar29;
  Hasher into;
  _ArrayBuffer _Var30;
  TaskPriority TVar31;
  MainActor *this;
  MainActor *pMVar32;
  undefined8 *puVar33;
  char *pcVar34;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar35;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar36;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long extraout_x14;
  undefined8 extraout_x15;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ID IVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  DispatchWorkItemFlags qos;
  ulong uVar45;
  ulong uVar46;
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
  undefined auStack_180 [8];
  code *local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  MainActor *local_120;
  long local_118;
  ulong local_110;
  undefined *local_108;
  undefined *local_100;
  ulong local_f8;
  ulong local_f0;
  _ArrayBuffer local_e8;
  long local_e0;
  char *local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined *local_a8;
  ID local_88 [2];
  undefined *local_78;
  undefined8 uStack_70;
  
  local_128 = param_2;
  local_120 = param_3;
  local_e8.unknown = (undefined *)os::Logger::typeMetadataAccessor();
  local_f8 = *(ulong *)(local_e8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  local_100 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(ulong *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar42 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar11 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar39 = *(long *)(DVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  qos.unknown = (undefined *)(lVar42 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0;
  FUN_10040211c();
  local_138 = *(long *)(lVar12 + -8);
  local_140 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar43 = (long)qos.unknown - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100561090;
  local_130 = extraout_x12;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar35 = lVar43 - extraout_x8_02;
  local_118 = lVar35;
  local_d8 = (char *)Foundation::UUID::typeMetadataAccessor();
  local_e0 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar35 = lVar35 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = lVar35 - extraout_x8_04;
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(*(long *)(UVar13.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar40 = lVar12 + 0xf;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_108 = (undefined *)((lVar38 - (uVar40 & 0xfffffffffffffff0)) - extraout_x12_00);
  if (*(long *)(param_4 + 0x10) != 0) {
    local_168 = param_1;
    local_158 = lVar43;
    local_150 = lVar12;
    local_148 = extraout_x15;
    local_f0 = param_4;
    FUN_1002acb98(lVar38,param_1);
    lVar12 = lVar38;
    (**(code **)(extraout_x14 + 0x30))(lVar38,1,extraout_x13);
    if ((int)lVar12 != 1) {
      local_178 = *(code **)(extraout_x14 + 0x20);
      local_170 = extraout_x14;
      local_160 = extraout_x13;
      (*local_178)(local_108,lVar38,extraout_x13);
      puVar23 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      uVar40 = (ulong)puVar23 >> 0x3e;
      local_e8.unknown = puVar23;
      if (uVar40 == 0) {
        uVar37 = *(ulong *)(((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
        if (((ulong)puVar23 & 0x8000000000000000) != 0) {
          _Var2.unknown = puVar23;
        }
        uVar37 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      puVar23 = PTR___swiftEmptyArrayStorage_100524190;
      if (uVar37 != 0) {
        local_78 = PTR___swiftEmptyArrayStorage_100524190;
        local_f8 = uVar40;
        FUN_1001c5bc4(0,uVar37 & ((long)uVar37 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar37 < 0) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x1002acb68);
          (*pcVar36)();
        }
        IVar41 = 0;
        uVar44 = (ulong)local_e8.unknown & 0xc000000000000001;
        do {
          puVar23 = local_78;
          if (uVar44 == 0) {
            self = *(ID *)(local_e8.unknown + IVar41 * 8 + 0x20);
          }
          else {
            self = IVar41;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar41,local_e8);
          }
          objc_stub::deviceDescription(self);
          FUN_100008054(0);
          FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c)
          ;
          DVar24 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
          uVar40 = 0;
          pNVar25 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          if (*(long *)(DVar24.unknown + 0x10) == 0) {
LAB_1002ac1cc:
            puStack_c8 = (undefined *)0x0;
            local_d0 = (undefined *)0x0;
            local_b8 = (undefined *)0x0;
            local_c0 = (code *)0x0;
          }
          else {
            _swift_bridgeObjectRetain(DVar24.unknown);
            thunk_FUN_1000046e0(pNVar25);
            if ((uVar40 & 1) == 0) {
              _swift_bridgeObjectRelease(DVar24.unknown);
              goto LAB_1002ac1cc;
            }
            FUN_1000280d4(*(long *)(DVar24.unknown + 0x38) + (long)pNVar25 * 0x20,&local_d0);
            _swift_bridgeObjectRelease(DVar24.unknown);
          }
          _swift_bridgeObjectRelease(DVar24.unknown);
          if (local_b8 == (undefined *)0x0) {
            FUN_10002a29c(&local_d0,&DAT_10054d428,&DAT_100420300);
LAB_1002ac27c:
            UVar29 = Foundation::UUID::init();
            SVar47 = Foundation::UUID::get_uuidString(UVar29);
            (**(code **)(local_e0 + 8))(lVar35,local_d8);
          }
          else {
            uVar26 = 0;
            FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
            pIVar27 = local_88;
            _swift_dynamicCast(pIVar27,&local_d0,PTR___type_metadata_for_Any_100524178 + 8,uVar26,6)
            ;
            if (((ulong)pIVar27 & 1) == 0) goto LAB_1002ac27c;
            objc_stub::stringValue(local_88[0]);
            SVar47 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          uVar40 = *(ulong *)(puVar23 + 0x10);
          local_78 = puVar23;
          if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar40) {
            FUN_1001c5bc4(1 < *(ulong *)(puVar23 + 0x18),uVar40 + 1,1);
          }
          IVar41 = IVar41 + 1;
          *(ulong *)(local_78 + 0x10) = uVar40 + 1;
          *(String *)(local_78 + uVar40 * 0x10 + 0x20) = SVar47;
          uVar40 = local_f8;
          puVar23 = local_78;
        } while (uVar37 != IVar41);
      }
      uVar37 = local_f0;
      puVar22 = puVar23;
      FUN_10020c98c(puVar23);
      _swift_bridgeObjectRelease(puVar23);
      uVar44 = uVar37;
      FUN_1003f3dd0(uVar37,puVar22);
      _swift_bridgeObjectRelease(puVar22);
      if ((uVar44 & 1) == 0) {
        if (uVar40 == 0) {
          uVar40 = *(ulong *)(((ulong)local_e8.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = local_e8.unknown & 0xffffffffffffff8;
          if (((ulong)local_e8.unknown & 0x8000000000000000) != 0) {
            _Var2.unknown = local_e8.unknown;
          }
          uVar40 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (uVar40 != 0) {
          local_f0 = (ulong)local_e8.unknown & 0xc000000000000001;
          local_f8 = (ulong)local_e8.unknown & 0xffffffffffffff8;
          local_100 = local_e8.unknown + 0x20;
          uVar44 = 0;
          local_110 = uVar40;
          do {
            if (local_f0 == 0) {
              if (*(ulong *)(local_f8 + 0x10) <= uVar44) {
                    /* WARNING: Does not return */
                pcVar36 = (code *)SoftwareBreakpoint(1,0x1002acb1c);
                (*pcVar36)();
              }
              uVar45 = *(ulong *)(local_100 + uVar44 * 8);
            }
            else {
              uVar45 = uVar44;
              Swift::_ArrayBuffer::__getElementSlowPath(uVar44,local_e8);
            }
            uVar46 = uVar44 + 1;
            if (SCARRY8(uVar44,1)) {
                    /* WARNING: Does not return */
              pcVar36 = (code *)SoftwareBreakpoint(1,0x1002acb18);
              (*pcVar36)();
            }
            objc_stub::deviceDescription(uVar45);
            FUN_100008054(0);
            FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,
                          &TargetProtocolConformanceDescriptor_10041b40c);
            DVar24 = (extension_Foundation)::Swift::Dictionary::
                     __unconditionallyBridgeFromObjectiveC();
            uVar45 = 0;
            pNVar25 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            if ((*(long *)(DVar24.unknown + 0x10) == 0) ||
               (thunk_FUN_1000046e0(pNVar25), (uVar45 & 1) == 0)) {
              _swift_bridgeObjectRelease(DVar24.unknown);
LAB_1002ac5b0:
              UVar29 = Foundation::UUID::init();
              SVar47 = Foundation::UUID::get_uuidString(UVar29);
              pvVar15 = SVar47.bridgeObject;
              (**(code **)(local_e0 + 8))(lVar35,local_d8);
              if (*(long *)(uVar37 + 0x10) == 0) goto LAB_1002ac410;
LAB_1002ac5e0:
              Swift::Hasher::init(*(__int64 *)(uVar37 + 0x28));
              into.unknown = (undefined *)&local_d0;
              Swift::String::hash(into,SVar47);
              uVar40 = Swift::Hasher::_finalize(into);
              uVar45 = -1L << ((ulong)*(byte *)(uVar37 + 0x20) & 0x3f);
              uVar40 = uVar40 & (uVar45 ^ 0xffffffffffffffff);
              if ((*(ulong *)(uVar37 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) != 0) {
                do {
                  pSVar1 = (String *)(*(long *)(uVar37 + 0x30) + uVar40 * 0x10);
                  if ((SVar47 == *pSVar1) ||
                     (bVar8 = Swift::_stringCompareWithSmolCheck
                                        ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                         (_StringComparisonResult)(__int8)SVar47.str), bVar8)) {
                    _swift_bridgeObjectRelease(SVar47.bridgeObject);
                    uVar40 = local_110;
                    if (DAT_100557bb0 != -1) {
                      _swift_once(&DAT_100557bb0,FUN_100233158);
                    }
                    FUN_10023e14c(local_108,uVar44,0,0,1,1,0,1);
                    goto LAB_1002ac418;
                  }
                  uVar40 = uVar40 + 1 & ~uVar45;
                } while ((*(ulong *)(uVar37 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) != 0
                        );
              }
              _swift_bridgeObjectRelease(SVar47.bridgeObject);
              uVar40 = local_110;
            }
            else {
              FUN_1000280d4(*(long *)(DVar24.unknown + 0x38) + (long)pNVar25 * 0x20,&local_d0);
              _swift_bridgeObjectRelease(DVar24.unknown);
              uVar26 = 0;
              FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
              ppuVar28 = &local_78;
              _swift_dynamicCast(ppuVar28,&local_d0,PTR___type_metadata_for_Any_100524178 + 8,uVar26
                                 ,6);
              if (((ulong)ppuVar28 & 1) == 0) goto LAB_1002ac5b0;
              objc_stub::stringValue((ID)local_78);
              SVar47 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              pvVar15 = SVar47.bridgeObject;
              uVar40 = local_110;
              if (*(long *)(uVar37 + 0x10) != 0) goto LAB_1002ac5e0;
LAB_1002ac410:
              _swift_bridgeObjectRelease(pvVar15);
            }
LAB_1002ac418:
            uVar44 = uVar46;
          } while (uVar46 != uVar40);
        }
        _Var30.unknown = local_e8.unknown;
        _swift_bridgeObjectRelease();
        puVar23 = local_108;
      }
      else {
        _swift_bridgeObjectRelease(local_e8.unknown);
        puVar23 = local_108;
        if (DAT_100557bb0 != -1) {
          _swift_once(&DAT_100557bb0,FUN_100233158);
        }
        _Var30.unknown = puVar23;
        FUN_10023e14c(puVar23,0,1,1,1,1,0,1);
      }
      bVar8 = Foundation::URL::get_isFileURL((URL)_Var30.unknown);
      if (!bVar8) {
        if (DAT_100561128 != -1) {
          _swift_once(&DAT_100561128,FUN_1003f3f80);
        }
        puVar22 = &DAT_100577e38;
        _swift_unknownObjectWeakLoadStrong();
        if (puVar22 != (undefined *)0x0) {
          lVar12 = *(long *)(puVar22 + _TtC7Wallper11AppDelegate::videoLibrary);
          _swift_retain(lVar12);
          puVar33 = local_168;
          SVar47 = Foundation::URL::get_lastPathComponent((URL)0x0);
          pvVar15 = SVar47.bridgeObject;
          uVar40 = (ulong)SVar47.str & 0xffffffffffff;
          if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
            uVar40 = (ulong)pvVar15 >> 0x38 & 0xf;
          }
          if (uVar40 == 0) {
            _swift_bridgeObjectRelease(pvVar15);
            local_d8 = (char *)*puVar33;
            pvVar15 = (void *)puVar33[1];
            _swift_bridgeObjectRetain(pvVar15);
            SVar47.bridgeObject = pvVar15;
            SVar47.str = local_d8;
          }
          lVar35 = local_150;
          lVar38 = local_170;
          local_d8 = SVar47.str;
          TVar31 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar31.unknown + -8) + 0x38))(local_118,1,1,TVar31.unknown);
          (**(code **)(lVar38 + 0x10))(local_148,puVar23,local_160);
          FUN_10002f154(puVar33,local_158);
          this = Swift::MainActor::typeMetadataAccessor();
          puVar23 = PTR_typeMetadataAccessor_1005246d8;
          _swift_retain(lVar12);
          _swift_bridgeObjectRetain(uVar37);
          pMVar5 = local_120;
          pMVar32 = local_120;
          local_e0 = lVar12;
          _swift_bridgeObjectRetain();
          pMVar32 = Swift::MainActor::get_shared(this,pMVar32);
          puVar33 = &DAT_100558b80;
          FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
          bVar3 = *(byte *)(lVar38 + 0x50);
          uVar40 = (ulong)bVar3 + 0x38 & ((ulong)bVar3 ^ 0xffffffffffffffff);
          uVar44 = lVar35 + uVar40 + 7 & 0xfffffffffffffff8;
          bVar4 = *(byte *)(local_138 + 0x50);
          uVar45 = bVar4 + uVar44 + 8 & ((ulong)bVar4 ^ 0xffffffffffffffff);
          uVar46 = local_130 + uVar45 + 7 & 0xfffffffffffffff8;
          puVar22 = &DAT_100537a70;
          _swift_allocObject(&DAT_100537a70,uVar46 + 0x10,bVar3 | bVar4 | 7);
          lVar12 = local_e0;
          puVar23 = local_108;
          *(MainActor **)(puVar22 + 0x10) = pMVar32;
          *(undefined8 **)(puVar22 + 0x18) = puVar33;
          *(long *)(puVar22 + 0x20) = local_e0;
          *(char **)(puVar22 + 0x28) = local_d8;
          *(void **)(puVar22 + 0x30) = SVar47.bridgeObject;
          (*local_178)(puVar22 + uVar40,local_148,local_160);
          *(ulong *)(puVar22 + uVar44) = uVar37;
          FUN_10002f198(local_158,puVar22 + uVar45);
          *(undefined8 *)(puVar22 + uVar46) = local_128;
          *(MainActor **)((long)(puVar22 + uVar46) + 8) = pMVar5;
          FUN_1001b1e74(0,0,local_118,&DAT_10042e028,puVar22);
          _swift_release();
          _swift_release(lVar12);
        }
      }
      IVar41 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar25 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar41 = NSUserDefaults::boolForKey_(IVar41,pNVar25);
      lVar12 = local_118;
      if ((int)IVar41 == 0) {
        pcVar36 = *(code **)(local_170 + 8);
      }
      else {
        Swift::TaskPriority::get_utility((TaskPriority)0x0);
        TVar31 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar31.unknown + -8) + 0x38))(lVar12,0,1,TVar31.unknown);
        (**(code **)(local_170 + 0x10))(local_148,puVar23,local_160);
        uVar40 = (ulong)*(byte *)(local_170 + 0x50);
        uVar37 = uVar40 + 0x20 & (uVar40 ^ 0xffffffffffffffff);
        uVar44 = local_150 + uVar37 + 7 & 0xfffffffffffffff8;
        puVar22 = &DAT_100537a48;
        _swift_allocObject(&DAT_100537a48,uVar44 + 0x10,uVar40 | 7);
        *(undefined8 *)(puVar22 + 0x10) = 0;
        *(undefined8 *)(puVar22 + 0x18) = 0;
        (*local_178)(puVar22 + uVar37,local_148,local_160);
        *(undefined8 *)(puVar22 + uVar44) = local_128;
        *(MainActor **)((long)(puVar22 + uVar44) + 8) = local_120;
        _swift_bridgeObjectRetain();
        FUN_100176d50(0,0,lVar12,&DAT_10042e018,puVar22);
        _swift_release();
        FUN_10002a29c(lVar12,&DAT_100561090,&DAT_10041c870);
        pcVar36 = *(code **)(local_170 + 8);
      }
      (*pcVar36)(puVar23,local_160);
      return 1;
    }
    FUN_10002a29c(lVar38,&DAT_100553d90,&DAT_10041bf10);
    local_d0 = (undefined *)0x5b;
    puStack_c8 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4e524157;
    uStack_70 = 0xe400000000000000;
    local_88[0] = 0x20;
    local_88[1] = 0xe100000000000000;
    FUN_100026df4();
    pcVar34 = (char *)0x0;
    puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar47 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,lVar38,lVar38);
    SVar55.bridgeObject = puVar22;
    SVar55.str = pcVar34;
    Swift::String::append(SVar47,SVar55);
    _swift_bridgeObjectRelease(SVar47.bridgeObject);
    SVar48.bridgeObject = (void *)0xe300000000000000;
    SVar48.str = (char *)0x5b205d;
    SVar56.bridgeObject = puVar22;
    SVar56.str = pcVar34;
    Swift::String::append(SVar48,SVar56);
    SVar49.bridgeObject = (void *)0xe900000000000072;
    SVar49.str = (char *)0x657061706c6c6177;
    SVar57.bridgeObject = puVar22;
    SVar57.str = pcVar34;
    Swift::String::append(SVar49,SVar57);
    SVar50.bridgeObject = (void *)0xe200000000000000;
    SVar50.str = (char *)0x205d;
    SVar58.bridgeObject = puVar22;
    SVar58.str = pcVar34;
    Swift::String::append(SVar50,SVar58);
    SVar51.bridgeObject = (void *)0x80000001004e3c70;
    SVar51.str = (char *)0xd000000000000039;
    SVar59.bridgeObject = puVar22;
    SVar59.str = pcVar34;
    Swift::String::append(SVar51,SVar59);
    puVar6 = puStack_c8;
    puVar23 = local_d0;
    local_d0 = (undefined *)0x282020;
    puStack_c8 = (undefined *)0xe300000000000000;
    SVar52.bridgeObject = (void *)0x80000001004e3cb0;
    SVar52.str = (char *)0xd00000000000001a;
    SVar60.bridgeObject = puVar22;
    SVar60.str = pcVar34;
    Swift::String::append(SVar52,SVar60);
    SVar53.bridgeObject = (void *)0xe100000000000000;
    SVar53.str = (char *)0x3a;
    SVar61.bridgeObject = puVar22;
    SVar61.str = pcVar34;
    Swift::String::append(SVar53,SVar61);
    local_78 = (undefined *)0x27;
    SVar47 = Swift::CustomStringConvertible::get_description();
    SVar62.bridgeObject = puVar22;
    SVar62.str = pcVar34;
    Swift::String::append(SVar47,SVar62);
    _swift_bridgeObjectRelease(SVar47.bridgeObject);
    SVar54.bridgeObject = (void *)0xe100000000000000;
    SVar54.str = (char *)0x29;
    SVar63.bridgeObject = puVar22;
    SVar63.str = pcVar34;
    Swift::String::append(SVar54,SVar63);
    puVar7 = puStack_c8;
    puVar22 = local_d0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar14 = &DAT_1005379f8;
    _swift_allocObject(&DAT_1005379f8,0x30,7);
    local_d8 = puVar23;
    *(undefined **)(puVar14 + 0x10) = puVar23;
    *(undefined **)(puVar14 + 0x18) = puVar6;
    *(undefined **)(puVar14 + 0x20) = puVar22;
    *(undefined **)(puVar14 + 0x28) = puVar7;
    local_b0 = FUN_100099310;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    puStack_c8 = (undefined *)0x42000000;
    local_c0 = FUN_1000c7e7c;
    local_b8 = &DAT_100537a10;
    local_a8 = puVar14;
    pvVar15 = __Block_copy(&local_d0);
    DVar16.unknown = puVar6;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar33 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar23 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar22 = puVar23;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar42,&local_78,puVar23,puVar22,DVar10.unknown,puVar33);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar15);
    (**(code **)(local_110 + 8))(lVar42,DVar10.unknown);
    (**(code **)(lVar39 + 8))(qos.unknown,DVar11.unknown);
    _swift_release(local_a8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    _Var30.unknown = local_e8.unknown;
    _Var17.unknown = local_e8.unknown;
    FUN_100099338(local_e8.unknown,&DAT_100558f50);
    uVar40 = local_f8;
    puVar23 = local_100;
    puVar22 = local_100;
    (**(code **)(local_f8 + 0x10))(local_100,_Var17.unknown,_Var30.unknown);
    uVar9 = (uint)puVar22;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar18.unknown = puVar6;
    _swift_bridgeObjectRetain();
    pOVar19 = os::Logger::get_logObject(LVar18);
    pOVar20 = pOVar19;
    _os_log_type_enabled(pOVar19,uVar9 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar6,2);
    }
    else {
      puVar21 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar22 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar21 = 0x8220102;
      pcVar34 = local_d8;
      local_d0 = puVar22;
      FUN_10012dbb0(local_d8,puVar6,&local_d0);
      *(char **)(puVar21 + 1) = pcVar34;
      _swift_bridgeObjectRelease_n(puVar6,2);
      __os_log_impl(0x100000000,pOVar19,uVar9 & 0xff,"%{public}s",puVar21,0xc);
      FUN_100043f24(puVar22);
      _swift_slowDealloc(puVar22,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(uVar40 + 8))(puVar23,_Var30.unknown);
  }
  return 0;
}

