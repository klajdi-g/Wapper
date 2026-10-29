// rea decompile_all
// name: FUN_100067d80
// address: 0x100067d80
// body: available
// range: 0x100067d80-0x1000680b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100067d80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  UUID UVar7;
  void *pvVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  
  uVar13 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar13);
  uVar13 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar13);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar13 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar13);
  param_1[5] = param_2[5];
  uVar13 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar13);
  param_1[7] = param_2[7];
  uVar13 = param_1[8];
  param_1[8] = param_2[8];
  _swift_retain();
  _swift_release(uVar13);
  param_1[9] = param_2[9];
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar7.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  pvVar8 = pvVar1;
  (*pcVar15)(pvVar1,1,UVar7.unknown);
  pvVar9 = pvVar2;
  (*pcVar15)(pvVar2,1,UVar7.unknown);
  if ((int)pvVar8 == 0) {
    if ((int)pvVar9 != 0) {
      (**(code **)(lVar14 + 8))(pvVar1,UVar7.unknown);
      goto LAB_100067ed8;
    }
    (**(code **)(lVar14 + 0x18))(pvVar1,pvVar2,UVar7.unknown);
  }
  else if ((int)pvVar9 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar1,pvVar2,UVar7.unknown);
    (**(code **)(lVar14 + 0x38))(pvVar1,0,1,UVar7.unknown);
  }
  else {
LAB_100067ed8:
    puVar10 = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar10 = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  lVar12 = (long)*(int *)(puVar10 + 0x1c);
  uVar13 = *(undefined8 *)((long)pvVar1 + lVar12);
  *(undefined8 *)((long)pvVar1 + lVar12) = *(undefined8 *)((long)pvVar2 + lVar12);
  _swift_retain();
  _swift_release(uVar13);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  pvVar8 = pvVar1;
  (*pcVar15)(pvVar1,1,UVar7.unknown);
  pvVar9 = pvVar2;
  (*pcVar15)(pvVar2,1,UVar7.unknown);
  if ((int)pvVar8 == 0) {
    if ((int)pvVar9 == 0) {
      (**(code **)(lVar14 + 0x18))(pvVar1,pvVar2,UVar7.unknown);
      goto LAB_100067fd8;
    }
    (**(code **)(lVar14 + 8))(pvVar1,UVar7.unknown);
  }
  else if ((int)pvVar9 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar1,pvVar2,UVar7.unknown);
    (**(code **)(lVar14 + 0x38))(pvVar1,0,1,UVar7.unknown);
    goto LAB_100067fd8;
  }
  puVar11 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_100067fd8:
  lVar14 = (long)*(int *)(puVar10 + 0x1c);
  uVar13 = *(undefined8 *)((long)pvVar1 + lVar14);
  *(undefined8 *)((long)pvVar1 + lVar14) = *(undefined8 *)((long)pvVar2 + lVar14);
  _swift_retain();
  _swift_release(uVar13);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar3 = *puVar4;
  uVar13 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = puVar3[2];
  puVar3[2] = puVar4[2];
  _swift_retain();
  _swift_release(uVar13);
  puVar5 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar6 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar5 = *puVar6;
  uVar13 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar6 + 8);
  _swift_retain();
  _swift_release(uVar13);
  return param_1;
}

