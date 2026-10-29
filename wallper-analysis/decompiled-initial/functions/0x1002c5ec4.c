// rea decompile_all
// name: FUN_1002c5ec4
// address: 0x1002c5ec4
// body: available
// range: 0x1002c5ec4-0x1002c699f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002c5ec4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Date DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  
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
  lVar3 = 0;
  FUN_100400294();
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x28));
  lVar4 = 0;
  FUN_1003fdce0();
  lVar16 = *(long *)(lVar4 + -8);
  pcVar13 = *(code **)(lVar16 + 0x30);
  puVar5 = puVar8;
  (*pcVar13)(puVar8,1,lVar4);
  puVar6 = puVar11;
  (*pcVar13)(puVar11,1,lVar4);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      FUN_100029548(puVar8,FUN_1003fdce0);
      goto LAB_1002c6030;
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
    lVar17 = (long)*(int *)(lVar4 + 0x20);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar7.unknown + -8);
    pcVar13 = *(code **)(lVar14 + 0x30);
    lVar16 = (long)puVar8 + lVar17;
    (*pcVar13)(lVar16,1,DVar7.unknown);
    lVar15 = (long)puVar11 + lVar17;
    (*pcVar13)(lVar15,1,DVar7.unknown);
    if ((int)lVar16 == 0) {
      if ((int)lVar15 != 0) {
        (**(code **)(lVar14 + 8))((long)puVar8 + lVar17,DVar7.unknown);
        goto LAB_1002c67bc;
      }
      (**(code **)(lVar14 + 0x28))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
    }
    else if ((int)lVar15 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar17,0,1,DVar7.unknown);
    }
    else {
LAB_1002c67bc:
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar17),(void *)((long)puVar11 + lVar17),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x24)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x24));
    *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x28)) =
         *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x28));
    lVar17 = (long)*(int *)(lVar4 + 0x2c);
    lVar16 = (long)puVar8 + lVar17;
    (*pcVar13)(lVar16,1,DVar7.unknown);
    lVar15 = (long)puVar11 + lVar17;
    (*pcVar13)(lVar15,1,DVar7.unknown);
    if ((int)lVar16 == 0) {
      if ((int)lVar15 != 0) {
        (**(code **)(lVar14 + 8))((long)puVar8 + lVar17,DVar7.unknown);
        goto LAB_1002c6878;
      }
      (**(code **)(lVar14 + 0x28))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
    }
    else if ((int)lVar15 == 0) {
      (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
      (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar17,0,1,DVar7.unknown);
    }
    else {
LAB_1002c6878:
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar8 + lVar17),(void *)((long)puVar11 + lVar17),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(lVar4 + 0x30);
    lVar4 = (long)puVar8 + lVar15;
    (*pcVar13)(lVar4,1,DVar7.unknown);
    lVar16 = (long)puVar11 + lVar15;
    (*pcVar13)(lVar16,1,DVar7.unknown);
    if ((int)lVar4 != 0) {
      if ((int)lVar16 == 0) {
        (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar15,(long)puVar11 + lVar15,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar15,0,1,DVar7.unknown);
        goto LAB_1002c6254;
      }
LAB_1002c6924:
      puVar10 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      sVar12 = *(size_t *)(*(long *)(puVar10 + -8) + 0x40);
      puVar8 = (undefined8 *)((long)puVar8 + lVar15);
      puVar11 = (undefined8 *)((long)puVar11 + lVar15);
      goto LAB_1002c6054;
    }
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)puVar8 + lVar15,DVar7.unknown);
      goto LAB_1002c6924;
    }
    (**(code **)(lVar14 + 0x28))((long)puVar8 + lVar15,(long)puVar11 + lVar15,DVar7.unknown);
  }
  else {
    if ((int)puVar6 == 0) {
      uVar9 = *puVar11;
      uVar18 = puVar11[3];
      uVar2 = puVar11[2];
      puVar8[1] = puVar11[1];
      *puVar8 = uVar9;
      puVar8[3] = uVar18;
      puVar8[2] = uVar2;
      uVar9 = puVar11[4];
      puVar8[5] = puVar11[5];
      puVar8[4] = uVar9;
      lVar17 = (long)*(int *)(lVar4 + 0x20);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar14 = *(long *)(DVar7.unknown + -8);
      pcVar13 = *(code **)(lVar14 + 0x30);
      lVar15 = (long)puVar11 + lVar17;
      (*pcVar13)(lVar15,1,DVar7.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar17,0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar17),(void *)((long)puVar11 + lVar17),
                *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x24)) =
           *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x24));
      *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x28)) =
           *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x28));
      lVar17 = (long)*(int *)(lVar4 + 0x2c);
      lVar15 = (long)puVar11 + lVar17;
      (*pcVar13)(lVar15,1,DVar7.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar17,0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar17),(void *)((long)puVar11 + lVar17),
                *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(lVar4 + 0x30);
      lVar15 = (long)puVar11 + lVar17;
      (*pcVar13)(lVar15,1,DVar7.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar14 + 0x20))((long)puVar8 + lVar17,(long)puVar11 + lVar17,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))((long)puVar8 + lVar17,0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar17),(void *)((long)puVar11 + lVar17),
                *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      (**(code **)(lVar16 + 0x38))(puVar8,0,1,lVar4);
      goto LAB_1002c6254;
    }
LAB_1002c6030:
    puVar10 = &DAT_10055a2a8;
    FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
    sVar12 = *(size_t *)(*(long *)(puVar10 + -8) + 0x40);
LAB_1002c6054:
    _memcpy(puVar8,puVar11,sVar12);
  }
LAB_1002c6254:
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x2c));
  lVar15 = (long)*(int *)(lVar3 + 0x30);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar4 = (long)param_1 + lVar15;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  lVar16 = (long)param_2 + lVar15;
  (*pcVar13)(lVar16,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar7.unknown);
      goto LAB_1002c62e8;
    }
    (**(code **)(lVar14 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
  }
  else {
LAB_1002c62e8:
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x34));
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x38));
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x3c));
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x40));
  uVar9 = puVar11[1];
  uVar2 = puVar8[1];
  *puVar8 = *puVar11;
  puVar8[1] = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x44)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x44));
  lVar4 = (long)*(int *)(lVar3 + 0x48);
  uVar9 = *(undefined8 *)((long)param_1 + lVar4);
  *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x4c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar3 + 0x4c));
  lVar15 = (long)*(int *)(lVar3 + 0x50);
  lVar4 = (long)param_1 + lVar15;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  lVar16 = (long)param_2 + lVar15;
  (*pcVar13)(lVar16,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar7.unknown);
      goto LAB_1002c6410;
    }
    (**(code **)(lVar14 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
  }
  else {
LAB_1002c6410:
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar3 + 0x54);
  lVar4 = (long)param_1 + lVar15;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  lVar16 = (long)param_2 + lVar15;
  (*pcVar13)(lVar16,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar7.unknown);
      goto LAB_1002c64ac;
    }
    (**(code **)(lVar14 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
  }
  else {
LAB_1002c64ac:
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar3 + 0x58);
  lVar4 = (long)param_1 + lVar15;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  lVar16 = (long)param_2 + lVar15;
  (*pcVar13)(lVar16,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar7.unknown);
      goto LAB_1002c6548;
    }
    (**(code **)(lVar14 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
  }
  else {
LAB_1002c6548:
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar3 + 0x5c);
  lVar4 = (long)param_1 + lVar15;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  lVar16 = (long)param_2 + lVar15;
  (*pcVar13)(lVar16,1,DVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar16 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar7.unknown);
      goto LAB_1002c65e4;
    }
    (**(code **)(lVar14 + 0x28))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar7.unknown);
  }
  else {
LAB_1002c65e4:
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  lVar16 = (long)*(int *)(lVar3 + 0x60);
  lVar3 = (long)param_1 + lVar16;
  (*pcVar13)(lVar3,1,DVar7.unknown);
  lVar4 = (long)param_2 + lVar16;
  (*pcVar13)(lVar4,1,DVar7.unknown);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar14 + 0x28))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar7.unknown);
      goto LAB_1002c66a8;
    }
    (**(code **)(lVar14 + 8))((long)param_1 + lVar16,DVar7.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar16,0,1,DVar7.unknown);
    goto LAB_1002c66a8;
  }
  puVar10 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
          *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_1002c66a8:
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar8 = (undefined8 *)((long)param_1 + (long)iVar1);
  uVar9 = puVar8[1];
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar2 = *param_2;
  puVar8[1] = param_2[1];
  *puVar8 = uVar2;
  _swift_release(uVar9);
  return param_1;
}

