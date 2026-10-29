// rea decompile_all
// name: FUN_1002bf010
// address: 0x1002bf010
// body: available
// range: 0x1002bf010-0x1002c02bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002bf010(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Date DVar14;
  undefined *puVar15;
  size_t sVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar5);
  uVar6 = param_1[2];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar5;
  _swift_release(uVar6);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar5);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar5 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  puVar7 = (undefined *)0x0;
  FUN_100400294();
  lVar20 = *(long *)(puVar7 + -8);
  pcVar17 = *(code **)(lVar20 + 0x30);
  puVar8 = puVar1;
  (*pcVar17)(puVar1,1,puVar7);
  puVar9 = puVar2;
  (*pcVar17)(puVar2,1,puVar7);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 != 0) {
      FUN_100029548(puVar1,FUN_100400294);
      goto LAB_1002bf170;
    }
    uVar5 = puVar2[1];
    uVar6 = puVar1[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = puVar2[3];
    uVar6 = puVar1[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = puVar2[5];
    uVar6 = puVar1[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = puVar2[7];
    uVar6 = puVar1[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = puVar2[9];
    uVar6 = puVar1[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    uVar5 = puVar2[0xb];
    uVar6 = puVar1[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x28));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x28));
    puVar11 = (undefined *)0x0;
    FUN_1003fdce0();
    lVar20 = *(long *)(puVar11 + -8);
    pcVar17 = *(code **)(lVar20 + 0x30);
    puVar12 = puVar8;
    (*pcVar17)(puVar8,1,puVar11);
    puVar13 = puVar9;
    (*pcVar17)(puVar9,1,puVar11);
    if ((int)puVar12 == 0) {
      if ((int)puVar13 != 0) {
        FUN_100029548(puVar8,FUN_1003fdce0);
        goto LAB_1002bf35c;
      }
      uVar5 = puVar9[1];
      uVar6 = puVar8[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      _swift_bridgeObjectRelease(uVar6);
      uVar5 = puVar9[3];
      uVar6 = puVar8[3];
      puVar8[2] = puVar9[2];
      puVar8[3] = uVar5;
      _swift_bridgeObjectRelease(uVar6);
      uVar5 = puVar9[4];
      puVar8[5] = puVar9[5];
      puVar8[4] = uVar5;
      lVar18 = (long)*(int *)(puVar11 + 0x20);
      DVar14 = Foundation::Date::typeMetadataAccessor();
      lVar21 = *(long *)(DVar14.unknown + -8);
      pcVar17 = *(code **)(lVar21 + 0x30);
      lVar20 = (long)puVar8 + lVar18;
      (*pcVar17)(lVar20,1,DVar14.unknown);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar20 == 0) {
        if ((int)lVar10 == 0) {
          (**(code **)(lVar21 + 0x28))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        }
        else {
          (**(code **)(lVar21 + 8))((long)puVar8 + lVar18,DVar14.unknown);
          puVar15 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                  *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
        }
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar8 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar11 + 0x24)) =
           *(undefined1 *)((long)puVar9 + (long)*(int *)(puVar11 + 0x24));
      *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar11 + 0x28)) =
           *(undefined1 *)((long)puVar9 + (long)*(int *)(puVar11 + 0x28));
      lVar18 = (long)*(int *)(puVar11 + 0x2c);
      lVar20 = (long)puVar8 + lVar18;
      (*pcVar17)(lVar20,1,DVar14.unknown);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar20 == 0) {
        if ((int)lVar10 == 0) {
          (**(code **)(lVar21 + 0x28))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        }
        else {
          (**(code **)(lVar21 + 8))((long)puVar8 + lVar18,DVar14.unknown);
          puVar15 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                  *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
        }
      }
      else if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar8 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar11 + 0x30);
      lVar20 = (long)puVar8 + lVar18;
      (*pcVar17)(lVar20,1,DVar14.unknown);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar20 == 0) {
        if ((int)lVar10 == 0) {
          (**(code **)(lVar21 + 0x28))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
          goto LAB_1002bfb14;
        }
        (**(code **)(lVar21 + 8))((long)puVar8 + lVar18,DVar14.unknown);
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        sVar16 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
        puVar8 = (undefined8 *)((long)puVar8 + lVar18);
        puVar9 = (undefined8 *)((long)puVar9 + lVar18);
      }
      else {
        if ((int)lVar10 == 0) {
          (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
          pcVar17 = *(code **)(lVar21 + 0x38);
          puVar8 = (undefined8 *)((long)puVar8 + lVar18);
          goto LAB_1002bfb10;
        }
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        sVar16 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
        puVar8 = (undefined8 *)((long)puVar8 + lVar18);
        puVar9 = (undefined8 *)((long)puVar9 + lVar18);
      }
LAB_1002bf380:
      _memcpy(puVar8,puVar9,sVar16);
    }
    else {
      if ((int)puVar13 != 0) {
LAB_1002bf35c:
        puVar11 = &DAT_10055a2a8;
        FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
        sVar16 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
        goto LAB_1002bf380;
      }
      uVar5 = *puVar9;
      uVar23 = puVar9[3];
      uVar6 = puVar9[2];
      puVar8[1] = puVar9[1];
      *puVar8 = uVar5;
      puVar8[3] = uVar23;
      puVar8[2] = uVar6;
      uVar5 = puVar9[4];
      puVar8[5] = puVar9[5];
      puVar8[4] = uVar5;
      lVar18 = (long)*(int *)(puVar11 + 0x20);
      DVar14 = Foundation::Date::typeMetadataAccessor();
      lVar21 = *(long *)(DVar14.unknown + -8);
      pcVar17 = *(code **)(lVar21 + 0x30);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar8 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar11 + 0x24)) =
           *(undefined1 *)((long)puVar9 + (long)*(int *)(puVar11 + 0x24));
      *(undefined1 *)((long)puVar8 + (long)*(int *)(puVar11 + 0x28)) =
           *(undefined1 *)((long)puVar9 + (long)*(int *)(puVar11 + 0x28));
      lVar18 = (long)*(int *)(puVar11 + 0x2c);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar8 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar11 + 0x30);
      lVar10 = (long)puVar9 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar8 + lVar18,(long)puVar9 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar8 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar15 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar8 + lVar18),(void *)((long)puVar9 + lVar18),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      pcVar17 = *(code **)(lVar20 + 0x38);
      DVar14.unknown = puVar11;
LAB_1002bfb10:
      (*pcVar17)(puVar8,0,1,DVar14.unknown);
    }
LAB_1002bfb14:
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x2c));
    lVar21 = (long)*(int *)(puVar7 + 0x30);
    DVar14 = Foundation::Date::typeMetadataAccessor();
    lVar18 = *(long *)(DVar14.unknown + -8);
    pcVar17 = *(code **)(lVar18 + 0x30);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 != 0) {
        (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
        goto LAB_1002bfba8;
      }
      (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar14.unknown);
    }
    else {
LAB_1002bfba8:
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x34));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x34));
    uVar5 = puVar9[1];
    uVar6 = puVar8[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x38)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x38));
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x3c));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x3c));
    uVar5 = puVar9[1];
    uVar6 = puVar8[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40));
    puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40));
    uVar5 = puVar9[1];
    uVar6 = puVar8[1];
    *puVar8 = *puVar9;
    puVar8[1] = uVar5;
    _swift_bridgeObjectRelease(uVar6);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x44)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x44));
    lVar20 = (long)*(int *)(puVar7 + 0x48);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = *(undefined8 *)((long)puVar2 + lVar20);
    _swift_bridgeObjectRelease(uVar5);
    *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x4c));
    lVar21 = (long)*(int *)(puVar7 + 0x50);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 != 0) {
        (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
        goto LAB_1002bfcd0;
      }
      (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar14.unknown);
    }
    else {
LAB_1002bfcd0:
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar21 = (long)*(int *)(puVar7 + 0x54);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 != 0) {
        (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
        goto LAB_1002bfd6c;
      }
      (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar14.unknown);
    }
    else {
LAB_1002bfd6c:
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar21 = (long)*(int *)(puVar7 + 0x58);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 != 0) {
        (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
        goto LAB_1002bfe08;
      }
      (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar14.unknown);
    }
    else {
LAB_1002bfe08:
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar21 = (long)*(int *)(puVar7 + 0x5c);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 != 0) {
        (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
        goto LAB_1002bfea4;
      }
      (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar14.unknown);
    }
    else {
LAB_1002bfea4:
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar21 = (long)*(int *)(puVar7 + 0x60);
    lVar20 = (long)puVar1 + lVar21;
    (*pcVar17)(lVar20,1,DVar14.unknown);
    lVar10 = (long)puVar2 + lVar21;
    (*pcVar17)(lVar10,1,DVar14.unknown);
    if ((int)lVar20 == 0) {
      if ((int)lVar10 == 0) {
        (**(code **)(lVar18 + 0x28))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
        goto LAB_1002bf824;
      }
      (**(code **)(lVar18 + 8))((long)puVar1 + lVar21,DVar14.unknown);
    }
    else if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x20))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar14.unknown);
      pcVar17 = *(code **)(lVar18 + 0x38);
      puVar8 = (undefined8 *)((long)puVar1 + lVar21);
      goto LAB_1002bf820;
    }
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    sVar16 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
    puVar8 = (undefined8 *)((long)puVar1 + lVar21);
    puVar9 = (undefined8 *)((long)puVar2 + lVar21);
  }
  else {
    if ((int)puVar9 == 0) {
      uVar5 = *puVar2;
      uVar23 = puVar2[3];
      uVar6 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar5;
      puVar1[3] = uVar23;
      puVar1[2] = uVar6;
      uVar5 = puVar2[4];
      uVar23 = puVar2[7];
      uVar6 = puVar2[6];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar5;
      puVar1[7] = uVar23;
      puVar1[6] = uVar6;
      uVar5 = puVar2[8];
      uVar23 = puVar2[0xb];
      uVar6 = puVar2[10];
      puVar1[9] = puVar2[9];
      puVar1[8] = uVar5;
      puVar1[0xb] = uVar23;
      puVar1[10] = uVar6;
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x28));
      puVar9 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x28));
      lVar10 = 0;
      FUN_1003fdce0();
      lVar18 = *(long *)(lVar10 + -8);
      puVar12 = puVar9;
      (**(code **)(lVar18 + 0x30))(puVar9,1,lVar10);
      if ((int)puVar12 == 0) {
        uVar5 = *puVar9;
        uVar23 = puVar9[3];
        uVar6 = puVar9[2];
        puVar8[1] = puVar9[1];
        *puVar8 = uVar5;
        puVar8[3] = uVar23;
        puVar8[2] = uVar6;
        uVar5 = puVar9[4];
        puVar8[5] = puVar9[5];
        puVar8[4] = uVar5;
        lVar19 = (long)*(int *)(lVar10 + 0x20);
        DVar14 = Foundation::Date::typeMetadataAccessor();
        lVar22 = *(long *)(DVar14.unknown + -8);
        pcVar17 = *(code **)(lVar22 + 0x30);
        lVar21 = (long)puVar9 + lVar19;
        (*pcVar17)(lVar21,1,DVar14.unknown);
        if ((int)lVar21 == 0) {
          (**(code **)(lVar22 + 0x20))((long)puVar8 + lVar19,(long)puVar9 + lVar19,DVar14.unknown);
          (**(code **)(lVar22 + 0x38))((long)puVar8 + lVar19,0,1,DVar14.unknown);
        }
        else {
          puVar11 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar8 + lVar19),(void *)((long)puVar9 + lVar19),
                  *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
        }
        *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar10 + 0x24)) =
             *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x24));
        *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar10 + 0x28)) =
             *(undefined1 *)((long)puVar9 + (long)*(int *)(lVar10 + 0x28));
        lVar19 = (long)*(int *)(lVar10 + 0x2c);
        lVar21 = (long)puVar9 + lVar19;
        (*pcVar17)(lVar21,1,DVar14.unknown);
        if ((int)lVar21 == 0) {
          (**(code **)(lVar22 + 0x20))((long)puVar8 + lVar19,(long)puVar9 + lVar19,DVar14.unknown);
          (**(code **)(lVar22 + 0x38))((long)puVar8 + lVar19,0,1,DVar14.unknown);
        }
        else {
          puVar11 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar8 + lVar19),(void *)((long)puVar9 + lVar19),
                  *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
        }
        lVar19 = (long)*(int *)(lVar10 + 0x30);
        lVar21 = (long)puVar9 + lVar19;
        (*pcVar17)(lVar21,1,DVar14.unknown);
        if ((int)lVar21 == 0) {
          (**(code **)(lVar22 + 0x20))((long)puVar8 + lVar19,(long)puVar9 + lVar19);
          (**(code **)(lVar22 + 0x38))((long)puVar8 + lVar19,0,1,DVar14.unknown);
        }
        else {
          puVar11 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar8 + lVar19),(void *)((long)puVar9 + lVar19),
                  *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
        }
        (**(code **)(lVar18 + 0x38))(puVar8,0,1,lVar10);
      }
      else {
        puVar11 = &DAT_10055a2a8;
        FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
        _memcpy(puVar8,puVar9,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x2c));
      lVar18 = (long)*(int *)(puVar7 + 0x30);
      DVar14 = Foundation::Date::typeMetadataAccessor();
      lVar21 = *(long *)(DVar14.unknown + -8);
      pcVar17 = *(code **)(lVar21 + 0x30);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x34));
      uVar5 = *puVar8;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x34));
      puVar9[1] = puVar8[1];
      *puVar9 = uVar5;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x38)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x38));
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x3c));
      uVar5 = *puVar8;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x3c));
      puVar9[1] = puVar8[1];
      *puVar9 = uVar5;
      puVar8 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40));
      uVar5 = *puVar8;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40));
      puVar9[1] = puVar8[1];
      *puVar9 = uVar5;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x44)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x44));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x48)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x48));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x4c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x4c));
      lVar18 = (long)*(int *)(puVar7 + 0x50);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar7 + 0x54);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar7 + 0x58);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar7 + 0x5c);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(puVar7 + 0x60);
      lVar10 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar10,1,DVar14.unknown);
      if ((int)lVar10 == 0) {
        (**(code **)(lVar21 + 0x20))((long)puVar1 + lVar18,(long)puVar2 + lVar18,DVar14.unknown);
        (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar18,0,1,DVar14.unknown);
      }
      else {
        puVar11 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar18),(void *)((long)puVar2 + lVar18),
                *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      pcVar17 = *(code **)(lVar20 + 0x38);
      puVar8 = puVar1;
      DVar14.unknown = puVar7;
LAB_1002bf820:
      (*pcVar17)(puVar8,0,1,DVar14.unknown);
      goto LAB_1002bf824;
    }
LAB_1002bf170:
    puVar7 = &DAT_100554ab8;
    FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
    sVar16 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
    puVar8 = puVar1;
    puVar9 = puVar2;
  }
  _memcpy(puVar8,puVar9,sVar16);
LAB_1002bf824:
  puVar7 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  lVar20 = (long)*(int *)(puVar7 + 0x1c);
  uVar5 = *(undefined8 *)((long)puVar1 + lVar20);
  *(undefined8 *)((long)puVar1 + lVar20) = *(undefined8 *)((long)puVar2 + lVar20);
  _swift_release(uVar5);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar5 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar5);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar3 = *puVar4;
  uVar5 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar5 = param_2[1];
  uVar6 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  uVar5 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_release(uVar5);
  return param_1;
}

