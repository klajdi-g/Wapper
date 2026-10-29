// rea decompile_all
// name: FUN_1003924ac
// address: 0x1003924ac
// body: available
// range: 0x1003924ac-0x100392923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003924ac(long param_1,long param_2,long param_3)

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
  undefined8 *puVar11;
  URL UVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar19 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x20);
  (*pcVar19)(param_1,param_2,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  puVar4 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  iVar3 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar9.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x20);
  (*pcVar16)(param_1 + iVar3,param_2 + iVar3,DVar9.unknown);
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
    (*pcVar19)(pvVar1,pvVar2,UVar7.unknown);
    _swift_storeEnumTagMultiPayload(pvVar1,lVar8,1);
  }
  else {
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar8 = 0;
  FUN_1001d59ac();
  puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x14));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x14));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x18));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x18));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x1c));
  puVar5 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x1c));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x20));
  puVar5 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x20));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x24)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x24));
  puVar4 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar5 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_10040211c();
  lVar17 = *(long *)(lVar8 + -8);
  puVar11 = puVar5;
  (**(code **)(lVar17 + 0x30))(puVar5,1,lVar8);
  if ((int)puVar11 == 0) {
    uVar21 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar21;
    iVar3 = *(int *)(lVar8 + 0x14);
    UVar12 = Foundation::URL::typeMetadataAccessor();
    lVar20 = *(long *)(UVar12.unknown + -8);
    pcVar19 = *(code **)(lVar20 + 0x20);
    (*pcVar19)((long)puVar4 + (long)iVar3,(long)puVar5 + (long)iVar3,UVar12.unknown);
    lVar18 = (long)*(int *)(lVar8 + 0x18);
    lVar13 = (long)puVar5 + lVar18;
    (**(code **)(lVar20 + 0x30))(lVar13,1,UVar12.unknown);
    if ((int)lVar13 == 0) {
      (*pcVar19)((long)puVar4 + lVar18,(long)puVar5 + lVar18,UVar12.unknown);
      (**(code **)(lVar20 + 0x38))((long)puVar4 + lVar18,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar4 + lVar18),(void *)((long)puVar5 + lVar18),
              *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x1c));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x1c));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x20)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x20));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x24));
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x28));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x28));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    lVar18 = (long)*(int *)(lVar8 + 0x2c);
    lVar13 = (long)puVar5 + lVar18;
    (**(code **)(lVar15 + 0x30))(lVar13,1,DVar9.unknown);
    if ((int)lVar13 == 0) {
      (*pcVar16)((long)puVar4 + lVar18,(long)puVar5 + lVar18,DVar9.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar4 + lVar18,0,1,DVar9.unknown);
    }
    else {
      puVar14 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar4 + lVar18),(void *)((long)puVar5 + lVar18),
              *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x30));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x30));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x34));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x34));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x38));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x38));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x3c));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x3c));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x40)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x40));
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x44)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x44));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x48)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar8 + 0x48));
    (**(code **)(lVar17 + 0x38))(puVar4,0,1,lVar8);
  }
  else {
    puVar14 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar4,puVar5,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  iVar3 = *(int *)(param_3 + 0x30);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  iVar3 = *(int *)(param_3 + 0x38);
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)(param_2 + iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)(param_1 + iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  return param_1;
}

