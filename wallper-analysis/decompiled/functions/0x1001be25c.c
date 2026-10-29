// rea decompile_all
// name: FUN_1001be25c
// address: 0x1001be25c
// body: available
// range: 0x1001be25c-0x1001bf2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001be25c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  Calendar CVar9;
  Date DVar10;
  Date DVar11;
  UUID UVar12;
  char *pcVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined *puVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined *puVar17;
  undefined8 *puVar18;
  char *pcVar19;
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
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  UUID UVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long local_180 [5];
  long local_158;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  ulong local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  ulong local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  UUID local_c0;
  char *local_b8;
  UUID local_b0;
  undefined8 *local_a8;
  long local_a0;
  long local_98;
  undefined8 *local_90;
  long local_88;
  UUID local_80;
  UUID local_78;
  long local_70;
  
  lVar8 = 0;
  local_180[4] = param_5;
  local_148 = param_3;
  local_140 = param_4;
  local_100 = param_2;
  FUN_100266c2c();
  local_70 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_70 + 0x40));
  lVar8 = (long)local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_180[2] = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  local_180[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined *)(lVar8 - extraout_x12_00);
  local_c0.unknown = puVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (long)puVar17 - extraout_x12_01;
  local_150 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12_02;
  local_158 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined *)(lVar8 - extraout_x12_03);
  puVar17 = &DAT_10054a9c8;
  local_80.unknown = puVar15;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  puVar15 = puVar15 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f8 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = puVar15 + -extraout_x12_04;
  local_118 = puVar15;
  local_d8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_c8 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  puVar15 = puVar15 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0.unknown = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = puVar15 + -extraout_x12_05;
  lVar8 = 0;
  local_78.unknown = puVar15;
  FUN_10025ee04();
  local_98 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = 0;
  local_90 = (undefined8 *)(puVar15 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100266c40();
  local_110 = *(long *)(lVar8 + -8);
  local_d0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar8 = (long)(puVar15 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12_06;
  local_138 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12_07;
  local_180[3] = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12_08;
  local_120 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)(lVar8 - extraout_x12_09);
  local_a8 = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)((long)puVar18 - extraout_x12_10);
  lVar8 = 0;
  FUN_1001d537c();
  local_88 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  pcVar19 = (char *)((long)puVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_108 = pcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar19 = pcVar19 + -extraout_x12_11;
  local_b8 = pcVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = (long)pcVar19 - extraout_x12_12;
  lVar8 = 0;
  local_a0 = lVar16;
  FUN_1001d59ac();
  lVar28 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  uVar21 = lVar16 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  CVar9 = Foundation::Calendar::typeMetadataAccessor();
  lVar16 = *(long *)(CVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar22 = uVar21 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar26 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar24 = lVar22 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  DVar11 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar11.unknown);
  lVar8 = lVar24;
  local_f0 = param_1;
  FUN_1001d6f78(lVar24,lVar22);
  uVar20 = local_100;
  (**(code **)(lVar16 + 8))(lVar22,CVar9.unknown);
  (**(code **)(lVar26 + 8))(lVar24,DVar10.unknown);
  uVar25 = 0;
  uVar29 = *(ulong *)(lVar8 + 0x10);
  do {
    if (uVar29 == uVar25) {
      _swift_bridgeObjectRelease(lVar8);
      return;
    }
    if (*(ulong *)(lVar8 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1a8);
      (*pcVar6)();
    }
    FUN_100029504(lVar8 + ((ulong)*(byte *)(lVar28 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar28 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar28 + 0x48) * uVar25,uVar21,FUN_1001d59ac);
    uVar25 = uVar25 + 1;
    uVar30 = uVar21;
    FUN_1001da410(uVar21,uVar20);
    FUN_100029548(uVar21,FUN_1001d59ac);
  } while ((uVar30 & 1) == 0);
  _swift_bridgeObjectRelease(lVar8);
  lVar8 = local_a0;
  FUN_100029504(uVar20,local_a0,FUN_1001d537c);
  lVar22 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,local_88);
  FUN_100029548(lVar8,FUN_1001d537c);
  lVar16 = local_f0;
  lVar8 = local_110;
  puVar15 = local_140;
  puVar17 = local_148;
  if ((int)lVar22 == 3) {
    uVar25 = 0;
    iVar4 = *(int *)(local_98 + 0x20);
    uVar21 = *(ulong *)(local_f0 + iVar4);
    uVar29 = *(ulong *)(uVar21 + 0x10);
    while( true ) {
      puVar5 = local_a8;
      lVar16 = local_d0;
      if (uVar29 == uVar25) {
        (**(code **)(local_c8 + 0x38))
                  ((long)local_a8 + (long)*(int *)(local_d0 + 0x18),1,1,local_d8);
        *puVar5 = puVar17;
        puVar5[1] = puVar15;
        *(undefined1 *)(puVar5 + 2) = 2;
        *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar16 + 0x1c)) = 2;
        _swift_bridgeObjectRetain(puVar15);
        uVar25 = uVar21;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar29 = uVar21;
        if ((uVar25 & 1) == 0) {
          uVar29 = 0;
          FUN_1001c8094(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21,&DAT_100556850,&DAT_10042a660,
                        FUN_100266c40,PTR__swift_bridgeObjectRelease_100524200);
        }
        uVar25 = *(ulong *)(uVar29 + 0x10);
        uVar21 = uVar29;
        if (*(ulong *)(uVar29 + 0x18) >> 1 <= uVar25) {
          uVar21 = (ulong)(1 < *(ulong *)(uVar29 + 0x18));
          FUN_1001c8094(uVar21,uVar25 + 1,1,uVar29,&DAT_100556850,&DAT_10042a660,FUN_100266c40,
                        PTR__swift_bridgeObjectRelease_100524200);
        }
        *(ulong *)(uVar21 + 0x10) = uVar25 + 1;
        FUN_100007e64(puVar5,uVar21 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                             *(long *)(lVar8 + 0x48) * uVar25,FUN_100266c40);
        *(ulong *)(local_f0 + iVar4) = uVar21;
        return;
      }
      if (*(ulong *)(uVar21 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1b0);
        (*pcVar6)();
      }
      FUN_100029504(uVar21 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar8 + 0x48) * uVar25,puVar18,FUN_100266c40);
      if ((undefined *)*puVar18 == puVar17 && (undefined *)puVar18[1] == puVar15) break;
      uVar25 = uVar25 + 1;
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar18,(undefined *)puVar18[1],
                         (_StringComparisonResult)(__int8)puVar17);
      FUN_100029548(puVar18,FUN_100266c40);
      if (bVar7) {
        return;
      }
    }
    pcVar6 = FUN_100266c40;
    goto LAB_1001bed28;
  }
  FUN_100029504(local_f0,local_90,FUN_10025ee04);
  lVar8 = (long)*(int *)(local_98 + 0x20);
  local_a8 = *(undefined8 **)(lVar16 + lVar8);
  puVar23 = local_a8 + 2;
  local_e0 = *puVar23;
  if (local_e0 == 0) {
    uVar21 = 0;
    uVar25 = 0;
  }
  else {
    local_128 = (ulong)*(byte *)(local_110 + 0x50) + 0x20 &
                ((ulong)*(byte *)(local_110 + 0x50) ^ 0xffffffffffffffff);
    local_e8 = (long)local_a8 + local_128;
    local_a0 = *(long *)(local_110 + 0x48);
    uVar21 = 0;
    puVar17 = local_d8;
    local_180[0] = lVar8;
    do {
      pcVar19 = local_b8;
      lVar8 = local_c8;
      UVar12.unknown = local_118;
      lVar16 = local_e8 + local_a0 * uVar21;
      bVar2 = *(byte *)((long)local_90 + (long)*(int *)(local_98 + 0x1c));
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          uVar14 = 3;
        }
        else {
          cVar1 = '\0';
          if (*(char *)(lVar16 + 0x10) != '\x02') {
            cVar1 = *(char *)(lVar16 + 0x10);
          }
          *local_b8 = cVar1;
          uVar14 = 0;
        }
LAB_1001beb30:
        _swift_storeEnumTagMultiPayload(pcVar19,local_88,uVar14);
      }
      else {
        if (bVar2 != 2) {
          cVar3 = *(char *)(lVar16 + *(int *)(local_d0 + 0x1c));
          cVar1 = '\0';
          if (cVar3 != '\x02') {
            cVar1 = cVar3;
          }
          *local_b8 = cVar1;
          uVar14 = 2;
          goto LAB_1001beb30;
        }
        FUN_1000087e4(lVar16 + *(int *)(local_d0 + 0x18),local_118,&DAT_10054a9c8,&DAT_10041bbe0);
        puVar15 = UVar12.unknown;
        (**(code **)(lVar8 + 0x30))(UVar12.unknown,1,puVar17);
        if ((int)puVar15 == 1) {
          FUN_10002a29c(UVar12.unknown,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1001beaa0:
          FUN_10025f510();
          lVar16 = local_150;
          if (*(long *)(UVar12.unknown + 0x10) != 0) {
            FUN_100029504(UVar12.unknown +
                          ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff)),local_150,
                          FUN_100266c2c);
            _swift_bridgeObjectRelease(UVar12.unknown);
            lVar22 = local_158;
            FUN_100007e64(lVar16,local_158,FUN_100266c2c);
            pcVar19 = local_b8;
            puVar17 = local_d8;
            (**(code **)(lVar8 + 0x10))(local_b8,lVar22);
            FUN_100029548(lVar22,FUN_100266c2c);
            uVar14 = 1;
            goto LAB_1001beb30;
          }
          _swift_bridgeObjectRelease();
          pcVar19 = local_b8;
          _swift_storeEnumTagMultiPayload(local_b8,local_88,3);
          puVar17 = local_d8;
        }
        else {
          (**(code **)(lVar8 + 0x20))(local_78.unknown,UVar12.unknown,puVar17);
          uVar25 = 0;
          lVar16 = *(long *)((long)local_90 + (long)*(int *)(local_98 + 0x34));
          uVar29 = *(ulong *)(lVar16 + 0x10);
          do {
            UVar12.unknown = local_80.unknown;
            lVar8 = local_c8;
            if (uVar29 == uVar25) {
              UVar12.unknown = local_78.unknown;
              (**(code **)(local_c8 + 8))(local_78.unknown,local_d8);
              goto LAB_1001beaa0;
            }
            if (*(ulong *)(lVar16 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1ac);
              (*pcVar6)();
            }
            UVar27.unknown = FUN_100266c2c;
            FUN_100029504(lVar16 + ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(local_70 + 0x48) * uVar25,local_80.unknown);
            uVar25 = uVar25 + 1;
            bVar7 = Foundation::UUID::___infix(UVar12,local_78,UVar27);
            FUN_100029548(UVar12.unknown,FUN_100266c2c);
            UVar12.unknown = local_78.unknown;
            pcVar19 = local_b8;
            lVar8 = local_c8;
            puVar17 = local_d8;
          } while (!bVar7);
          (**(code **)(local_c8 + 0x10))(local_b8,local_78.unknown,local_d8);
          _swift_storeEnumTagMultiPayload(pcVar19,local_88,1);
          (**(code **)(lVar8 + 8))(UVar12.unknown,puVar17);
        }
      }
      pcVar13 = pcVar19;
      FUN_1001da410(pcVar19,uVar20);
      FUN_100029548(pcVar19,FUN_1001d537c);
      uVar25 = uVar21 + 1;
      if (((ulong)pcVar13 & 1) != 0) {
        uVar29 = *puVar23;
        lVar8 = local_120;
        if (uVar25 == uVar29) goto LAB_1001bec5c;
        goto LAB_1001bed78;
      }
      uVar21 = uVar25;
    } while (uVar25 != local_e0);
    uVar25 = *puVar23;
    lVar8 = local_180[0];
    uVar21 = uVar25;
  }
  goto LAB_1001bec88;
  while( true ) {
    pcVar13 = pcVar19;
    FUN_1001da410(pcVar19,uVar20);
    FUN_100029548(pcVar19,FUN_1001d537c);
    FUN_100029548(lVar8,FUN_100266c40);
    UVar12.unknown = local_78.unknown;
    puVar18 = local_a8;
    if (((ulong)pcVar13 & 1) == 0) {
      if (uVar21 != uVar25) {
        if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1c0);
          (*pcVar6)();
        }
        uVar29 = *puVar23;
        if (uVar29 <= uVar21) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1c4);
          (*pcVar6)();
        }
        lVar8 = uVar21 * local_a0;
        FUN_100029504(local_78.unknown + lVar8,local_138,FUN_100266c40);
        if ((long)uVar29 <= (long)uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1c8);
          (*pcVar6)();
        }
        FUN_100029504(UVar12.unknown + UVar27.unknown,local_130,FUN_100266c40);
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar18 & 1) == 0) {
          FUN_100287300();
        }
        puVar18 = local_a8;
        if ((ulong)local_a8[2] <= uVar21) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1cc);
          (*pcVar6)();
        }
        lVar16 = (long)local_a8 + local_128;
        FUN_1001d4cb0(local_130,lVar16 + lVar8,FUN_100266c40);
        if ((long)puVar18[2] <= (long)uVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1d0);
          (*pcVar6)();
        }
        FUN_1001d4cb0(local_138,UVar27.unknown + lVar16,FUN_100266c40);
        *(undefined8 **)(local_f0 + local_180[0]) = local_a8;
        lVar8 = local_120;
        puVar17 = local_d8;
      }
      bVar7 = SCARRY8(uVar21,1);
      uVar21 = uVar21 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1bc);
        (*pcVar6)();
      }
    }
    uVar25 = uVar25 + 1;
    puVar23 = local_a8 + 2;
    uVar29 = *puVar23;
    if (uVar25 == uVar29) break;
LAB_1001bed78:
    UVar12.unknown = local_f8;
    if (uVar29 <= uVar25) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1b8);
      (*pcVar6)();
    }
    local_78.unknown = (undefined *)((long)local_a8 + local_128);
    UVar27.unknown = (undefined *)(uVar25 * local_a0);
    FUN_100029504(local_78.unknown + (long)UVar27.unknown,lVar8,FUN_100266c40);
    pcVar19 = local_108;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar14 = 3;
      }
      else {
        cVar1 = '\0';
        if (*(char *)(lVar8 + 0x10) != '\x02') {
          cVar1 = *(char *)(lVar8 + 0x10);
        }
        *local_108 = cVar1;
        uVar14 = 0;
      }
LAB_1001bee8c:
      _swift_storeEnumTagMultiPayload(pcVar19,local_88,uVar14);
    }
    else {
      if (bVar2 != 2) {
        cVar3 = *(char *)(lVar8 + *(int *)(local_d0 + 0x1c));
        cVar1 = '\0';
        if (cVar3 != '\x02') {
          cVar1 = cVar3;
        }
        *local_108 = cVar1;
        uVar14 = 2;
        goto LAB_1001bee8c;
      }
      local_80.unknown = UVar27.unknown;
      FUN_1000087e4(lVar8 + *(int *)(local_d0 + 0x18),UVar12.unknown,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar8 = local_c8;
      puVar15 = UVar12.unknown;
      (**(code **)(local_c8 + 0x30))(UVar12.unknown,1,puVar17);
      if ((int)puVar15 == 1) {
        FUN_10002a29c(UVar12.unknown,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1001bf0c0:
        FUN_10025f510();
        lVar8 = local_120;
        lVar16 = local_180[2];
        if (*(long *)(UVar12.unknown + 0x10) == 0) {
          _swift_bridgeObjectRelease();
          pcVar19 = local_108;
          _swift_storeEnumTagMultiPayload(local_108,local_88,3);
          puVar17 = local_d8;
          UVar27.unknown = local_80.unknown;
        }
        else {
          FUN_100029504(UVar12.unknown +
                        ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff)),local_180[2],
                        FUN_100266c2c);
          _swift_bridgeObjectRelease(UVar12.unknown);
          lVar22 = local_180[1];
          FUN_100007e64(lVar16,local_180[1],FUN_100266c2c);
          puVar17 = local_d8;
          pcVar19 = local_108;
          (**(code **)(local_c8 + 0x10))(local_108,lVar22,local_d8);
          FUN_100029548(lVar22,FUN_100266c2c);
          _swift_storeEnumTagMultiPayload(pcVar19,local_88,1);
          UVar27.unknown = local_80.unknown;
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(local_b0.unknown,UVar12.unknown,puVar17);
        uVar29 = 0;
        lVar8 = *(long *)((long)local_90 + (long)*(int *)(local_98 + 0x34));
        uVar30 = *(ulong *)(lVar8 + 0x10);
        do {
          UVar12.unknown = local_c0.unknown;
          if (uVar30 == uVar29) {
            UVar12.unknown = local_b0.unknown;
            (**(code **)(local_c8 + 8))(local_b0.unknown,local_d8);
            uVar20 = local_100;
            goto LAB_1001bf0c0;
          }
          if (*(ulong *)(lVar8 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bf1b4);
            (*pcVar6)();
          }
          pcVar6 = FUN_100266c2c;
          FUN_100029504(lVar8 + ((ulong)*(byte *)(local_70 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(local_70 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(local_70 + 0x48) * uVar29,local_c0.unknown);
          uVar29 = uVar29 + 1;
          bVar7 = Foundation::UUID::___infix(UVar12,local_b0,(UUID)pcVar6);
          FUN_100029548(UVar12.unknown,FUN_100266c2c);
          UVar12.unknown = local_b0.unknown;
          lVar16 = local_c8;
          puVar17 = local_d8;
          pcVar19 = local_108;
        } while (!bVar7);
        (**(code **)(local_c8 + 0x10))(local_108,local_b0.unknown,local_d8);
        _swift_storeEnumTagMultiPayload(pcVar19,local_88,1);
        (**(code **)(lVar16 + 8))(UVar12.unknown,puVar17);
        uVar20 = local_100;
        UVar27.unknown = local_80.unknown;
        lVar8 = local_120;
      }
    }
  }
LAB_1001bec5c:
  lVar8 = local_180[0];
  if ((long)uVar25 < (long)uVar21) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001bec74);
    (*pcVar6)();
  }
LAB_1001bec88:
  lVar24 = local_f0;
  lVar22 = local_110;
  FUN_1002886d4(uVar21,uVar25);
  lVar16 = local_180[3];
  FUN_1001b934c(local_180[3],local_148,local_140,uVar20);
  uVar29 = *(ulong *)(lVar24 + lVar8);
  uVar25 = uVar29;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar21 = uVar29;
  if ((uVar25 & 1) == 0) {
    uVar21 = 0;
    FUN_1001c8094(0,*(long *)(uVar29 + 0x10) + 1,1,uVar29,&DAT_100556850,&DAT_10042a660,
                  FUN_100266c40,PTR__swift_bridgeObjectRelease_100524200);
  }
  uVar25 = *(ulong *)(uVar21 + 0x10);
  uVar29 = uVar21;
  if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar25) {
    uVar29 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
    FUN_1001c8094(uVar29,uVar25 + 1,1,uVar21,&DAT_100556850,&DAT_10042a660,FUN_100266c40,
                  PTR__swift_bridgeObjectRelease_100524200);
  }
  *(ulong *)(uVar29 + 0x10) = uVar25 + 1;
  uVar21 = (ulong)*(byte *)(lVar22 + 0x50);
  FUN_100007e64(lVar16,uVar29 + (uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff)) +
                       *(long *)(lVar22 + 0x48) * uVar25,FUN_100266c40);
  *(ulong *)(local_f0 + lVar8) = uVar29;
  pcVar6 = FUN_10025ee04;
  puVar18 = local_90;
LAB_1001bed28:
  FUN_100029548(puVar18,pcVar6);
  return;
}

