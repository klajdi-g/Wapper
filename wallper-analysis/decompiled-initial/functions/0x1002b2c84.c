// rea decompile_all
// name: FUN_1002b2c84
// address: 0x1002b2c84
// body: available
// range: 0x1002b2c84-0x1002b4007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b3748 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002b3ffc) */

void FUN_1002b2c84(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  void *pvVar1;
  _CocoaArrayWrapper _Var2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  String SVar5;
  DispatchWorkItemFlags qos;
  undefined **ppuVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  DispatchQoS DVar10;
  ID IVar11;
  NSString *pNVar12;
  ID IVar13;
  ID self;
  Dictionary<undefined,undefined> DVar14;
  char **ppcVar15;
  UUID UVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  char *pcVar19;
  Hasher into;
  char *pcVar20;
  NSArray *pNVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  Logger LVar27;
  OS_os_log *pOVar28;
  OS_os_log *pOVar29;
  undefined4 *puVar30;
  char *pcVar31;
  _ArrayBuffer _Var32;
  ulong uVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  _StringGuts extraout_x1;
  Hasher HVar36;
  char *pcVar37;
  long extraout_x8;
  long extraout_x8_00;
  long lVar38;
  long extraout_x8_01;
  undefined *puVar39;
  long extraout_x8_02;
  undefined **ppuVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined1 *puVar44;
  undefined **ppuVar45;
  long lVar46;
  void *pvVar47;
  ulong uVar48;
  undefined **ppuVar49;
  double dVar50;
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
  undefined1 auStack_1a0 [8];
  long local_198;
  long local_190;
  undefined *local_188;
  undefined1 *local_180;
  long local_178;
  char *local_170;
  ulong local_168;
  undefined *local_160;
  char *local_158;
  DispatchWorkItemFlags local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  undefined *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  undefined *local_110;
  char *local_108;
  undefined *local_100;
  code *local_f8;
  undefined *puStack_f0;
  code *local_e8;
  undefined *local_e0;
  char *local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined *local_98;
  char *local_90 [2];
  undefined1 *puVar26;
  
  local_110 = param_1;
  local_130 = (undefined *)os::Logger::typeMetadataAccessor();
  lVar41 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
  puVar44 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_140 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar38 = (long)puVar44 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar38;
  DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar46 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar46 + 0x40));
  puVar39 = (undefined *)(lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_150.unknown = puVar39;
  local_118 = (char *)Foundation::UUID::typeMetadataAccessor();
  local_120 = *(char **)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_120 + 0x40));
  local_160 = &_OBJC_CLASS___NSUserDefaults;
  IVar11 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  local_158 = " still paused, retry ";
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = NSUserDefaults::arrayForKey_(IVar11,pNVar12);
  if (IVar11 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    IVar13 = IVar11;
    FUN_1001f027c();
    _swift_bridgeObjectRelease(IVar11);
    _Var32.unknown = local_110;
    if (IVar13 != 0) {
      uVar48 = *(ulong *)(IVar13 + 0x10);
      if (uVar48 == 0) {
        _swift_bridgeObjectRelease(IVar13);
        return;
      }
      local_190 = lVar46;
      local_188 = DVar10.unknown;
      local_180 = puVar44;
      local_178 = lVar41;
      if ((ulong)local_110 >> 0x3e == 0) {
        uVar42 = *(ulong *)(((ulong)local_110 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)local_110 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < local_110) {
          _Var2.unknown = local_110;
        }
        uVar42 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      ppuVar40 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
      local_168 = uVar48;
      if (uVar42 != 0) {
        local_b0 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,uVar42 & ((long)uVar42 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar42 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3fb4);
          (*pcVar7)();
        }
        IVar11 = 0;
        local_128 = (char *)((ulong)_Var32.unknown & 0xc000000000000001);
        do {
          ppuVar40 = local_b0;
          if (local_128 == (char *)0x0) {
            self = *(ID *)(_Var32.unknown + IVar11 * 8 + 0x20);
          }
          else {
            self = IVar11;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar11,_Var32);
          }
          objc_stub::deviceDescription(self);
          FUN_100008054(0);
          param_4 = (undefined **)&DAT_10054a5e0;
          FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c)
          ;
          DVar14 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
          uVar48 = 0;
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          if ((*(long *)(DVar14.unknown + 0x10) == 0) ||
             (thunk_FUN_1000046e0(pNVar12), (uVar48 & 1) == 0)) {
            _swift_bridgeObjectRelease(DVar14.unknown);
LAB_1002b3058:
            UVar16 = Foundation::UUID::init();
            SVar51 = Foundation::UUID::get_uuidString(UVar16);
            (**(code **)(local_120 + 8))
                      ((long)puVar39 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),local_118);
          }
          else {
            FUN_1000280d4(*(long *)(DVar14.unknown + 0x38) + (long)pNVar12 * 0x20,&local_108);
            _swift_bridgeObjectRelease(DVar14.unknown);
            param_4 = (undefined **)0x0;
            FUN_100028110();
            ppcVar15 = &local_c0;
            _swift_dynamicCast(ppcVar15,&local_108,PTR___type_metadata_for_Any_100524178 + 8,param_4
                               ,6);
            if (((ulong)ppcVar15 & 1) == 0) goto LAB_1002b3058;
            objc_stub::stringValue((ID)local_c0);
            SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          puVar22 = ppuVar40[2];
          local_b0 = ppuVar40;
          if ((undefined *)((ulong)ppuVar40[3] >> 1) <= puVar22) {
            FUN_1001c5bc4((undefined *)0x1 < ppuVar40[3],puVar22 + 1,1);
          }
          IVar11 = IVar11 + 1;
          local_b0[2] = puVar22 + 1;
          *(String *)(local_b0 + (long)puVar22 * 2 + 4) = SVar51;
          _Var32.unknown = local_110;
          ppuVar40 = local_b0;
        } while (uVar42 != IVar11);
      }
      uVar42 = local_168;
      ppuVar17 = ppuVar40;
      FUN_10020c98c();
      _swift_bridgeObjectRelease(ppuVar40);
      pcVar37 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100005c3c();
      puVar39 = PTR___type_metadata_for_Swift_String_100523a98;
      uVar48 = 0;
      local_90[0] = pcVar37;
      do {
        lVar38 = 0x44496e6565726373;
        if (*(ulong *)(IVar13 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f78);
          (*pcVar7)();
        }
        ppuVar40 = *(undefined ***)(IVar13 + uVar48 * 8 + 0x20);
        if (ppuVar40[2] != (undefined *)0x0) {
          _swift_bridgeObjectRetain(ppuVar40);
          uVar33 = 0;
          FUN_10000464c(0x44496e6565726373);
          if ((uVar33 & 1) != 0) {
            FUN_1000280d4(ppuVar40[7] + lVar38 * 0x20,&local_108);
            pppuVar18 = &local_b0;
            param_4 = (undefined **)puVar39;
            _swift_dynamicCast(pppuVar18,&local_108,PTR___type_metadata_for_Any_100524178 + 8,
                               puVar39,6);
            ppuVar6 = ppuStack_a8;
            ppuVar45 = local_b0;
            if (((ulong)pppuVar18 & 1) != 0) {
              uVar33 = (ulong)local_b0 & 0xffffffffffff;
              if (((ulong)ppuStack_a8 & 0x2000000000000000) != 0) {
                uVar33 = (ulong)ppuStack_a8 >> 0x38 & 0xf;
              }
              if (uVar33 != 0) {
                if (ppuVar40[2] == (undefined *)0x0) {
LAB_1002b3254:
                  _swift_bridgeObjectRelease(ppuVar40);
LAB_1002b325c:
                  ppuVar34 = (undefined **)0x0;
                  ppuVar49 = (undefined **)0x0;
                  if (*(long *)(pcVar37 + 0x10) == 0) goto LAB_1002b3248;
LAB_1002b3268:
                  _swift_bridgeObjectRetain(pcVar37);
                  ppuVar40 = ppuVar45;
                  ppuVar34 = ppuVar6;
                  FUN_10000464c();
                  if (((ulong)ppuVar34 & 1) == 0) {
                    _swift_bridgeObjectRelease(pcVar37);
                    ppuVar40 = ppuVar6;
                    if (-1.0 < (double)ppuVar49) goto LAB_1002b32bc;
                    goto LAB_1002b3140;
                  }
                  dVar50 = *(double *)(*(long *)(pcVar37 + 0x38) + (long)ppuVar40 * 8);
                  _swift_bridgeObjectRelease(pcVar37);
                  ppuVar40 = ppuVar6;
                  if ((double)ppuVar49 <= dVar50) goto LAB_1002b3140;
                }
                else {
                  uVar33 = 0;
                  lVar38 = 0x416465696c707061;
                  FUN_10000464c(0x416465696c707061);
                  if ((uVar33 & 1) == 0) goto LAB_1002b3254;
                  FUN_1000280d4(ppuVar40[7] + lVar38 * 0x20,&local_108);
                  _swift_bridgeObjectRelease(ppuVar40);
                  pppuVar18 = &local_b0;
                  param_4 = (undefined **)PTR___type_metadata_for_Swift_Double_100523b90;
                  _swift_dynamicCast(pppuVar18,&local_108,PTR___type_metadata_for_Any_100524178 + 8,
                                     PTR___type_metadata_for_Swift_Double_100523b90,6);
                  if (((ulong)pppuVar18 & 1) == 0) goto LAB_1002b325c;
                  ppuVar49 = local_b0;
                  ppuVar34 = local_b0;
                  if (*(long *)(pcVar37 + 0x10) != 0) goto LAB_1002b3268;
LAB_1002b3248:
                  ppuVar40 = ppuVar6;
                  ppuVar49 = ppuVar34;
                  if ((double)ppuVar34 <= -1.0) goto LAB_1002b3140;
                }
LAB_1002b32bc:
                pcVar37 = local_90[0];
                pcVar19 = local_90[0];
                _swift_isUniquelyReferenced_nonNull_native();
                local_108 = pcVar37;
                ppuVar40 = ppuVar45;
                ppuVar34 = ppuVar6;
                FUN_10000464c();
                uVar42 = (ulong)~(uint)ppuVar34 & 1;
                lVar38 = *(long *)(pcVar37 + 0x10) + uVar42;
                if (SCARRY8(*(long *)(pcVar37 + 0x10),uVar42)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f8c);
                  (*pcVar7)();
                }
                if (*(long *)(pcVar37 + 0x18) < lVar38) {
                  FUN_1001cdc30(lVar38,pcVar19);
                  ppuVar40 = ppuVar45;
                  ppuVar35 = ppuVar6;
                  FUN_10000464c();
                  pcVar37 = local_108;
                  if (((uint)ppuVar34 & 1) != ((uint)ppuVar35 & 1)) {
                    Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3ffc);
                    (*pcVar7)();
                  }
                }
                else {
                  pcVar37 = local_108;
                  if (((ulong)pcVar19 & 1) == 0) {
                    FUN_1001cb094();
                    pcVar37 = local_108;
                  }
                }
                local_108 = pcVar37;
                if (((ulong)ppuVar34 & 1) == 0) {
                  *(ulong *)(pcVar37 + ((ulong)ppuVar40 >> 6) * 8 + 0x40) =
                       *(ulong *)(pcVar37 + ((ulong)ppuVar40 >> 6) * 8 + 0x40) |
                       1L << ((ulong)ppuVar40 & 0x3f);
                  puVar23 = (undefined8 *)(*(long *)(pcVar37 + 0x30) + (long)ppuVar40 * 0x10);
                  *puVar23 = ppuVar45;
                  puVar23[1] = ppuVar6;
                  *(undefined ***)(*(long *)(pcVar37 + 0x38) + (long)ppuVar40 * 8) = ppuVar49;
                  if (SCARRY8(*(long *)(pcVar37 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3fb0);
                    (*pcVar7)();
                  }
                  *(long *)(pcVar37 + 0x10) = *(long *)(pcVar37 + 0x10) + 1;
                  uVar42 = local_168;
                  local_90[0] = pcVar37;
                }
                else {
                  *(undefined ***)(*(long *)(pcVar37 + 0x38) + (long)ppuVar40 * 8) = ppuVar49;
                  _swift_bridgeObjectRelease(ppuVar6);
                  uVar42 = local_168;
                  local_90[0] = pcVar37;
                }
                goto LAB_1002b3144;
              }
              _swift_bridgeObjectRelease(ppuVar40);
              ppuVar40 = ppuVar6;
            }
          }
LAB_1002b3140:
          _swift_bridgeObjectRelease(ppuVar40);
        }
LAB_1002b3144:
        uVar48 = uVar48 + 1;
      } while (uVar42 != uVar48);
      uVar48 = 0;
      local_98 = PTR___swiftEmptySetSingleton_1005241a0;
      pcVar19 = PTR___swiftEmptyArrayStorage_100524190;
      do {
        if (*(ulong *)(IVar13 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f7c);
          (*pcVar7)();
        }
        ppuVar40 = *(undefined ***)(IVar13 + uVar48 * 8 + 0x20);
        local_b0 = ppuVar40;
        _swift_bridgeObjectRetain(ppuVar40);
        pppuVar18 = &local_b0;
        HVar36.unknown = (undefined *)&local_98;
        FUN_1002af5b4(pppuVar18,local_90);
        if (((ulong)pppuVar18 & 1) == 0) {
          _swift_bridgeObjectRelease(ppuVar40);
        }
        else {
          pcVar31 = pcVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          local_108 = pcVar19;
          if (((ulong)pcVar31 & 1) == 0) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5ba0(0,*(long *)(pcVar19 + 0x10) + 1);
          }
          uVar33 = *(ulong *)(local_108 + 0x10);
          if (*(ulong *)(local_108 + 0x18) >> 1 <= uVar33) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5ba0(1 < *(ulong *)(local_108 + 0x18),uVar33 + 1);
          }
          *(ulong *)(local_108 + 0x10) = uVar33 + 1;
          *(undefined ***)(local_108 + uVar33 * 8 + 0x20) = ppuVar40;
          pcVar19 = local_108;
        }
        uVar48 = uVar48 + 1;
      } while (uVar42 != uVar48);
      _swift_bridgeObjectRelease(IVar13);
      local_110 = *(undefined **)(pcVar19 + 0x10);
      local_170 = pcVar37;
      if (local_110 < (void *)0x10 || (long)local_110 + -0x10 == 0) {
        _swift_bridgeObjectRelease(ppuVar17);
      }
      else {
        pvVar47 = (void *)0x0;
        local_118 = pcVar19 + 0x20;
        local_128 = PTR___swiftEmptyArrayStorage_100524190;
        local_198 = (long)local_110 + -0x10;
        local_120 = pcVar19;
        do {
          if (*(void **)(local_120 + 0x10) <= pvVar47) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f80);
            (*pcVar7)();
          }
          lVar41 = *(long *)(local_118 + (long)pvVar47 * 8);
          lVar38 = *(long *)(lVar41 + 0x10);
          _swift_bridgeObjectRetain(lVar41);
          if (lVar38 == 0) {
LAB_1002b35d8:
            ppuVar40 = (undefined **)0x0;
            ppuVar45 = (undefined **)0xe000000000000000;
          }
          else {
            _swift_bridgeObjectRetain(lVar41);
            lVar38 = 0x44496e6565726373;
            uVar48 = 0;
            FUN_10000464c(0x44496e6565726373);
            if ((uVar48 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar41);
              goto LAB_1002b35d8;
            }
            FUN_1000280d4(*(long *)(lVar41 + 0x38) + lVar38 * 0x20,&local_108);
            _swift_bridgeObjectRelease(lVar41);
            pppuVar18 = &local_b0;
            HVar36.unknown = PTR___type_metadata_for_Any_100524178 + 8;
            param_4 = (undefined **)PTR___type_metadata_for_Swift_String_100523a98;
            _swift_dynamicCast(pppuVar18,&local_108,HVar36.unknown,
                               PTR___type_metadata_for_Swift_String_100523a98,6);
            ppuVar40 = local_b0;
            ppuVar45 = ppuStack_a8;
            if (((ulong)pppuVar18 & 1) == 0) goto LAB_1002b35d8;
          }
          pvVar1 = (void *)((long)pvVar47 + 1);
          if (ppuVar17[2] != (undefined *)0x0) {
            Swift::Hasher::init((__int64)ppuVar17[5]);
            into.unknown = (undefined *)&local_108;
            SVar51.bridgeObject = ppuVar45;
            SVar51.str = (char *)ppuVar40;
            HVar36.unknown = (undefined *)ppuVar45;
            Swift::String::hash(into,SVar51);
            uVar48 = Swift::Hasher::_finalize(into);
            uVar42 = -1L << ((ulong)*(byte *)(ppuVar17 + 4) & 0x3f);
            uVar48 = uVar48 & (uVar42 ^ 0xffffffffffffffff);
            if (((ulong)ppuVar17[(uVar48 >> 6) + 7] >> (uVar48 & 0x3f) & 1) != 0) {
              do {
                    /* WARNING: Load size is inaccurate */
                _Var3.unknown = ppuVar17[6][uVar48 * 0x10];
                _Var4.unknown = *(undefined **)((long)(ppuVar17[6] + uVar48 * 0x10) + 8);
                if (((undefined **)_Var3.unknown == ppuVar40 &&
                     (undefined **)_Var4.unknown == ppuVar45) ||
                   (HVar36.unknown = (undefined *)ppuVar40, param_4 = ppuVar45,
                   bVar8 = Swift::_stringCompareWithSmolCheck
                                     (_Var3,_Var4,(_StringComparisonResult)(__int8)ppuVar40), bVar8)
                   ) {
                  _swift_bridgeObjectRelease(lVar41);
                  _swift_bridgeObjectRelease(ppuVar45);
                  goto joined_r0x0001002b3534;
                }
                uVar48 = uVar48 + 1 & ~uVar42;
              } while (((ulong)ppuVar17[(uVar48 >> 6) + 7] >> (uVar48 & 0x3f) & 1) != 0);
            }
          }
          _swift_bridgeObjectRelease(ppuVar45);
          pcVar37 = local_128;
          pcVar19 = local_128;
          _swift_isUniquelyReferenced_nonNull_native();
          local_c0 = pcVar37;
          if (((ulong)pcVar19 & 1) == 0) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5c0c(0,*(long *)(pcVar37 + 0x10) + 1);
          }
          uVar48 = *(ulong *)(local_c0 + 0x10);
          if (*(ulong *)(local_c0 + 0x18) >> 1 <= uVar48) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5c0c(1 < *(ulong *)(local_c0 + 0x18),uVar48 + 1);
          }
          *(ulong *)(local_c0 + 0x10) = uVar48 + 1;
          *(void **)(local_c0 + uVar48 * 0x10 + 0x20) = pvVar47;
          *(long *)(local_c0 + uVar48 * 0x10 + 0x28) = lVar41;
          local_128 = local_c0;
joined_r0x0001002b3534:
          pvVar47 = pvVar1;
        } while (pvVar1 != local_110);
        _swift_bridgeObjectRelease(ppuVar17);
        pcVar37 = local_128;
        local_108 = local_128;
        _swift_retain(local_128);
        FUN_1002af4a8(&local_108);
        _swift_release(pcVar37);
        lVar38 = local_198;
        pcVar37 = local_108;
        FUN_1001b58ac(local_198);
        param_4 = (undefined **)((ulong)param_4 >> 1);
        uVar48 = (long)param_4 - (long)HVar36.unknown;
        if (SBORROW8((long)param_4,(long)HVar36.unknown)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3fb8);
          (*pcVar7)();
        }
        if (uVar48 == 0) {
          _swift_unknownObjectRelease();
          pcVar19 = PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          local_108 = PTR___swiftEmptyArrayStorage_100524190;
          ppuVar40 = (undefined **)0x0;
          FUN_1001c5be8(0,uVar48 & ((long)uVar48 >> 0x3f ^ 0xffffffffffffffffU));
          if ((long)uVar48 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3fec);
            (*pcVar7)();
          }
          ppuVar17 = (undefined **)HVar36.unknown;
          if ((long)HVar36.unknown <= (long)param_4) {
            ppuVar17 = param_4;
          }
          lVar41 = (long)ppuVar17 - (long)HVar36.unknown;
          pcVar37 = pcVar37 + (long)HVar36.unknown * 0x10;
          HVar36.unknown = (undefined *)ppuVar40;
          do {
            if (lVar41 == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f88);
              (*pcVar7)();
            }
            uVar43 = *(undefined8 *)pcVar37;
            uVar42 = *(ulong *)(local_108 + 0x10);
            if (*(ulong *)(local_108 + 0x18) >> 1 <= uVar42) {
              HVar36.unknown = (undefined *)0x1;
              FUN_1001c5be8(1 < *(ulong *)(local_108 + 0x18),uVar42 + 1);
            }
            pcVar19 = local_108;
            *(ulong *)(local_108 + 0x10) = uVar42 + 1;
            *(undefined8 *)(local_108 + uVar42 * 8 + 0x20) = uVar43;
            lVar41 = lVar41 + -1;
            pcVar37 = pcVar37 + 0x10;
            uVar48 = uVar48 - 1;
          } while (uVar48 != 0);
          _swift_unknownObjectRelease(lVar38);
        }
        pcVar20 = pcVar19;
        FUN_10020ca20();
        _swift_bridgeObjectRelease(pcVar19);
        pvVar47 = (void *)0x0;
        pcVar31 = PTR___swiftEmptyArrayStorage_100524190;
        pcVar37 = local_120;
        do {
          if (*(void **)(pcVar37 + 0x10) <= pvVar47) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b3f84);
            (*pcVar7)();
          }
          uVar43 = *(undefined8 *)(local_118 + (long)pvVar47 * 8);
          pvVar1 = (void *)((long)pvVar47 + 1);
          if (*(long *)(pcVar20 + 0x10) != 0) {
            uVar48 = Swift::Hasher::_hash(*(__int64 *)(pcVar20 + 0x28),(__uint64)pvVar47,HVar36);
            uVar42 = -1L << ((ulong)(byte)pcVar20[0x20] & 0x3f);
            uVar48 = uVar48 & (uVar42 ^ 0xffffffffffffffff);
            if ((*(ulong *)(pcVar20 + (uVar48 >> 6) * 8 + 0x38) >> (uVar48 & 0x3f) & 1) != 0) {
              do {
                if (*(void **)(*(long *)(pcVar20 + 0x30) + uVar48 * 8) == pvVar47)
                goto joined_r0x0001002b3924;
                uVar48 = uVar48 + 1 & ~uVar42;
              } while ((*(ulong *)(pcVar20 + (uVar48 >> 6) * 8 + 0x38) >> (uVar48 & 0x3f) & 1) != 0)
              ;
            }
          }
          _swift_bridgeObjectRetain(uVar43);
          pcVar19 = pcVar31;
          _swift_isUniquelyReferenced_nonNull_native();
          local_108 = pcVar31;
          if (((ulong)pcVar19 & 1) == 0) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5c0c(0,*(long *)(pcVar31 + 0x10) + 1);
            pcVar37 = local_120;
          }
          uVar48 = *(ulong *)(local_108 + 0x10);
          if (*(ulong *)(local_108 + 0x18) >> 1 <= uVar48) {
            HVar36.unknown = (undefined *)0x1;
            FUN_1001c5c0c(1 < *(ulong *)(local_108 + 0x18),uVar48 + 1);
            pcVar37 = local_120;
          }
          *(ulong *)(local_108 + 0x10) = uVar48 + 1;
          *(void **)(local_108 + uVar48 * 0x10 + 0x20) = pvVar47;
          *(undefined8 *)(local_108 + uVar48 * 0x10 + 0x28) = uVar43;
          pcVar31 = local_108;
joined_r0x0001002b3924:
          pvVar47 = pvVar1;
        } while (pvVar1 != local_110);
        _swift_bridgeObjectRelease(pcVar20);
        lVar38 = *(long *)(pcVar31 + 0x10);
        if (lVar38 == 0) {
          _swift_release(pcVar37);
          _swift_release(pcVar31);
          pcVar19 = PTR___swiftEmptyArrayStorage_100524190;
          pcVar37 = local_170;
          uVar42 = local_168;
        }
        else {
          local_108 = PTR___swiftEmptyArrayStorage_100524190;
          FUN_1001c5ba0(0,lVar38,0);
          uVar42 = local_168;
          pcVar37 = local_170;
          lVar41 = 0x28;
          pcVar19 = local_108;
          do {
            uVar43 = *(undefined8 *)(pcVar31 + lVar41);
            uVar48 = *(ulong *)(pcVar19 + 0x10);
            uVar33 = *(ulong *)(pcVar19 + 0x18);
            local_108 = pcVar19;
            _swift_bridgeObjectRetain(uVar43);
            if (uVar33 >> 1 <= uVar48) {
              FUN_1001c5ba0(1 < uVar33,uVar48 + 1,1);
              pcVar19 = local_108;
            }
            *(ulong *)(pcVar19 + 0x10) = uVar48 + 1;
            *(undefined8 *)(pcVar19 + uVar48 * 8 + 0x20) = uVar43;
            lVar41 = lVar41 + 0x10;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          _swift_release(local_120);
          _swift_release(pcVar31);
        }
      }
      puVar39 = local_98;
      lVar38 = *(long *)(pcVar19 + 0x10);
      if ((undefined **)(uVar42 - lVar38) == (undefined **)0x0) {
        _swift_bridgeObjectRelease(pcVar37);
        _swift_bridgeObjectRelease(pcVar19);
      }
      else {
        IVar11 = objc_stub::standardUserDefaults((ID)local_160);
        FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
        pNVar21 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setObject_forKey_(IVar11);
        local_108 = (char *)0x0;
        local_100 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x2b,extraout_x1);
        _swift_bridgeObjectRelease(local_100);
        local_108 = (char *)0x2064656e757250;
        local_100 = (void *)0xe700000000000000;
        local_b0 = (undefined **)(uVar42 - lVar38);
        SVar51 = Swift::CustomStringConvertible::get_description();
        SVar56.bridgeObject = pNVar12;
        SVar56.str = (char *)pNVar21;
        Swift::String::append(SVar51,SVar56);
        _swift_bridgeObjectRelease(SVar51.bridgeObject);
        uVar43 = 0xd000000000000022;
        SVar52.bridgeObject = (void *)0x80000001004e3da0;
        SVar52.str = (char *)0xd000000000000022;
        SVar57.bridgeObject = pNVar12;
        SVar57.str = (char *)pNVar21;
        Swift::String::append(SVar52,SVar57);
        puVar39 = local_100;
        SVar5.bridgeObject = local_100;
        SVar5.str = local_108;
        local_108 = (char *)0x5b;
        local_100 = (undefined *)0xe100000000000000;
        local_b0 = (undefined **)0x4f464e49;
        ppuStack_a8 = (undefined **)0xe400000000000000;
        local_c0 = (char *)0x20;
        uStack_b8 = 0xe100000000000000;
        FUN_100026df4();
        pcVar37 = (char *)0x0;
        puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar51 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_c0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar43,uVar43);
        SVar58.bridgeObject = puVar22;
        SVar58.str = pcVar37;
        Swift::String::append(SVar51,SVar58);
        _swift_bridgeObjectRelease(SVar51.bridgeObject);
        SVar53.bridgeObject = (void *)0xe300000000000000;
        SVar53.str = (char *)0x5b205d;
        SVar59.bridgeObject = puVar22;
        SVar59.str = pcVar37;
        Swift::String::append(SVar53,SVar59);
        SVar54.bridgeObject = (void *)0xe900000000000072;
        SVar54.str = (char *)0x657061706c6c6177;
        SVar60.bridgeObject = puVar22;
        SVar60.str = pcVar37;
        Swift::String::append(SVar54,SVar60);
        SVar55.bridgeObject = (void *)0xe200000000000000;
        SVar55.str = (char *)0x205d;
        SVar61.bridgeObject = puVar22;
        SVar61.str = pcVar37;
        Swift::String::append(SVar55,SVar61);
        local_110 = puVar39;
        SVar62.bridgeObject = puVar22;
        SVar62.str = pcVar37;
        Swift::String::append(SVar5,SVar62);
        puVar39 = local_100;
        pcVar37 = local_108;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar22 = &DAT_100537c00;
        _swift_allocObject(&DAT_100537c00,0x30,7);
        *(char **)(puVar22 + 0x10) = pcVar37;
        *(undefined **)(puVar22 + 0x18) = puVar39;
        *(undefined8 *)(puVar22 + 0x20) = 0;
        *(undefined8 *)(puVar22 + 0x28) = 0xe000000000000000;
        local_e8 = FUN_100099310;
        local_108 = PTR___NSConcreteStackBlock_100521110;
        local_100 = (undefined *)0x42000000;
        local_f8 = FUN_1000c7e7c;
        puStack_f0 = &DAT_100537c18;
        local_e0 = puVar22;
        pvVar47 = __Block_copy(&local_108);
        DVar10.unknown = puVar39;
        _swift_bridgeObjectRetain();
        qos.unknown = local_150.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar10);
        local_b0 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
        puVar23 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar22 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar24 = puVar22;
        FUN_100077ac0();
        puVar25 = local_138;
        lVar38 = local_148;
        Swift::SetAlgebra::_init(local_148,&local_b0,puVar22,puVar24,local_138,puVar23);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar47);
        (**(code **)(local_140 + 8))(lVar38,puVar25);
        (**(code **)(local_190 + 8))(qos.unknown,local_188);
        _swift_release(local_e0);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar22 = local_130;
        puVar25 = local_130;
        FUN_100099338(local_130,&DAT_100558f50);
        lVar38 = local_178;
        puVar44 = local_180;
        puVar26 = local_180;
        (**(code **)(local_178 + 0x10))(local_180,puVar25,puVar22);
        uVar9 = (uint)puVar26;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar27.unknown = puVar39;
        _swift_bridgeObjectRetain();
        pOVar28 = os::Logger::get_logObject(LVar27);
        pOVar29 = pOVar28;
        _os_log_type_enabled(pOVar28,uVar9 & 0xff);
        if ((int)pOVar29 == 0) {
          _swift_bridgeObjectRelease_n(puVar39,2);
        }
        else {
          puVar30 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar31 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar30 = 0x8220102;
          local_108 = pcVar31;
          FUN_10012dbb0(pcVar37,puVar39,&local_108);
          *(char **)(puVar30 + 1) = pcVar37;
          _swift_bridgeObjectRelease_n(puVar39,2);
          __os_log_impl(0x100000000,pOVar28,uVar9 & 0xff,"%{public}s",puVar30,0xc);
          FUN_100043f24(pcVar31);
          _swift_slowDealloc(pcVar31,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar30,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar38 + 8))(puVar44,puVar22);
        _swift_bridgeObjectRelease(pcVar19);
        _swift_bridgeObjectRelease(local_110);
        puVar39 = local_98;
        _swift_bridgeObjectRelease(local_170);
      }
      _swift_bridgeObjectRelease(puVar39);
    }
  }
  return;
}

