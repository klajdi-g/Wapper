// rea decompile_all
// name: FUN_1003fdf7c
// address: 0x1003fdf7c
// body: available
// range: 0x1003fdf7c-0x1003fe5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003fdf7c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Date DVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar15 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar15;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar6 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar6;
  uVar7 = param_2[0xb];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  lVar9 = 0;
  FUN_1003fdce0();
  lVar13 = *(long *)(lVar9 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  puVar10 = puVar2;
  (*pcVar14)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    uVar4 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar4;
    uVar15 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar15;
    lVar18 = (long)*(int *)(lVar9 + 0x20);
    DVar12 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar12.unknown + -8);
    pcVar14 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar12.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar12.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    lVar18 = (long)*(int *)(lVar9 + 0x2c);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar12.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar12.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar9 + 0x30);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar12.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar12.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar18,0,1,DVar12.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar11 = &DAT_10055a2a8;
    FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar12.unknown + -8);
  pcVar14 = *(code **)(lVar17 + 0x30);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0x38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
  iVar8 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  iVar8 = *(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar15 = *(undefined8 *)((long)param_2 + (long)iVar8);
  *(undefined8 *)((long)param_1 + (long)iVar8) = uVar15;
  lVar13 = (long)*(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar15);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x54);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x58);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x5c);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x60);
  lVar9 = (long)param_2 + lVar13;
  (*pcVar14)(lVar9,1,DVar12.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar12.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  return param_1;
}

