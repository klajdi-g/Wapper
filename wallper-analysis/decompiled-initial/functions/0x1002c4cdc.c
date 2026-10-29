// rea decompile_all
// name: FUN_1002c4cdc
// address: 0x1002c4cdc
// body: available
// range: 0x1002c4cdc-0x1002c58db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002c4cdc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Date DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  size_t sVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  uVar13 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[2] = param_2[2];
  uVar13 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[4] = param_2[4];
  uVar13 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[6] = param_2[6];
  uVar13 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[8] = param_2[8];
  uVar13 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  param_1[10] = param_2[10];
  uVar13 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  lVar1 = 0;
  FUN_100400294();
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x28));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar1 + 0x28));
  puVar2 = (undefined *)0x0;
  FUN_1003fdce0();
  lVar15 = *(long *)(puVar2 + -8);
  pcVar11 = *(code **)(lVar15 + 0x30);
  puVar3 = puVar6;
  (*pcVar11)(puVar6,1,puVar2);
  puVar4 = puVar8;
  (*pcVar11)(puVar8,1,puVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 != 0) {
      FUN_100029548(puVar6,FUN_1003fdce0);
      goto LAB_1002c4ee0;
    }
    *puVar6 = *puVar8;
    uVar13 = puVar6[1];
    puVar6[1] = puVar8[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar13);
    puVar6[2] = puVar8[2];
    uVar13 = puVar6[3];
    puVar6[3] = puVar8[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar13);
    puVar6[4] = puVar8[4];
    puVar6[5] = puVar8[5];
    lVar14 = (long)*(int *)(puVar2 + 0x20);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar5.unknown + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    lVar15 = (long)puVar6 + lVar14;
    (*pcVar11)(lVar15,1,DVar5.unknown);
    lVar12 = (long)puVar8 + lVar14;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar15 == 0) {
      if ((int)lVar12 != 0) {
        (**(code **)(lVar10 + 8))((long)puVar6 + lVar14,DVar5.unknown);
        goto LAB_1002c5700;
      }
      (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
    }
    else if ((int)lVar12 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
      (**(code **)(lVar10 + 0x38))((long)puVar6 + lVar14,0,1,DVar5.unknown);
    }
    else {
LAB_1002c5700:
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar14),(void *)((long)puVar8 + lVar14),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar2 + 0x24)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar2 + 0x24));
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar2 + 0x28)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar2 + 0x28));
    lVar14 = (long)*(int *)(puVar2 + 0x2c);
    lVar15 = (long)puVar6 + lVar14;
    (*pcVar11)(lVar15,1,DVar5.unknown);
    lVar12 = (long)puVar8 + lVar14;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar15 == 0) {
      if ((int)lVar12 != 0) {
        (**(code **)(lVar10 + 8))((long)puVar6 + lVar14,DVar5.unknown);
        goto LAB_1002c57bc;
      }
      (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
    }
    else if ((int)lVar12 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
      (**(code **)(lVar10 + 0x38))((long)puVar6 + lVar14,0,1,DVar5.unknown);
    }
    else {
LAB_1002c57bc:
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar14),(void *)((long)puVar8 + lVar14),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(puVar2 + 0x30);
    lVar15 = (long)puVar6 + lVar14;
    (*pcVar11)(lVar15,1,DVar5.unknown);
    lVar12 = (long)puVar8 + lVar14;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar15 == 0) {
      if ((int)lVar12 == 0) {
        (**(code **)(lVar10 + 0x18))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
        goto LAB_1002c5144;
      }
      (**(code **)(lVar10 + 8))((long)puVar6 + lVar14,DVar5.unknown);
    }
    else if ((int)lVar12 == 0) {
      (**(code **)(lVar10 + 0x10))((long)puVar6 + lVar14,(long)puVar8 + lVar14,DVar5.unknown);
      pcVar11 = *(code **)(lVar10 + 0x38);
      puVar6 = (undefined8 *)((long)puVar6 + lVar14);
      goto LAB_1002c5140;
    }
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar9 = *(size_t *)(*(long *)(puVar2 + -8) + 0x40);
    puVar6 = (undefined8 *)((long)puVar6 + lVar14);
    puVar8 = (undefined8 *)((long)puVar8 + lVar14);
LAB_1002c4f04:
    _memcpy(puVar6,puVar8,sVar9);
  }
  else {
    if ((int)puVar4 != 0) {
LAB_1002c4ee0:
      puVar2 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      sVar9 = *(size_t *)(*(long *)(puVar2 + -8) + 0x40);
      goto LAB_1002c4f04;
    }
    *puVar6 = *puVar8;
    uVar13 = puVar8[1];
    puVar6[1] = uVar13;
    puVar6[2] = puVar8[2];
    uVar16 = puVar8[3];
    puVar6[3] = uVar16;
    puVar6[4] = puVar8[4];
    puVar6[5] = puVar8[5];
    lVar10 = (long)*(int *)(puVar2 + 0x20);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar5.unknown + -8);
    pcVar11 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar16);
    lVar12 = (long)puVar8 + lVar10;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar5.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar6 + lVar10,0,1,DVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar2 + 0x24)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar2 + 0x24));
    *(undefined1 *)((long)puVar6 + (long)*(int *)(puVar2 + 0x28)) =
         *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar2 + 0x28));
    lVar10 = (long)*(int *)(puVar2 + 0x2c);
    lVar12 = (long)puVar8 + lVar10;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar5.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar6 + lVar10,0,1,DVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(puVar2 + 0x30);
    lVar12 = (long)puVar8 + lVar10;
    (*pcVar11)(lVar12,1,DVar5.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar14 + 0x10))((long)puVar6 + lVar10,(long)puVar8 + lVar10,DVar5.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar6 + lVar10,0,1,DVar5.unknown);
    }
    else {
      puVar7 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar6 + lVar10),(void *)((long)puVar8 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    pcVar11 = *(code **)(lVar15 + 0x38);
    DVar5.unknown = puVar2;
LAB_1002c5140:
    (*pcVar11)(puVar6,0,1,DVar5.unknown);
  }
LAB_1002c5144:
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar1 + 0x2c));
  lVar10 = (long)*(int *)(lVar1 + 0x30);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  pcVar11 = *(code **)(lVar14 + 0x30);
  lVar15 = (long)param_1 + lVar10;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  lVar12 = (long)param_2 + lVar10;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002c51d8;
    }
    (**(code **)(lVar14 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002c51d8:
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x34));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar1 + 0x34));
  *puVar6 = *puVar8;
  uVar13 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar1 + 0x38));
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x3c));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar1 + 0x3c));
  *puVar6 = *puVar8;
  uVar13 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x40));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar1 + 0x40));
  *puVar6 = *puVar8;
  uVar13 = puVar6[1];
  puVar6[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar1 + 0x44));
  lVar15 = (long)*(int *)(lVar1 + 0x48);
  uVar13 = *(undefined8 *)((long)param_1 + lVar15);
  *(undefined8 *)((long)param_1 + lVar15) = *(undefined8 *)((long)param_2 + lVar15);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar13);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar1 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar1 + 0x4c));
  lVar10 = (long)*(int *)(lVar1 + 0x50);
  lVar15 = (long)param_1 + lVar10;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  lVar12 = (long)param_2 + lVar10;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002c5338;
    }
    (**(code **)(lVar14 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002c5338:
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(lVar1 + 0x54);
  lVar15 = (long)param_1 + lVar10;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  lVar12 = (long)param_2 + lVar10;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002c53d4;
    }
    (**(code **)(lVar14 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002c53d4:
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(lVar1 + 0x58);
  lVar15 = (long)param_1 + lVar10;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  lVar12 = (long)param_2 + lVar10;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002c5470;
    }
    (**(code **)(lVar14 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002c5470:
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(lVar1 + 0x5c);
  lVar15 = (long)param_1 + lVar10;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  lVar12 = (long)param_2 + lVar10;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  if ((int)lVar15 == 0) {
    if ((int)lVar12 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002c550c;
    }
    (**(code **)(lVar14 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002c550c:
    puVar2 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(lVar1 + 0x60);
  lVar1 = (long)param_1 + lVar12;
  (*pcVar11)(lVar1,1,DVar5.unknown);
  lVar15 = (long)param_2 + lVar12;
  (*pcVar11)(lVar15,1,DVar5.unknown);
  if ((int)lVar1 == 0) {
    if ((int)lVar15 == 0) {
      (**(code **)(lVar14 + 0x18))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar5.unknown);
      goto LAB_1002c55d0;
    }
    (**(code **)(lVar14 + 8))((long)param_1 + lVar12,DVar5.unknown);
  }
  else if ((int)lVar15 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar12,0,1,DVar5.unknown);
    goto LAB_1002c55d0;
  }
  puVar2 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
LAB_1002c55d0:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar16 = puVar6[1];
  uVar13 = param_2[1];
  uVar17 = *param_2;
  puVar6[1] = param_2[1];
  *puVar6 = uVar17;
  _swift_retain(uVar13);
  _swift_release(uVar16);
  return param_1;
}

