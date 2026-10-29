// rea decompile_all
// name: FUN_1000bf898
// address: 0x1000bf898
// body: available
// range: 0x1000bf898-0x1000c035f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000bf898(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  Calendar CVar8;
  Date DVar9;
  undefined *puVar10;
  Date DVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long lVar17;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar22;
  code *pcVar23;
  long unaff_x20;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  long lVar31;
  undefined1 auStack_130 [8];
  long local_128;
  long local_120;
  long local_118;
  undefined1 *local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  long local_f0;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  
  lVar6 = 0;
  FUN_10040211c();
  local_f0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_110 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar6 = 0;
  local_f8 = lVar17;
  FUN_1001d537c();
  local_d0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100550eb8;
  local_118 = lVar17;
  FUN_100002f94(&DAT_100550eb8,&DAT_100422a48);
  local_e0 = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  lVar7 = 0;
  FUN_1001d59ac();
  local_b8 = *(long *)(lVar7 + -8);
  local_120 = lVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar20 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_00;
  local_c8 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_01;
  puVar10 = &DAT_10054a9d0;
  FUN_100002f94(&DAT_10054a9d0,&DAT_10041bc60);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar20 - extraout_x8_03;
  puVar10 = &DAT_100550ec0;
  FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  uVar21 = lVar7 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_108 = uVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = uVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_c0 = lVar26 - extraout_x12_03;
  CVar8 = Foundation::Calendar::typeMetadataAccessor();
  lVar22 = *(long *)(CVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar27 = (lVar26 - extraout_x12_03) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar25 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar31 = lVar27 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined *)0x0;
  FUN_10025ee04();
  if (*(char *)(unaff_x20 + *(int *)(puVar10 + 0x1c)) == '\0') {
    FUN_10025f200();
  }
  else {
    local_100 = lVar20;
    DVar11 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar11.unknown);
    lVar20 = lVar31;
    FUN_1001d6f78(lVar31,lVar27);
    pcVar23 = *(code **)(lVar22 + 8);
    local_d8 = lVar20;
    (*pcVar23)(lVar27,CVar8.unknown);
    pcVar24 = *(code **)(lVar25 + 8);
    (*pcVar24)(lVar31,DVar9.unknown);
    DVar11 = Foundation::Date::init();
    Foundation::Calendar::get_current((Calendar)DVar11.unknown);
    FUN_1001d62f0(lVar7,lVar31,lVar27);
    (*pcVar23)(lVar27,CVar8.unknown);
    (*pcVar24)(lVar31,DVar9.unknown);
    lVar20 = local_120;
    lVar25 = lVar7;
    (**(code **)(local_b8 + 0x30))(lVar7,1,local_120);
    lVar22 = local_c0;
    bVar5 = (int)lVar25 != 1;
    if (bVar5) {
      FUN_100029504(lVar7,local_c0,FUN_1001d537c);
      FUN_100029548(lVar7,FUN_1001d59ac);
    }
    else {
      FUN_10002a29c(lVar7,&DAT_10054a9d0,&DAT_10041bc60);
      lVar22 = local_c0;
    }
    local_e8 = *(code **)(local_d0 + 0x38);
    (*local_e8)(lVar22,!bVar5,1,lVar6);
    uVar21 = *(ulong *)(local_d8 + 0x10);
    if (uVar21 == 0) {
      _swift_bridgeObjectRelease(local_d8);
      puVar16 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      uVar29 = 0;
      uVar18 = (ulong)*(byte *)(local_b8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_b8 + 0x50) ^ 0xffffffffffffffff);
      lVar7 = local_d8 + uVar18;
      lVar20 = local_100;
      lVar22 = local_d8;
      do {
        if (*(ulong *)(lVar22 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c035c);
          (*pcVar23)();
        }
        lVar27 = *(long *)(local_b8 + 0x48);
        FUN_100029504(lVar7 + lVar27 * uVar29,lVar20,FUN_1001d59ac);
        FUN_100029504(lVar20,lVar26,FUN_1001d537c);
        (*local_e8)(lVar26,0,1,lVar6);
        lVar25 = (long)*(int *)(local_e0 + 0x30);
        FUN_1000087e4(lVar26,lVar17,&DAT_100550ec0,&DAT_100422eb0);
        FUN_1000087e4(local_c0,lVar17 + lVar25,&DAT_100550ec0,&DAT_100422eb0);
        pcVar23 = *(code **)(local_d0 + 0x30);
        lVar22 = lVar17;
        (*pcVar23)(lVar17,1,lVar6);
        uVar28 = local_108;
        if ((int)lVar22 == 1) {
          FUN_10002a29c(lVar26,&DAT_100550ec0,&DAT_100422eb0);
          FUN_100029548(lVar20,FUN_1001d59ac);
          lVar25 = lVar17 + lVar25;
          (*pcVar23)(lVar25,1,lVar6);
          lVar22 = local_d8;
          if ((int)lVar25 == 1) {
            FUN_10002a29c(lVar17,&DAT_100550ec0,&DAT_100422eb0);
            goto LAB_1000bff34;
          }
LAB_1000bfd18:
          lVar22 = local_d8;
          FUN_10002a29c(lVar17,&DAT_100550eb8,&DAT_100422a48);
        }
        else {
          FUN_1000087e4(lVar17,local_108,&DAT_100550ec0,&DAT_100422eb0);
          lVar20 = lVar17 + lVar25;
          (*pcVar23)(lVar20,1,lVar6);
          lVar22 = local_118;
          if ((int)lVar20 == 1) {
            FUN_10002a29c(lVar26,&DAT_100550ec0,&DAT_100422eb0);
            lVar20 = local_100;
            FUN_100029548(local_100,FUN_1001d59ac);
            FUN_100029548(uVar28,FUN_1001d537c);
            goto LAB_1000bfd18;
          }
          FUN_100007e64(lVar17 + lVar25,local_118,FUN_1001d537c);
          uVar19 = uVar28;
          FUN_1001da410(uVar28,lVar22);
          FUN_100029548(lVar22,FUN_1001d537c);
          FUN_10002a29c(lVar26,&DAT_100550ec0,&DAT_100422eb0);
          lVar20 = local_100;
          FUN_100029548(local_100,FUN_1001d59ac);
          FUN_100029548(uVar28,FUN_1001d537c);
          FUN_10002a29c(lVar17,&DAT_100550ec0,&DAT_100422eb0);
          lVar22 = local_d8;
          if ((uVar19 & 1) != 0) goto LAB_1000bff34;
        }
        uVar29 = uVar29 + 1;
      } while (uVar21 != uVar29);
      uVar29 = 0;
LAB_1000bff34:
      local_80 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5cf8(0,uVar21,0);
      lVar6 = local_128;
      lVar17 = *(long *)(lVar22 + 0x10);
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c0360);
        (*pcVar23)();
      }
      uVar28 = 0;
      puVar16 = local_80;
      do {
        if (SCARRY8(uVar29,uVar28)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c0350);
          (*pcVar23)();
        }
        lVar20 = 0;
        if (lVar17 != 0) {
          lVar20 = (long)(uVar29 + uVar28) / lVar17;
        }
        uVar19 = (uVar29 + uVar28) - lVar20 * lVar17;
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c0354);
          (*pcVar23)();
        }
        if (*(ulong *)(lVar22 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c0358);
          (*pcVar23)();
        }
        FUN_100029504(lVar7 + uVar19 * lVar27,lVar6,FUN_1001d59ac);
        uVar19 = *(ulong *)(puVar16 + 0x10);
        local_80 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar19) {
          FUN_1001c5cf8(1 < *(ulong *)(puVar16 + 0x18),uVar19 + 1,1);
        }
        puVar16 = local_80;
        uVar28 = uVar28 + 1;
        *(ulong *)(local_80 + 0x10) = uVar19 + 1;
        FUN_100007e64(lVar6,local_80 + uVar19 * lVar27 + uVar18,FUN_1001d59ac);
      } while (uVar21 != uVar28);
      _swift_bridgeObjectRelease(lVar22);
      lVar20 = local_120;
    }
    lVar6 = *(long *)(puVar16 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar20 + 0x24);
      puVar14 = puVar16 + ((ulong)*(byte *)(local_b8 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_b8 + 0x50) ^ 0xffffffffffffffff));
      lVar17 = *(long *)(local_b8 + 0x48);
      lVar7 = local_c8;
      do {
        FUN_100029504(puVar14,lVar7,FUN_1001d59ac);
        lVar20 = *(long *)(lVar7 + iVar3);
        if (*(long *)(lVar20 + 0x10) == 0) {
          FUN_100029548(lVar7,FUN_1001d59ac);
        }
        else {
          uVar1 = *(undefined8 *)(lVar20 + 0x20);
          uVar2 = *(undefined8 *)(lVar20 + 0x28);
          _swift_bridgeObjectRetain(uVar2);
          FUN_100029548(lVar7,FUN_1001d59ac);
          puVar15 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar10;
          if (((ulong)puVar15 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1001c432c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar21 = *(ulong *)(puVar12 + 0x10);
          puVar10 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1001c432c(puVar10,uVar21 + 1,1,puVar12);
          }
          *(ulong *)(puVar10 + 0x10) = uVar21 + 1;
          *(undefined8 *)(puVar10 + uVar21 * 0x10 + 0x20) = uVar1;
          *(undefined8 *)(puVar10 + uVar21 * 0x10 + 0x28) = uVar2;
          lVar7 = local_c8;
        }
        puVar14 = puVar14 + lVar17;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    _swift_bridgeObjectRelease(puVar16);
    FUN_10002a29c(local_c0,&DAT_100550ec0,&DAT_100422eb0);
  }
  puVar4 = local_110;
  local_70 = PTR___swiftEmptySetSingleton_1005241a0;
  uVar21 = *(ulong *)(puVar10 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar21 != 0) {
    uVar29 = 0;
    puVar30 = (ulong *)(puVar10 + 0x28);
    do {
      if (*(ulong *)(puVar10 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1000c034c);
        (*pcVar23)();
      }
      uVar18 = puVar30[-1];
      uVar28 = *puVar30;
      _swift_bridgeObjectRetain_n(uVar28,2);
      ppuVar13 = &local_80;
      FUN_1001ca054(ppuVar13,uVar18,uVar28);
      _swift_bridgeObjectRelease(local_78);
      if (((ulong)ppuVar13 & 1) == 0) {
LAB_1000c0180:
        _swift_bridgeObjectRelease(uVar28);
      }
      else {
        lVar6 = 0;
        FUN_1000c61a0();
        lVar6 = *(long *)(unaff_x20 + *(int *)(lVar6 + 0x14));
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_1000c0180;
        _swift_bridgeObjectRetain(lVar6);
        uVar19 = uVar28;
        FUN_10000464c(uVar18);
        if ((uVar19 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar6);
          goto LAB_1000c0180;
        }
        lVar7 = *(long *)(local_f0 + 0x48);
        FUN_100029504(*(long *)(lVar6 + 0x38) + lVar7 * uVar18,puVar4,FUN_10040211c);
        _swift_bridgeObjectRelease(lVar6);
        _swift_bridgeObjectRelease(uVar28);
        FUN_100007e64(puVar4,local_f8,FUN_10040211c);
        puVar14 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = puVar16;
        if (((ulong)puVar14 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_1001c4344(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar18 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1001c4344(puVar16,uVar18 + 1,1,puVar15);
        }
        *(ulong *)(puVar16 + 0x10) = uVar18 + 1;
        FUN_100007e64(local_f8,puVar16 + uVar18 * lVar7 +
                                         ((ulong)*(byte *)(local_f0 + 0x50) + 0x20 &
                                         ((ulong)*(byte *)(local_f0 + 0x50) ^ 0xffffffffffffffff)),
                      FUN_10040211c);
      }
      uVar29 = uVar29 + 1;
      puVar30 = puVar30 + 2;
    } while (uVar21 != uVar29);
  }
  _swift_bridgeObjectRelease(puVar10);
  puVar10 = puVar16;
  if (3 < *(ulong *)(puVar16 + 0x10)) {
    FUN_10031b430(puVar16,puVar16 + ((ulong)*(byte *)(local_f0 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(local_f0 + 0x50) ^ 0xffffffffffffffff)),0,7);
    _swift_bridgeObjectRelease(puVar16);
  }
  _swift_bridgeObjectRelease(local_70);
  return puVar10;
}

