// rea decompile_all
// name: FUN_1003e9c8c
// address: 0x1003e9c8c
// body: available
// range: 0x1003e9c8c-0x1003ea273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003e9c8c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  URL UVar8;
  undefined *puVar9;
  Date DVar10;
  undefined8 *puVar11;
  void *pvVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar21 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar21;
  lVar7 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar7 + 0x14);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar8.unknown + -8);
  pcVar16 = *(code **)(lVar20 + 0x20);
  (*pcVar16)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar8.unknown);
  lVar15 = (long)*(int *)(lVar7 + 0x18);
  pcVar13 = *(code **)(lVar20 + 0x30);
  lVar18 = (long)param_2 + lVar15;
  (*pcVar13)(lVar18,1,UVar8.unknown);
  if ((int)lVar18 == 0) {
    (*pcVar16)((long)param_1 + lVar15,(long)param_2 + lVar15,UVar8.unknown);
    (**(code **)(lVar20 + 0x38))((long)param_1 + lVar15,0,1,UVar8.unknown);
  }
  else {
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  lVar15 = (long)*(int *)(lVar7 + 0x2c);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar10.unknown + -8);
  pcVar14 = *(code **)(lVar17 + 0x30);
  lVar18 = (long)param_2 + lVar15;
  (*pcVar14)(lVar18,1,DVar10.unknown);
  if ((int)lVar18 == 0) {
    (**(code **)(lVar17 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar10.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar15,0,1,DVar10.unknown);
  }
  else {
    puVar9 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x38));
  *puVar4 = *puVar5;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 1);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x44));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x48));
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar21 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar21;
  puVar9 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x20));
  puVar5 = (undefined8 *)((long)puVar5 + (long)*(int *)(puVar9 + 0x20));
  lVar18 = *(long *)(lVar7 + -8);
  puVar11 = puVar5;
  (**(code **)(lVar18 + 0x30))(puVar5,1,lVar7);
  if ((int)puVar11 == 0) {
    uVar21 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar21;
    (*pcVar16)((long)puVar4 + (long)*(int *)(lVar7 + 0x14),
               (long)puVar5 + (long)*(int *)(lVar7 + 0x14),UVar8.unknown);
    lVar19 = (long)*(int *)(lVar7 + 0x18);
    lVar15 = (long)puVar5 + lVar19;
    (*pcVar13)(lVar15,1,UVar8.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar16)((long)puVar4 + lVar19,(long)puVar5 + lVar19,UVar8.unknown);
      (**(code **)(lVar20 + 0x38))((long)puVar4 + lVar19,0,1,UVar8.unknown);
    }
    else {
      puVar9 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar4 + lVar19),(void *)((long)puVar5 + lVar19),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x1c));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x1c));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x20)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x20));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x24)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x24));
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x28));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x28));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    lVar19 = (long)*(int *)(lVar7 + 0x2c);
    lVar15 = (long)puVar5 + lVar19;
    (*pcVar14)(lVar15,1,DVar10.unknown);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar17 + 0x20))((long)puVar4 + lVar19,(long)puVar5 + lVar19,DVar10.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar4 + lVar19,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar4 + lVar19),(void *)((long)puVar5 + lVar19),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x30));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x30));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x34));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x34));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    puVar11 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x38));
    puVar6 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x38));
    *puVar11 = *puVar6;
    *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar6 + 1);
    puVar11 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x3c));
    uVar21 = *puVar11;
    puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x3c));
    puVar6[1] = puVar11[1];
    *puVar6 = uVar21;
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x40)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x40));
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x44)) =
         *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x44));
    *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar7 + 0x48)) =
         *(undefined1 *)((long)puVar5 + (long)*(int *)(lVar7 + 0x48));
    (**(code **)(lVar18 + 0x38))(puVar4,0,1,lVar7);
  }
  else {
    puVar9 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar4,puVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  iVar3 = *(int *)(param_3 + 0x30);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  iVar3 = *(int *)(param_3 + 0x38);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  pvVar12 = pvVar2;
  (*pcVar13)(pvVar2,1,UVar8.unknown);
  if ((int)pvVar12 == 0) {
    (*pcVar16)(pvVar1,pvVar2,UVar8.unknown);
    (**(code **)(lVar20 + 0x38))(pvVar1,0,1,UVar8.unknown);
  }
  else {
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar9 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar9 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar9 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x44);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  puVar4[2] = puVar5[2];
  uVar21 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar21;
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar21 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar21;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar21 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar21;
  puVar4[2] = param_2[2];
  return param_1;
}

