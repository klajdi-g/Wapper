// rea decompile_all
// name: FUN_1002be98c
// address: 0x1002be98c
// body: available
// range: 0x1002be98c-0x1002bf00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002be98c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar5 = 0;
  FUN_100400294();
  lVar12 = *(long *)(lVar5 + -8);
  puVar6 = puVar2;
  (**(code **)(lVar12 + 0x30))(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar17 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar17;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    uVar17 = puVar2[4];
    uVar19 = puVar2[7];
    uVar18 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar17;
    puVar1[7] = uVar19;
    puVar1[6] = uVar18;
    uVar17 = puVar2[8];
    uVar19 = puVar2[0xb];
    uVar18 = puVar2[10];
    puVar1[9] = puVar2[9];
    puVar1[8] = uVar17;
    puVar1[0xb] = uVar19;
    puVar1[10] = uVar18;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x28));
    lVar7 = 0;
    FUN_1003fdce0();
    lVar14 = *(long *)(lVar7 + -8);
    puVar8 = puVar3;
    (**(code **)(lVar14 + 0x30))(puVar3,1,lVar7);
    if ((int)puVar8 == 0) {
      uVar17 = *puVar3;
      uVar19 = puVar3[3];
      uVar18 = puVar3[2];
      puVar6[1] = puVar3[1];
      *puVar6 = uVar17;
      puVar6[3] = uVar19;
      puVar6[2] = uVar18;
      uVar17 = puVar3[4];
      puVar6[5] = puVar3[5];
      puVar6[4] = uVar17;
      lVar15 = (long)*(int *)(lVar7 + 0x20);
      DVar10 = Foundation::Date::typeMetadataAccessor();
      lVar11 = *(long *)(DVar10.unknown + -8);
      pcVar13 = *(code **)(lVar11 + 0x30);
      lVar16 = (long)puVar3 + lVar15;
      (*pcVar13)(lVar16,1);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar11 + 0x20))((long)puVar6 + lVar15,(long)puVar3 + lVar15,DVar10.unknown);
        (**(code **)(lVar11 + 0x38))((long)puVar6 + lVar15,0,1,DVar10.unknown);
      }
      else {
        puVar9 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar15),(void *)((long)puVar3 + lVar15),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar7 + 0x24)) =
           *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x24));
      *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar7 + 0x28)) =
           *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x28));
      lVar15 = (long)*(int *)(lVar7 + 0x2c);
      lVar16 = (long)puVar3 + lVar15;
      (*pcVar13)(lVar16,1,DVar10.unknown);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar11 + 0x20))((long)puVar6 + lVar15,(long)puVar3 + lVar15,DVar10.unknown);
        (**(code **)(lVar11 + 0x38))((long)puVar6 + lVar15,0,1,DVar10.unknown);
      }
      else {
        puVar9 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar15),(void *)((long)puVar3 + lVar15),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      lVar15 = (long)*(int *)(lVar7 + 0x30);
      lVar16 = (long)puVar3 + lVar15;
      (*pcVar13)(lVar16,1,DVar10.unknown);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar11 + 0x20))((long)puVar6 + lVar15,(long)puVar3 + lVar15,DVar10.unknown);
        (**(code **)(lVar11 + 0x38))((long)puVar6 + lVar15,0,1,DVar10.unknown);
      }
      else {
        puVar9 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar15),(void *)((long)puVar3 + lVar15),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      (**(code **)(lVar14 + 0x38))(puVar6,0,1,lVar7);
    }
    else {
      puVar9 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      _memcpy(puVar6,puVar3,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x2c));
    lVar16 = (long)*(int *)(lVar5 + 0x30);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar10.unknown + -8);
    pcVar13 = *(code **)(lVar14 + 0x30);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x34));
    uVar17 = *puVar6;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x34));
    puVar3[1] = puVar6[1];
    *puVar3 = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x38));
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x3c));
    uVar17 = *puVar6;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x3c));
    puVar3[1] = puVar6[1];
    *puVar3 = uVar17;
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x40));
    uVar17 = *puVar6;
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x40));
    puVar3[1] = puVar6[1];
    *puVar3 = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x44)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x44));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x48)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x48));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x4c));
    lVar16 = (long)*(int *)(lVar5 + 0x50);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar5 + 0x54);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar5 + 0x58);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar5 + 0x5c);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar5 + 0x60);
    lVar7 = (long)puVar2 + lVar16;
    (*pcVar13)(lVar7,1,DVar10.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar1 + lVar16,(long)puVar2 + lVar16,DVar10.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar9 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar16),(void *)((long)puVar2 + lVar16),
              *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    puVar9 = &DAT_100554ab8;
    FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar9 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x1c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x1c));
  iVar4 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar17 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar17 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar17;
  puVar1[2] = param_2[2];
  return param_1;
}

