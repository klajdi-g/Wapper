// rea decompile_all
// name: FUN_1003ff6b0
// address: 0x1003ff6b0
// body: available
// range: 0x1003ff6b0-0x10040010f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003ff6b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Date DVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar9 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar9 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar9 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar9 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar9 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar9 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar3 = (undefined *)0x0;
  FUN_1003fdce0();
  lVar13 = *(long *)(puVar3 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  puVar4 = puVar8;
  (*pcVar14)(puVar8,1,puVar3);
  puVar5 = puVar11;
  (*pcVar14)(puVar11,1,puVar3);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 != 0) {
      FUN_100029548(puVar8,FUN_1003fdce0);
      goto LAB_1003ff80c;
    }
    uVar9 = puVar11[1];
    uVar2 = puVar8[1];
    *puVar8 = *puVar11;
    puVar8[1] = uVar9;
    _swift_bridgeObjectRelease(uVar2);
    uVar9 = puVar11[3];
    uVar2 = puVar8[3];
    puVar8[2] = puVar11[2];
    puVar8[3] = uVar9;
    _swift_bridgeObjectRelease(uVar2);
    uVar9 = puVar11[4];
    puVar8[5] = puVar11[5];
    puVar8[4] = uVar9;
    lVar16 = (long)*(int *)(puVar3 + 0x20);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar6.unknown + -8);
    pcVar14 = *(code **)(lVar15 + 0x30);
    lVar13 = (long)puVar8 + lVar16;
    (*pcVar14)(lVar13,1,DVar6.unknown);
    lVar7 = (long)puVar11 + lVar16;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar13 == 0) {
      if ((int)lVar7 != 0) {
        (**(code **)(lVar15 + 8))((long)puVar8 + lVar16,DVar6.unknown);
        goto LAB_1003fff38;
      }
      (**(code **)(lVar15 + 0x28))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
    }
    else if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar8 + lVar16,0,1,DVar6.unknown);
    }
    else {
LAB_1003fff38:
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar16),(void *)((long)puVar11 + lVar16),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar3 + 0x24)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(puVar3 + 0x24));
    *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar3 + 0x28)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(puVar3 + 0x28));
    lVar16 = (long)*(int *)(puVar3 + 0x2c);
    lVar13 = (long)puVar8 + lVar16;
    (*pcVar14)(lVar13,1,DVar6.unknown);
    lVar7 = (long)puVar11 + lVar16;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar13 == 0) {
      if ((int)lVar7 != 0) {
        (**(code **)(lVar15 + 8))((long)puVar8 + lVar16,DVar6.unknown);
        goto LAB_1003ffff4;
      }
      (**(code **)(lVar15 + 0x28))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
    }
    else if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar8 + lVar16,0,1,DVar6.unknown);
    }
    else {
LAB_1003ffff4:
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar16),(void *)((long)puVar11 + lVar16),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(puVar3 + 0x30);
    lVar13 = (long)puVar8 + lVar16;
    (*pcVar14)(lVar13,1,DVar6.unknown);
    lVar7 = (long)puVar11 + lVar16;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar13 == 0) {
      if ((int)lVar7 == 0) {
        (**(code **)(lVar15 + 0x28))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
        goto LAB_1003ffa28;
      }
      (**(code **)(lVar15 + 8))((long)puVar8 + lVar16,DVar6.unknown);
    }
    else if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 0x20))((long)puVar8 + lVar16,(long)puVar11 + lVar16,DVar6.unknown);
      pcVar14 = *(code **)(lVar15 + 0x38);
      puVar8 = (undefined8 *)((long)puVar8 + lVar16);
      goto LAB_1003ffa24;
    }
    puVar3 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar12 = *(size_t *)(*(long *)(puVar3 + -8) + 0x40);
    puVar8 = (undefined8 *)((long)puVar8 + lVar16);
    puVar11 = (undefined8 *)((long)puVar11 + lVar16);
LAB_1003ff830:
    _memcpy(puVar8,puVar11,sVar12);
  }
  else {
    if ((int)puVar5 != 0) {
LAB_1003ff80c:
      puVar3 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      sVar12 = *(size_t *)(*(long *)(puVar3 + -8) + 0x40);
      goto LAB_1003ff830;
    }
    uVar9 = *puVar11;
    uVar17 = puVar11[3];
    uVar2 = puVar11[2];
    puVar8[1] = puVar11[1];
    *puVar8 = uVar9;
    puVar8[3] = uVar17;
    puVar8[2] = uVar2;
    uVar9 = puVar11[4];
    puVar8[5] = puVar11[5];
    puVar8[4] = uVar9;
    lVar15 = (long)*(int *)(puVar3 + 0x20);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar6.unknown + -8);
    pcVar14 = *(code **)(lVar16 + 0x30);
    lVar7 = (long)puVar11 + lVar15;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar8 + lVar15,(long)puVar11 + lVar15,DVar6.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar8 + lVar15,0,1,DVar6.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar15),(void *)((long)puVar11 + lVar15),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar3 + 0x24)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(puVar3 + 0x24));
    *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar3 + 0x28)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(puVar3 + 0x28));
    lVar15 = (long)*(int *)(puVar3 + 0x2c);
    lVar7 = (long)puVar11 + lVar15;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar8 + lVar15,(long)puVar11 + lVar15,DVar6.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar8 + lVar15,0,1,DVar6.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar15),(void *)((long)puVar11 + lVar15),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(puVar3 + 0x30);
    lVar7 = (long)puVar11 + lVar15;
    (*pcVar14)(lVar7,1,DVar6.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar16 + 0x20))((long)puVar8 + lVar15,(long)puVar11 + lVar15,DVar6.unknown);
      (**(code **)(lVar16 + 0x38))((long)puVar8 + lVar15,0,1,DVar6.unknown);
    }
    else {
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar15),(void *)((long)puVar11 + lVar15),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    pcVar14 = *(code **)(lVar13 + 0x38);
    DVar6.unknown = puVar3;
LAB_1003ffa24:
    (*pcVar14)(puVar8,0,1,DVar6.unknown);
  }
LAB_1003ffa28:
  lVar15 = (long)*(int *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar6.unknown + -8);
  pcVar14 = *(code **)(lVar16 + 0x30);
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
      goto LAB_1003ffab8;
    }
    (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
  }
  else {
LAB_1003ffab8:
    puVar3 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar11 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  lVar13 = (long)*(int *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  uVar9 = *(undefined8 *)((long)param_1 + lVar13);
  *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
  _swift_bridgeObjectRelease(uVar9);
  lVar15 = (long)*(int *)(param_3 + 0x50);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
      goto LAB_1003ffbd4;
    }
    (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
  }
  else {
LAB_1003ffbd4:
    puVar3 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x54);
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
      goto LAB_1003ffc70;
    }
    (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
  }
  else {
LAB_1003ffc70:
    puVar3 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x58);
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
      goto LAB_1003ffd0c;
    }
    (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
  }
  else {
LAB_1003ffd0c:
    puVar3 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x5c);
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
      goto LAB_1003ffdd0;
    }
    (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
    goto LAB_1003ffdd0;
  }
  puVar3 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
LAB_1003ffdd0:
  lVar15 = (long)*(int *)(param_3 + 0x60);
  lVar13 = (long)param_1 + lVar15;
  (*pcVar14)(lVar13,1,DVar6.unknown);
  lVar7 = (long)param_2 + lVar15;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar13 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar16 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
      return param_1;
    }
    (**(code **)(lVar16 + 8))((long)param_1 + lVar15,DVar6.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar16 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar6.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar15,0,1,DVar6.unknown);
    return param_1;
  }
  puVar3 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  return param_1;
}

