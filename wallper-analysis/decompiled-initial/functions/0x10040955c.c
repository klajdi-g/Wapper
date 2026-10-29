// rea decompile_all
// name: FUN_10040955c
// address: 0x10040955c
// body: available
// range: 0x10040955c-0x100409e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10040955c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,code *param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  Date DVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x8_01;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined1 auStack_f0 [8];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  puVar4 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar12 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar14 - extraout_x12_01;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar22 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar15 = lVar20 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = uVar15 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar10 = lVar16 - extraout_x12_04;
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar17 = uVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar17 - extraout_x13;
  lVar19 = *(long *)(extraout_x12_05 + 0x48);
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100409e18);
    (*pcVar23)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar19 == -1)) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100409e1c);
    (*pcVar23)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar19 == -1)) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100409e20);
    (*pcVar23)();
  }
  lVar2 = 0;
  if (lVar19 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar19;
  }
  lVar3 = 0;
  if (lVar19 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar19;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar13 = lVar2 * lVar19;
    if ((param_4 < param_1) || (param_1 + lVar13 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar6);
    }
    uVar15 = param_4 + lVar13;
    local_70 = uVar15;
    if (0 < lVar13 && param_2 < param_3) {
      do {
        FUN_100029504(param_4,lVar11,FUN_10040211c);
        FUN_1000087e4(param_2 + (long)*(int *)(lVar6 + 0x2c),lVar21,&DAT_10054b950,&DAT_10041d870);
        pcVar23 = *(code **)(lVar22 + 0x30);
        lVar13 = lVar21;
        (*pcVar23)(lVar21,1,DVar5.unknown);
        if ((int)lVar13 == 1) {
          (*param_5)(uVar10);
          lVar13 = lVar21;
          (*pcVar23)(lVar21,1,DVar5.unknown);
          if ((int)lVar13 != 1) {
            FUN_10002a29c(lVar21,&DAT_10054b950,&DAT_10041d870);
          }
        }
        else {
          (**(code **)(lVar22 + 0x20))(uVar10,lVar21,DVar5.unknown);
        }
        FUN_1000087e4(lVar11 + *(int *)(lVar6 + 0x2c),lVar14,&DAT_10054b950,&DAT_10041d870);
        lVar13 = lVar14;
        (*pcVar23)(lVar14,1,DVar5.unknown);
        if ((int)lVar13 == 1) {
          (*param_5)(lVar16);
          lVar13 = lVar14;
          (*pcVar23)(lVar14,1,DVar5.unknown);
          if ((int)lVar13 != 1) {
            FUN_10002a29c(lVar14,&DAT_10054b950,&DAT_10041d870);
          }
        }
        else {
          (**(code **)(lVar22 + 0x20))(lVar16,lVar14,DVar5.unknown);
        }
        uVar7 = uVar10;
        (*param_6)(uVar10,lVar16);
        pcVar23 = *(code **)(lVar22 + 8);
        (*pcVar23)(lVar16,DVar5.unknown);
        (*pcVar23)(uVar10,DVar5.unknown);
        FUN_100029548(lVar11,FUN_10040211c);
        if ((uVar7 & 1) == 0) {
          uVar18 = param_4 + lVar19;
          uVar7 = param_2;
          uVar1 = uVar18;
          if ((param_1 < param_4) || (uVar18 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        else {
          uVar7 = param_2 + lVar19;
          uVar18 = param_4;
          if ((param_1 < param_2) || (uVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              uVar1 = local_68;
            }
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar19;
        local_58 = param_1;
      } while ((uVar18 < uVar15) &&
              (param_2 = uVar7, param_4 = uVar18, local_58 = param_1, uVar7 < param_3));
    }
  }
  else {
    lVar11 = lVar3 * lVar19;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar6);
    }
    uVar10 = param_4 + lVar11;
    local_70 = uVar10;
    local_58 = param_2;
    if (0 < lVar11 && param_1 < param_2) {
      lVar19 = -lVar19;
      do {
        uVar7 = param_2 + lVar19;
        uVar18 = param_3;
        local_58 = param_2;
        while( true ) {
          uVar1 = uVar10 + lVar19;
          FUN_100029504(uVar7,lVar17,FUN_10040211c);
          FUN_1000087e4(uVar1 + (long)*(int *)(lVar6 + 0x2c),lVar13,&DAT_10054b950,&DAT_10041d870);
          pcVar23 = *(code **)(lVar22 + 0x30);
          lVar11 = lVar13;
          (*pcVar23)(lVar13,1,DVar5.unknown);
          if ((int)lVar11 == 1) {
            (*param_5)(uVar15);
            lVar11 = lVar13;
            (*pcVar23)(lVar13,1,DVar5.unknown);
            if ((int)lVar11 != 1) {
              FUN_10002a29c(lVar13,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar22 + 0x20))(uVar15,lVar13,DVar5.unknown);
          }
          FUN_1000087e4(lVar17 + *(int *)(lVar6 + 0x2c),puVar12,&DAT_10054b950,&DAT_10041d870);
          puVar8 = puVar12;
          (*pcVar23)(puVar12,1,DVar5.unknown);
          if ((int)puVar8 == 1) {
            (*param_5)(lVar20);
            puVar8 = puVar12;
            (*pcVar23)(puVar12,1,DVar5.unknown);
            if ((int)puVar8 != 1) {
              FUN_10002a29c(puVar12,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar22 + 0x20))(lVar20,puVar12,DVar5.unknown);
          }
          param_3 = uVar18 + lVar19;
          uVar9 = uVar15;
          (*param_6)(uVar15,lVar20);
          pcVar23 = *(code **)(lVar22 + 8);
          (*pcVar23)(lVar20,DVar5.unknown);
          (*pcVar23)(uVar15,DVar5.unknown);
          FUN_100029548(lVar17,FUN_10040211c);
          if ((uVar9 & 1) != 0) break;
          local_70 = uVar1;
          if ((uVar18 < uVar10) || (uVar10 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar6);
          }
          else if (uVar18 != uVar10) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar6);
          }
          uVar18 = param_3;
          uVar10 = uVar1;
          if (uVar1 <= param_4) goto LAB_100409ae8;
        }
        if ((uVar18 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar7,1,lVar6);
        }
        else if (uVar18 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar7,1,lVar6);
        }
        local_58 = uVar7;
      } while ((param_4 < uVar10) && (param_2 = uVar7, param_1 < uVar7));
    }
  }
LAB_100409ae8:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

