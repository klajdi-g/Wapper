// rea decompile_all
// name: FUN_1002c58dc
// address: 0x1002c58dc
// body: available
// range: 0x1002c58dc-0x1002c5ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002c58dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  Date DVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[3] = uVar16;
  param_1[2] = uVar15;
  uVar14 = param_2[4];
  uVar16 = param_2[7];
  uVar15 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar14;
  param_1[7] = uVar16;
  param_1[6] = uVar15;
  uVar14 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar14;
  param_1[0xb] = uVar16;
  param_1[10] = uVar15;
  lVar4 = 0;
  FUN_100400294();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  lVar5 = 0;
  FUN_1003fdce0();
  lVar10 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar14 = *puVar2;
    uVar16 = puVar2[3];
    uVar15 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar14;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    uVar14 = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar14;
    lVar13 = (long)*(int *)(lVar5 + 0x20);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar8.unknown + -8);
    pcVar9 = *(code **)(lVar12 + 0x30);
    lVar11 = (long)puVar2 + lVar13;
    (*pcVar9)(lVar11,1,DVar8.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,DVar8.unknown);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar13,0,1,DVar8.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x24));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x28));
    lVar13 = (long)*(int *)(lVar5 + 0x2c);
    lVar11 = (long)puVar2 + lVar13;
    (*pcVar9)(lVar11,1,DVar8.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,DVar8.unknown);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar13,0,1,DVar8.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar13 = (long)*(int *)(lVar5 + 0x30);
    lVar11 = (long)puVar2 + lVar13;
    (*pcVar9)(lVar11,1,DVar8.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar1 + lVar13,(long)puVar2 + lVar13,DVar8.unknown);
      (**(code **)(lVar12 + 0x38))((long)puVar1 + lVar13,0,1,DVar8.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar13),(void *)((long)puVar2 + lVar13),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    puVar7 = &DAT_10055a2a8;
    FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
  lVar11 = (long)*(int *)(lVar4 + 0x30);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar8.unknown + -8);
  pcVar9 = *(code **)(lVar10 + 0x30);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar9)(lVar5,1,DVar8.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar11,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x48)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x48));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x4c));
  lVar11 = (long)*(int *)(lVar4 + 0x50);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar9)(lVar5,1,DVar8.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar11,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(lVar4 + 0x54);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar9)(lVar5,1,DVar8.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar11,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(lVar4 + 0x58);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar9)(lVar5,1,DVar8.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar11,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(lVar4 + 0x5c);
  lVar5 = (long)param_2 + lVar11;
  (*pcVar9)(lVar5,1,DVar8.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar11,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(lVar4 + 0x60);
  lVar4 = (long)param_2 + lVar5;
  (*pcVar9)(lVar4,1,DVar8.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar8.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar5,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar14 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1[1] = param_2[1];
  *puVar1 = uVar14;
  return param_1;
}

