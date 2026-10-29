// rea decompile_all
// name: FUN_100408204
// address: 0x100408204
// body: available
// range: 0x100408204-0x100408d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100408204(long *param_1,undefined8 param_2,long *param_3,long param_4,code *param_5,
                  code *param_6)

{
  bool bVar1;
  Date DVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long unaff_x21;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long local_160;
  ulong local_158;
  long *local_150;
  long local_148;
  long local_140;
  long *local_138;
  long local_130;
  undefined *local_58;
  
  puVar8 = &DAT_10054b950;
  local_150 = param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar29 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar29 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar12 - extraout_x12_01;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar32 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar13 = lVar32 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = uVar13 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar14 - extraout_x12_04;
  lVar3 = 0;
  FUN_10040211c();
  local_148 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar15 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar16 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_160 = lVar18 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_158 = (lVar18 - extraout_x12_08) - extraout_x12_09;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar19 = param_3[1];
  local_138 = param_3;
  if (0 < lVar19) {
    lVar20 = 0;
    local_140 = param_4;
    do {
      uVar4 = local_158;
      lVar5 = lVar20 + 1;
      local_130 = lVar20;
      if (lVar5 < lVar19) {
        lVar25 = *param_3;
        lVar27 = *(long *)(local_148 + 0x48);
        lVar28 = lVar25 + lVar27 * lVar5;
        FUN_100029504(lVar28,local_158,FUN_10040211c);
        lVar5 = local_160;
        FUN_100029504(lVar25 + lVar27 * lVar20,local_160,FUN_10040211c);
        FUN_100406a40(uVar4,lVar5,param_5,param_6);
        FUN_100029548(lVar5,FUN_10040211c);
        FUN_100029548(local_158,FUN_10040211c);
        if (unaff_x21 != 0) goto LAB_100408d18;
        lVar25 = lVar25 + lVar27 * (local_130 + 2);
        lVar20 = local_130 + 2;
        do {
          lVar5 = lVar19;
          if (lVar19 == lVar20) break;
          FUN_100029504(lVar28,lVar18,FUN_10040211c);
          FUN_1000087e4(lVar25 + *(int *)(lVar3 + 0x2c),lVar9,&DAT_10054b950,&DAT_10041d870);
          pcVar26 = *(code **)(lVar10 + 0x30);
          lVar5 = lVar9;
          (*pcVar26)(lVar9,1,DVar2.unknown);
          if ((int)lVar5 == 1) {
            (*param_5)(lVar11);
            lVar5 = lVar9;
            (*pcVar26)(lVar9,1,DVar2.unknown);
            if ((int)lVar5 != 1) {
              FUN_10002a29c(lVar9,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar10 + 0x20))(lVar11,lVar9,DVar2.unknown);
          }
          FUN_1000087e4(lVar18 + *(int *)(lVar3 + 0x2c),lVar12,&DAT_10054b950,&DAT_10041d870);
          lVar5 = lVar12;
          (*pcVar26)(lVar12,1,DVar2.unknown);
          if ((int)lVar5 == 1) {
            (*param_5)(lVar14);
            lVar5 = lVar12;
            (*pcVar26)(lVar12,1,DVar2.unknown);
            if ((int)lVar5 != 1) {
              FUN_10002a29c(lVar12,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar10 + 0x20))(lVar14,lVar12,DVar2.unknown);
          }
          lVar30 = lVar11;
          (*param_6)(lVar11,lVar14);
          pcVar26 = *(code **)(lVar10 + 8);
          (*pcVar26)(lVar14,DVar2.unknown);
          (*pcVar26)(lVar11,DVar2.unknown);
          FUN_100029548(lVar18,FUN_10040211c);
          lVar25 = lVar25 + lVar27;
          lVar28 = lVar28 + lVar27;
          lVar5 = lVar20;
          lVar20 = lVar20 + 1;
        } while ((((uint)uVar4 ^ (uint)lVar30) & 1) == 0);
        param_3 = local_138;
        if ((uVar4 & 1) != 0) {
          if (lVar5 < local_130) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d5c);
            (*pcVar26)();
          }
          if (local_130 < lVar5) {
            lVar28 = 0;
            lVar25 = *local_138;
            lVar30 = lVar27 * (lVar5 + -1);
            lVar31 = lVar5 * lVar27;
            lVar20 = local_130 * lVar27;
            lVar19 = local_130;
            do {
              if (lVar19 != lVar5 + lVar28 + -1) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d74);
                  (*pcVar26)();
                }
                uVar4 = lVar25 + lVar20;
                FUN_100007e64(uVar4,lVar17,FUN_10040211c);
                if ((lVar20 < lVar30) || ((ulong)(lVar25 + lVar31) <= uVar4)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar4,lVar25 + lVar30,1,lVar3);
                }
                else if (lVar27 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar4,lVar25 + lVar30,1,lVar3);
                }
                FUN_100007e64(lVar17,lVar25 + lVar30,FUN_10040211c);
              }
              lVar19 = lVar19 + 1;
              lVar28 = lVar28 + -1;
              lVar30 = lVar30 - lVar27;
              lVar31 = lVar31 - lVar27;
              lVar20 = lVar20 + lVar27;
              param_3 = local_138;
            } while (lVar19 < lVar5 + lVar28);
          }
        }
      }
      lVar19 = param_3[1];
      lVar20 = lVar5;
      if (lVar5 < lVar19) {
        if (SBORROW8(lVar5,local_130)) {
                    /* WARNING: Does not return */
          pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d50);
          (*pcVar26)();
        }
        if (lVar5 - local_130 < local_140) {
          if (SCARRY8(local_130,local_140)) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d54);
            (*pcVar26)();
          }
          lVar25 = local_130 + local_140;
          if (lVar19 <= local_130 + local_140) {
            lVar25 = lVar19;
          }
          if (lVar25 < local_130) {
                    /* WARNING: Does not return */
            pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d58);
            (*pcVar26)();
          }
          if (lVar5 != lVar25) {
            lVar21 = *param_3;
            lVar22 = *(long *)(local_148 + 0x48);
            lVar28 = lVar21 + lVar22 * (lVar5 + -1);
            lVar19 = local_130 - lVar5;
            lVar27 = lVar21 + lVar5 * lVar22;
            lVar30 = lVar27;
            lVar31 = lVar28;
            lVar24 = lVar19;
LAB_100408934:
            do {
              FUN_100029504(lVar28,lVar16,FUN_10040211c);
              FUN_1000087e4(lVar27 + *(int *)(lVar3 + 0x2c),lVar23,&DAT_10054b950,&DAT_10041d870);
              pcVar26 = *(code **)(lVar10 + 0x30);
              lVar20 = lVar23;
              (*pcVar26)(lVar23,1,DVar2.unknown);
              if ((int)lVar20 == 1) {
                (*param_5)(uVar13);
                lVar20 = lVar23;
                (*pcVar26)(lVar23,1,DVar2.unknown);
                if ((int)lVar20 != 1) {
                  FUN_10002a29c(lVar23,&DAT_10054b950,&DAT_10041d870);
                }
              }
              else {
                (**(code **)(lVar10 + 0x20))(uVar13,lVar23,DVar2.unknown);
              }
              FUN_1000087e4(lVar16 + *(int *)(lVar3 + 0x2c),lVar29,&DAT_10054b950,&DAT_10041d870);
              lVar20 = lVar29;
              (*pcVar26)(lVar29,1,DVar2.unknown);
              if ((int)lVar20 == 1) {
                (*param_5)(lVar32);
                lVar20 = lVar29;
                (*pcVar26)(lVar29,1,DVar2.unknown);
                if ((int)lVar20 != 1) {
                  FUN_10002a29c(lVar29,&DAT_10054b950,&DAT_10041d870);
                }
              }
              else {
                (**(code **)(lVar10 + 0x20))(lVar32,lVar29,DVar2.unknown);
              }
              uVar4 = uVar13;
              (*param_6)(uVar13,lVar32);
              pcVar26 = *(code **)(lVar10 + 8);
              (*pcVar26)(lVar32,DVar2.unknown);
              (*pcVar26)(uVar13,DVar2.unknown);
              FUN_100029548(lVar16,FUN_10040211c);
              if ((uVar4 & 1) != 0) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d60);
                  (*pcVar26)();
                }
                FUN_100007e64(lVar27,lVar15,FUN_10040211c);
                _swift_arrayInitWithTakeFrontToBack(lVar27,lVar28,1,lVar3);
                FUN_100007e64(lVar15,lVar28,FUN_10040211c);
                lVar28 = lVar28 + -lVar22;
                lVar27 = lVar27 + -lVar22;
                bVar1 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                if (bVar1) goto LAB_100408934;
              }
              lVar5 = lVar5 + 1;
              lVar28 = lVar31 + lVar22;
              lVar19 = lVar24 + -1;
              lVar27 = lVar30 + lVar22;
              lVar20 = lVar25;
              lVar30 = lVar27;
              lVar31 = lVar28;
              lVar24 = lVar19;
            } while (lVar5 != lVar25);
          }
        }
      }
      puVar8 = local_58;
      if (lVar20 < local_130) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d44);
        (*pcVar26)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar8,uVar4 + 1,1,puVar7);
      }
      param_3 = local_138;
      *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
      *(long *)(puVar8 + uVar4 * 0x10 + 0x20) = local_130;
      *(long *)(puVar8 + uVar4 * 0x10 + 0x28) = lVar20;
      local_58 = puVar8;
      if (*local_150 == 0) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d78);
        (*pcVar26)();
      }
      FUN_1004092d4(&local_58,*local_150,local_138,param_5,param_6);
      if (unaff_x21 != 0) goto LAB_100408d18;
      lVar19 = param_3[1];
    } while (lVar20 < lVar19);
  }
  puVar8 = local_58;
  lVar3 = *local_150;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d80);
    (*pcVar26)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100265268();
  }
  uVar13 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar13) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d7c);
      (*pcVar26)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar8 + uVar13 * 0x10);
    lVar10 = *(long *)(puVar8 + lVar12 * 0x10 + 0x28);
    lVar11 = *(long *)(local_148 + 0x48);
    FUN_10040955c(lVar9 + lVar11 * lVar14,lVar9 + lVar11 * *(long *)(puVar8 + lVar12 * 0x10 + 0x20),
                  lVar9 + lVar11 * lVar10,lVar3,param_5,param_6);
    if (unaff_x21 != 0) break;
    if (lVar10 < lVar14) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d48);
      (*pcVar26)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x100408d4c);
      (*pcVar26)();
    }
    *(long *)(puVar8 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar8 + uVar13 * 0x10) + 8) = lVar10;
    local_58 = puVar8;
    FUN_10026503c(lVar12);
    puVar8 = local_58;
    param_3 = local_138;
    uVar13 = *(ulong *)(local_58 + 0x10);
  }
LAB_100408d18:
  _swift_bridgeObjectRelease(local_58);
  return;
}

