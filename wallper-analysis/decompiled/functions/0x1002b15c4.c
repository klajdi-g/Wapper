// rea decompile_all
// name: FUN_1002b15c4
// address: 0x1002b15c4
// body: available
// range: 0x1002b15c4-0x1002b2c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002b2c28) */

undefined8 ****** FUN_1002b15c4(undefined *param_1)

{
  char *pcVar1;
  String *pSVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  code *pcVar8;
  bool bVar9;
  undefined *puVar10;
  ID IVar11;
  NSString *pNVar12;
  ID IVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 *******pppppppuVar18;
  Dictionary<undefined,undefined> DVar19;
  undefined8 uVar20;
  ID *pIVar21;
  UUID UVar22;
  Hasher into;
  ulong uVar23;
  uint uVar24;
  void *pvVar25;
  _StringGuts _Var26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 *****pppppuVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 *******pppppppuVar32;
  undefined8 ***pppuVar33;
  _StringGuts _Var34;
  void *pvVar35;
  undefined8 *******pppppppuVar36;
  undefined8 ******ppppppuVar37;
  long lVar38;
  long lVar39;
  undefined8 ****ppppuVar40;
  ulong *puVar41;
  char *pcVar42;
  undefined8 *puVar43;
  undefined8 ****ppppuVar44;
  double dVar45;
  String SVar46;
  String SVar47;
  ulong uStack_200;
  _CocoaArrayWrapper local_1f8;
  long local_1f0;
  ulong local_1e8;
  ID local_1e0;
  long local_1d8;
  long local_1d0;
  ulong local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 *****local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined8 *local_188;
  _ArrayBuffer local_180;
  undefined8 ******local_178;
  undefined8 *****local_170;
  undefined *local_168;
  ulong *local_160;
  long local_158;
  undefined8 *local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined8 ***local_108;
  ulong local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 **local_e8;
  undefined8 ***local_e0;
  void *pvStack_d8;
  ID local_d0;
  undefined8 ******local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  puVar10 = &DAT_100556960;
  local_180.unknown = param_1;
  FUN_100002f94(&DAT_100556960,&DAT_10042bee0);
  local_138 = *(long *)(puVar10 + -8);
  local_130 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar43 = (undefined8 *)((long)&uStack_200 - extraout_x8);
  puVar10 = &DAT_1005564c8;
  FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
  local_128 = *(long *)(puVar10 + -8);
  local_140 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar29 = (long)puVar43 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar30 = (undefined8 *)(lVar29 - extraout_x12);
  local_150 = puVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)puVar30 - extraout_x12_00;
  local_158 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar41 = (ulong *)(lVar29 - extraout_x12_01);
  puVar10 = &DAT_10055a070;
  FUN_100002f94(&DAT_10055a070,&DAT_10042e040);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar39 = (long)puVar41 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar39 - extraout_x12_02;
  local_1b8 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - extraout_x12_03;
  puVar10 = &DAT_10054a248;
  local_1c0 = lVar29;
  FUN_100002f94(&DAT_10054a248,&DAT_10042aa30);
  local_1a0 = *(long *)(puVar10 + -8);
  local_1a8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a0 + 0x40));
  uVar31 = lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = uVar31;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = uVar31 - extraout_x12_04;
  local_1d8 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - extraout_x12_05;
  local_1d0 = lVar29;
  local_108 = (undefined8 ***)Foundation::UUID::typeMetadataAccessor();
  local_110 = *(long *)((long)local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar29 = lVar29 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100553d90;
  local_118 = lVar29;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_04;
  local_198 = lVar29;
  local_f0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_f8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  local_170 = (undefined8 *****)(lVar29 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  IVar11 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = NSUserDefaults::arrayForKey_(IVar11,pNVar12);
  ppppppuVar37 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
  if (IVar11 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    IVar13 = IVar11;
    FUN_1001f027c();
    _swift_bridgeObjectRelease(IVar11);
    ppppppuVar37 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
    if (IVar13 != 0) {
      local_178 = *(undefined8 *******)(IVar13 + 0x10);
      if ((undefined8 *******)local_178 == (undefined8 *******)0x0) {
        _swift_bridgeObjectRelease(IVar13);
        ppppppuVar37 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        local_1e0 = IVar13;
        IVar11 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        puVar14 = (undefined *)NSUserDefaults::stringArrayForKey_(IVar11,pNVar12);
        puVar10 = PTR___swiftEmptyArrayStorage_100524190;
        if (puVar14 != (undefined *)0x0) {
          (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
          puVar10 = puVar14;
        }
        lVar38 = local_198;
        puVar14 = puVar10;
        FUN_10020c98c();
        local_e8 = (undefined8 **)puVar14;
        _swift_bridgeObjectRelease(puVar10);
        ppppppuVar37 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
        FUN_1000052e8();
        pppppppuVar32 = (undefined8 *******)0x0;
        lVar29 = local_1e0 + 0x20;
        local_120 = local_180.unknown & 0xffffffffffffff8;
        local_1f8.unknown = local_120;
        if ((undefined *)0x7fffffffffffffff < local_180.unknown) {
          local_1f8.unknown = local_180.unknown;
        }
        local_100 = (ulong)local_180.unknown & 0xc000000000000001;
        local_168 = local_180.unknown + 0x20;
        pppppppuVar36 = (undefined8 *******)local_178;
        IVar11 = local_1e0;
        local_1f0 = lVar39;
        local_1b0 = ppppppuVar37;
        local_190 = lVar29;
        local_188 = puVar43;
        local_160 = puVar41;
        do {
          if (*(undefined8 ********)(IVar11 + 0x10) <= pppppppuVar32) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2bf8);
            (*pcVar8)();
          }
          lVar39 = *(long *)(lVar29 + (long)pppppppuVar32 * 8);
          if (*(long *)(lVar39 + 0x10) != 0) {
            _swift_bridgeObjectRetain_n(lVar39,2);
            lVar15 = 0x6c7275;
            uVar31 = 0;
            FUN_10000464c(0x6c7275);
            if ((uVar31 & 1) == 0) {
              _swift_bridgeObjectRelease_n(lVar39,2);
            }
            else {
              FUN_1000280d4(*(long *)(lVar39 + 0x38) + lVar15 * 0x20,&local_c8);
              _swift_bridgeObjectRelease(lVar39);
              ppppuVar44 = &local_e0;
              _swift_dynamicCast(ppppuVar44,&local_c8,PTR___type_metadata_for_Any_100524178 + 8,
                                 PTR___type_metadata_for_Swift_String_100523a98,6);
              pvVar35 = pvStack_d8;
              if (((ulong)ppppuVar44 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar39);
              }
              else {
                Foundation::URL::_init();
                puVar10 = local_f0;
                lVar29 = local_f8;
                _swift_bridgeObjectRelease(pvVar35);
                lVar15 = lVar38;
                (**(code **)(lVar29 + 0x30))(lVar38,1,puVar10);
                if ((int)lVar15 == 1) {
                  _swift_bridgeObjectRelease(lVar39);
                  FUN_10002a29c(lVar38,&DAT_100553d90,&DAT_10041bf10);
                  pppppppuVar36 = (undefined8 *******)local_178;
                  lVar29 = local_190;
                }
                else {
                  (**(code **)(lVar29 + 0x20))(local_170,lVar38,puVar10);
                  ppppuVar44 = (undefined8 ****)0x0;
                  if (*(long *)(lVar39 + 0x10) == 0) {
LAB_1002b1c74:
                    if (*(long *)(lVar39 + 0x10) == 0) goto LAB_1002b1d04;
LAB_1002b1c90:
                    _swift_bridgeObjectRetain(lVar39);
                    lVar29 = 0x44496e6565726373;
                    uVar31 = 0;
                    FUN_10000464c(0x44496e6565726373);
                    if ((uVar31 & 1) == 0) {
                      _swift_bridgeObjectRelease(lVar39);
                      goto LAB_1002b1d04;
                    }
                    FUN_1000280d4(*(long *)(lVar39 + 0x38) + lVar29 * 0x20,&local_c8);
                    _swift_bridgeObjectRelease(lVar39);
                    ppppuVar40 = &local_e0;
                    _swift_dynamicCast(ppppuVar40,&local_c8,
                                       PTR___type_metadata_for_Any_100524178 + 8,
                                       PTR___type_metadata_for_Swift_String_100523a98,6);
                    pvVar35 = pvStack_d8;
                    ppppuVar17 = (undefined8 ****)local_e0;
                    if (((ulong)ppppuVar40 & 1) == 0) goto LAB_1002b1d04;
                  }
                  else {
                    _swift_bridgeObjectRetain(lVar39);
                    lVar29 = 0x416465696c707061;
                    uVar31 = 0;
                    FUN_10000464c(0x416465696c707061);
                    if ((uVar31 & 1) != 0) {
                      FUN_1000280d4(*(long *)(lVar39 + 0x38) + lVar29 * 0x20,&local_c8);
                      _swift_bridgeObjectRelease(lVar39);
                      ppppuVar17 = &local_e0;
                      _swift_dynamicCast(ppppuVar17,&local_c8,
                                         PTR___type_metadata_for_Any_100524178 + 8,
                                         PTR___type_metadata_for_Swift_Double_100523b90,6);
                      if (((ulong)ppppuVar17 & 1) != 0) {
                        ppppuVar44 = (undefined8 ****)local_e0;
                      }
                      goto LAB_1002b1c74;
                    }
                    _swift_bridgeObjectRelease(lVar39);
                    if (*(long *)(lVar39 + 0x10) != 0) goto LAB_1002b1c90;
LAB_1002b1d04:
                    pvVar35 = (void *)0xe000000000000000;
                    ppppuVar17 = (undefined8 ****)0x0;
                  }
                  local_1e8 = (ulong)ppppuVar17 & 0xffffffffffff;
                  if (((ulong)pvVar35 & 0x2000000000000000) != 0) {
                    local_1e8 = (ulong)pvVar35 >> 0x38 & 0xf;
                  }
                  if (local_1e8 == 0) {
                    _swift_bridgeObjectRelease(pvVar35);
                    if (*(long *)(lVar39 + 0x10) != 0) {
                      lVar29 = 0x6e496e6565726373;
                      uVar31 = 0;
                      FUN_10000464c(0x6e496e6565726373);
                      if ((uVar31 & 1) != 0) {
                        FUN_1000280d4(*(long *)(lVar39 + 0x38) + lVar29 * 0x20,&local_c8);
                        _swift_bridgeObjectRelease(lVar39);
                        ppppuVar17 = &local_e0;
                        _Var26.unknown = (undefined *)&local_c8;
                        _swift_dynamicCast(ppppuVar17,_Var26.unknown,
                                           PTR___type_metadata_for_Any_100524178 + 8,
                                           PTR___type_metadata_for_Swift_Int_100523bd8,6);
                        ppppuVar40 = (undefined8 ****)local_e0;
                        puVar43 = local_188;
                        if (((ulong)ppppuVar17 & 1) == 0) {
                          (**(code **)(local_f8 + 8))(local_170,local_f0);
                          pppppppuVar36 = (undefined8 *******)local_178;
                          lVar29 = local_190;
                        }
                        else {
                          if ((ulong)local_180.unknown >> 0x3e == 0) {
                            ppppuVar17 = *(undefined8 *****)(local_120 + 0x10);
                            puVar10 = local_f0;
                          }
                          else {
                            ppppuVar17 = (undefined8 ****)
                                         Swift::_CocoaArrayWrapper::get_endIndex(local_1f8);
                            lVar38 = local_198;
                            puVar43 = local_188;
                            puVar41 = local_160;
                            puVar10 = local_f0;
                            if ((long)ppppuVar17 < 0) {
                    /* WARNING: Does not return */
                              pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c18);
                              (*pcVar8)();
                            }
                          }
                          local_188 = puVar43;
                          local_f0 = puVar10;
                          if (((long)ppppuVar40 < 0) || (ppppuVar17 <= ppppuVar40)) {
LAB_1002b257c:
                            (**(code **)(local_f8 + 8))(local_170,puVar10);
                            pppppppuVar36 = (undefined8 *******)local_178;
                            lVar29 = local_190;
                            IVar11 = local_1e0;
                          }
                          else {
LAB_1002b20b0:
                            puVar10 = local_f0;
                            puVar43 = local_188;
                            if (((undefined8 *****)local_1b0[2] != (undefined8 *****)0x0) &&
                               (ppppuVar17 = ppppuVar40, FUN_1000046b0(ppppuVar40),
                               lVar29 = local_1d8, ((ulong)_Var26.unknown & 1) != 0)) {
                              FUN_1000087e4((undefined8 *****)
                                            ((long)local_1b0[7] +
                                            *(long *)(local_1a0 + 0x48) * (long)ppppuVar17),
                                            local_1d8,&DAT_10054a248,&DAT_10042aa30);
                              lVar39 = local_1d0;
                              FUN_100007e1c(lVar29,local_1d0,&DAT_10054a248,&DAT_10042aa30);
                              bVar3 = *(byte *)(lVar39 + *(int *)(local_1a8 + 0x40));
                              if ((local_1e8 == 0) || ((bVar3 & 1) != 0)) {
                                bVar9 = local_1e8 != 0;
                                dVar45 = *(double *)(local_1d0 + *(int *)(local_1a8 + 0x30));
                                FUN_10002a29c(local_1d0,&DAT_10054a248,&DAT_10042aa30);
                                if ((((bVar9 ^ (bVar9 | bVar3)) & 1) != 0) ||
                                   ((double)ppppuVar44 <= dVar45)) goto LAB_1002b257c;
                              }
                              else {
                                FUN_10002a29c(local_1d0,&DAT_10054a248,&DAT_10042aa30);
                              }
                            }
                            puVar14 = local_1a8;
                            lVar29 = local_1c0;
                            bVar9 = local_1e8 != 0;
                            iVar4 = *(int *)(local_1a8 + 0x30);
                            iVar5 = *(int *)(local_1a8 + 0x40);
                            (**(code **)(local_f8 + 0x10))(local_1c0,local_170,puVar10);
                            lVar38 = local_1a0;
                            *(undefined8 *****)(lVar29 + iVar4) = ppppuVar44;
                            *(bool *)(lVar29 + iVar5) = bVar9;
                            pcVar8 = *(code **)(local_1a0 + 0x38);
                            (*pcVar8)(lVar29,0,1,puVar14);
                            lVar39 = local_1b8;
                            uVar31 = 0;
                            FUN_100007e1c(lVar29,local_1b8,&DAT_10055a070,&DAT_10042e040);
                            lVar29 = lVar39;
                            (**(code **)(lVar38 + 0x30))(lVar39,1,puVar14);
                            if ((int)lVar29 == 1) {
                              FUN_10002a29c(lVar39,&DAT_10055a070,&DAT_10042e040);
                              pppppuVar27 = local_1b0;
                              FUN_1000046b0(ppppuVar40);
                              if ((uVar31 & 1) == 0) {
                                (**(code **)(local_f8 + 8))(local_170,local_f0);
                                uVar20 = 1;
                                lVar29 = local_1f0;
                                IVar11 = local_1e0;
                              }
                              else {
                                ppppppuVar37 = (undefined8 ******)pppppuVar27;
                                _swift_isUniquelyReferenced_nonNull_native();
                                IVar11 = local_1e0;
                                lVar29 = local_1f0;
                                local_c8 = (undefined8 ******)pppppuVar27;
                                if ((int)ppppppuVar37 == 0) {
                                  FUN_1001cad04();
                                }
                                ppppppuVar37 = local_c8;
                                FUN_100007e1c((undefined8 *****)
                                              ((long)local_c8[7] +
                                              *(long *)(local_1a0 + 0x48) * (long)ppppuVar40),lVar29
                                              ,&DAT_10054a248,&DAT_10042aa30);
                                local_1b0 = ppppppuVar37;
                                FUN_1001d1c1c(ppppuVar40,ppppppuVar37);
                                (**(code **)(local_f8 + 8))(local_170,local_f0);
                                uVar20 = 0;
                              }
                              (*pcVar8)(lVar29,uVar20,1,local_1a8);
                              FUN_10002a29c(lVar29,&DAT_10055a070,&DAT_10042e040);
                              pppppppuVar36 = (undefined8 *******)local_178;
                              lVar29 = local_190;
                              lVar38 = local_198;
                            }
                            else {
                              uVar31 = local_1c8;
                              FUN_100007e1c(lVar39,local_1c8,&DAT_10054a248,&DAT_10042aa30);
                              pppppuVar27 = local_1b0;
                              ppppppuVar37 = (undefined8 ******)local_1b0;
                              _swift_isUniquelyReferenced_nonNull_native();
                              uVar24 = (uint)ppppppuVar37;
                              local_c8 = (undefined8 ******)pppppuVar27;
                              ppppuVar44 = ppppuVar40;
                              FUN_1000046b0();
                              lVar38 = local_198;
                              uVar23 = (ulong)~(uint)uVar31 & 1;
                              lVar29 = (long)pppppuVar27[2] + uVar23;
                              if (SCARRY8((long)pppppuVar27[2],uVar23)) {
                    /* WARNING: Does not return */
                                pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c10);
                                (*pcVar8)();
                              }
                              if ((long)pppppuVar27[3] < lVar29) {
                                FUN_1001cd678(lVar29);
                                ppppuVar44 = ppppuVar40;
                                FUN_1000046b0();
                                if (((uint)uVar31 & 1) != (uVar24 & 1)) {
                                  Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c28);
                                  (*pcVar8)();
                                }
                              }
                              else if (((ulong)ppppppuVar37 & 1) == 0) {
                                FUN_1001cad04();
                              }
                              ppppppuVar37 = local_c8;
                              puVar41 = local_160;
                              local_1b0 = local_c8;
                              if ((uVar31 & 1) == 0) {
                                local_c8[((ulong)ppppuVar44 >> 6) + 8] =
                                     (undefined8 *****)
                                     ((ulong)local_c8[((ulong)ppppuVar44 >> 6) + 8] |
                                     1L << ((ulong)ppppuVar44 & 0x3f));
                                local_c8[6][(long)ppppuVar44] = ppppuVar40;
                                FUN_100007e1c(local_1c8,
                                              (undefined8 *****)
                                              ((long)local_c8[7] +
                                              *(long *)(local_1a0 + 0x48) * (long)ppppuVar44),
                                              &DAT_10054a248,&DAT_10042aa30);
                                (**(code **)(local_f8 + 8))(local_170,local_f0);
                                pppppuVar27 = ppppppuVar37[2];
                                if (SCARRY8((long)pppppuVar27,1)) {
                    /* WARNING: Does not return */
                                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c14);
                                  (*pcVar8)();
                                }
                                ppppppuVar37[2] = (undefined8 *****)((long)pppppuVar27 + 1);
                                pppppppuVar36 = (undefined8 *******)local_178;
                                lVar29 = local_190;
                                IVar11 = local_1e0;
                              }
                              else {
                                FUN_1002b2c34(local_1c8,
                                              (undefined8 *****)
                                              ((long)local_c8[7] +
                                              *(long *)(local_1a0 + 0x48) * (long)ppppuVar44));
                                (**(code **)(local_f8 + 8))(local_170,local_f0);
                                pppppppuVar36 = (undefined8 *******)local_178;
                                lVar29 = local_190;
                                IVar11 = local_1e0;
                              }
                            }
                          }
                        }
                        goto LAB_1002b1af8;
                      }
                    }
                    _swift_bridgeObjectRelease(lVar39);
                    (**(code **)(local_f8 + 8))(local_170,local_f0);
                    pppppppuVar36 = (undefined8 *******)local_178;
                    lVar29 = local_190;
                    puVar43 = local_188;
                  }
                  else {
                    _swift_bridgeObjectRelease(lVar39);
                    if ((ulong)local_180.unknown >> 0x3e == 0) {
                      pcVar42 = *(char **)(local_120 + 0x10);
                    }
                    else {
                      pcVar42 = (char *)Swift::_CocoaArrayWrapper::get_endIndex(local_1f8);
                    }
                    if (pcVar42 != (char *)0x0) {
                      ppppuVar40 = (undefined8 ****)0x0;
                      do {
                        if (local_100 == 0) {
                          if (*(undefined8 *****)(local_120 + 0x10) <= ppppuVar40) {
                    /* WARNING: Does not return */
                            pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c0c);
                            (*pcVar8)();
                          }
                          ppppuVar16 = *(undefined8 *****)
                                        (local_180.unknown + (long)ppppuVar40 * 8 + 0x20);
                        }
                        else {
                          ppppuVar16 = ppppuVar40;
                          Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppppuVar40,local_180);
                        }
                        objc_stub::deviceDescription((ID)ppppuVar16);
                        FUN_100008054(0);
                        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,
                                      &TargetProtocolConformanceDescriptor_10041b40c);
                        DVar19 = (extension_Foundation)::Swift::Dictionary::
                                 __unconditionallyBridgeFromObjectiveC();
                        uVar31 = 0;
                        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                        if ((*(long *)(DVar19.unknown + 0x10) == 0) ||
                           (thunk_FUN_1000046e0(pNVar12), (uVar31 & 1) == 0)) {
                          _swift_bridgeObjectRelease(DVar19.unknown);
LAB_1002b1ed8:
                          lVar29 = local_118;
                          UVar22 = Foundation::UUID::init();
                          SVar46 = Foundation::UUID::get_uuidString(UVar22);
                          pvVar25 = SVar46.bridgeObject;
                          pppuVar33 = local_108;
                          (**(code **)(local_110 + 8))(lVar29);
                          SVar47.bridgeObject = pppuVar33;
                          SVar47.str = SVar46.str;
                          if ((undefined8 ****)SVar46.str != ppppuVar17) goto LAB_1002b1f18;
LAB_1002b1f10:
                          _Var26.unknown = SVar47.bridgeObject;
                          SVar46.bridgeObject = pvVar25;
                          SVar46.str = SVar47.str;
                          if (pvVar25 != pvVar35) goto LAB_1002b1f18;
                          _swift_bridgeObjectRelease(pvVar35);
                          pvVar35 = pvVar25;
LAB_1002b208c:
                          _swift_bridgeObjectRelease(pvVar35);
                          puVar41 = local_160;
                          goto LAB_1002b20b0;
                        }
                        FUN_1000280d4(*(long *)(DVar19.unknown + 0x38) + (long)pNVar12 * 0x20,
                                      &local_c8);
                        _swift_bridgeObjectRelease(DVar19.unknown);
                        uVar20 = 0;
                        FUN_100028110(0);
                        ppppuVar16 = &local_e0;
                        _swift_dynamicCast(ppppuVar16,&local_c8,
                                           PTR___type_metadata_for_Any_100524178 + 8,uVar20,6);
                        if (((ulong)ppppuVar16 & 1) == 0) goto LAB_1002b1ed8;
                        objc_stub::stringValue((ID)local_e0);
                        SVar47 = (extension_Foundation)::Swift::String::
                                 __unconditionallyBridgeFromObjectiveC();
                        pvVar25 = SVar47.bridgeObject;
                        SVar46 = SVar47;
                        if ((undefined8 ****)SVar47.str == ppppuVar17) goto LAB_1002b1f10;
LAB_1002b1f18:
                        _Var34.unknown = SVar46.bridgeObject;
                        _Var26.unknown = _Var34.unknown;
                        bVar9 = Swift::_stringCompareWithSmolCheck
                                          ((_StringGuts)SVar46.str,_Var34,
                                           (_StringComparisonResult)(__int8)ppppuVar17);
                        _swift_bridgeObjectRelease(_Var34.unknown);
                        if (bVar9) goto LAB_1002b208c;
                        pcVar1 = (char *)((long)ppppuVar40 + 1);
                        if (SCARRY8((long)ppppuVar40,1)) {
                    /* WARNING: Does not return */
                          pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c08);
                          (*pcVar8)();
                        }
                        ppppuVar40 = (undefined8 ****)((long)ppppuVar40 + 1);
                      } while (pcVar1 != pcVar42);
                    }
                    _swift_bridgeObjectRelease(pvVar35);
                    (**(code **)(local_f8 + 8))(local_170,local_f0);
                    pppppppuVar36 = (undefined8 *******)local_178;
                    lVar29 = local_190;
                    IVar11 = local_1e0;
                    puVar41 = local_160;
                    puVar43 = local_188;
                  }
                }
              }
            }
          }
LAB_1002b1af8:
          pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
        } while (pppppppuVar32 != pppppppuVar36);
        _swift_bridgeObjectRelease(IVar11);
        pppppuVar27 = local_1b0;
        pppppppuVar36 = (undefined8 *******)local_1b0[2];
        pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100524190;
        if (pppppppuVar36 != (undefined8 *******)0x0) {
          _swift_bridgeObjectRetain(local_1b0);
          pppppppuVar32 = pppppppuVar36;
          FUN_1001c58a4(pppppppuVar36,0);
          pppppppuVar18 = &local_c8;
          FUN_1001aaa78(pppppppuVar18,
                        (undefined *)
                        ((long)pppppppuVar32 +
                        ((ulong)*(byte *)(local_128 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(local_128 + 0x50) ^ 0xffffffffffffffff))),pppppppuVar36,
                        pppppuVar27);
          FUN_10002f6ec(local_c8,uStack_c0,local_b8,uStack_b0,local_a8);
          if (pppppppuVar18 != pppppppuVar36) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2610);
            (*pcVar8)();
          }
        }
        local_c8 = pppppppuVar32;
        FUN_1002af380(&local_c8);
        ppuVar6 = local_e8;
        local_170 = local_c8[2];
        pppppppuVar32 = (undefined8 *******)local_c8;
        ppppuVar44 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100524190;
        if ((undefined8 ******)local_170 != (undefined8 ******)0x0) {
          ppppppuVar37 = (undefined8 ******)0x0;
          local_178 = local_c8;
          do {
            if (local_178[2] <= ppppppuVar37) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2bfc);
              (*pcVar8)();
            }
            uVar31 = (ulong)*(byte *)(local_128 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(local_128 + 0x50) ^ 0xffffffffffffffff);
            lVar29 = *(long *)(local_128 + 0x48);
            FUN_1000087e4((undefined *)((long)local_178 + lVar29 * (long)ppppppuVar37 + uVar31),
                          puVar41,&DAT_1005564c8,&DAT_10042a380);
            IVar11 = *puVar41;
            if (local_100 == 0) {
              if ((long)IVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c00);
                (*pcVar8)();
              }
              if (*(ulong *)(local_120 + 0x10) <= IVar11) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1002b2c04);
                (*pcVar8)();
              }
              IVar11 = *(ID *)(local_168 + IVar11 * 8);
            }
            else {
              Swift::_ArrayBuffer::__getElementSlowPath(IVar11,local_180);
            }
            objc_stub::deviceDescription(IVar11);
            FUN_100008054(0);
            FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,
                          &TargetProtocolConformanceDescriptor_10041b40c);
            DVar19 = (extension_Foundation)::Swift::Dictionary::
                     __unconditionallyBridgeFromObjectiveC();
            uVar23 = 0;
            pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            if ((*(long *)(DVar19.unknown + 0x10) == 0) ||
               (thunk_FUN_1000046e0(pNVar12), (uVar23 & 1) == 0)) {
              _swift_bridgeObjectRelease(DVar19.unknown);
LAB_1002b286c:
              lVar39 = local_118;
              UVar22 = Foundation::UUID::init();
              SVar47 = Foundation::UUID::get_uuidString(UVar22);
              (**(code **)(local_110 + 8))(lVar39,local_108);
            }
            else {
              FUN_1000280d4(*(long *)(DVar19.unknown + 0x38) + (long)pNVar12 * 0x20,&local_c8);
              _swift_bridgeObjectRelease(DVar19.unknown);
              uVar20 = 0;
              FUN_100028110(0);
              pIVar21 = &local_d0;
              _swift_dynamicCast(pIVar21,&local_c8,PTR___type_metadata_for_Any_100524178 + 8,uVar20,
                                 6);
              if (((ulong)pIVar21 & 1) == 0) goto LAB_1002b286c;
              objc_stub::stringValue(local_d0);
              SVar47 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              puVar43 = local_188;
            }
            ppuVar7 = local_e8;
            if (*(long *)((long)local_e8 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)((long)local_e8 + 0x28));
              into.unknown = (undefined *)&local_c8;
              Swift::String::hash(into,SVar47);
              uVar23 = Swift::Hasher::_finalize(into);
              uVar28 = -1L << ((ulong)*(byte *)((long)ppuVar7 + 0x20) & 0x3f);
              uVar23 = uVar23 & (uVar28 ^ 0xffffffffffffffff);
              if ((*(ulong *)((long)ppuVar6 + (uVar23 >> 6) * 8 + 0x38) >> (uVar23 & 0x3f) & 1) != 0
                 ) {
                do {
                  pSVar2 = (String *)(*(long *)((long)local_e8 + 0x30) + uVar23 * 0x10);
                  if ((SVar47 == *pSVar2) ||
                     (bVar9 = Swift::_stringCompareWithSmolCheck
                                        ((_StringGuts)pSVar2->str,(_StringGuts)pSVar2->bridgeObject,
                                         (_StringComparisonResult)(__int8)SVar47.str), bVar9)) {
                    _swift_bridgeObjectRelease(SVar47.bridgeObject);
                    puVar41 = local_160;
                    FUN_10002a29c(local_160,&DAT_1005564c8,&DAT_10042a380);
                    goto LAB_1002b2694;
                  }
                  uVar23 = uVar23 + 1 & ~uVar28;
                } while ((*(ulong *)((long)ppuVar6 + (uVar23 >> 6) * 8 + 0x38) >> (uVar23 & 0x3f) &
                         1) != 0);
              }
            }
            _swift_bridgeObjectRelease(SVar47.bridgeObject);
            ppppuVar17 = ppppuVar44;
            _swift_isUniquelyReferenced_nonNull_native();
            local_e0 = ppppuVar44;
            if (((ulong)ppppuVar17 & 1) == 0) {
              FUN_1001c5b84(0,(long)ppppuVar44[2] + 1,1);
            }
            pppuVar33 = (undefined8 ***)local_e0[2];
            if ((undefined8 ***)((ulong)local_e0[3] >> 1) <= pppuVar33) {
              FUN_1001c5b84((undefined8 ***)0x1 < local_e0[3],(undefined8 ***)((long)pppuVar33 + 1U)
                            ,1);
            }
            ppppuVar44 = (undefined8 ****)local_e0;
            puVar41 = local_160;
            local_e0[2] = (undefined8 ***)((long)pppuVar33 + 1U);
            FUN_100007e1c(local_160,(char *)((long)local_e0 + (long)pppuVar33 * lVar29 + uVar31),
                          &DAT_1005564c8,&DAT_10042a380);
LAB_1002b2694:
            ppppppuVar37 = (undefined8 ******)((long)ppppppuVar37 + 1);
            pppppppuVar32 = (undefined8 *******)local_178;
          } while (ppppppuVar37 != (undefined8 ******)local_170);
        }
        _swift_bridgeObjectRelease(local_e8);
        _swift_release(pppppppuVar32);
        pppuVar33 = ppppuVar44[2];
        if (pppuVar33 == (undefined8 ***)0x0) {
          _swift_bridgeObjectRelease(local_1b0);
          _swift_release(ppppuVar44);
          ppppppuVar37 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          local_c8 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100524190;
          FUN_1001c5b68(0,pppuVar33,0);
          pcVar42 = (char *)((long)ppppuVar44 +
                            ((ulong)*(byte *)(local_128 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_128 + 0x50) ^ 0xffffffffffffffff)));
          local_100 = *(long *)(local_128 + 0x48);
          ppppppuVar37 = local_c8;
          local_108 = ppppuVar44;
          do {
            lVar29 = local_158;
            local_e8 = pppuVar33;
            FUN_1000087e4(pcVar42,local_158,&DAT_1005564c8,&DAT_10042a380);
            puVar30 = local_150;
            iVar4 = *(int *)(local_130 + 0x30);
            FUN_1000087e4(lVar29,local_150,&DAT_1005564c8,&DAT_10042a380);
            puVar10 = local_140;
            iVar5 = *(int *)(local_140 + 0x30);
            *puVar43 = *puVar30;
            lVar39 = local_148;
            FUN_100007e1c(lVar29,local_148,&DAT_1005564c8,&DAT_10042a380);
            puVar14 = local_f0;
            lVar29 = local_f8;
            (**(code **)(local_f8 + 0x20))
                      ((long)puVar43 + (long)iVar4,lVar39 + *(int *)(puVar10 + 0x30),local_f0);
            (**(code **)(lVar29 + 8))((long)puVar30 + (long)iVar5,puVar14);
            pppppuVar27 = ppppppuVar37[2];
            local_c8 = ppppppuVar37;
            if ((undefined8 *****)((ulong)ppppppuVar37[3] >> 1) <= pppppuVar27) {
              FUN_1001c5b68((undefined8 *****)0x1 < ppppppuVar37[3],
                            (undefined8 *****)((long)pppppuVar27 + 1U),1);
            }
            ppppppuVar37 = local_c8;
            local_c8[2] = (undefined8 *****)((long)pppppuVar27 + 1U);
            FUN_100007e1c(puVar43,(undefined *)
                                  ((long)local_c8 +
                                  *(long *)(local_138 + 0x48) * (long)pppppuVar27 +
                                  ((ulong)*(byte *)(local_138 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(local_138 + 0x50) ^ 0xffffffffffffffff))),
                          &DAT_100556960,&DAT_10042bee0);
            pcVar42 = pcVar42 + local_100;
            pppuVar33 = (undefined8 ***)((long)local_e8 + -1);
          } while (pppuVar33 != (undefined8 ***)0x0);
          _swift_bridgeObjectRelease(local_1b0);
          _swift_release(local_108);
        }
      }
    }
  }
  return ppppppuVar37;
}

