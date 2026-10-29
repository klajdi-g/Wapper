// rea decompile_all
// name: FUN_10039b774
// address: 0x10039b774
// body: available
// range: 0x10039b774-0x10039b9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10039b774(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  UUID UVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  uVar14 = *param_2;
  uVar12 = param_2[1];
  *param_1 = uVar14;
  param_1[1] = uVar12;
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  param_1[2] = uVar12;
  param_1[3] = uVar13;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar8.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  _swift_retain(uVar14);
  _swift_retain(uVar12);
  pvVar9 = pvVar2;
  (*pcVar16)(pvVar2,1,UVar8.unknown);
  if ((int)pvVar9 == 0) {
    (**(code **)(lVar15 + 0x10))(pvVar1,pvVar2,UVar8.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar1,0,1,UVar8.unknown);
  }
  else {
    puVar10 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar10 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar10 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar10 + 0x1c));
  iVar7 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar3 = *puVar4;
  uVar12 = puVar4[1];
  uVar14 = puVar4[2];
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar12;
  pvVar1 = (void *)((long)param_1 + (long)iVar7);
  pvVar2 = (void *)((long)param_2 + (long)iVar7);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar12);
  _swift_retain(uVar14);
  pvVar9 = pvVar2;
  (*pcVar16)(pvVar2,1,UVar8.unknown);
  if ((int)pvVar9 == 0) {
    (**(code **)(lVar15 + 0x10))(pvVar1,pvVar2,UVar8.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar1,0,1,UVar8.unknown);
  }
  else {
    puVar11 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar10 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar10 + 0x1c));
  iVar7 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar14 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar14;
  puVar5 = (undefined1 *)((long)param_1 + (long)iVar7);
  puVar6 = (undefined1 *)((long)param_2 + (long)iVar7);
  *puVar5 = *puVar6;
  uVar13 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar13;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = param_2[1];
  uVar17 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = param_2[1];
  *puVar3 = uVar17;
  _swift_retain();
  _swift_retain(uVar14);
  _swift_retain(uVar13);
  _swift_bridgeObjectRetain(uVar17);
  _swift_retain(uVar12);
  return param_1;
}

