// rea decompile_all
// name: FUN_1003ec46c
// address: 0x1003ec46c
// body: available
// range: 0x1003ec46c-0x1003ec757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003ec46c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  uVar15 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar5 = 0;
  FUN_10040211c();
  lVar11 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar15 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar15;
    iVar3 = *(int *)(lVar5 + 0x14);
    UVar7 = Foundation::URL::typeMetadataAccessor();
    lVar14 = *(long *)(UVar7.unknown + -8);
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,UVar7.unknown);
    lVar13 = (long)*(int *)(lVar5 + 0x18);
    lVar8 = (long)puVar2 + lVar13;
    (**(code **)(lVar14 + 0x30))(lVar8,1,UVar7.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar12)((long)puVar1 + lVar13,(long)puVar2 + lVar13,UVar7.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar13,0,1,UVar7.unknown);
    }
    else {
      puVar9 = &DAT_100553d90;
      FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
      _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x1c));
    uVar15 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x1c));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar15;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x20)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x20));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x24));
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x28));
    *puVar6 = *puVar4;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
    lVar14 = (long)*(int *)(lVar5 + 0x2c);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar10.unknown + -8);
    lVar8 = (long)puVar2 + lVar14;
    (**(code **)(lVar13 + 0x30))(lVar8,1,DVar10.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x20))((long)puVar1 + lVar14,(long)puVar2 + lVar14,DVar10.unknown);
      (**(code **)(lVar13 + 0x38))((long)puVar1 + lVar14,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar14),(void *)((long)puVar2 + lVar14),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x30));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x30));
    *puVar6 = *puVar4;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x34));
    uVar15 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x34));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar15;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x38));
    *puVar6 = *puVar4;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x3c));
    uVar15 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x3c));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar15;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x40)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x40));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x44)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x44));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x48)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x48));
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    puVar9 = &DAT_10054ac40;
    FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  iVar3 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar15 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar15;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar15 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar15;
  return param_1;
}

