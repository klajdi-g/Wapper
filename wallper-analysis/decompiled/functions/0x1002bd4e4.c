// rea decompile_all
// name: FUN_1002bd4e4
// address: 0x1002bd4e4
// body: available
// range: 0x1002bd4e4-0x1002be98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002bd4e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Date DVar11;
  undefined *puVar12;
  size_t sVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  
  uVar16 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar16);
  param_1[1] = param_2[1];
  uVar16 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar16);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar16 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar16);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar16 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar5 = (undefined *)0x0;
  FUN_100400294();
  lVar21 = *(long *)(puVar5 + -8);
  pcVar14 = *(code **)(lVar21 + 0x30);
  puVar6 = puVar1;
  (*pcVar14)(puVar1,1,puVar5);
  puVar7 = puVar2;
  (*pcVar14)(puVar2,1,puVar5);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      FUN_100029548(puVar1,FUN_100400294);
      goto LAB_1002bd70c;
    }
    *puVar1 = *puVar2;
    uVar16 = puVar1[1];
    puVar1[1] = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar1[2] = puVar2[2];
    uVar16 = puVar1[3];
    puVar1[3] = puVar2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar1[4] = puVar2[4];
    uVar16 = puVar1[5];
    puVar1[5] = puVar2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar1[6] = puVar2[6];
    uVar16 = puVar1[7];
    puVar1[7] = puVar2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar1[8] = puVar2[8];
    uVar16 = puVar1[9];
    puVar1[9] = puVar2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar1[10] = puVar2[10];
    uVar16 = puVar1[0xb];
    puVar1[0xb] = puVar2[0xb];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x28));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x28));
    lVar21 = 0;
    FUN_1003fdce0();
    lVar8 = *(long *)(lVar21 + -8);
    pcVar14 = *(code **)(lVar8 + 0x30);
    puVar9 = puVar6;
    (*pcVar14)(puVar6,1,lVar21);
    puVar10 = puVar7;
    (*pcVar14)(puVar7,1,lVar21);
    if ((int)puVar9 == 0) {
      if ((int)puVar10 != 0) {
        FUN_100029548(puVar6,FUN_1003fdce0);
        goto LAB_1002bd9b8;
      }
      *puVar6 = *puVar7;
      uVar16 = puVar6[1];
      puVar6[1] = puVar7[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar16);
      puVar6[2] = puVar7[2];
      uVar16 = puVar6[3];
      puVar6[3] = puVar7[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar16);
      puVar6[4] = puVar7[4];
      puVar6[5] = puVar7[5];
      lVar19 = (long)*(int *)(lVar21 + 0x20);
      DVar11 = Foundation::Date::typeMetadataAccessor();
      lVar24 = *(long *)(DVar11.unknown + -8);
      pcVar14 = *(code **)(lVar24 + 0x30);
      lVar8 = (long)puVar6 + lVar19;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      lVar17 = (long)puVar7 + lVar19;
      (*pcVar14)(lVar17,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        if ((int)lVar17 == 0) {
          (**(code **)(lVar24 + 0x18))((long)puVar6 + lVar19,(long)puVar7 + lVar19,DVar11.unknown);
        }
        else {
          (**(code **)(lVar24 + 8))((long)puVar6 + lVar19,DVar11.unknown);
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar19),(void *)((long)puVar7 + lVar19),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
      }
      else if ((int)lVar17 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar6 + lVar19,(long)puVar7 + lVar19,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar6 + lVar19,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar19),(void *)((long)puVar7 + lVar19),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x24)) =
           *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar21 + 0x24));
      *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x28)) =
           *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar21 + 0x28));
      lVar19 = (long)*(int *)(lVar21 + 0x2c);
      lVar8 = (long)puVar6 + lVar19;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      lVar17 = (long)puVar7 + lVar19;
      (*pcVar14)(lVar17,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        if ((int)lVar17 == 0) {
          (**(code **)(lVar24 + 0x18))((long)puVar6 + lVar19,(long)puVar7 + lVar19,DVar11.unknown);
        }
        else {
          (**(code **)(lVar24 + 8))((long)puVar6 + lVar19,DVar11.unknown);
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar19),(void *)((long)puVar7 + lVar19),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
      }
      else if ((int)lVar17 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar6 + lVar19,(long)puVar7 + lVar19,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar6 + lVar19,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar19),(void *)((long)puVar7 + lVar19),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(lVar21 + 0x30);
      lVar21 = (long)puVar6 + lVar17;
      (*pcVar14)(lVar21,1,DVar11.unknown);
      lVar8 = (long)puVar7 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar21 == 0) {
        if ((int)lVar8 != 0) {
          (**(code **)(lVar24 + 8))((long)puVar6 + lVar17,DVar11.unknown);
          goto LAB_1002be93c;
        }
        (**(code **)(lVar24 + 0x18))((long)puVar6 + lVar17,(long)puVar7 + lVar17,DVar11.unknown);
      }
      else if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar6 + lVar17,(long)puVar7 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar6 + lVar17,0,1,DVar11.unknown);
      }
      else {
LAB_1002be93c:
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar6 + lVar17),(void *)((long)puVar7 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
    }
    else {
      if ((int)puVar10 == 0) {
        *puVar6 = *puVar7;
        uVar15 = puVar7[1];
        puVar6[1] = uVar15;
        puVar6[2] = puVar7[2];
        uVar16 = puVar7[3];
        puVar6[3] = uVar16;
        puVar6[4] = puVar7[4];
        puVar6[5] = puVar7[5];
        lVar24 = (long)*(int *)(lVar21 + 0x20);
        DVar11 = Foundation::Date::typeMetadataAccessor();
        lVar19 = *(long *)(DVar11.unknown + -8);
        pcVar14 = *(code **)(lVar19 + 0x30);
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(uVar16);
        lVar17 = (long)puVar7 + lVar24;
        (*pcVar14)(lVar17,1,DVar11.unknown);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar24,(long)puVar7 + lVar24,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar24,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar24),(void *)((long)puVar7 + lVar24),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x24)) =
             *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar21 + 0x24));
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar21 + 0x28)) =
             *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar21 + 0x28));
        lVar24 = (long)*(int *)(lVar21 + 0x2c);
        lVar17 = (long)puVar7 + lVar24;
        (*pcVar14)(lVar17,1,DVar11.unknown);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar24,(long)puVar7 + lVar24,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar24,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar24),(void *)((long)puVar7 + lVar24),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        lVar24 = (long)*(int *)(lVar21 + 0x30);
        lVar17 = (long)puVar7 + lVar24;
        (*pcVar14)(lVar17,1,DVar11.unknown);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar24,(long)puVar7 + lVar24,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar24,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar24),(void *)((long)puVar7 + lVar24),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar21);
        goto LAB_1002be1d8;
      }
LAB_1002bd9b8:
      puVar12 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      _memcpy(puVar6,puVar7,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
LAB_1002be1d8:
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x2c));
    lVar24 = (long)*(int *)(puVar5 + 0x30);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar17 = *(long *)(DVar11.unknown + -8);
    pcVar14 = *(code **)(lVar17 + 0x30);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 != 0) {
        (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
        goto LAB_1002be26c;
      }
      (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,DVar11.unknown);
    }
    else {
LAB_1002be26c:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x34));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x34));
    *puVar6 = *puVar7;
    uVar16 = puVar6[1];
    puVar6[1] = puVar7[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x38)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x38));
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x3c));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x3c));
    *puVar6 = *puVar7;
    uVar16 = puVar6[1];
    puVar6[1] = puVar7[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x40));
    puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x40));
    *puVar6 = *puVar7;
    uVar16 = puVar6[1];
    puVar6[1] = puVar7[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x44)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x44));
    lVar21 = (long)*(int *)(puVar5 + 0x48);
    uVar16 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = *(undefined8 *)((long)puVar2 + lVar21);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar16);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x4c));
    lVar24 = (long)*(int *)(puVar5 + 0x50);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 != 0) {
        (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
        goto LAB_1002be3cc;
      }
      (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,DVar11.unknown);
    }
    else {
LAB_1002be3cc:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(puVar5 + 0x54);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 != 0) {
        (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
        goto LAB_1002be468;
      }
      (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,DVar11.unknown);
    }
    else {
LAB_1002be468:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(puVar5 + 0x58);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 != 0) {
        (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
        goto LAB_1002be504;
      }
      (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,DVar11.unknown);
    }
    else {
LAB_1002be504:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(puVar5 + 0x5c);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 != 0) {
        (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
        goto LAB_1002be5a0;
      }
      (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar24,0,1,DVar11.unknown);
    }
    else {
LAB_1002be5a0:
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar24),(void *)((long)puVar2 + lVar24),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar24 = (long)*(int *)(puVar5 + 0x60);
    lVar21 = (long)puVar1 + lVar24;
    (*pcVar14)(lVar21,1,DVar11.unknown);
    lVar8 = (long)puVar2 + lVar24;
    (*pcVar14)(lVar8,1,DVar11.unknown);
    if ((int)lVar21 == 0) {
      if ((int)lVar8 == 0) {
        (**(code **)(lVar17 + 0x18))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
        goto LAB_1002bdeb4;
      }
      (**(code **)(lVar17 + 8))((long)puVar1 + lVar24,DVar11.unknown);
    }
    else if ((int)lVar8 == 0) {
      (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar24,(long)puVar2 + lVar24,DVar11.unknown);
      pcVar14 = *(code **)(lVar17 + 0x38);
      puVar6 = (undefined8 *)((long)puVar1 + lVar24);
      goto LAB_1002bdeb0;
    }
    puVar5 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar13 = *(size_t *)(*(long *)(puVar5 + -8) + 0x40);
    puVar6 = (undefined8 *)((long)puVar1 + lVar24);
    puVar7 = (undefined8 *)((long)puVar2 + lVar24);
  }
  else {
    if ((int)puVar7 == 0) {
      *puVar1 = *puVar2;
      uVar25 = puVar2[1];
      puVar1[1] = uVar25;
      puVar1[2] = puVar2[2];
      uVar15 = puVar2[3];
      puVar1[3] = uVar15;
      puVar1[4] = puVar2[4];
      uVar22 = puVar2[5];
      puVar1[5] = uVar22;
      puVar1[6] = puVar2[6];
      uVar18 = puVar2[7];
      puVar1[7] = uVar18;
      puVar1[8] = puVar2[8];
      uVar20 = puVar2[9];
      puVar1[9] = uVar20;
      puVar1[10] = puVar2[10];
      uVar16 = puVar2[0xb];
      puVar1[0xb] = uVar16;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x28));
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x28));
      lVar8 = 0;
      FUN_1003fdce0();
      lVar17 = *(long *)(lVar8 + -8);
      pcVar14 = *(code **)(lVar17 + 0x30);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar16);
      puVar9 = puVar7;
      (*pcVar14)(puVar7,1,lVar8);
      if ((int)puVar9 == 0) {
        *puVar6 = *puVar7;
        uVar16 = puVar7[1];
        puVar6[1] = uVar16;
        puVar6[2] = puVar7[2];
        uVar15 = puVar7[3];
        puVar6[3] = uVar15;
        puVar6[4] = puVar7[4];
        puVar6[5] = puVar7[5];
        lVar23 = (long)*(int *)(lVar8 + 0x20);
        DVar11 = Foundation::Date::typeMetadataAccessor();
        lVar19 = *(long *)(DVar11.unknown + -8);
        pcVar14 = *(code **)(lVar19 + 0x30);
        _swift_bridgeObjectRetain(uVar16);
        _swift_bridgeObjectRetain(uVar15);
        lVar24 = (long)puVar7 + lVar23;
        (*pcVar14)(lVar24,1,DVar11.unknown);
        if ((int)lVar24 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar23,(long)puVar7 + lVar23,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar23,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar23),(void *)((long)puVar7 + lVar23),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar8 + 0x24)) =
             *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x24));
        *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar8 + 0x28)) =
             *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x28));
        lVar23 = (long)*(int *)(lVar8 + 0x2c);
        lVar24 = (long)puVar7 + lVar23;
        (*pcVar14)(lVar24,1,DVar11.unknown);
        if ((int)lVar24 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar23,(long)puVar7 + lVar23,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar23,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar23),(void *)((long)puVar7 + lVar23),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        lVar23 = (long)*(int *)(lVar8 + 0x30);
        lVar24 = (long)puVar7 + lVar23;
        (*pcVar14)(lVar24,1,DVar11.unknown);
        if ((int)lVar24 == 0) {
          (**(code **)(lVar19 + 0x10))((long)puVar6 + lVar23,(long)puVar7 + lVar23,DVar11.unknown);
          (**(code **)(lVar19 + 0x38))((long)puVar6 + lVar23,0,1,DVar11.unknown);
        }
        else {
          puVar12 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar6 + lVar23),(void *)((long)puVar7 + lVar23),
                  *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
        }
        (**(code **)(lVar17 + 0x38))(puVar6,0,1,lVar8);
      }
      else {
        puVar12 = &DAT_10055a2a8;
        FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
        _memcpy(puVar6,puVar7,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x2c));
      lVar17 = (long)*(int *)(puVar5 + 0x30);
      DVar11 = Foundation::Date::typeMetadataAccessor();
      lVar24 = *(long *)(DVar11.unknown + -8);
      pcVar14 = *(code **)(lVar24 + 0x30);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x34));
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x34));
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x38)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x38));
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x3c));
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x3c));
      *puVar6 = *puVar7;
      uVar16 = puVar7[1];
      puVar6[1] = uVar16;
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x40));
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x40));
      *puVar6 = *puVar7;
      uVar15 = puVar7[1];
      puVar6[1] = uVar15;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x44)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x44));
      uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x48)) = uVar18;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar5 + 0x4c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x4c));
      lVar17 = (long)*(int *)(puVar5 + 0x50);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar18);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(puVar5 + 0x54);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(puVar5 + 0x58);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(puVar5 + 0x5c);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar17 = (long)*(int *)(puVar5 + 0x60);
      lVar8 = (long)puVar2 + lVar17;
      (*pcVar14)(lVar8,1,DVar11.unknown);
      if ((int)lVar8 == 0) {
        (**(code **)(lVar24 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,DVar11.unknown);
        (**(code **)(lVar24 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)puVar2 + lVar17),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      pcVar14 = *(code **)(lVar21 + 0x38);
      puVar6 = puVar1;
      DVar11.unknown = puVar5;
LAB_1002bdeb0:
      (*pcVar14)(puVar6,0,1,DVar11.unknown);
      goto LAB_1002bdeb4;
    }
LAB_1002bd70c:
    puVar5 = &DAT_100554ab8;
    FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
    sVar13 = *(size_t *)(*(long *)(puVar5 + -8) + 0x40);
    puVar6 = puVar1;
    puVar7 = puVar2;
  }
  _memcpy(puVar6,puVar7,sVar13);
LAB_1002bdeb4:
  puVar5 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  lVar21 = (long)*(int *)(puVar5 + 0x1c);
  uVar16 = *(undefined8 *)((long)puVar1 + lVar21);
  *(undefined8 *)((long)puVar1 + lVar21) = *(undefined8 *)((long)puVar2 + lVar21);
  _swift_retain();
  _swift_release(uVar16);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar3 = *puVar4;
  uVar16 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  uVar16 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  uVar16 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar16);
  return param_1;
}

