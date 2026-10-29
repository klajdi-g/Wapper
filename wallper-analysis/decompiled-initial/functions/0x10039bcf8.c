// rea decompile_all
// name: FUN_10039bcf8
// address: 0x10039bcf8
// body: available
// range: 0x10039bcf8-0x10039beb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10039bcf8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  UUID UVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  pvVar7 = pvVar2;
  (*pcVar11)(pvVar2,1,UVar6.unknown);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar1,pvVar2,UVar6.unknown);
    (**(code **)(lVar10 + 0x38))(pvVar1,0,1,UVar6.unknown);
  }
  else {
    puVar8 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar8 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar8 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar8 + 0x1c));
  iVar5 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar3[2] = puVar4[2];
  uVar12 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar12;
  pvVar1 = (void *)((long)param_1 + (long)iVar5);
  pvVar2 = (void *)((long)param_2 + (long)iVar5);
  pvVar7 = pvVar2;
  (*pcVar11)(pvVar2,1,UVar6.unknown);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar1,pvVar2,UVar6.unknown);
    (**(code **)(lVar10 + 0x38))(pvVar1,0,1,UVar6.unknown);
  }
  else {
    puVar9 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar8 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar8 + 0x1c));
  iVar5 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar12 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar12;
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar12 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar12;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = param_2[1];
  *puVar3 = uVar12;
  return param_1;
}

