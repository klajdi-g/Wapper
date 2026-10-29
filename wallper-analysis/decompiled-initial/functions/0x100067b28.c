// rea decompile_all
// name: FUN_100067b28
// address: 0x100067b28
// body: available
// range: 0x100067b28-0x100067d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100067b28(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int iVar8;
  UUID UVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar17 = param_2[1];
  uVar19 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar19;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar15 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar15;
  uVar20 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar20;
  uVar14 = param_2[7];
  uVar7 = param_2[8];
  uVar13 = param_2[9];
  param_1[8] = uVar7;
  param_1[9] = uVar13;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  param_1[7] = uVar14;
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar9.unknown + -8);
  pcVar18 = *(code **)(lVar16 + 0x30);
  _swift_retain(uVar19);
  _swift_retain(uVar17);
  _swift_retain(uVar15);
  _swift_retain(uVar20);
  _swift_retain(uVar7);
  pvVar10 = pvVar2;
  (*pcVar18)(pvVar2,1,UVar9.unknown);
  if ((int)pvVar10 == 0) {
    (**(code **)(lVar16 + 0x10))(pvVar1,pvVar2,UVar9.unknown);
    (**(code **)(lVar16 + 0x38))(pvVar1,0,1,UVar9.unknown);
  }
  else {
    puVar11 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar11 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar11 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar11 + 0x1c));
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  _swift_retain();
  pvVar10 = pvVar2;
  (*pcVar18)(pvVar2,1,UVar9.unknown);
  if ((int)pvVar10 == 0) {
    (**(code **)(lVar16 + 0x10))(pvVar1,pvVar2,UVar9.unknown);
    (**(code **)(lVar16 + 0x38))(pvVar1,0,1,UVar9.unknown);
  }
  else {
    puVar12 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar11 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar11 + 0x1c));
  iVar8 = *(int *)(param_3 + 0x30);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar3 = *puVar4;
  uVar15 = puVar4[2];
  uVar20 = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar20;
  puVar5 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar6 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar5 = *puVar6;
  uVar14 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 8) = uVar14;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar20);
  _swift_retain(uVar15);
  _swift_retain(uVar14);
  return param_1;
}

