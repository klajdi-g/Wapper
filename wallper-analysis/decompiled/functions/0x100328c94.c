// rea decompile_all
// name: FUN_100328c94
// address: 0x100328c94
// body: available
// range: 0x100328c94-0x100329783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100328c94(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  Date DVar2;
  long lVar3;
  Date DVar4;
  Date DVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8_00;
  Date DVar11;
  long extraout_x8_01;
  Date DVar12;
  Date DVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
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
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined *puVar24;
  long unaff_x21;
  Date DVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long local_150;
  long *local_148;
  long local_140;
  ulong local_138;
  long local_130;
  long *local_128;
  long local_120;
  undefined *local_58;
  
  puVar9 = &DAT_10054b950;
  local_148 = param_1;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  puVar28 = (undefined *)((long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar24 = puVar28 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = puVar24 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = puVar26 + -extraout_x12_01;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  DVar25.unknown = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar12.unknown = DVar25.unknown + -extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar13.unknown = DVar12.unknown + -extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar11.unknown = DVar13.unknown + -extraout_x12_04;
  lVar3 = 0;
  FUN_10040211c();
  local_140 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar14 = (long)DVar11.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar14 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar15 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar16 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_150 = lVar31 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_138 = (lVar31 - extraout_x12_08) - extraout_x12_09;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar17 = param_3[1];
  local_128 = param_3;
  if (0 < lVar17) {
    lVar30 = 0;
    local_130 = param_4;
    do {
      lVar18 = lVar30 + 1;
      local_120 = lVar30;
      if (lVar18 < lVar17) {
        lVar29 = *param_3;
        lVar21 = *(long *)(local_140 + 0x48);
        lVar33 = lVar29 + lVar21 * lVar18;
        FUN_10002f154(lVar33,local_138);
        lVar18 = local_150;
        FUN_10002f154(lVar29 + lVar21 * lVar30,local_150);
        uVar27 = local_138;
        FUN_100324638(local_138,lVar18);
        FUN_10002f1dc(lVar18);
        FUN_10002f1dc(local_138);
        if (unaff_x21 != 0) goto LAB_10032971c;
        lVar29 = lVar29 + lVar21 * (local_120 + 2);
        lVar30 = local_120 + 2;
        do {
          lVar18 = lVar17;
          if (lVar17 == lVar30) break;
          FUN_10002f154(lVar33,lVar31);
          FUN_1000087e4(lVar29 + *(int *)(lVar3 + 0x2c),puVar9,&DAT_10054b950,&DAT_10041d870);
          pcVar22 = *(code **)(lVar10 + 0x30);
          DVar4.unknown = puVar9;
          (*pcVar22)(puVar9,1,DVar2.unknown);
          if ((int)DVar4.unknown == 1) {
            Foundation::Date::get_distantPast(DVar4);
            puVar8 = puVar9;
            (*pcVar22)(puVar9,1,DVar2.unknown);
            if ((int)puVar8 != 1) {
              FUN_10002a29c(puVar9,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar10 + 0x20))(DVar11.unknown,puVar9,DVar2.unknown);
          }
          FUN_1000087e4(lVar31 + *(int *)(lVar3 + 0x2c),puVar26,&DAT_10054b950,&DAT_10041d870);
          DVar5.unknown = puVar26;
          (*pcVar22)(puVar26,1,DVar2.unknown);
          DVar4 = DVar2;
          if ((int)DVar5.unknown == 1) {
            Foundation::Date::get_distantPast(DVar5);
            puVar8 = puVar26;
            (*pcVar22)(puVar26,1);
            if ((int)puVar8 != 1) {
              DVar4.unknown = &DAT_10041d870;
              FUN_10002a29c(puVar26,&DAT_10054b950);
            }
          }
          else {
            (**(code **)(lVar10 + 0x20))(DVar13.unknown,puVar26);
          }
          bVar1 = Foundation::Date::>_infix(DVar11,DVar13,DVar4);
          pcVar22 = *(code **)(lVar10 + 8);
          (*pcVar22)(DVar13.unknown,DVar2.unknown);
          (*pcVar22)(DVar11.unknown,DVar2.unknown);
          FUN_10002f1dc(lVar31);
          lVar29 = lVar29 + lVar21;
          lVar33 = lVar33 + lVar21;
          lVar18 = lVar30;
          lVar30 = lVar30 + 1;
        } while ((((uint)uVar27 ^ (uint)bVar1) & 1) == 0);
        param_3 = local_128;
        if ((uVar27 & 1) != 0) {
          if (lVar18 < local_120) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100329760);
            (*pcVar22)();
          }
          if (local_120 < lVar18) {
            lVar33 = 0;
            lVar29 = *local_128;
            lVar32 = lVar21 * (lVar18 + -1);
            lVar34 = lVar18 * lVar21;
            lVar30 = local_120 * lVar21;
            lVar17 = local_120;
            do {
              if (lVar17 != lVar18 + lVar33 + -1) {
                if (lVar29 == 0) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x100329778);
                  (*pcVar22)();
                }
                uVar27 = lVar29 + lVar30;
                FUN_10002f198(uVar27,lVar16);
                if ((lVar30 < lVar32) || ((ulong)(lVar29 + lVar34) <= uVar27)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar27,lVar29 + lVar32,1,lVar3);
                }
                else if (lVar21 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar27,lVar29 + lVar32,1,lVar3);
                }
                FUN_10002f198(lVar16,lVar29 + lVar32);
              }
              lVar17 = lVar17 + 1;
              lVar33 = lVar33 + -1;
              lVar32 = lVar32 - lVar21;
              lVar34 = lVar34 - lVar21;
              lVar30 = lVar30 + lVar21;
              param_3 = local_128;
            } while (lVar17 < lVar18 + lVar33);
          }
        }
      }
      lVar17 = param_3[1];
      lVar30 = lVar18;
      if (lVar18 < lVar17) {
        if (SBORROW8(lVar18,local_120)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100329754);
          (*pcVar22)();
        }
        if (lVar18 - local_120 < local_130) {
          if (SCARRY8(local_120,local_130)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100329758);
            (*pcVar22)();
          }
          lVar29 = local_120 + local_130;
          if (lVar17 <= local_120 + local_130) {
            lVar29 = lVar17;
          }
          if (lVar29 < local_120) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10032975c);
            (*pcVar22)();
          }
          if (lVar18 != lVar29) {
            lVar19 = *param_3;
            lVar20 = *(long *)(local_140 + 0x48);
            lVar33 = lVar19 + lVar20 * (lVar18 + -1);
            lVar17 = local_120 - lVar18;
            lVar21 = lVar19 + lVar18 * lVar20;
            lVar32 = lVar21;
            lVar34 = lVar17;
            lVar23 = lVar33;
LAB_100329360:
            do {
              FUN_10002f154(lVar33,lVar15);
              FUN_1000087e4(lVar21 + *(int *)(lVar3 + 0x2c),puVar24,&DAT_10054b950,&DAT_10041d870);
              pcVar22 = *(code **)(lVar10 + 0x30);
              DVar4.unknown = puVar24;
              (*pcVar22)(puVar24,1,DVar2.unknown);
              if ((int)DVar4.unknown == 1) {
                Foundation::Date::get_distantPast(DVar4);
                puVar8 = puVar24;
                (*pcVar22)(puVar24,1,DVar2.unknown);
                if ((int)puVar8 != 1) {
                  FUN_10002a29c(puVar24,&DAT_10054b950,&DAT_10041d870);
                }
              }
              else {
                (**(code **)(lVar10 + 0x20))(DVar12.unknown,puVar24,DVar2.unknown);
              }
              FUN_1000087e4(lVar15 + *(int *)(lVar3 + 0x2c),puVar28,&DAT_10054b950,&DAT_10041d870);
              DVar5.unknown = puVar28;
              (*pcVar22)(puVar28,1,DVar2.unknown);
              DVar4 = DVar2;
              if ((int)DVar5.unknown == 1) {
                Foundation::Date::get_distantPast(DVar5);
                puVar8 = puVar28;
                (*pcVar22)(puVar28,1);
                if ((int)puVar8 != 1) {
                  DVar4.unknown = &DAT_10041d870;
                  FUN_10002a29c(puVar28,&DAT_10054b950);
                }
              }
              else {
                (**(code **)(lVar10 + 0x20))(DVar25.unknown,puVar28);
              }
              bVar1 = Foundation::Date::>_infix(DVar12,DVar25,DVar4);
              pcVar22 = *(code **)(lVar10 + 8);
              (*pcVar22)(DVar25.unknown,DVar2.unknown);
              (*pcVar22)(DVar12.unknown,DVar2.unknown);
              FUN_10002f1dc(lVar15);
              if (bVar1) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar22 = (code *)SoftwareBreakpoint(1,0x100329764);
                  (*pcVar22)();
                }
                FUN_10002f198(lVar21,lVar14);
                _swift_arrayInitWithTakeFrontToBack(lVar21,lVar33,1,lVar3);
                FUN_10002f198(lVar14,lVar33);
                lVar33 = lVar33 + -lVar20;
                lVar21 = lVar21 + -lVar20;
                bVar1 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                if (bVar1) goto LAB_100329360;
              }
              lVar18 = lVar18 + 1;
              lVar33 = lVar23 + lVar20;
              lVar17 = lVar34 + -1;
              lVar21 = lVar32 + lVar20;
              lVar30 = lVar29;
              lVar32 = lVar21;
              lVar34 = lVar17;
              lVar23 = lVar33;
            } while (lVar18 != lVar29);
          }
        }
      }
      puVar8 = local_58;
      if (lVar30 < local_120) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100329748);
        (*pcVar22)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar27 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar27) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar8,uVar27 + 1,1,puVar7);
        puVar7 = puVar8;
      }
      param_3 = local_128;
      *(ulong *)(puVar7 + 0x10) = uVar27 + 1;
      *(long *)(puVar7 + uVar27 * 0x10 + 0x20) = local_120;
      *(long *)(puVar7 + uVar27 * 0x10 + 0x28) = lVar30;
      local_58 = puVar7;
      if (*local_148 == 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10032977c);
        (*pcVar22)();
      }
      FUN_100329b34(&local_58,*local_148,local_128);
      if (unaff_x21 != 0) goto LAB_10032971c;
      lVar17 = param_3[1];
    } while (lVar30 < lVar17);
  }
  puVar9 = local_58;
  lVar3 = *local_148;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x100329784);
    (*pcVar22)();
  }
  puVar24 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar24 & 1) == 0) {
    FUN_100265268();
  }
  uVar27 = *(ulong *)(puVar9 + 0x10);
  while (local_58 = puVar9, 1 < uVar27) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100329780);
      (*pcVar22)();
    }
    lVar16 = uVar27 - 1;
    lVar17 = *(long *)(puVar9 + uVar27 * 0x10);
    lVar14 = *(long *)(puVar9 + lVar16 * 0x10 + 0x28);
    lVar15 = *(long *)(local_140 + 0x48);
    FUN_100329db4(lVar10 + lVar15 * lVar17,
                  lVar10 + lVar15 * *(long *)(puVar9 + lVar16 * 0x10 + 0x20),
                  lVar10 + lVar15 * lVar14,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar14 < lVar17) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10032974c);
      (*pcVar22)();
    }
    puVar24 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar24 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar27 - 2) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100329750);
      (*pcVar22)();
    }
    *(long *)(puVar9 + uVar27 * 0x10) = lVar17;
    *(long *)((long)(puVar9 + uVar27 * 0x10) + 8) = lVar14;
    local_58 = puVar9;
    FUN_10026503c(lVar16);
    puVar9 = local_58;
    param_3 = local_128;
    uVar27 = *(ulong *)(local_58 + 0x10);
  }
LAB_10032971c:
  _swift_bridgeObjectRelease(local_58);
  return;
}

