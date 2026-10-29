// rea decompile_all
// name: FUN_100329db4
// address: 0x100329db4
// body: available
// range: 0x100329db4-0x10032a5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100329db4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  Date DVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  Date DVar9;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  Date DVar13;
  Date DVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  Date DVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined auStack_e0 [8];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  puVar5 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  puVar5 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = puVar5 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = puVar17 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = puVar12 + -extraout_x12_01;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  DVar16.unknown = puVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar13.unknown = DVar16.unknown + -extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar14.unknown = DVar13.unknown + -extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar9.unknown = DVar14.unknown + -extraout_x12_04;
  lVar7 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar15 = (long)DVar9.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar15 - extraout_x13;
  lVar11 = *(long *)(extraout_x12_05 + 0x48);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x10032a5f4);
    (*pcVar19)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x10032a5f8);
    (*pcVar19)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x10032a5fc);
    (*pcVar19)();
  }
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar11;
  }
  lVar3 = 0;
  if (lVar11 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar11;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar15 = lVar2 * lVar11;
    if ((param_4 < param_1) || (param_1 + lVar15 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar7);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar7);
    }
    uVar22 = param_4 + lVar15;
    local_70 = uVar22;
    if (0 < lVar15 && param_2 < param_3) {
      do {
        FUN_10002f154(param_4,lVar10);
        FUN_1000087e4(param_2 + (long)*(int *)(lVar7 + 0x2c),puVar21,&DAT_10054b950,&DAT_10041d870);
        pcVar19 = *(code **)(lVar18 + 0x30);
        DVar13.unknown = puVar21;
        (*pcVar19)(puVar21,1,DVar6.unknown);
        if ((int)DVar13.unknown == 1) {
          Foundation::Date::get_distantPast(DVar13);
          puVar5 = puVar21;
          (*pcVar19)(puVar21,1,DVar6.unknown);
          if ((int)puVar5 != 1) {
            FUN_10002a29c(puVar21,&DAT_10054b950,&DAT_10041d870);
          }
        }
        else {
          (**(code **)(lVar18 + 0x20))(DVar9.unknown,puVar21,DVar6.unknown);
        }
        FUN_1000087e4(lVar10 + *(int *)(lVar7 + 0x2c),puVar12,&DAT_10054b950,&DAT_10041d870);
        DVar16.unknown = puVar12;
        (*pcVar19)(puVar12,1,DVar6.unknown);
        DVar13 = DVar6;
        if ((int)DVar16.unknown == 1) {
          Foundation::Date::get_distantPast(DVar16);
          puVar5 = puVar12;
          (*pcVar19)(puVar12,1);
          if ((int)puVar5 != 1) {
            DVar13.unknown = &DAT_10041d870;
            FUN_10002a29c(puVar12,&DAT_10054b950);
          }
        }
        else {
          (**(code **)(lVar18 + 0x20))(DVar14.unknown,puVar12);
        }
        bVar4 = Foundation::Date::>_infix(DVar9,DVar14,DVar13);
        pcVar19 = *(code **)(lVar18 + 8);
        (*pcVar19)(DVar14.unknown,DVar6.unknown);
        (*pcVar19)(DVar9.unknown,DVar6.unknown);
        FUN_10002f1dc(lVar10);
        if (bVar4) {
          uVar20 = param_2 + lVar11;
          uVar8 = param_4;
          if ((param_1 < param_2) || (uVar20 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar7);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar7);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar8 = param_4 + lVar11;
          uVar20 = param_2;
          uVar1 = uVar8;
          if ((param_1 < param_4) || (uVar8 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar7);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar7);
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar11;
        local_58 = param_1;
      } while ((uVar8 < uVar22) &&
              (param_4 = uVar8, param_2 = uVar20, local_58 = param_1, uVar20 < param_3));
    }
  }
  else {
    lVar10 = lVar3 * lVar11;
    if ((param_4 < param_2) || (param_2 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar7);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar7);
    }
    uVar22 = param_4 + lVar10;
    local_70 = uVar22;
    local_58 = param_2;
    if (0 < lVar10 && param_1 < param_2) {
      lVar11 = -lVar11;
      do {
        uVar20 = param_2 + lVar11;
        uVar8 = param_3;
        local_58 = param_2;
        while( true ) {
          uVar1 = uVar22 + lVar11;
          FUN_10002f154(uVar20,lVar15);
          FUN_1000087e4(uVar1 + (long)*(int *)(lVar7 + 0x2c),puVar17,&DAT_10054b950,&DAT_10041d870);
          pcVar19 = *(code **)(lVar18 + 0x30);
          DVar9.unknown = puVar17;
          (*pcVar19)(puVar17,1,DVar6.unknown);
          if ((int)DVar9.unknown == 1) {
            Foundation::Date::get_distantPast(DVar9);
            puVar12 = puVar17;
            (*pcVar19)(puVar17,1,DVar6.unknown);
            if ((int)puVar12 != 1) {
              FUN_10002a29c(puVar17,&DAT_10054b950,&DAT_10041d870);
            }
          }
          else {
            (**(code **)(lVar18 + 0x20))(DVar13.unknown,puVar17,DVar6.unknown);
          }
          FUN_1000087e4(lVar15 + *(int *)(lVar7 + 0x2c),puVar5,&DAT_10054b950,&DAT_10041d870);
          DVar14.unknown = puVar5;
          (*pcVar19)(puVar5,1,DVar6.unknown);
          DVar9 = DVar6;
          if ((int)DVar14.unknown == 1) {
            Foundation::Date::get_distantPast(DVar14);
            puVar12 = puVar5;
            (*pcVar19)(puVar5,1);
            if ((int)puVar12 != 1) {
              DVar9.unknown = &DAT_10041d870;
              FUN_10002a29c(puVar5,&DAT_10054b950);
            }
          }
          else {
            (**(code **)(lVar18 + 0x20))(DVar16.unknown,puVar5);
          }
          param_3 = uVar8 + lVar11;
          bVar4 = Foundation::Date::>_infix(DVar13,DVar16,DVar9);
          pcVar19 = *(code **)(lVar18 + 8);
          (*pcVar19)(DVar16.unknown,DVar6.unknown);
          (*pcVar19)(DVar13.unknown,DVar6.unknown);
          FUN_10002f1dc(lVar15);
          if (bVar4) break;
          local_70 = uVar1;
          if ((uVar8 < uVar22) || (uVar22 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar7);
          }
          else if (uVar8 != uVar22) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar7);
          }
          uVar8 = param_3;
          uVar22 = uVar1;
          if (uVar1 <= param_4) goto LAB_10032a32c;
        }
        if ((uVar8 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar20,1,lVar7);
        }
        else if (uVar8 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar20,1,lVar7);
        }
        local_58 = uVar20;
      } while ((param_4 < uVar22) && (param_2 = uVar20, param_1 < uVar20));
    }
  }
LAB_10032a32c:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

