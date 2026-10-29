// rea decompile_all
// name: FUN_100265d2c
// address: 0x100265d2c
// body: available
// range: 0x100265d2c-0x100266027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100265d2c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  UUID UVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_70;
  long local_68;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_00;
  puVar7 = &DAT_10054a9c0;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_01;
  if ((((undefined *)*param_1 != (undefined *)*param_2) ||
      ((undefined *)param_1[1] != (undefined *)param_2[1])) &&
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar5)) {
    return 0;
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    if (*(char *)(param_2 + 2) != '\x02') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 2) != *(char *)(param_2 + 2)) {
    return 0;
  }
  lVar8 = 0;
  local_70 = lVar11;
  FUN_100266c40();
  iVar3 = *(int *)(lVar8 + 0x18);
  lVar11 = (long)*(int *)(puVar7 + 0x30);
  local_68 = lVar8;
  FUN_1000087e4((long)param_1 + (long)iVar3,lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4((long)param_2 + (long)iVar3,lVar9 + lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar8 = lVar9;
  (*pcVar12)(lVar9,1,UVar6.unknown);
  if ((int)lVar8 == 1) {
    lVar11 = lVar9 + lVar11;
    (*pcVar12)(lVar11,1,UVar6.unknown);
    if ((int)lVar11 != 1) {
LAB_100265f34:
      FUN_10002a29c(lVar9,&DAT_10054a9c0,&DAT_100422d20);
      return 0;
    }
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    FUN_1000087e4(lVar9,lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar8 = lVar9 + lVar11;
    (*pcVar12)(lVar8,1,UVar6.unknown);
    lVar4 = local_70;
    if ((int)lVar8 == 1) {
      (**(code **)(lVar13 + 8))(lVar10,UVar6.unknown);
      goto LAB_100265f34;
    }
    (**(code **)(lVar13 + 0x20))(local_70,lVar9 + lVar11,UVar6.unknown);
    puVar7 = &DAT_10054a130;
    FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                  PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
    bVar5 = Swift::Equatable::___infix(lVar10,lVar4,UVar6.unknown,puVar7);
    pcVar12 = *(code **)(lVar13 + 8);
    (*pcVar12)(lVar4,UVar6.unknown);
    (*pcVar12)(lVar10,UVar6.unknown);
    FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
    if (!bVar5) {
      return 0;
    }
  }
  cVar1 = *(char *)((long)param_1 + (long)*(int *)(local_68 + 0x1c));
  cVar2 = *(char *)((long)param_2 + (long)*(int *)(local_68 + 0x1c));
  if (cVar1 == '\x02') {
    if (cVar2 == '\x02') {
      return 1;
    }
  }
  else if (cVar1 == cVar2) {
    return 1;
  }
  return 0;
}

