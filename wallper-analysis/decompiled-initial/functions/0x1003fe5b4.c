// rea decompile_all
// name: FUN_1003fe5b4
// address: 0x1003fe5b4
// body: available
// range: 0x1003fe5b4-0x1003ff12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003fe5b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  *param_1 = *param_2;
  uVar11 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[2] = param_2[2];
  uVar11 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[4] = param_2[4];
  uVar11 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[6] = param_2[6];
  uVar11 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[8] = param_2[8];
  uVar11 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[10] = param_2[10];
  uVar11 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined *)0x0;
  FUN_1003fdce0();
  lVar14 = *(long *)(puVar1 + -8);
  pcVar12 = *(code **)(lVar14 + 0x30);
  puVar2 = puVar6;
  (*pcVar12)(puVar6,1,puVar1);
  puVar3 = puVar8;
  (*pcVar12)(puVar8,1,puVar1);
  if ((int)puVar2 == 0) {
    if ((int)puVar3 != 0) {
      FUN_100029548(puVar6,FUN_1003fdce0);
      goto LAB_1003fe7b0;
    }
    *puVar6 = *puVar8;
    uVar11 = puVar6[1];
    puVar6[1] = puVar8[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar11);
    puVar6[2] = puVar8[2];
    uVar11 = puVar6[3];
    puVar6[3] = puVar8[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar11);
    puVar6[4] = puVar8[4];
    puVar6[5] = puVar8[5];
    lVar15 = (long)*(int *)(puVar1 + 0x20);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar4.unknown + -8);
    pcVar12 = *(code **)(lVar10 + 0x30);
    lVar14 = (long)puVar6 + lVar15;
    (*pcVar12)(lVar14,1,DVar4.unknown);
    lVar5 = (long)puVar8 + lVar15;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar14 == 0) {
      if ((int)lVar5 != 0) {
        (**(code **)(lVar10 + 8))((long)puVar6 + lVar15,DVar4.unknown);
        goto LAB_1003fef54;
      }
      (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
      (**(code **)(lVar10 + 0x38))((long)puVar6 + lVar15,0,1,DVar4.unknown);
    }
    else {
LAB_1003fef54:
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar15),(void *)((long)puVar8 + lVar15),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar1 + 0x24)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar1 + 0x24));
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar1 + 0x28)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar1 + 0x28));
    lVar15 = (long)*(int *)(puVar1 + 0x2c);
    lVar14 = (long)puVar6 + lVar15;
    (*pcVar12)(lVar14,1,DVar4.unknown);
    lVar5 = (long)puVar8 + lVar15;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar14 == 0) {
      if ((int)lVar5 != 0) {
        (**(code **)(lVar10 + 8))((long)puVar6 + lVar15,DVar4.unknown);
        goto LAB_1003ff010;
      }
      (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
      (**(code **)(lVar10 + 0x38))((long)puVar6 + lVar15,0,1,DVar4.unknown);
    }
    else {
LAB_1003ff010:
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar15),(void *)((long)puVar8 + lVar15),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(puVar1 + 0x30);
    lVar14 = (long)puVar6 + lVar15;
    (*pcVar12)(lVar14,1,DVar4.unknown);
    lVar5 = (long)puVar8 + lVar15;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar14 == 0) {
      if ((int)lVar5 == 0) {
        (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
        goto LAB_1003fe9fc;
      }
      (**(code **)(lVar10 + 8))((long)puVar6 + lVar15,DVar4.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar15,(long)puVar8 + lVar15,DVar4.unknown);
      pcVar12 = *(code **)(lVar10 + 0x38);
      puVar6 = (undefined8 *)((long)puVar6 + lVar15);
      goto LAB_1003fe9f8;
    }
    puVar1 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar9 = *(size_t *)(*(long *)(puVar1 + -8) + 0x40);
    puVar6 = (undefined8 *)((long)puVar6 + lVar15);
    puVar8 = (undefined8 *)((long)puVar8 + lVar15);
LAB_1003fe7d4:
    _memcpy(puVar6,puVar8,sVar9);
  }
  else {
    if ((int)puVar3 != 0) {
LAB_1003fe7b0:
      puVar1 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      sVar9 = *(size_t *)(*(long *)(puVar1 + -8) + 0x40);
      goto LAB_1003fe7d4;
    }
    *puVar6 = *puVar8;
    uVar13 = puVar8[1];
    puVar6[1] = uVar13;
    puVar6[2] = puVar8[2];
    uVar11 = puVar8[3];
    puVar6[3] = uVar11;
    puVar6[4] = puVar8[4];
    puVar6[5] = puVar8[5];
    lVar10 = (long)*(int *)(puVar1 + 0x20);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar4.unknown + -8);
    pcVar12 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar11);
    lVar5 = (long)puVar8 + lVar10;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar4.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar6 + lVar10,0,1,DVar4.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar1 + 0x24)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar1 + 0x24));
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar1 + 0x28)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar1 + 0x28));
    lVar10 = (long)*(int *)(puVar1 + 0x2c);
    lVar5 = (long)puVar8 + lVar10;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar4.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar6 + lVar10,0,1,DVar4.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(puVar1 + 0x30);
    lVar5 = (long)puVar8 + lVar10;
    (*pcVar12)(lVar5,1,DVar4.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar4.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar6 + lVar10,0,1,DVar4.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    pcVar12 = *(code **)(lVar14 + 0x38);
    DVar4.unknown = puVar1;
LAB_1003fe9f8:
    (*pcVar12)(puVar6,0,1,DVar4.unknown);
  }
LAB_1003fe9fc:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar15 = (long)*(int *)(param_3 + 0x30);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar4.unknown + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
      goto LAB_1003fea90;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
  }
  else {
LAB_1003fea90:
    puVar1 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar6 = *puVar8;
  uVar11 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar6 = *puVar8;
  uVar11 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar6 = *puVar8;
  uVar11 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  lVar14 = (long)*(int *)(param_3 + 0x48);
  uVar11 = *(undefined8 *)((long)param_1 + lVar14);
  *(undefined8 *)((long)param_1 + lVar14) = *(undefined8 *)((long)param_2 + lVar14);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  lVar15 = (long)*(int *)(param_3 + 0x50);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
      goto LAB_1003febf0;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
  }
  else {
LAB_1003febf0:
    puVar1 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x54);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
      goto LAB_1003fec8c;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
  }
  else {
LAB_1003fec8c:
    puVar1 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x58);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
      goto LAB_1003fed28;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
  }
  else {
LAB_1003fed28:
    puVar1 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(param_3 + 0x5c);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
      goto LAB_1003fedec;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
    goto LAB_1003fedec;
  }
  puVar1 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
LAB_1003fedec:
  lVar15 = (long)*(int *)(param_3 + 0x60);
  lVar14 = (long)param_1 + lVar15;
  (*pcVar12)(lVar14,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar15;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
      return param_1;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar15,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar15,0,1,DVar4.unknown);
    return param_1;
  }
  puVar1 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  return param_1;
}

