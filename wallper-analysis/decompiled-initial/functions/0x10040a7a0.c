// rea decompile_all
// name: FUN_10040a7a0
// address: 0x10040a7a0
// body: available
// range: 0x10040a7a0-0x10040af07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_10040a7a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  double *pdVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  Date DVar12;
  URL UVar13;
  long lVar14;
  _StringGuts _Var15;
  ulong uVar16;
  _StringGuts _Var17;
  URL UVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  byte bVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined8 *local_68;
  
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar26 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar23 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar21 = &DAT_10054b950;
  local_88 = lVar23;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_00;
  puVar21 = &DAT_100552ef0;
  local_80 = lVar23;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  local_78 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_01;
  local_70 = lVar23;
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar28 = *(long *)(UVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar23 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar21 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar23 - extraout_x8_03;
  puVar21 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar25 - extraout_x8_04;
  UVar18.unknown = (undefined *)*param_2;
  if ((((undefined *)*param_1 == UVar18.unknown) &&
      ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
     (bVar11 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)UVar18.unknown), bVar11)) {
    lVar14 = 0;
    local_90 = lVar26;
    FUN_10040211c();
    bVar11 = Foundation::URL::___infix
                       ((undefined *)((long)param_1 + (long)*(int *)(lVar14 + 0x14)),
                        (undefined *)((long)param_2 + (long)*(int *)(lVar14 + 0x14)),UVar18);
    if (bVar11) {
      iVar9 = *(int *)(lVar14 + 0x18);
      lVar26 = (long)*(int *)(puVar21 + 0x30);
      local_a0 = DVar12.unknown;
      local_98 = lVar14;
      local_68 = param_2;
      FUN_1000087e4((long)param_1 + (long)iVar9,lVar29,&DAT_100553d90,&DAT_10041bf10);
      puVar24 = local_68;
      FUN_1000087e4((long)local_68 + (long)iVar9,lVar29 + lVar26,&DAT_100553d90,&DAT_10041bf10);
      pcVar27 = *(code **)(lVar28 + 0x30);
      lVar14 = lVar29;
      (*pcVar27)(lVar29,1,UVar13.unknown);
      if ((int)lVar14 == 1) {
        lVar26 = lVar29 + lVar26;
        (*pcVar27)(lVar26,1,UVar13.unknown);
        if ((int)lVar26 == 1) {
          FUN_10002a29c(lVar29,&DAT_100553d90,&DAT_10041bf10);
LAB_10040ab2c:
          lVar23 = local_98;
          puVar21 = local_a0;
          puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(local_98 + 0x1c));
          _Var17.unknown = (undefined *)puVar1[1];
          puVar2 = (undefined8 *)((long)puVar24 + (long)*(int *)(local_98 + 0x1c));
          puVar20 = (undefined *)puVar2[1];
          if (_Var17.unknown == (undefined *)0x0) {
            if (puVar20 == (undefined *)0x0) {
LAB_10040ab80:
              lVar29 = local_70;
              if (*(long *)((long)param_1 + (long)*(int *)(lVar23 + 0x20)) ==
                  *(long *)((long)puVar24 + (long)*(int *)(lVar23 + 0x20))) {
                cVar7 = *(char *)((long)param_1 + (long)*(int *)(lVar23 + 0x24));
                cVar8 = *(char *)((long)puVar24 + (long)*(int *)(lVar23 + 0x24));
                if (cVar7 == '\x0e') {
                  if (cVar8 == '\x0e') {
LAB_10040abbc:
                    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar23 + 0x28));
                    plVar4 = (long *)((long)puVar24 + (long)*(int *)(lVar23 + 0x28));
                    cVar7 = (char)plVar4[1];
                    if ((char)plVar3[1] == '\x01') {
                      if (cVar7 != '\x01') goto LAB_10040aa80;
                    }
                    else {
                      bVar22 = 0;
                      if ((cVar7 == '\x01') || (*plVar3 != *plVar4)) goto LAB_10040aa84;
                    }
                    iVar9 = *(int *)(lVar23 + 0x2c);
                    lVar25 = (long)*(int *)(local_78 + 0x30);
                    FUN_1000087e4((long)param_1 + (long)iVar9,local_70,&DAT_10054b950,&DAT_10041d870
                                 );
                    puVar24 = local_68;
                    FUN_1000087e4((long)local_68 + (long)iVar9,lVar29 + lVar25,&DAT_10054b950,
                                  &DAT_10041d870);
                    pcVar27 = *(code **)(local_90 + 0x30);
                    lVar28 = lVar29;
                    (*pcVar27)(lVar29,1,puVar21);
                    lVar26 = local_80;
                    if ((int)lVar28 == 1) {
                      lVar25 = lVar29 + lVar25;
                      (*pcVar27)(lVar25,1,puVar21);
                      if ((int)lVar25 != 1) {
LAB_10040acf0:
                        puVar21 = &DAT_100552ef0;
                        puVar20 = &DAT_100426920;
                        goto LAB_10040aa7c;
                      }
                      FUN_10002a29c(lVar29,&DAT_10054b950,&DAT_10041d870);
LAB_10040ad98:
                      plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar23 + 0x30));
                      plVar4 = (long *)((long)puVar24 + (long)*(int *)(lVar23 + 0x30));
                      cVar7 = (char)plVar4[1];
                      if ((char)plVar3[1] == '\x01') {
                        if (cVar7 != '\x01') goto LAB_10040aa80;
                      }
                      else {
                        bVar22 = 0;
                        if ((cVar7 == '\x01') || (*plVar3 != *plVar4)) goto LAB_10040aa84;
                      }
                      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar23 + 0x34));
                      _Var17.unknown = (undefined *)puVar1[1];
                      puVar2 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar23 + 0x34));
                      puVar21 = (undefined *)puVar2[1];
                      if (_Var17.unknown == (undefined *)0x0) {
                        if (puVar21 == (undefined *)0x0) {
LAB_10040ae24:
                          pdVar5 = (double *)((long)param_1 + (long)*(int *)(lVar23 + 0x38));
                          pdVar6 = (double *)((long)puVar24 + (long)*(int *)(lVar23 + 0x38));
                          cVar7 = *(char *)(pdVar6 + 1);
                          if (*(char *)(pdVar5 + 1) == '\x01') {
                            if (cVar7 != '\x01') goto LAB_10040aa80;
                          }
                          else {
                            bVar22 = 0;
                            if ((cVar7 == '\x01') || (*pdVar5 != *pdVar6)) goto LAB_10040aa84;
                          }
                          puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar23 + 0x3c));
                          _Var17.unknown = (undefined *)puVar1[1];
                          puVar2 = (undefined8 *)((long)puVar24 + (long)*(int *)(lVar23 + 0x3c));
                          puVar21 = (undefined *)puVar2[1];
                          if (_Var17.unknown == (undefined *)0x0) {
                            if (puVar21 == (undefined *)0x0) {
LAB_10040aeb0:
                              if (*(char *)((long)param_1 + (long)*(int *)(lVar23 + 0x40)) ==
                                  *(char *)((long)puVar24 + (long)*(int *)(lVar23 + 0x40))) {
                                uVar16 = *(ulong *)((long)param_1 + (long)*(int *)(lVar23 + 0x44));
                                lVar29 = *(long *)((long)puVar24 + (long)*(int *)(lVar23 + 0x44));
                                if (uVar16 == 0) {
                                  if (lVar29 == 0) goto LAB_10040aee8;
                                }
                                else if ((lVar29 != 0) && (FUN_1001d998c(), (uVar16 & 1) != 0)) {
LAB_10040aee8:
                                  bVar22 = *(byte *)((long)param_1 + (long)*(int *)(local_98 + 0x48)
                                                    ) ^
                                           *(byte *)((long)local_68 +
                                                    (long)*(int *)(local_98 + 0x48)) ^ 1;
                                  goto LAB_10040aa84;
                                }
                              }
                            }
                          }
                          else if (puVar21 != (undefined *)0x0) {
                            _Var15.unknown = (undefined *)*puVar1;
                            puVar20 = (undefined *)*puVar2;
                            if (((_Var15.unknown == puVar20) && (_Var17.unknown == puVar21)) ||
                               (bVar11 = Swift::_stringCompareWithSmolCheck
                                                   (_Var15,_Var17,
                                                    (_StringComparisonResult)(__int8)puVar20),
                               bVar11)) goto LAB_10040aeb0;
                          }
                        }
                      }
                      else if (puVar21 != (undefined *)0x0) {
                        _Var15.unknown = (undefined *)*puVar1;
                        puVar20 = (undefined *)*puVar2;
                        if (((_Var15.unknown == puVar20) && (_Var17.unknown == puVar21)) ||
                           (bVar11 = Swift::_stringCompareWithSmolCheck
                                               (_Var15,_Var17,
                                                (_StringComparisonResult)(__int8)puVar20), bVar11))
                        goto LAB_10040ae24;
                      }
                    }
                    else {
                      FUN_1000087e4(lVar29,local_80,&DAT_10054b950,&DAT_10041d870);
                      lVar28 = lVar29 + lVar25;
                      (*pcVar27)(lVar28,1,puVar21);
                      lVar10 = local_88;
                      lVar14 = local_90;
                      if ((int)lVar28 == 1) {
                        (**(code **)(local_90 + 8))(lVar26,puVar21);
                        goto LAB_10040acf0;
                      }
                      (**(code **)(local_90 + 0x20))(local_88,lVar29 + lVar25,puVar21);
                      puVar20 = &DAT_100552ef8;
                      FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
                      bVar11 = Swift::Equatable::___infix(lVar26,lVar10,puVar21,puVar20);
                      pcVar27 = *(code **)(lVar14 + 8);
                      (*pcVar27)(lVar10,puVar21);
                      (*pcVar27)(lVar26,puVar21);
                      puVar24 = local_68;
                      FUN_10002a29c(lVar29,&DAT_10054b950,&DAT_10041d870);
                      if (bVar11) goto LAB_10040ad98;
                    }
                  }
                }
                else if (cVar7 == cVar8) goto LAB_10040abbc;
              }
            }
          }
          else if (puVar20 != (undefined *)0x0) {
            _Var15.unknown = (undefined *)*puVar1;
            puVar19 = (undefined *)*puVar2;
            if (((_Var15.unknown == puVar19) && (_Var17.unknown == puVar20)) ||
               (bVar11 = Swift::_stringCompareWithSmolCheck
                                   (_Var15,_Var17,(_StringComparisonResult)(__int8)puVar19), bVar11)
               ) goto LAB_10040ab80;
          }
        }
        else {
LAB_10040aa68:
          puVar21 = &DAT_10054ea38;
          puVar20 = &DAT_100426270;
LAB_10040aa7c:
          FUN_10002a29c(lVar29,puVar21,puVar20);
        }
      }
      else {
        FUN_1000087e4(lVar29,lVar25,&DAT_100553d90,&DAT_10041bf10);
        lVar14 = lVar29 + lVar26;
        (*pcVar27)(lVar14,1,UVar13.unknown);
        if ((int)lVar14 == 1) {
          (**(code **)(lVar28 + 8))(lVar25,UVar13.unknown);
          goto LAB_10040aa68;
        }
        (**(code **)(lVar28 + 0x20))(lVar23,lVar29 + lVar26,UVar13.unknown);
        puVar21 = &DAT_100553da0;
        FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
        bVar11 = Swift::Equatable::___infix(lVar25,lVar23,UVar13.unknown,puVar21);
        pcVar27 = *(code **)(lVar28 + 8);
        (*pcVar27)(lVar23,UVar13.unknown);
        (*pcVar27)(lVar25,UVar13.unknown);
        puVar24 = local_68;
        FUN_10002a29c(lVar29,&DAT_100553d90,&DAT_10041bf10);
        if (bVar11) goto LAB_10040ab2c;
      }
    }
  }
LAB_10040aa80:
  bVar22 = 0;
LAB_10040aa84:
  return bVar22 & 1;
}

