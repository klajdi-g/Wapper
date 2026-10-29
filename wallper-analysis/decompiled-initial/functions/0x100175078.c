// rea decompile_all
// name: FUN_100175078
// address: 0x100175078
// body: available
// range: 0x100175078-0x10017539f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_100175078(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  URL UVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar11 - extraout_x8_00;
  puVar6 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar12 - extraout_x8_01;
  if (((((undefined *)*param_1 == (undefined *)*param_2) &&
       ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
      (bVar4 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar4)) &&
     (*(char *)(param_1 + 2) == *(char *)(param_2 + 2))) {
    if ((((undefined *)param_1[3] == (undefined *)param_2[3]) &&
        ((undefined *)param_1[4] == (undefined *)param_2[4])) ||
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[3],(undefined *)param_1[4],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[3]), bVar4)) {
      if (((((undefined *)param_1[5] == (undefined *)param_2[5]) &&
           ((undefined *)param_1[6] == (undefined *)param_2[6])) ||
          (bVar4 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)param_1[5],(undefined *)param_1[6],
                              (_StringComparisonResult)(__int8)(undefined *)param_2[5]), bVar4)) &&
         (param_1[7] == param_2[7])) {
        lVar7 = 0;
        FUN_100170d98();
        iVar3 = *(int *)(lVar7 + 0x24);
        lVar13 = (long)*(int *)(puVar6 + 0x30);
        FUN_100077938((long)param_1 + (long)iVar3,lVar10);
        FUN_100077938((long)param_2 + (long)iVar3,lVar10 + lVar13);
        pcVar15 = *(code **)(lVar14 + 0x30);
        lVar8 = lVar10;
        (*pcVar15)(lVar10,1,UVar5.unknown);
        if ((int)lVar8 == 1) {
          lVar13 = lVar10 + lVar13;
          (*pcVar15)(lVar13,1,UVar5.unknown);
          if ((int)lVar13 == 1) {
            FUN_10002a29c(lVar10,&DAT_100553d90,&DAT_10041bf10);
LAB_100175328:
            if (*(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x28)) ==
                *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x28))) {
              cVar1 = *(char *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
              cVar2 = *(char *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
              if (cVar1 == '\x04') {
                if (cVar2 == '\x04') {
LAB_100175388:
                  bVar9 = *(byte *)((long)param_1 + (long)*(int *)(lVar7 + 0x30)) ^
                          *(byte *)((long)param_2 + (long)*(int *)(lVar7 + 0x30)) ^ 1;
                  goto LAB_10017535c;
                }
              }
              else if (cVar1 == cVar2) goto LAB_100175388;
            }
          }
          else {
LAB_10017528c:
            FUN_10002a29c(lVar10,&DAT_10054ea38,&DAT_100426270);
          }
        }
        else {
          FUN_100077938(lVar10,lVar12);
          lVar8 = lVar10 + lVar13;
          (*pcVar15)(lVar8,1,UVar5.unknown);
          if ((int)lVar8 == 1) {
            (**(code **)(lVar14 + 8))(lVar12,UVar5.unknown);
            goto LAB_10017528c;
          }
          (**(code **)(lVar14 + 0x20))(puVar11,lVar10 + lVar13,UVar5.unknown);
          puVar6 = &DAT_100553da0;
          FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                        PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
          bVar4 = Swift::Equatable::___infix(lVar12,puVar11,UVar5.unknown,puVar6);
          pcVar15 = *(code **)(lVar14 + 8);
          (*pcVar15)(puVar11,UVar5.unknown);
          (*pcVar15)(lVar12,UVar5.unknown);
          FUN_10002a29c(lVar10,&DAT_100553d90,&DAT_10041bf10);
          if (bVar4) goto LAB_100175328;
        }
      }
    }
  }
  bVar9 = 0;
LAB_10017535c:
  return bVar9 & 1;
}

