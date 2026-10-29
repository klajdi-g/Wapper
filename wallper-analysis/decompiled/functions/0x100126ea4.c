// rea decompile_all
// name: FUN_100126ea4
// address: 0x100126ea4
// body: available
// range: 0x100126ea4-0x10012731f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_100126ea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  _StringGuts _Var13;
  long lVar14;
  _StringGuts _Var15;
  UUID UVar16;
  Date DVar17;
  undefined *puVar18;
  byte bVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar25 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  puVar21 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)puVar21 - extraout_x8_00;
  puVar11 = &DAT_100552ef0;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar22 - extraout_x8_01;
  UVar16.unknown = (undefined *)*param_2;
  if ((((undefined *)*param_1 == UVar16.unknown) &&
      ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
     (bVar9 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)UVar16.unknown), bVar9)) {
    lVar12 = 0;
    FUN_100126a5c();
    bVar9 = Foundation::UUID::___infix
                      ((undefined *)((long)param_1 + (long)*(int *)(lVar12 + 0x14)),
                       (undefined *)((long)param_2 + (long)*(int *)(lVar12 + 0x14)),UVar16);
    if (bVar9) {
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x18));
      _Var15.unknown = (undefined *)*puVar1;
      _Var13.unknown = (undefined *)puVar1[1];
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x18));
      DVar17.unknown = (undefined *)*puVar1;
      if (((_Var15.unknown == DVar17.unknown && _Var13.unknown == (undefined *)puVar1[1]) ||
          (bVar9 = Swift::_stringCompareWithSmolCheck
                             (_Var15,_Var13,(_StringComparisonResult)(__int8)DVar17.unknown), bVar9)
          ) && (*(char *)((long)param_1 + (long)*(int *)(lVar12 + 0x1c)) ==
                *(char *)((long)param_2 + (long)*(int *)(lVar12 + 0x1c)))) {
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x20));
        _Var15.unknown = (undefined *)puVar1[1];
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x20));
        puVar18 = (undefined *)puVar2[1];
        if (_Var15.unknown == (undefined *)0x0) {
          if (puVar18 == (undefined *)0x0) {
LAB_100127048:
            pdVar3 = (double *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
            pdVar4 = (double *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
            cVar7 = *(char *)(pdVar4 + 1);
            if (*(char *)(pdVar3 + 1) == '\x01') {
              if (cVar7 != '\x01') goto LAB_100127260;
            }
            else {
              bVar19 = 0;
              if ((cVar7 == '\x01') || (*pdVar3 != *pdVar4)) goto LAB_100127264;
            }
            plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar12 + 0x28));
            plVar6 = (long *)((long)param_2 + (long)*(int *)(lVar12 + 0x28));
            cVar7 = (char)plVar6[1];
            if ((char)plVar5[1] == '\x01') {
              if (cVar7 != '\x01') goto LAB_100127260;
            }
            else {
              bVar19 = 0;
              if ((cVar7 == '\x01') || (*plVar5 != *plVar6)) goto LAB_100127264;
            }
            plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar12 + 0x2c));
            plVar6 = (long *)((long)param_2 + (long)*(int *)(lVar12 + 0x2c));
            cVar7 = (char)plVar6[1];
            if ((char)plVar5[1] == '\x01') {
              if (cVar7 != '\x01') goto LAB_100127260;
            }
            else {
              bVar19 = 0;
              if ((cVar7 == '\x01') || (*plVar5 != *plVar6)) goto LAB_100127264;
            }
            puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x30));
            _Var15.unknown = (undefined *)puVar1[1];
            puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x30));
            puVar18 = (undefined *)puVar2[1];
            if (_Var15.unknown == (undefined *)0x0) {
              if (puVar18 == (undefined *)0x0) {
LAB_10012715c:
                bVar9 = Foundation::Date::___infix
                                  ((undefined *)((long)param_1 + (long)*(int *)(lVar12 + 0x34)),
                                   (undefined *)((long)param_2 + (long)*(int *)(lVar12 + 0x34)),
                                   DVar17);
                if (bVar9) {
                  iVar8 = *(int *)(lVar12 + 0x38);
                  lVar23 = (long)*(int *)(puVar11 + 0x30);
                  FUN_1000087e4((long)param_1 + (long)iVar8,lVar20,&DAT_10054b950,&DAT_10041d870);
                  FUN_1000087e4((long)param_2 + (long)iVar8,lVar20 + lVar23,&DAT_10054b950,
                                &DAT_10041d870);
                  pcVar24 = *(code **)(lVar25 + 0x30);
                  lVar14 = lVar20;
                  (*pcVar24)(lVar20,1,DVar10.unknown);
                  if ((int)lVar14 == 1) {
                    lVar23 = lVar20 + lVar23;
                    (*pcVar24)(lVar23,1,DVar10.unknown);
                    if ((int)lVar23 == 1) {
                      FUN_10002a29c(lVar20,&DAT_10054b950,&DAT_10041d870);
LAB_100127308:
                      bVar19 = *(byte *)((long)param_1 + (long)*(int *)(lVar12 + 0x3c)) ^
                               *(byte *)((long)param_2 + (long)*(int *)(lVar12 + 0x3c)) ^ 1;
                      goto LAB_100127264;
                    }
                  }
                  else {
                    FUN_1000087e4(lVar20,lVar22,&DAT_10054b950,&DAT_10041d870);
                    lVar14 = lVar20 + lVar23;
                    (*pcVar24)(lVar14,1,DVar10.unknown);
                    if ((int)lVar14 != 1) {
                      (**(code **)(lVar25 + 0x20))(puVar21,lVar20 + lVar23,DVar10.unknown);
                      puVar11 = &DAT_100552ef8;
                      FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
                      bVar9 = Swift::Equatable::___infix(lVar22,puVar21,DVar10.unknown,puVar11);
                      pcVar24 = *(code **)(lVar25 + 8);
                      (*pcVar24)(puVar21,DVar10.unknown);
                      (*pcVar24)(lVar22,DVar10.unknown);
                      FUN_10002a29c(lVar20,&DAT_10054b950,&DAT_10041d870);
                      if (bVar9) goto LAB_100127308;
                      goto LAB_100127260;
                    }
                    (**(code **)(lVar25 + 8))(lVar22,DVar10.unknown);
                  }
                  FUN_10002a29c(lVar20,&DAT_100552ef0,&DAT_100426920);
                }
              }
            }
            else if (puVar18 != (undefined *)0x0) {
              _Var13.unknown = (undefined *)*puVar1;
              DVar17.unknown = (undefined *)*puVar2;
              if (((_Var13.unknown == DVar17.unknown) && (_Var15.unknown == puVar18)) ||
                 (bVar9 = Swift::_stringCompareWithSmolCheck
                                    (_Var13,_Var15,(_StringComparisonResult)(__int8)DVar17.unknown),
                 bVar9)) goto LAB_10012715c;
            }
          }
        }
        else if (puVar18 != (undefined *)0x0) {
          _Var13.unknown = (undefined *)*puVar1;
          DVar17.unknown = (undefined *)*puVar2;
          if (((_Var13.unknown == DVar17.unknown) && (_Var15.unknown == puVar18)) ||
             (bVar9 = Swift::_stringCompareWithSmolCheck
                                (_Var13,_Var15,(_StringComparisonResult)(__int8)DVar17.unknown),
             bVar9)) goto LAB_100127048;
        }
      }
    }
  }
LAB_100127260:
  bVar19 = 0;
LAB_100127264:
  return bVar19 & 1;
}

