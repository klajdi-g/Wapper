// rea decompile_all
// name: FUN_1002c4634
// address: 0x1002c4634
// body: available
// range: 0x1002c4634-0x1002c4cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002c4634(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  Date DVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar12;
  uVar19 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar19;
  uVar16 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar16;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  lVar7 = 0;
  FUN_100400294();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  lVar8 = 0;
  FUN_1003fdce0();
  lVar13 = *(long *)(lVar8 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  puVar9 = puVar2;
  (*pcVar14)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar12 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar12;
    uVar19 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar19;
    uVar16 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar16;
    lVar18 = (long)*(int *)(lVar8 + 0x20);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar11.unknown + -8);
    pcVar14 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar19);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar11.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar18,0,1,DVar11.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x24));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x28));
    lVar18 = (long)*(int *)(lVar8 + 0x2c);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar11.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar18,0,1,DVar11.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar8 + 0x30);
    lVar17 = (long)puVar2 + lVar18;
    (*pcVar14)(lVar17,1,DVar11.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar11.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar18,0,1,DVar11.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar10 = &DAT_10055a2a8;
    FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  lVar13 = (long)*(int *)(lVar7 + 0x30);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar11.unknown + -8);
  pcVar14 = *(code **)(lVar17 + 0x30);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar14)(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
  uVar12 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x38));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c));
  uVar12 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
  uVar19 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar19;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x44));
  uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x48));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) = uVar16;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x4c));
  lVar13 = (long)*(int *)(lVar7 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar16);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar14)(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar7 + 0x54);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar14)(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar7 + 0x58);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar14)(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar7 + 0x5c);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar14)(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar13,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(lVar7 + 0x60);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar14)(lVar7,1,DVar11.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar8,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  iVar6 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  iVar6 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar12 = param_2[1];
  uVar19 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar1[1] = param_2[1];
  *puVar1 = uVar19;
  _swift_retain(uVar12);
  return param_1;
}

