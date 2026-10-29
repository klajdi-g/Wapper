// rea decompile_all
// name: FUN_10021830c
// address: 0x10021830c
// body: available
// range: 0x10021830c-0x100218f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021899c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_10021830c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  URL UVar5;
  Date DVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  URL UVar10;
  undefined *puVar11;
  __int64 _Var12;
  Date DVar13;
  _StringGuts _Var14;
  char *pcVar15;
  undefined *puVar16;
  long extraout_x8;
  undefined *puVar17;
  long extraout_x8_00;
  undefined *puVar18;
  long lVar19;
  long extraout_x8_01;
  long lVar20;
  long lVar21;
  long extraout_x8_02;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  void *pvVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar27;
  long unaff_x20;
  long lVar28;
  code *pcVar29;
  undefined *puVar30;
  _StringGuts _Var31;
  ulong uVar32;
  ulong uVar33;
  _StringGuts _Var34;
  ulong uVar35;
  char *pcVar36;
  ulong uVar37;
  undefined *puVar38;
  code *pcVar39;
  long lVar40;
  double dVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  undefined *apuStack_130 [2];
  long local_120;
  void *local_118;
  long local_110;
  undefined *local_90;
  undefined *local_88;
  
  puVar4 = &DAT_100553d90;
  apuStack_130[1] = param_2;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar38 = (undefined *)((long)apuStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = puVar38 + -extraout_x12;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar28 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  puVar24 = puVar17 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = puVar24 + -extraout_x12_00;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)puVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100556908;
  FUN_100002f94(&DAT_100556908,&DAT_10042a888);
  lVar21 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  puVar25 = (undefined8 *)(lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = (long)puVar25 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pvVar26 = (void *)(((long)puVar25 - extraout_x12_01) - extraout_x12_02);
  local_118 = pvVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar40 = _TtC7Wallper19ShuffleQueueManager::ownApplies;
  puVar22 = (undefined *)((long)pvVar26 - extraout_x12_03);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::ownApplies,&local_90,0x21,0);
  local_110 = lVar40;
  uVar35 = *(ulong *)(unaff_x20 + lVar40);
  uVar23 = *(ulong *)(uVar35 + 0x10);
  if (uVar23 == 0) {
    uVar33 = 0;
    uVar32 = 0;
  }
  else {
    uVar33 = 0;
    do {
      if (*(ulong *)(uVar35 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
        pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f50);
        (*pcVar39)();
      }
      uVar37 = (ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff);
      lVar40 = *(long *)(lVar21 + 0x48);
      DVar13.unknown = puVar22;
      FUN_1000087e4(uVar35 + uVar37 + lVar40 * uVar33,puVar22,&DAT_100556908,&DAT_10042a888);
      Foundation::Date::init();
      dVar41 = Foundation::Date::timeIntervalSince((Date)(puVar22 + *(int *)(puVar4 + 0x30)),DVar13)
      ;
      pcVar39 = *(code **)(lVar19 + 8);
      (*pcVar39)(lVar20,DVar6.unknown);
      FUN_10002a29c(puVar22,&DAT_100556908,&DAT_10042a888);
      uVar32 = uVar33 + 1;
      if (15.0 <= dVar41) {
        uVar23 = *(ulong *)(uVar35 + 0x10);
        if (uVar23 - 1 != uVar33) {
          lVar27 = uVar37 + lVar40 * uVar32;
          do {
            if (uVar23 <= uVar32) {
                    /* WARNING: Does not return */
              pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f58);
              (*pcVar39)();
            }
            DVar13.unknown = puVar22;
            FUN_1000087e4(uVar35 + lVar27,puVar22,&DAT_100556908,&DAT_10042a888);
            Foundation::Date::init();
            dVar41 = Foundation::Date::timeIntervalSince
                               ((Date)(puVar22 + *(int *)(puVar4 + 0x30)),DVar13);
            (*pcVar39)(lVar20,DVar6.unknown);
            FUN_10002a29c(puVar22,&DAT_100556908,&DAT_10042a888);
            if (dVar41 < 15.0) {
              if (uVar32 != uVar33) {
                if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f5c);
                  (*pcVar39)();
                }
                uVar23 = *(ulong *)(uVar35 + 0x10);
                if (uVar23 <= uVar33) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f60);
                  (*pcVar39)();
                }
                FUN_1000087e4(uVar35 + uVar37 + uVar33 * lVar40,local_118,&DAT_100556908,
                              &DAT_10042a888);
                if (uVar23 <= uVar32) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f64);
                  (*pcVar39)();
                }
                FUN_1000087e4(uVar35 + lVar27,local_120,&DAT_100556908,&DAT_10042a888);
                uVar23 = uVar35;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(unaff_x20 + local_110) = uVar35;
                if ((uVar23 & 1) == 0) {
                  FUN_100287314();
                  *(ulong *)(unaff_x20 + local_110) = uVar35;
                }
                if (*(ulong *)(uVar35 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f68);
                  (*pcVar39)();
                }
                FUN_10022a4c0(local_120,uVar35 + uVar37 + uVar33 * lVar40);
                lVar2 = local_110;
                *(ulong *)(unaff_x20 + local_110) = uVar35;
                if (*(ulong *)(uVar35 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f6c);
                  (*pcVar39)();
                }
                FUN_10022a4c0(local_118,uVar35 + lVar27);
                *(ulong *)(unaff_x20 + lVar2) = uVar35;
              }
              uVar33 = uVar33 + 1;
            }
            uVar32 = uVar32 + 1;
            uVar23 = *(ulong *)(uVar35 + 0x10);
            lVar27 = lVar27 + lVar40;
          } while (uVar32 != uVar23);
          if ((long)uVar32 < (long)uVar33) {
                    /* WARNING: Does not return */
            pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f70);
            (*pcVar39)();
          }
        }
        goto LAB_1002187d4;
      }
      uVar33 = uVar32;
    } while (uVar23 != uVar32);
    uVar32 = *(ulong *)(uVar35 + 0x10);
    uVar33 = uVar32;
  }
LAB_1002187d4:
  lVar40 = local_110;
  FUN_100288ab4(uVar33,uVar32);
  _swift_endAccess(&local_90);
  puVar7 = *(undefined **)(unaff_x20 + lVar40);
  uVar35 = *(ulong *)(puVar7 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar35 != 0) {
    uVar23 = 0;
    local_118 = (void *)0x80000001004dbf90;
    puVar30 = apuStack_130[1];
    do {
      if (*(ulong *)(puVar7 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar39 = (code *)SoftwareBreakpoint(1,0x100218f54);
        (*pcVar39)();
      }
      puVar16 = &DAT_10042a888;
      FUN_1000087e4(puVar7 + *(long *)(lVar21 + 0x48) * uVar23 +
                             ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff)),puVar25,
                    &DAT_100556908);
      _Var34.unknown = (undefined *)*puVar25;
      puVar1 = (undefined *)puVar25[1];
      _swift_bridgeObjectRetain(puVar1);
      Foundation::URL::_init();
      pcVar39 = *(code **)(lVar28 + 0x30);
      puVar8 = puVar17;
      (*pcVar39)(puVar17,1,UVar5.unknown);
      _Var31.unknown = puVar1;
      if ((int)puVar8 == 1) {
        FUN_10002a29c(puVar17,&DAT_100553d90,&DAT_10041bf10);
      }
      else {
        _Var9.unknown = puVar18;
        UVar10.unknown = puVar17;
        (**(code **)(lVar28 + 0x20))(puVar18,puVar17,UVar5.unknown);
        Foundation::URL::_get_scheme((URL)_Var9.unknown);
        if (UVar10.unknown == (undefined *)0x0) {
LAB_100218a4c:
          (**(code **)(lVar28 + 8))(puVar18,UVar5.unknown);
        }
        else {
          _Var14.unknown = UVar10.unknown;
          if ((_Var9.unknown == (undefined *)0x7463617265746e69) &&
             (UVar10.unknown == (undefined *)0xeb00000000657669)) {
            _swift_bridgeObjectRelease();
          }
          else {
            puVar16 = (undefined *)0xeb00000000657669;
            bVar3 = Swift::_stringCompareWithSmolCheck
                              (_Var9,(_StringGuts)UVar10.unknown,(_StringComparisonResult)0x69);
            _swift_bridgeObjectRelease();
            if (!bVar3) goto LAB_100218a4c;
          }
          Foundation::URL::_get_host(UVar10);
          puVar8 = (undefined *)0x0;
          if (_Var14.unknown != (char *)0x0) {
            puVar8 = UVar10.unknown;
          }
          pcVar36 = (char *)0xe000000000000000;
          if (_Var14.unknown != (char *)0x0) {
            pcVar36 = _Var14.unknown;
          }
          FUN_100002f94(&DAT_10054d050,&DAT_100426b30);
          _swift_initStaticObject();
          pcVar15 = pcVar36;
          _Var12 = Swift::_findStringSwitchCase(UVar10.unknown,puVar8);
          _swift_bridgeObjectRelease(pcVar36);
          if (_Var12 < 3) {
            if (_Var12 == 0) {
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xef61726f7275612d;
            }
            else {
              if (_Var12 == 1) {
                uVar32 = 0x65736e75732d;
                goto LAB_100218ae8;
              }
              if (_Var12 != 2) goto LAB_100218a4c;
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xee006e6165636f2d;
            }
          }
          else if (_Var12 < 5) {
            if (_Var12 == 3) {
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xed00006e6f656e2d;
            }
            else {
              if (_Var12 != 4) goto LAB_100218a4c;
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xee007265626d652d;
            }
          }
          else if (_Var12 == 5) {
            uVar32 = 0x7365726f662d;
LAB_100218ae8:
            pcVar36 = (char *)0x746e656964617267;
            pvVar26 = (void *)(uVar32 | 0xef74000000000000);
          }
          else {
            if (_Var12 != 6) goto LAB_100218a4c;
            pcVar36 = (char *)0xd000000000000011;
            pvVar26 = local_118;
          }
          _swift_bridgeObjectRelease(puVar1);
          local_90 = (undefined *)0x7463617265746e69;
          local_88 = (undefined *)0xec0000002d657669;
          SVar42.bridgeObject = pvVar26;
          SVar42.str = pcVar36;
          SVar44.bridgeObject = puVar16;
          SVar44.str = pcVar15;
          Swift::String::append(SVar42,SVar44);
          _swift_bridgeObjectRelease(pvVar26);
          _Var31.unknown = local_88;
          _Var34.unknown = local_90;
          (**(code **)(lVar28 + 8))(puVar18,UVar5.unknown);
        }
      }
      _swift_bridgeObjectRelease(puVar1);
      pcVar29 = *(code **)(lVar19 + 8);
      (*pcVar29)((long)puVar25 + (long)*(int *)(puVar4 + 0x30),DVar6.unknown);
      _swift_bridgeObjectRetain(puVar30);
      Foundation::URL::_init();
      puVar11 = puVar38;
      (*pcVar39)(puVar38,1,UVar5.unknown);
      puVar8 = param_1;
      puVar1 = puVar30;
      if ((int)puVar11 == 1) {
        FUN_10002a29c(puVar38,&DAT_100553d90,&DAT_10041bf10);
      }
      else {
        _Var9.unknown = puVar24;
        UVar10.unknown = puVar38;
        (**(code **)(lVar28 + 0x20))(puVar24,puVar38,UVar5.unknown);
        Foundation::URL::_get_scheme((URL)_Var9.unknown);
        if (UVar10.unknown == (undefined *)0x0) {
LAB_100218d40:
          (**(code **)(lVar28 + 8))(puVar24,UVar5.unknown);
        }
        else {
          _Var14.unknown = UVar10.unknown;
          if ((_Var9.unknown == (undefined *)0x7463617265746e69) &&
             (UVar10.unknown == (undefined *)0xeb00000000657669)) {
            _swift_bridgeObjectRelease();
          }
          else {
            puVar16 = (undefined *)0xeb00000000657669;
            bVar3 = Swift::_stringCompareWithSmolCheck
                              (_Var9,(_StringGuts)UVar10.unknown,(_StringComparisonResult)0x69);
            _swift_bridgeObjectRelease();
            if (!bVar3) goto LAB_100218d40;
          }
          Foundation::URL::_get_host(UVar10);
          puVar11 = (undefined *)0x0;
          if (_Var14.unknown != (char *)0x0) {
            puVar11 = UVar10.unknown;
          }
          pcVar36 = (char *)0xe000000000000000;
          if (_Var14.unknown != (char *)0x0) {
            pcVar36 = _Var14.unknown;
          }
          FUN_100002f94(&DAT_10054d050,&DAT_100426b30);
          _swift_initStaticObject();
          pcVar15 = pcVar36;
          _Var12 = Swift::_findStringSwitchCase(UVar10.unknown,puVar11);
          _swift_bridgeObjectRelease(pcVar36);
          if (_Var12 < 3) {
            if (_Var12 == 0) {
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xef61726f7275612d;
            }
            else {
              if (_Var12 == 1) {
                uVar32 = 0x65736e75732d;
                goto LAB_100218dec;
              }
              if (_Var12 != 2) goto LAB_100218d40;
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xee006e6165636f2d;
            }
          }
          else if (_Var12 < 5) {
            if (_Var12 == 3) {
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xed00006e6f656e2d;
            }
            else {
              if (_Var12 != 4) goto LAB_100218d40;
              pcVar36 = (char *)0x746e656964617267;
              pvVar26 = (void *)0xee007265626d652d;
            }
          }
          else if (_Var12 == 5) {
            uVar32 = 0x7365726f662d;
LAB_100218dec:
            pcVar36 = (char *)0x746e656964617267;
            pvVar26 = (void *)(uVar32 | 0xef74000000000000);
          }
          else {
            if (_Var12 != 6) goto LAB_100218d40;
            pcVar36 = (char *)0xd000000000000011;
            pvVar26 = local_118;
          }
          _swift_bridgeObjectRelease(puVar30);
          local_90 = (undefined *)0x7463617265746e69;
          local_88 = (undefined *)0xec0000002d657669;
          SVar43.bridgeObject = pvVar26;
          SVar43.str = pcVar36;
          SVar45.bridgeObject = puVar16;
          SVar45.str = pcVar15;
          Swift::String::append(SVar43,SVar45);
          _swift_bridgeObjectRelease(pvVar26);
          puVar1 = local_88;
          puVar8 = local_90;
          (**(code **)(lVar28 + 8))(puVar24,UVar5.unknown);
          puVar30 = apuStack_130[1];
        }
      }
      if ((_Var34.unknown == puVar8) && (_Var31.unknown == puVar1)) {
        _swift_bridgeObjectRelease(puVar7);
        _swift_bridgeObjectRelease(_Var31.unknown);
        puVar7 = puVar1;
LAB_100218ed0:
        _swift_bridgeObjectRelease(puVar7);
        _swift_beginAccess(unaff_x20 + local_110,&local_90,0x21,0);
        FUN_1001b57a4(puVar22,uVar23);
        _swift_endAccess(&local_90);
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar22 + 8));
        (*pcVar29)(puVar22 + *(int *)(puVar4 + 0x30),DVar6.unknown);
        return 1;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (_Var34,_Var31,(_StringComparisonResult)(__int8)puVar8);
      _swift_bridgeObjectRelease(_Var31.unknown);
      _swift_bridgeObjectRelease(puVar1);
      if (bVar3) goto LAB_100218ed0;
      uVar23 = uVar23 + 1;
    } while (uVar35 != uVar23);
  }
  _swift_bridgeObjectRelease();
  return 0;
}

