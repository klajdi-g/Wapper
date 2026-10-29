// rea decompile_all
// name: FUN_1001d6f78
// address: 0x1001d6f78
// body: available
// range: 0x1001d6f78-0x1001d84f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001d6f78(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  UUID UVar16;
  Locale LVar17;
  LocalizationValue LVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  UUID UVar22;
  LocalizationValue LVar23;
  uint uVar25;
  long extraout_x8;
  long *plVar26;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar27;
  long extraout_x8_02;
  long lVar28;
  long extraout_x8_03;
  ulong uVar29;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar30;
  long lVar31;
  long extraout_x8_07;
  byte *pbVar32;
  ulong uVar33;
  ulong *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  UUID UVar38;
  undefined8 *puVar39;
  long lVar40;
  long lVar41;
  byte *pbVar42;
  ulong uVar43;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long lVar44;
  undefined *puVar45;
  long unaff_x20;
  ulong uVar46;
  UUID UVar47;
  ulong uVar48;
  undefined8 uVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 *puVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  undefined8 uVar57;
  long lVar58;
  String SVar59;
  ulong uStack_170;
  byte local_160 [8];
  code *local_158;
  char *pcVar24;
  
  puVar12 = &DAT_100556878;
  FUN_100002f94(&DAT_100556878,&DAT_10042a730);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  puVar34 = (ulong *)((long)&uStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar26 = (long *)((long)puVar34 - extraout_x12);
  lVar13 = 0;
  FUN_100266c2c();
  lVar53 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar53 + 0x40));
  lVar35 = (long)plVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar35 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar36 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar47.unknown = (undefined *)(lVar37 - extraout_x12_02);
  puVar14 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar27 = UVar47.unknown + -extraout_x8_01;
  uVar15 = 0;
  FUN_1001d537c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(uVar15 - 8) + 0x40));
  lVar28 = (long)puVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  UVar16 = Foundation::UUID::typeMetadataAccessor();
  lVar50 = *(long *)(UVar16.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
  UVar38.unknown = (undefined *)(lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar29 = (long)UVar38.unknown - extraout_x12_03;
  LVar17 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar17.unknown + -8) + 0x40));
  LVar18 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar18.unknown + -8) + 0x40));
  LVar18.unknown =
       (undefined *)
       ((uVar29 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) -
       (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  lVar19 = 0;
  FUN_100266c40();
  lVar44 = *(long *)(lVar19 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar44 + 0x40));
  puVar39 = (undefined8 *)(LVar18.unknown + -(extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar40 = (long)puVar39 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar58 = lVar40 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar52 = (undefined8 *)(lVar58 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = (long)puVar52 - extraout_x12_07;
  lVar20 = 0;
  FUN_1001d59ac();
  lVar31 = *(long *)(lVar20 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  lVar41 = lVar30 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pbVar42 = (byte *)(lVar41 - extraout_x12_08);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pbVar32 = pbVar42 + -extraout_x12_09;
  lVar21 = 0;
  FUN_10025ee04();
  puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  bVar6 = *(byte *)(unaff_x20 + *(int *)(lVar21 + 0x1c));
  if (bVar6 < 2) {
    if (bVar6 != 0) {
      FUN_1001d84f4();
      puVar12 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5cf8(0,2,0);
      lVar13 = 0;
      lVar19 = *(long *)(unaff_x20 + *(int *)(lVar21 + 0x20));
      uVar29 = *(ulong *)(lVar19 + 0x10);
      bVar10 = false;
      do {
        bVar6 = (&DAT_100556c50)[lVar13];
        uVar54 = (ulong)bVar6;
        *pbVar42 = bVar6;
        uVar33 = uVar15;
        _swift_storeEnumTagMultiPayload(pbVar42,uVar15,0);
        FUN_10025f7ec();
        puVar14 = PTR___swiftEmptyArrayStorage_100524190;
        bVar11 = bVar6 != 0;
        uVar57 = param_1;
        uVar51 = param_2;
        if (bVar11) {
          uVar57 = param_2;
          uVar51 = param_1;
        }
        uVar3 = 0x2e78616d2e6e7573;
        if (bVar11) {
          uVar3 = 0x6174732e6e6f6f6d;
        }
        uVar5 = 0xec0000006c6c6966;
        if (bVar11) {
          uVar5 = 0xef6c6c69662e7372;
        }
        if (uVar29 != 0) {
          uVar48 = 0;
          do {
            if (*(ulong *)(lVar19 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d811c);
              (*pcVar9)();
            }
            uVar55 = (ulong)*(byte *)(lVar44 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar44 + 0x50) ^ 0xffffffffffffffff);
            lVar13 = *(long *)(lVar44 + 0x48);
            FUN_100029504(lVar19 + uVar55 + lVar13 * uVar48,lVar58,FUN_100266c40);
            bVar2 = 0;
            if (*(byte *)(lVar58 + 0x10) != 2) {
              bVar2 = *(byte *)(lVar58 + 0x10);
            }
            if (bVar2 == bVar6) {
              puVar27 = puVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar27 & 1) == 0) {
                FUN_1001c5d34(0,*(long *)(puVar14 + 0x10) + 1,1);
              }
              uVar43 = *(ulong *)(puVar14 + 0x10);
              if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar43) {
                FUN_1001c5d34(1 < *(ulong *)(puVar14 + 0x18),uVar43 + 1,1);
              }
              *(ulong *)(puVar14 + 0x10) = uVar43 + 1;
              FUN_100007e64(lVar58,puVar14 + uVar43 * lVar13 + uVar55,FUN_100266c40);
            }
            else {
              FUN_100029548(lVar58,FUN_100266c40);
            }
            uVar48 = uVar48 + 1;
          } while (uVar29 != uVar48);
        }
        puVar27 = PTR___swiftEmptyArrayStorage_100524190;
        lVar13 = *(long *)(puVar14 + 0x10);
        if (lVar13 == 0) {
          _swift_release(puVar14);
          puVar27 = PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          FUN_1001c5bc4(0,lVar13,0);
          puVar45 = puVar14 + ((ulong)*(byte *)(lVar44 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar44 + 0x50) ^ 0xffffffffffffffff));
          lVar21 = *(long *)(lVar44 + 0x48);
          do {
            FUN_100029504(puVar45,puVar52,FUN_100266c40);
            uVar49 = *puVar52;
            uVar4 = puVar52[1];
            _swift_bridgeObjectRetain(uVar4);
            FUN_100029548(puVar52,FUN_100266c40);
            uVar48 = *(ulong *)(puVar27 + 0x10);
            if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar48) {
              FUN_1001c5bc4(1 < *(ulong *)(puVar27 + 0x18),uVar48 + 1,1);
            }
            *(ulong *)(puVar27 + 0x10) = uVar48 + 1;
            *(undefined8 *)(puVar27 + uVar48 * 0x10 + 0x20) = uVar49;
            *(undefined8 *)(puVar27 + uVar48 * 0x10 + 0x28) = uVar4;
            puVar45 = puVar45 + lVar21;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_release(puVar14);
        }
        iVar8 = *(int *)(lVar20 + 0x14);
        *(ulong *)(pbVar42 + iVar8) = uVar54;
        *(ulong *)((long)(pbVar42 + iVar8) + 8) = uVar33;
        iVar8 = *(int *)(lVar20 + 0x18);
        *(undefined8 *)(pbVar42 + iVar8) = uVar3;
        *(undefined8 *)(pbVar42 + iVar8 + 8) = uVar5;
        iVar8 = *(int *)(lVar20 + 0x1c);
        *(undefined8 *)(pbVar42 + iVar8) = uVar57;
        (pbVar42 + iVar8)[8] = 0;
        iVar8 = *(int *)(lVar20 + 0x20);
        *(undefined8 *)(pbVar42 + iVar8) = uVar51;
        (pbVar42 + iVar8)[8] = 0;
        *(undefined **)(pbVar42 + *(int *)(lVar20 + 0x24)) = puVar27;
        uVar33 = *(ulong *)(puVar12 + 0x10);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar33) {
          FUN_1001c5cf8(1 < *(ulong *)(puVar12 + 0x18),uVar33 + 1,1);
        }
        *(ulong *)(puVar12 + 0x10) = uVar33 + 1;
        FUN_100007e64(pbVar42,puVar12 + *(long *)(lVar31 + 0x48) * uVar33 +
                                        ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff)),
                      FUN_1001d59ac);
        lVar13 = 1;
        bVar11 = !bVar10;
        bVar10 = true;
      } while (bVar11);
      return puVar12;
    }
  }
  else {
    if (bVar6 != 2) {
      FUN_1001c5cf8(0,2,0);
      lVar13 = 0;
      lVar21 = *(long *)(unaff_x20 + *(int *)(lVar21 + 0x20));
      uVar29 = *(ulong *)(lVar21 + 0x10);
      bVar10 = false;
      do {
        bVar6 = (&DAT_100556c80)[lVar13];
        uVar54 = (ulong)bVar6;
        *pbVar32 = bVar6;
        uVar33 = uVar15;
        _swift_storeEnumTagMultiPayload(pbVar32,uVar15,2);
        FUN_10025f7cc();
        puVar12 = PTR___swiftEmptyArrayStorage_100524190;
        uVar57 = 0x78616d2e6e7573;
        if (bVar6 != 0) {
          uVar57 = 0x6c69662e6e6f6f6d;
        }
        uVar51 = 0xe700000000000000;
        if (bVar6 != 0) {
          uVar51 = 0xe90000000000006c;
        }
        if (uVar29 != 0) {
          uVar48 = 0;
          do {
            if (*(ulong *)(lVar21 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d8120);
              (*pcVar9)();
            }
            uVar55 = (ulong)*(byte *)(lVar44 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar44 + 0x50) ^ 0xffffffffffffffff);
            lVar13 = *(long *)(lVar44 + 0x48);
            FUN_100029504(lVar21 + uVar55 + lVar13 * uVar48,lVar30,FUN_100266c40);
            bVar7 = *(byte *)(lVar30 + *(int *)(lVar19 + 0x1c));
            bVar2 = 0;
            if (bVar7 != 2) {
              bVar2 = bVar7;
            }
            if (bVar2 == bVar6) {
              puVar27 = puVar12;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar27 & 1) == 0) {
                FUN_1001c5d34(0,*(long *)(puVar12 + 0x10) + 1,1);
              }
              uVar43 = *(ulong *)(puVar12 + 0x10);
              if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar43) {
                FUN_1001c5d34(1 < *(ulong *)(puVar12 + 0x18),uVar43 + 1,1);
              }
              *(ulong *)(puVar12 + 0x10) = uVar43 + 1;
              FUN_100007e64(lVar30,puVar12 + uVar43 * lVar13 + uVar55,FUN_100266c40);
            }
            else {
              FUN_100029548(lVar30,FUN_100266c40);
            }
            uVar48 = uVar48 + 1;
          } while (uVar29 != uVar48);
        }
        puVar27 = PTR___swiftEmptyArrayStorage_100524190;
        lVar13 = *(long *)(puVar12 + 0x10);
        if (lVar13 == 0) {
          _swift_release(puVar12);
          puVar27 = PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          FUN_1001c5bc4(0,lVar13,0);
          puVar45 = puVar12 + ((ulong)*(byte *)(lVar44 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar44 + 0x50) ^ 0xffffffffffffffff));
          lVar28 = *(long *)(lVar44 + 0x48);
          do {
            FUN_100029504(puVar45,puVar52,FUN_100266c40);
            uVar3 = *puVar52;
            uVar5 = puVar52[1];
            _swift_bridgeObjectRetain(uVar5);
            FUN_100029548(puVar52,FUN_100266c40);
            uVar48 = *(ulong *)(puVar27 + 0x10);
            if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar48) {
              FUN_1001c5bc4(1 < *(ulong *)(puVar27 + 0x18),uVar48 + 1,1);
            }
            *(ulong *)(puVar27 + 0x10) = uVar48 + 1;
            *(undefined8 *)(puVar27 + uVar48 * 0x10 + 0x20) = uVar3;
            *(undefined8 *)(puVar27 + uVar48 * 0x10 + 0x28) = uVar5;
            puVar45 = puVar45 + lVar28;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          _swift_release(puVar12);
        }
        iVar8 = *(int *)(lVar20 + 0x14);
        *(ulong *)(pbVar32 + iVar8) = uVar54;
        *(ulong *)((long)(pbVar32 + iVar8) + 8) = uVar33;
        iVar8 = *(int *)(lVar20 + 0x18);
        *(undefined8 *)(pbVar32 + iVar8) = uVar57;
        *(undefined8 *)(pbVar32 + iVar8 + 8) = uVar51;
        pbVar42 = pbVar32 + *(int *)(lVar20 + 0x1c);
        pbVar42[0] = 0;
        pbVar42[1] = 0;
        pbVar42[2] = 0;
        pbVar42[3] = 0;
        pbVar42[4] = 0;
        pbVar42[5] = 0;
        pbVar42[6] = 0;
        pbVar42[7] = 0;
        pbVar42[8] = 1;
        pbVar42 = pbVar32 + *(int *)(lVar20 + 0x20);
        pbVar42[0] = 0;
        pbVar42[1] = 0;
        pbVar42[2] = 0;
        pbVar42[3] = 0;
        pbVar42[4] = 0;
        pbVar42[5] = 0;
        pbVar42[6] = 0;
        pbVar42[7] = 0;
        pbVar42[8] = 1;
        *(undefined **)(pbVar32 + *(int *)(lVar20 + 0x24)) = puVar27;
        uVar33 = *(ulong *)(puVar14 + 0x10);
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar33) {
          FUN_1001c5cf8(1 < *(ulong *)(puVar14 + 0x18),uVar33 + 1,1);
        }
        *(ulong *)(puVar14 + 0x10) = uVar33 + 1;
        FUN_100007e64(pbVar32,puVar14 + *(long *)(lVar31 + 0x48) * uVar33 +
                                        ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff)),
                      FUN_1001d59ac);
        lVar13 = 1;
        bVar11 = !bVar10;
        bVar10 = true;
      } while (bVar11);
      return puVar14;
    }
    lVar30 = lVar21;
    FUN_10025f510();
    if (*(long *)(lVar30 + 0x10) != 0) {
      puVar14 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100006004();
      lVar58 = *(long *)(unaff_x20 + *(int *)(lVar21 + 0x20));
      uVar33 = *(ulong *)(lVar58 + 0x10);
      if (uVar33 == 0) {
        local_158 = (code *)0x0;
      }
      else {
        local_158 = (code *)0x0;
        uVar54 = 0;
        bVar6 = *(byte *)(lVar44 + 0x50);
        do {
          if (*(ulong *)(lVar58 + 0x10) <= uVar54) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84e0);
            (*pcVar9)();
          }
          FUN_100029504(lVar58 + ((ulong)bVar6 + 0x20 & ((ulong)bVar6 ^ 0xffffffffffffffff)) +
                        *(long *)(lVar44 + 0x48) * uVar54,lVar40,FUN_100266c40);
          FUN_100007e64(lVar40,puVar39,FUN_100266c40);
          FUN_1001da820((long)puVar39 + (long)*(int *)(lVar19 + 0x18),puVar27);
          puVar45 = puVar27;
          (**(code **)(lVar50 + 0x30))(puVar27,1,UVar16.unknown);
          if ((int)puVar45 == 1) {
            UVar22.unknown = puVar27;
            FUN_10002a29c(puVar27,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1001d7954:
            FUN_10025f510();
            if (*(long *)(UVar22.unknown + 0x10) != 0) {
              FUN_100029504(UVar22.unknown +
                            ((ulong)*(byte *)(lVar53 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar53 + 0x50) ^ 0xffffffffffffffff)),lVar36,
                            FUN_100266c2c);
              _swift_bridgeObjectRelease(UVar22.unknown);
              FUN_100007e64(lVar36,lVar37,FUN_100266c2c);
              (**(code **)(lVar50 + 0x10))(lVar28,lVar37,UVar16.unknown);
              FUN_100029548(lVar37,FUN_100266c2c);
              goto LAB_1001d79dc;
            }
            FUN_100029548(puVar39,FUN_100266c40);
            _swift_bridgeObjectRelease(UVar22.unknown);
            _swift_storeEnumTagMultiPayload(lVar28,uVar15,3);
LAB_1001d77c0:
            FUN_100029548(lVar28,FUN_1001d537c);
          }
          else {
            pcVar9 = *(code **)(lVar50 + 0x20);
            (*pcVar9)(UVar38.unknown,puVar27,UVar16.unknown);
            uVar48 = 0;
            lVar56 = *(long *)(unaff_x20 + *(int *)(lVar21 + 0x34));
            uVar55 = *(ulong *)(lVar56 + 0x10);
            do {
              if (uVar55 == uVar48) {
                UVar22.unknown = UVar38.unknown;
                (**(code **)(lVar50 + 8))(UVar38.unknown,UVar16.unknown);
                goto LAB_1001d7954;
              }
              if (*(ulong *)(lVar56 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84d0);
                (*pcVar9)();
              }
              UVar22.unknown = FUN_100266c2c;
              FUN_100029504(lVar56 + ((ulong)*(byte *)(lVar53 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar53 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar53 + 0x48) * uVar48,UVar47.unknown);
              uVar48 = uVar48 + 1;
              bVar10 = Foundation::UUID::___infix(UVar47,UVar38,UVar22);
              FUN_100029548(UVar47.unknown,FUN_100266c2c);
            } while (!bVar10);
            (*pcVar9)(lVar28,UVar38.unknown,UVar16.unknown);
LAB_1001d79dc:
            _swift_storeEnumTagMultiPayload(lVar28,uVar15,1);
            lVar56 = lVar28;
            _swift_getEnumCaseMultiPayload(lVar28,uVar15);
            if ((int)lVar56 != 1) {
              FUN_100029548(puVar39,FUN_100266c40);
              goto LAB_1001d77c0;
            }
            (**(code **)(lVar50 + 0x20))(uVar29,lVar28,UVar16.unknown);
            uVar57 = *puVar39;
            uVar51 = puVar39[1];
            _swift_bridgeObjectRetain(uVar51);
            uVar55 = 0;
            FUN_10002f6dc(local_158);
            puVar45 = puVar14;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar25 = (uint)puVar45;
            uVar48 = uVar29;
            FUN_10000476c();
            uVar43 = (ulong)~(uint)uVar55 & 1;
            if (SCARRY8(*(long *)(puVar14 + 0x10),uVar43)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84e4);
              (*pcVar9)();
            }
            if (*(long *)(puVar14 + 0x18) < (long)(*(long *)(puVar14 + 0x10) + uVar43)) {
              FUN_1001ced3c();
              uVar48 = uVar29;
              FUN_10000476c();
              if (((uint)uVar55 & 1) != (uVar25 & 1)) {
                Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84f4);
                (*pcVar9)();
              }
            }
            else if (((ulong)puVar45 & 1) == 0) {
              FUN_1001cbac8();
            }
            if ((uVar55 & 1) == 0) {
              *(ulong *)(puVar14 + (uVar48 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar14 + (uVar48 >> 6) * 8 + 0x40) | 1L << (uVar48 & 0x3f);
              (**(code **)(lVar50 + 0x10))
                        (*(long *)(puVar14 + 0x30) + *(long *)(lVar50 + 0x48) * uVar48,uVar29,
                         UVar16.unknown);
              *(undefined **)(*(long *)(puVar14 + 0x38) + uVar48 * 8) =
                   PTR___swiftEmptyArrayStorage_100524190;
              if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84e8);
                (*pcVar9)();
              }
              *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
            }
            lVar56 = *(long *)(puVar14 + 0x38);
            uVar46 = *(ulong *)(lVar56 + uVar48 * 8);
            uVar55 = uVar46;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(lVar56 + uVar48 * 8) = uVar46;
            uVar43 = uVar46;
            if ((uVar55 & 1) == 0) {
              uVar43 = 0;
              FUN_1001c432c(0,*(long *)(uVar46 + 0x10) + 1,1,uVar46);
              *(ulong *)(lVar56 + uVar48 * 8) = uVar43;
            }
            uVar55 = *(ulong *)(uVar43 + 0x10);
            uVar46 = uVar43;
            if (*(ulong *)(uVar43 + 0x18) >> 1 <= uVar55) {
              uVar46 = (ulong)(1 < *(ulong *)(uVar43 + 0x18));
              FUN_1001c432c(uVar46,uVar55 + 1,1,uVar43);
              *(ulong *)(lVar56 + uVar48 * 8) = uVar46;
            }
            *(ulong *)(uVar46 + 0x10) = uVar55 + 1;
            lVar56 = uVar46 + uVar55 * 0x10;
            *(undefined8 *)(lVar56 + 0x20) = uVar57;
            *(undefined8 *)(lVar56 + 0x28) = uVar51;
            (**(code **)(lVar50 + 8))(uVar29,UVar16.unknown);
            FUN_100029548(puVar39,FUN_100266c40);
            local_158 = FUN_10002e8b4;
          }
          uVar54 = uVar54 + 1;
        } while (uVar54 != uVar33);
      }
      puVar27 = PTR___swiftEmptyArrayStorage_100524190;
      _swift_bridgeObjectRetain(lVar30);
      FUN_1001c5cf8(0,0,0);
      uVar29 = *(ulong *)(lVar30 + 0x10);
      if (uVar29 != 0) {
        uVar33 = 0;
        do {
          uVar54 = *(ulong *)(lVar30 + 0x10);
          if (uVar54 <= uVar33) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84d4);
            (*pcVar9)();
          }
          lVar21 = lVar30 + ((ulong)*(byte *)(lVar53 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar53 + 0x50) ^ 0xffffffffffffffff));
          lVar28 = *(long *)(lVar53 + 0x48);
          iVar8 = *(int *)(puVar12 + 0x30);
          *puVar34 = uVar33;
          FUN_100029504(lVar21 + lVar28 * uVar33,(long)puVar34 + (long)iVar8,FUN_100266c2c);
          FUN_100007e1c(puVar34,plVar26,&DAT_100556878,&DAT_10042a730);
          lVar19 = *plVar26 + 1;
          if (SCARRY8(*plVar26,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84d8);
            (*pcVar9)();
          }
          lVar36 = 0;
          if (uVar54 != 0) {
            lVar36 = lVar19 / (long)uVar54;
          }
          lVar19 = lVar19 - lVar36 * uVar54;
          if (lVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1001d84dc);
            (*pcVar9)();
          }
          lVar36 = (long)plVar26 + (long)*(int *)(puVar12 + 0x30);
          FUN_100029504(lVar21 + lVar19 * lVar28,lVar35,FUN_100266c2c);
          (**(code **)(lVar50 + 0x10))(lVar41,lVar36,UVar16.unknown);
          uVar54 = uVar15;
          _swift_storeEnumTagMultiPayload(lVar41,uVar15,1);
          lVar19 = *(long *)(lVar36 + *(int *)(lVar13 + 0x18));
          if (lVar19 - 0xf0U < 0xb4) {
            uVar57 = 0x2e657369726e7573;
LAB_1001d82b0:
            uVar51 = 0xec0000006c6c6966;
          }
          else {
            if (lVar19 - 0x1a4U < 0xf0) {
              uVar57 = 0x2e6e696d2e6e7573;
              goto LAB_1001d82b0;
            }
            if (lVar19 - 0x294U < 0x168) {
              uVar57 = 0x2e78616d2e6e7573;
              goto LAB_1001d82b0;
            }
            bVar10 = 0xb3 < lVar19 - 0x3fcU;
            uVar57 = 0x662e7465736e7573;
            if (bVar10) {
              uVar57 = 0x6174732e6e6f6f6d;
            }
            uVar51 = 0xeb000000006c6c69;
            if (bVar10) {
              uVar51 = 0xef6c6c69662e7372;
            }
          }
          puVar39 = (undefined8 *)(lVar36 + *(int *)(lVar13 + 0x14));
          uVar3 = *puVar39;
          uVar5 = puVar39[1];
          uVar49 = *(undefined8 *)(lVar35 + *(int *)(lVar13 + 0x18));
          lVar21 = *(long *)(puVar14 + 0x10);
          _swift_bridgeObjectRetain(uVar5);
          puVar45 = PTR___swiftEmptyArrayStorage_100524190;
          if (lVar21 != 0) {
            _swift_bridgeObjectRetain(puVar14);
            FUN_10000476c();
            puVar45 = PTR___swiftEmptyArrayStorage_100524190;
            if ((uVar54 & 1) != 0) {
              puVar45 = *(undefined **)(*(long *)(puVar14 + 0x38) + lVar36 * 8);
              _swift_bridgeObjectRetain(puVar45);
            }
            _swift_bridgeObjectRelease(puVar14);
          }
          FUN_100029548(lVar35,FUN_100266c2c);
          puVar39 = (undefined8 *)(lVar41 + *(int *)(lVar20 + 0x14));
          *puVar39 = uVar3;
          puVar39[1] = uVar5;
          puVar39 = (undefined8 *)(lVar41 + *(int *)(lVar20 + 0x18));
          *puVar39 = uVar57;
          puVar39[1] = uVar51;
          plVar1 = (long *)(lVar41 + *(int *)(lVar20 + 0x1c));
          *plVar1 = lVar19;
          *(undefined1 *)(plVar1 + 1) = 0;
          puVar39 = (undefined8 *)(lVar41 + *(int *)(lVar20 + 0x20));
          *puVar39 = uVar49;
          *(undefined1 *)(puVar39 + 1) = 0;
          *(undefined **)(lVar41 + *(int *)(lVar20 + 0x24)) = puVar45;
          FUN_10002a29c(plVar26,&DAT_100556878,&DAT_10042a730);
          uVar54 = *(ulong *)(puVar27 + 0x10);
          if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar54) {
            FUN_1001c5cf8(1 < *(ulong *)(puVar27 + 0x18),uVar54 + 1,1);
          }
          uVar33 = uVar33 + 1;
          *(ulong *)(puVar27 + 0x10) = uVar54 + 1;
          FUN_100007e64(lVar41,puVar27 + *(long *)(lVar31 + 0x48) * uVar54 +
                                         ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                                         ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff)),
                        FUN_1001d59ac);
        } while (uVar29 != uVar33);
      }
      _swift_bridgeObjectRelease(puVar14);
      _swift_bridgeObjectRelease_n(lVar30,2);
      FUN_10002f6dc(local_158,0);
      return puVar27;
    }
    _swift_bridgeObjectRelease();
  }
  puVar12 = &DAT_100556860;
  FUN_100002f94(&DAT_100556860,&DAT_10042a718);
  bVar6 = *(byte *)(lVar31 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar12 + 0x18) = 2;
  *(undefined8 *)(puVar12 + 0x10) = 1;
  puVar14 = puVar12 + ((ulong)bVar6 + 0x20 & ((ulong)bVar6 ^ 0xffffffffffffffff));
  _swift_storeEnumTagMultiPayload(puVar14,uVar15,3);
  SVar59.bridgeObject = (void *)0xe700000000000000;
  SVar59.str = (char *)0x796144206c6c41;
  LVar23 = LocalizationValue::_init(SVar59);
  Foundation::Locale::get_current((Locale)LVar23.unknown);
  SVar59 = (extension_Foundation)::Swift::String::_init(LVar18,(Locale)0x0);
  pcVar24 = SVar59.str;
  FUN_10025f200();
  *(String *)(puVar14 + *(int *)(lVar20 + 0x14)) = SVar59;
  iVar8 = *(int *)(lVar20 + 0x18);
  *(undefined8 *)(puVar14 + iVar8) = 0xd000000000000014;
  *(undefined8 *)((long)(puVar14 + iVar8) + 8) = 0x80000001004dd4c0;
  iVar8 = *(int *)(lVar20 + 0x1c);
  *(undefined8 *)(puVar14 + iVar8) = 0;
  *(undefined1 *)((long)(puVar14 + iVar8) + 8) = 1;
  iVar8 = *(int *)(lVar20 + 0x20);
  *(undefined8 *)(puVar14 + iVar8) = 0;
  *(undefined1 *)((long)(puVar14 + iVar8) + 8) = 1;
  *(char **)(puVar14 + *(int *)(lVar20 + 0x24)) = pcVar24;
  return puVar12;
}

