// rea decompile_all
// name: FUN_10040af08
// address: 0x10040af08
// body: available
// range: 0x10040af08-0x10040b5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10040af08(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  code *local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar16 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar16 - extraout_x12;
  local_68 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  puVar5 = &DAT_100552ef0;
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar11 - extraout_x12_02;
  if ((((undefined *)*param_1 != (undefined *)*param_2) ||
      ((undefined *)param_1[1] != (undefined *)param_2[1])) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar3)) {
    return 0;
  }
  if ((((undefined *)param_1[2] != (undefined *)param_2[2]) ||
      ((undefined *)param_1[3] != (undefined *)param_2[3])) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[2],(undefined *)param_1[3],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar3)) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  if (param_1[5] != param_2[5]) {
    return 0;
  }
  lVar6 = 0;
  local_a8 = lVar16;
  local_98 = lVar7;
  FUN_1003fdce0();
  iVar1 = *(int *)(lVar6 + 0x20);
  iVar2 = *(int *)(puVar5 + 0x30);
  local_a0 = puVar5;
  local_90 = lVar6;
  local_78 = DVar4.unknown;
  FUN_1000087e4((long)param_1 + (long)iVar1,lVar14,&DAT_10054b950,&DAT_10041d870);
  puVar5 = local_78;
  local_80 = (long)iVar2;
  FUN_1000087e4((long)param_2 + (long)iVar1,lVar14 + iVar2,&DAT_10054b950,&DAT_10041d870);
  pcVar15 = *(code **)(lVar12 + 0x30);
  lVar7 = lVar14;
  local_88 = lVar12;
  (*pcVar15)(lVar14,1,puVar5);
  if ((int)lVar7 == 1) {
    lVar10 = lVar14 + local_80;
    (*pcVar15)(lVar10,1,puVar5);
    if ((int)lVar10 != 1) goto LAB_10040b1e8;
    FUN_10002a29c(lVar14,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    FUN_1000087e4(lVar14,lVar10,&DAT_10054b950,&DAT_10041d870);
    lVar6 = local_80;
    lVar12 = lVar14 + local_80;
    (*pcVar15)(lVar12,1,puVar5);
    lVar16 = local_88;
    lVar7 = local_98;
    if ((int)lVar12 == 1) {
      (**(code **)(local_88 + 8))(lVar10,puVar5);
      goto LAB_10040b1e8;
    }
    local_b0 = pcVar15;
    (**(code **)(local_88 + 0x20))(local_98,lVar14 + lVar6,puVar5);
    puVar8 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar3 = Swift::Equatable::___infix(lVar10,lVar7,puVar5,puVar8);
    pcVar15 = local_b0;
    pcVar13 = *(code **)(lVar16 + 8);
    (*pcVar13)(lVar7,puVar5);
    (*pcVar13)(lVar10,puVar5);
    FUN_10002a29c(lVar14,&DAT_10054b950,&DAT_10041d870);
    if (!bVar3) {
      return 0;
    }
  }
  lVar10 = local_90;
  puVar5 = local_a0;
  if (*(char *)((long)param_1 + (long)*(int *)(local_90 + 0x24)) !=
      *(char *)((long)param_2 + (long)*(int *)(local_90 + 0x24))) {
    return 0;
  }
  if (*(char *)((long)param_1 + (long)*(int *)(local_90 + 0x28)) !=
      *(char *)((long)param_2 + (long)*(int *)(local_90 + 0x28))) {
    return 0;
  }
  iVar1 = *(int *)(local_90 + 0x2c);
  lVar12 = (long)*(int *)(local_a0 + 0x30);
  FUN_1000087e4((long)param_1 + (long)iVar1,lVar11,&DAT_10054b950,&DAT_10041d870);
  puVar8 = local_78;
  FUN_1000087e4((long)param_2 + (long)iVar1,lVar11 + lVar12,&DAT_10054b950,&DAT_10041d870);
  lVar16 = lVar11;
  (*pcVar15)(lVar11,1,puVar8);
  lVar7 = local_68;
  lVar14 = lVar11;
  if ((int)lVar16 == 1) {
    lVar12 = lVar11 + lVar12;
    (*pcVar15)(lVar12,1,puVar8);
    if ((int)lVar12 != 1) goto LAB_10040b1e8;
    FUN_10002a29c(lVar11,&DAT_10054b950,&DAT_10041d870);
  }
  else {
    FUN_1000087e4(lVar11,local_68,&DAT_10054b950,&DAT_10041d870);
    lVar10 = lVar11 + lVar12;
    (*pcVar15)(lVar10,1,puVar8);
    lVar6 = local_88;
    lVar16 = local_98;
    if ((int)lVar10 == 1) {
      (**(code **)(local_88 + 8))(lVar7,puVar8);
      goto LAB_10040b1e8;
    }
    local_b0 = pcVar15;
    (**(code **)(local_88 + 0x20))(local_98,lVar11 + lVar12,puVar8);
    puVar9 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar3 = Swift::Equatable::___infix(lVar7,lVar16,puVar8,puVar9);
    pcVar15 = local_b0;
    pcVar13 = *(code **)(lVar6 + 8);
    (*pcVar13)(lVar16,puVar8);
    (*pcVar13)(lVar7,puVar8);
    FUN_10002a29c(lVar11,&DAT_10054b950,&DAT_10041d870);
    lVar10 = local_90;
    if (!bVar3) {
      return 0;
    }
  }
  lVar14 = local_70;
  iVar1 = *(int *)(lVar10 + 0x30);
  lVar10 = (long)*(int *)(puVar5 + 0x30);
  FUN_1000087e4((long)param_1 + (long)iVar1,local_70,&DAT_10054b950,&DAT_10041d870);
  puVar5 = local_78;
  FUN_1000087e4((long)param_2 + (long)iVar1,lVar14 + lVar10,&DAT_10054b950,&DAT_10041d870);
  lVar12 = lVar14;
  (*pcVar15)(lVar14,1,puVar5);
  lVar11 = local_a8;
  if ((int)lVar12 == 1) {
    lVar10 = lVar14 + lVar10;
    (*pcVar15)(lVar10,1,puVar5);
    if ((int)lVar10 == 1) {
      FUN_10002a29c(lVar14,&DAT_10054b950,&DAT_10041d870);
      return 1;
    }
  }
  else {
    FUN_1000087e4(lVar14,local_a8,&DAT_10054b950,&DAT_10041d870);
    lVar12 = lVar14 + lVar10;
    (*pcVar15)(lVar12,1,puVar5);
    lVar16 = local_88;
    lVar7 = local_98;
    if ((int)lVar12 != 1) {
      (**(code **)(local_88 + 0x20))(local_98,lVar14 + lVar10,puVar5);
      puVar8 = &DAT_100552ef8;
      FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
      bVar3 = Swift::Equatable::___infix(lVar11,lVar7,puVar5,puVar8);
      pcVar15 = *(code **)(lVar16 + 8);
      (*pcVar15)(lVar7,puVar5);
      (*pcVar15)(lVar11,puVar5);
      FUN_10002a29c(lVar14,&DAT_10054b950,&DAT_10041d870);
      if (!bVar3) {
        return 0;
      }
      return 1;
    }
    (**(code **)(local_88 + 8))(lVar11,puVar5);
  }
LAB_10040b1e8:
  FUN_10002a29c(lVar14,&DAT_100552ef0,&DAT_100426920);
  return 0;
}

