// rea decompile_all
// name: FUN_10006827c
// address: 0x10006827c
// body: available
// range: 0x10006827c-0x100068547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10006827c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UUID UVar9;
  void *pvVar10;
  void *pvVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar7);
  uVar7 = param_1[1];
  param_1[1] = param_2[1];
  _swift_release(uVar7);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar7 = param_1[4];
  param_1[4] = param_2[4];
  _swift_release(uVar7);
  uVar8 = param_1[6];
  uVar7 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar7;
  _swift_release(uVar8);
  uVar8 = param_1[8];
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar7;
  _swift_release(uVar8);
  param_1[9] = param_2[9];
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar9.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  pvVar10 = pvVar1;
  (*pcVar16)(pvVar1,1,UVar9.unknown);
  pvVar11 = pvVar2;
  (*pcVar16)(pvVar2,1,UVar9.unknown);
  if ((int)pvVar10 == 0) {
    if ((int)pvVar11 != 0) {
      (**(code **)(lVar15 + 8))(pvVar1,UVar9.unknown);
      goto LAB_10006839c;
    }
    (**(code **)(lVar15 + 0x28))(pvVar1,pvVar2,UVar9.unknown);
  }
  else if ((int)pvVar11 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar1,pvVar2,UVar9.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar1,0,1,UVar9.unknown);
  }
  else {
LAB_10006839c:
    puVar12 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar12 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  lVar14 = (long)*(int *)(puVar12 + 0x1c);
  uVar7 = *(undefined8 *)((long)pvVar1 + lVar14);
  *(undefined8 *)((long)pvVar1 + lVar14) = *(undefined8 *)((long)pvVar2 + lVar14);
  _swift_release(uVar7);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  pvVar10 = pvVar1;
  (*pcVar16)(pvVar1,1,UVar9.unknown);
  pvVar11 = pvVar2;
  (*pcVar16)(pvVar2,1,UVar9.unknown);
  if ((int)pvVar10 == 0) {
    if ((int)pvVar11 == 0) {
      (**(code **)(lVar15 + 0x28))(pvVar1,pvVar2,UVar9.unknown);
      goto LAB_100068494;
    }
    (**(code **)(lVar15 + 8))(pvVar1,UVar9.unknown);
  }
  else if ((int)pvVar11 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar1,pvVar2,UVar9.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar1,0,1,UVar9.unknown);
    goto LAB_100068494;
  }
  puVar13 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_100068494:
  lVar15 = (long)*(int *)(puVar12 + 0x1c);
  uVar7 = *(undefined8 *)((long)pvVar1 + lVar15);
  *(undefined8 *)((long)pvVar1 + lVar15) = *(undefined8 *)((long)pvVar2 + lVar15);
  _swift_release(uVar7);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar7 = puVar4[1];
  uVar8 = puVar3[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar7;
  _swift_bridgeObjectRelease(uVar8);
  uVar7 = puVar3[2];
  puVar3[2] = puVar4[2];
  _swift_release(uVar7);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar7 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_release(uVar7);
  return param_1;
}

