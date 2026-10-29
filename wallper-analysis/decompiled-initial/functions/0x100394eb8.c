// rea decompile_all
// name: FUN_100394eb8
// address: 0x100394eb8
// body: available
// range: 0x100394eb8-0x10039540b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100394eb8(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  URL UVar13;
  long lVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar20 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x20);
  (*pcVar20)(param_1,param_2,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  puVar4 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  iVar3 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar22 = *(long *)(DVar9.unknown + -8);
  pcVar16 = *(code **)(lVar22 + 0x20);
  (*pcVar16)(param_1 + iVar3,param_2 + iVar3);
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x20));
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x30));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x34));
  pvVar1 = (void *)(param_1 + *(int *)(param_3 + 0x14));
  pvVar2 = (void *)(param_2 + *(int *)(param_3 + 0x14));
  lVar8 = 0;
  FUN_1001d537c();
  pvVar10 = pvVar2;
  _swift_getEnumCaseMultiPayload(pvVar2,lVar8);
  if ((int)pvVar10 == 1) {
    (*pcVar20)(pvVar1,pvVar2,UVar7.unknown);
    _swift_storeEnumTagMultiPayload(pvVar1,lVar8,1);
  }
  else {
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar11 = 0;
  FUN_1001d59ac();
  puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar11 + 0x14));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar11 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar11 + 0x18));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar11 + 0x18));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  puVar4 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar11 + 0x1c));
  puVar5 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar11 + 0x1c));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar11 + 0x20));
  puVar5 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar11 + 0x20));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar11 + 0x24)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar11 + 0x24));
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar5 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar11 = 0;
  FUN_10040211c();
  lVar17 = *(long *)(lVar11 + -8);
  puVar12 = puVar5;
  (**(code **)(lVar17 + 0x30))(puVar5,1,lVar11);
  if ((int)puVar12 == 0) {
    uVar23 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar23;
    iVar3 = *(int *)(lVar11 + 0x14);
    UVar13 = Foundation::URL::typeMetadataAccessor();
    lVar21 = *(long *)(UVar13.unknown + -8);
    pcVar19 = *(code **)(lVar21 + 0x20);
    (*pcVar19)((long)puVar4 + (long)iVar3,(long)puVar5 + (long)iVar3,UVar13.unknown);
    lVar18 = (long)*(int *)(lVar11 + 0x18);
    lVar14 = (long)puVar5 + lVar18;
    (**(code **)(lVar21 + 0x30))(lVar14,1,UVar13.unknown);
    if ((int)lVar14 == 0) {
      (*pcVar19)((long)puVar4 + lVar18,(long)puVar5 + lVar18,UVar13.unknown);
      (**(code **)(lVar21 + 0x38))((long)puVar4 + lVar18,0,1,UVar13.unknown);
    }
    else {
      puVar15 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar4 + lVar18),(void *)((long)puVar5 + lVar18),
              *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x1c));
    uVar23 = *puVar12;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x1c));
    puVar6[1] = puVar12[1];
    *puVar6 = uVar23;
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x20)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x20));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x24)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x24));
    puVar12 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x28));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x28));
    *puVar12 = *puVar6;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar6 + 1);
    lVar18 = (long)*(int *)(lVar11 + 0x2c);
    lVar14 = (long)puVar5 + lVar18;
    (**(code **)(lVar22 + 0x30))(lVar14,1,DVar9.unknown);
    if ((int)lVar14 == 0) {
      (*pcVar16)((long)puVar4 + lVar18,(long)puVar5 + lVar18,DVar9.unknown);
      (**(code **)(lVar22 + 0x38))((long)puVar4 + lVar18,0,1,DVar9.unknown);
    }
    else {
      puVar15 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar4 + lVar18),(void *)((long)puVar5 + lVar18),
              *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar12 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x30));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x30));
    *puVar12 = *puVar6;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar12 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x34));
    uVar23 = *puVar12;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x34));
    puVar6[1] = puVar12[1];
    *puVar6 = uVar23;
    puVar12 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x38));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x38));
    *puVar12 = *puVar6;
    *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar12 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x3c));
    uVar23 = *puVar12;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x3c));
    puVar6[1] = puVar12[1];
    *puVar6 = uVar23;
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x40)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x40));
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x44)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x44));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar11 + 0x48)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar11 + 0x48));
    (**(code **)(lVar17 + 0x38))(puVar4,0,1,lVar11);
  }
  else {
    puVar15 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar4,puVar5,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar5 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar23 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar23;
  puVar15 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar11 = (long)*(int *)(puVar15 + 0x20);
  lVar17 = *(long *)(lVar8 + -8);
  lVar22 = (long)puVar5 + lVar11;
  (**(code **)(lVar17 + 0x30))(lVar22,1,lVar8);
  if ((int)lVar22 == 0) {
    lVar22 = (long)puVar5 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar22,lVar8);
    if ((int)lVar22 == 1) {
      (*pcVar20)((long)puVar4 + lVar11,(long)puVar5 + lVar11,UVar7.unknown);
      _swift_storeEnumTagMultiPayload((long)puVar4 + lVar11,lVar8,1);
    }
    else {
      _memcpy((void *)((long)puVar4 + lVar11),(void *)((long)puVar5 + lVar11),
              *(size_t *)(lVar17 + 0x40));
    }
    (**(code **)(lVar17 + 0x38))((long)puVar4 + lVar11,0,1,lVar8);
  }
  else {
    puVar15 = &DAT_100550ec0;
    FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
    _memcpy((void *)((long)puVar4 + lVar11),(void *)((long)puVar5 + lVar11),
            *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  iVar3 = *(int *)(param_3 + 0x34);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x30));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  uVar23 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x38));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar23;
  return param_1;
}

