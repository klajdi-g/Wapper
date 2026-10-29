// rea decompile_all
// name: FUN_10040b5f0
// address: 0x10040b5f0
// body: available
// range: 0x10040b5f0-0x10040c67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10040b5f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar16;
  long lVar17;
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
  long lVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  
  local_70 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_68 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_68 + 0x40));
  lVar16 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10054b950;
  local_80 = lVar16;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  local_c8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_00;
  local_b8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_01;
  local_a8 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_02;
  local_98 = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12_03;
  puVar15 = &DAT_100552ef0;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  local_78 = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_04;
  local_b0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_05;
  local_a0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_06;
  local_90 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_07;
  local_88 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12_08;
  lVar9 = 0;
  FUN_1003fdce0();
  lVar23 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  lVar18 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_10055a2a8;
  FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar21 = lVar18 - extraout_x8_03;
  puVar15 = &DAT_1005613d8;
  FUN_100002f94(&DAT_1005613d8,&DAT_100437248);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = uVar21 - extraout_x8_04;
  if ((((undefined *)*param_1 != (undefined *)*param_2) ||
      ((undefined *)param_1[1] != (undefined *)param_2[1])) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar8)) {
    return 0;
  }
  if ((((undefined *)param_1[2] != (undefined *)param_2[2]) ||
      ((undefined *)param_1[3] != (undefined *)param_2[3])) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[2],(undefined *)param_1[3],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar8)) {
    return 0;
  }
  _Var13.unknown = (undefined *)param_1[5];
  puVar14 = (undefined *)param_2[5];
  if (_Var13.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var13.unknown != puVar14)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var13,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar8)) {
      return 0;
    }
  }
  _Var13.unknown = (undefined *)param_1[7];
  puVar14 = (undefined *)param_2[7];
  if (_Var13.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var13.unknown != puVar14)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var13,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar8)) {
      return 0;
    }
  }
  _Var13.unknown = (undefined *)param_1[9];
  puVar14 = (undefined *)param_2[9];
  if (_Var13.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[8] != (undefined *)param_2[8]) || (_Var13.unknown != puVar14)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[8],_Var13,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[8]), !bVar8)) {
      return 0;
    }
  }
  _Var13.unknown = (undefined *)param_1[0xb];
  puVar14 = (undefined *)param_2[0xb];
  if (_Var13.unknown == (undefined *)0x0) {
    if (puVar14 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar14 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[10] != (undefined *)param_2[10]) || (_Var13.unknown != puVar14)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[10],_Var13,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[10]), !bVar8)) {
      return 0;
    }
  }
  lVar10 = 0;
  FUN_100400294();
  local_d8 = (long)*(int *)(lVar10 + 0x28);
  iVar7 = *(int *)(puVar15 + 0x30);
  local_e0 = lVar10;
  FUN_1000087e4((long)param_1 + local_d8,lVar19,&DAT_10055a2a8,&DAT_10042e0d8);
  lVar10 = (long)param_2 + local_d8;
  local_d8 = (long)iVar7;
  FUN_1000087e4(lVar10,lVar19 + iVar7,&DAT_10055a2a8,&DAT_10042e0d8);
  pcVar22 = *(code **)(lVar23 + 0x30);
  lVar23 = lVar19;
  (*pcVar22)(lVar19,1,lVar9);
  if ((int)lVar23 == 1) {
    lVar18 = lVar19 + local_d8;
    (*pcVar22)(lVar18,1,lVar9);
    if ((int)lVar18 == 1) {
      FUN_10002a29c(lVar19,&DAT_10055a2a8,&DAT_10042e0d8);
LAB_10040bb6c:
      lVar19 = local_e0;
      if (*(char *)((long)param_1 + (long)*(int *)(local_e0 + 0x2c)) !=
          *(char *)((long)param_2 + (long)*(int *)(local_e0 + 0x2c))) {
        return 0;
      }
      iVar7 = *(int *)(local_e0 + 0x30);
      lVar9 = (long)*(int *)(local_78 + 0x30);
      FUN_1000087e4((long)param_1 + (long)iVar7,lVar17,&DAT_10054b950,&DAT_10041d870);
      FUN_1000087e4((long)param_2 + (long)iVar7,lVar17 + lVar9,&DAT_10054b950,&DAT_10041d870);
      puVar15 = local_70;
      pcVar22 = *(code **)(local_68 + 0x30);
      lVar18 = lVar17;
      (*pcVar22)(lVar17,1,local_70);
      if ((int)lVar18 == 1) {
        lVar9 = lVar17 + lVar9;
        (*pcVar22)(lVar9,1,puVar15);
        if ((int)lVar9 != 1) {
LAB_10040bc88:
          puVar15 = &DAT_100552ef0;
          puVar14 = &DAT_100426920;
          lVar19 = lVar17;
          goto LAB_10040bb08;
        }
        FUN_10002a29c(lVar17,&DAT_10054b950,&DAT_10041d870);
      }
      else {
        FUN_1000087e4(lVar17,lVar16,&DAT_10054b950,&DAT_10041d870);
        lVar19 = lVar17 + lVar9;
        (*pcVar22)(lVar19,1,puVar15);
        lVar23 = local_68;
        lVar18 = local_80;
        if ((int)lVar19 == 1) {
          (**(code **)(local_68 + 8))(lVar16,puVar15);
          goto LAB_10040bc88;
        }
        (**(code **)(local_68 + 0x20))(local_80,lVar17 + lVar9,puVar15);
        puVar14 = &DAT_100552ef8;
        FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                      PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
        bVar8 = Swift::Equatable::___infix(lVar16,lVar18,puVar15,puVar14);
        lVar19 = local_e0;
        pcVar20 = *(code **)(lVar23 + 8);
        (*pcVar20)(lVar18,puVar15);
        (*pcVar20)(lVar16,puVar15);
        FUN_10002a29c(lVar17,&DAT_10054b950,&DAT_10041d870);
        if (!bVar8) {
          return 0;
        }
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar19 + 0x34));
      _Var13.unknown = (undefined *)*puVar1;
      _Var12.unknown = (undefined *)puVar1[1];
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar19 + 0x34));
      puVar15 = (undefined *)*puVar1;
      if (((_Var13.unknown != puVar15) || (_Var12.unknown != (undefined *)puVar1[1])) &&
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var13,_Var12,(_StringComparisonResult)(__int8)puVar15), !bVar8)) {
        return 0;
      }
      if (*(char *)((long)param_1 + (long)*(int *)(lVar19 + 0x38)) !=
          *(char *)((long)param_2 + (long)*(int *)(lVar19 + 0x38))) {
        return 0;
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar19 + 0x3c));
      _Var13.unknown = (undefined *)*puVar1;
      _Var12.unknown = (undefined *)puVar1[1];
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar19 + 0x3c));
      puVar15 = (undefined *)*puVar1;
      if (((_Var13.unknown != puVar15) || (_Var12.unknown != (undefined *)puVar1[1])) &&
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var13,_Var12,(_StringComparisonResult)(__int8)puVar15), !bVar8)) {
        return 0;
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar19 + 0x40));
      _Var13.unknown = (undefined *)puVar1[1];
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar19 + 0x40));
      puVar15 = (undefined *)puVar2[1];
      if (_Var13.unknown == (undefined *)0x0) {
        if (puVar15 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar15 == (undefined *)0x0) {
          return 0;
        }
        _Var12.unknown = (undefined *)*puVar1;
        puVar14 = (undefined *)*puVar2;
        if (((_Var12.unknown != puVar14) || (_Var13.unknown != puVar15)) &&
           (bVar8 = Swift::_stringCompareWithSmolCheck
                              (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar14), !bVar8)) {
          return 0;
        }
      }
      cVar3 = *(char *)((long)param_1 + (long)*(int *)(lVar19 + 0x44));
      cVar4 = *(char *)((long)param_2 + (long)*(int *)(lVar19 + 0x44));
      if (cVar3 == '\x03') {
        if (cVar4 != '\x03') {
          return 0;
        }
      }
      else if (cVar3 != cVar4) {
        return 0;
      }
      uVar21 = *(ulong *)((long)param_1 + (long)*(int *)(lVar19 + 0x48));
      lVar19 = *(long *)((long)param_2 + (long)*(int *)(lVar19 + 0x48));
      if (uVar21 == 0) {
        if (lVar19 != 0) {
          return 0;
        }
      }
      else {
        if (lVar19 == 0) {
          return 0;
        }
        _swift_bridgeObjectRetain(lVar19);
        uVar11 = uVar21;
        _swift_bridgeObjectRetain();
        FUN_1001da07c();
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease(lVar19);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      lVar19 = local_88;
      bVar5 = *(byte *)((long)param_1 + (long)*(int *)(local_e0 + 0x4c));
      bVar6 = *(byte *)((long)param_2 + (long)*(int *)(local_e0 + 0x4c));
      if (bVar5 == 2) {
        if (bVar6 != 2) {
          return 0;
        }
      }
      else {
        if (bVar6 == 2) {
          return 0;
        }
        if (((bVar5 ^ bVar6) & 1) != 0) {
          return 0;
        }
      }
      iVar7 = *(int *)(local_e0 + 0x50);
      lVar9 = (long)*(int *)(local_78 + 0x30);
      FUN_1000087e4((long)param_1 + (long)iVar7,local_88,&DAT_10054b950,&DAT_10041d870);
      FUN_1000087e4((long)param_2 + (long)iVar7,lVar19 + lVar9,&DAT_10054b950,&DAT_10041d870);
      (*pcVar22)(lVar19,1,local_70);
      lVar16 = local_88;
      if ((int)lVar19 == 1) {
        lVar9 = local_88 + lVar9;
        (*pcVar22)(lVar9,1,local_70);
        if ((int)lVar9 == 1) {
          FUN_10002a29c(local_88,&DAT_10054b950,&DAT_10041d870);
          goto LAB_10040c028;
        }
      }
      else {
        FUN_1000087e4(local_88,local_98,&DAT_10054b950,&DAT_10041d870);
        lVar16 = lVar16 + lVar9;
        (*pcVar22)(lVar16,1,local_70);
        lVar18 = local_68;
        puVar15 = local_70;
        lVar17 = local_80;
        lVar19 = local_88;
        if ((int)lVar16 != 1) {
          (**(code **)(local_68 + 0x20))(local_80,local_88 + lVar9,local_70);
          puVar14 = &DAT_100552ef8;
          FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                        PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
          lVar9 = local_98;
          bVar8 = Swift::Equatable::___infix(local_98,lVar17,puVar15,puVar14);
          pcVar20 = *(code **)(lVar18 + 8);
          (*pcVar20)(lVar17,puVar15);
          (*pcVar20)(lVar9,puVar15);
          FUN_10002a29c(lVar19,&DAT_10054b950,&DAT_10041d870);
          if (!bVar8) {
            return 0;
          }
LAB_10040c028:
          lVar16 = local_90;
          iVar7 = *(int *)(local_e0 + 0x54);
          lVar19 = (long)*(int *)(local_78 + 0x30);
          FUN_1000087e4((long)param_1 + (long)iVar7,local_90,&DAT_10054b950,&DAT_10041d870);
          FUN_1000087e4((long)param_2 + (long)iVar7,lVar16 + lVar19,&DAT_10054b950,&DAT_10041d870);
          (*pcVar22)(lVar16,1,local_70);
          lVar9 = local_90;
          if ((int)lVar16 == 1) {
            lVar19 = local_90 + lVar19;
            (*pcVar22)(lVar19,1,local_70);
            if ((int)lVar19 != 1) {
LAB_10040c10c:
              puVar15 = &DAT_100552ef0;
              puVar14 = &DAT_100426920;
              lVar19 = local_90;
              goto LAB_10040bb08;
            }
            FUN_10002a29c(local_90,&DAT_10054b950,&DAT_10041d870);
          }
          else {
            FUN_1000087e4(local_90,local_a8,&DAT_10054b950,&DAT_10041d870);
            lVar9 = lVar9 + lVar19;
            (*pcVar22)(lVar9,1,local_70);
            lVar18 = local_68;
            puVar15 = local_70;
            lVar17 = local_80;
            lVar16 = local_90;
            if ((int)lVar9 == 1) {
              (**(code **)(local_68 + 8))(local_a8,local_70);
              goto LAB_10040c10c;
            }
            (**(code **)(local_68 + 0x20))(local_80,local_90 + lVar19,local_70);
            puVar14 = &DAT_100552ef8;
            FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                          PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
            lVar19 = local_a8;
            bVar8 = Swift::Equatable::___infix(local_a8,lVar17,puVar15,puVar14);
            pcVar20 = *(code **)(lVar18 + 8);
            (*pcVar20)(lVar17,puVar15);
            (*pcVar20)(lVar19,puVar15);
            FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
            if (!bVar8) {
              return 0;
            }
          }
          lVar16 = local_a0;
          iVar7 = *(int *)(local_e0 + 0x58);
          lVar19 = (long)*(int *)(local_78 + 0x30);
          FUN_1000087e4((long)param_1 + (long)iVar7,local_a0,&DAT_10054b950,&DAT_10041d870);
          FUN_1000087e4((long)param_2 + (long)iVar7,lVar16 + lVar19,&DAT_10054b950,&DAT_10041d870);
          (*pcVar22)(lVar16,1,local_70);
          lVar9 = local_a0;
          if ((int)lVar16 == 1) {
            lVar19 = local_a0 + lVar19;
            (*pcVar22)(lVar19,1,local_70);
            if ((int)lVar19 != 1) {
LAB_10040c2a0:
              puVar15 = &DAT_100552ef0;
              puVar14 = &DAT_100426920;
              lVar19 = local_a0;
              goto LAB_10040bb08;
            }
            FUN_10002a29c(local_a0,&DAT_10054b950,&DAT_10041d870);
          }
          else {
            FUN_1000087e4(local_a0,local_b8,&DAT_10054b950,&DAT_10041d870);
            lVar9 = lVar9 + lVar19;
            (*pcVar22)(lVar9,1,local_70);
            lVar18 = local_68;
            puVar15 = local_70;
            lVar17 = local_80;
            lVar16 = local_a0;
            if ((int)lVar9 == 1) {
              (**(code **)(local_68 + 8))(local_b8,local_70);
              goto LAB_10040c2a0;
            }
            (**(code **)(local_68 + 0x20))(local_80,local_a0 + lVar19,local_70);
            puVar14 = &DAT_100552ef8;
            FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                          PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
            lVar19 = local_b8;
            bVar8 = Swift::Equatable::___infix(local_b8,lVar17,puVar15,puVar14);
            pcVar20 = *(code **)(lVar18 + 8);
            (*pcVar20)(lVar17,puVar15);
            (*pcVar20)(lVar19,puVar15);
            FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
            if (!bVar8) {
              return 0;
            }
          }
          lVar16 = local_b0;
          iVar7 = *(int *)(local_e0 + 0x5c);
          lVar19 = (long)*(int *)(local_78 + 0x30);
          FUN_1000087e4((long)param_1 + (long)iVar7,local_b0,&DAT_10054b950,&DAT_10041d870);
          FUN_1000087e4((long)param_2 + (long)iVar7,lVar16 + lVar19,&DAT_10054b950,&DAT_10041d870);
          (*pcVar22)(lVar16,1,local_70);
          lVar9 = local_b0;
          if ((int)lVar16 == 1) {
            lVar19 = local_b0 + lVar19;
            (*pcVar22)(lVar19,1,local_70);
            if ((int)lVar19 != 1) {
LAB_10040c434:
              puVar15 = &DAT_100552ef0;
              puVar14 = &DAT_100426920;
              lVar19 = local_b0;
              goto LAB_10040bb08;
            }
            FUN_10002a29c(local_b0,&DAT_10054b950,&DAT_10041d870);
          }
          else {
            FUN_1000087e4(local_b0,local_c8,&DAT_10054b950,&DAT_10041d870);
            lVar9 = lVar9 + lVar19;
            (*pcVar22)(lVar9,1,local_70);
            lVar18 = local_68;
            puVar15 = local_70;
            lVar17 = local_80;
            lVar16 = local_b0;
            if ((int)lVar9 == 1) {
              (**(code **)(local_68 + 8))(local_c8,local_70);
              goto LAB_10040c434;
            }
            (**(code **)(local_68 + 0x20))(local_80,local_b0 + lVar19,local_70);
            puVar14 = &DAT_100552ef8;
            FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                          PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
            lVar19 = local_c8;
            bVar8 = Swift::Equatable::___infix(local_c8,lVar17,puVar15,puVar14);
            pcVar20 = *(code **)(lVar18 + 8);
            (*pcVar20)(lVar17,puVar15);
            (*pcVar20)(lVar19,puVar15);
            FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
            if (!bVar8) {
              return 0;
            }
          }
          lVar16 = local_c0;
          iVar7 = *(int *)(local_e0 + 0x60);
          lVar19 = (long)*(int *)(local_78 + 0x30);
          FUN_1000087e4((long)param_1 + (long)iVar7,local_c0,&DAT_10054b950,&DAT_10041d870);
          FUN_1000087e4((long)param_2 + (long)iVar7,lVar16 + lVar19,&DAT_10054b950,&DAT_10041d870);
          (*pcVar22)(lVar16,1,local_70);
          lVar9 = local_c0;
          if ((int)lVar16 == 1) {
            lVar19 = local_c0 + lVar19;
            (*pcVar22)(lVar19,1,local_70);
            if ((int)lVar19 == 1) {
              FUN_10002a29c(local_c0,&DAT_10054b950,&DAT_10041d870);
              return 1;
            }
          }
          else {
            FUN_1000087e4(local_c0,local_d0,&DAT_10054b950,&DAT_10041d870);
            lVar9 = lVar9 + lVar19;
            (*pcVar22)(lVar9,1,local_70);
            lVar18 = local_68;
            puVar15 = local_70;
            lVar17 = local_80;
            lVar16 = local_c0;
            if ((int)lVar9 != 1) {
              (**(code **)(local_68 + 0x20))(local_80,local_c0 + lVar19,local_70);
              puVar14 = &DAT_100552ef8;
              FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                            PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
              lVar19 = local_d0;
              bVar8 = Swift::Equatable::___infix(local_d0,lVar17,puVar15,puVar14);
              pcVar22 = *(code **)(lVar18 + 8);
              (*pcVar22)(lVar17,puVar15);
              (*pcVar22)(lVar19,puVar15);
              FUN_10002a29c(lVar16,&DAT_10054b950,&DAT_10041d870);
              if (!bVar8) {
                return 0;
              }
              return 1;
            }
            (**(code **)(local_68 + 8))(local_d0,local_70);
          }
          puVar15 = &DAT_100552ef0;
          puVar14 = &DAT_100426920;
          lVar19 = local_c0;
          goto LAB_10040bb08;
        }
        (**(code **)(local_68 + 8))(local_98,local_70);
      }
      puVar15 = &DAT_100552ef0;
      puVar14 = &DAT_100426920;
      lVar19 = local_88;
      goto LAB_10040bb08;
    }
  }
  else {
    FUN_1000087e4(lVar19,uVar21,&DAT_10055a2a8,&DAT_10042e0d8);
    lVar10 = local_d8;
    lVar23 = lVar19 + local_d8;
    (*pcVar22)(lVar23,1,lVar9);
    if ((int)lVar23 != 1) {
      FUN_100007e64(lVar19 + lVar10,lVar18,FUN_1003fdce0);
      uVar11 = uVar21;
      FUN_10040af08(uVar21,lVar18);
      FUN_100029548(lVar18,FUN_1003fdce0);
      FUN_100029548(uVar21,FUN_1003fdce0);
      FUN_10002a29c(lVar19,&DAT_10055a2a8,&DAT_10042e0d8);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      goto LAB_10040bb6c;
    }
    FUN_100029548(uVar21,FUN_1003fdce0);
  }
  puVar15 = &DAT_1005613d8;
  puVar14 = &DAT_100437248;
LAB_10040bb08:
  FUN_10002a29c(lVar19,puVar15,puVar14);
  return 0;
}

