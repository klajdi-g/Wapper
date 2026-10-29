// rea decompile_all
// name: FUN_1002bc1c4
// address: 0x1002bc1c4
// body: available
// range: 0x1002bc1c4-0x1002bc9cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002bc1c4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  Date DVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar23 = *param_2;
  *param_1 = lVar23;
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar21 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar21;
    param_1[3] = param_2[3];
    *(char *)(param_1 + 4) = (char)param_2[4];
    lVar18 = param_2[5];
    param_1[5] = lVar18;
    *(char *)(param_1 + 6) = (char)param_2[6];
    lVar26 = param_2[7];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    param_1[7] = lVar26;
    lVar11 = 0;
    FUN_100400294();
    lVar17 = *(long *)(lVar11 + -8);
    pcVar19 = *(code **)(lVar17 + 0x30);
    _swift_retain(lVar23);
    _swift_retain(lVar21);
    _swift_retain(lVar18);
    _swift_retain(lVar26);
    puVar12 = puVar2;
    (*pcVar19)(puVar2,1,lVar11);
    if ((int)puVar12 == 0) {
      uVar20 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar20;
      uVar22 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar22;
      uVar24 = puVar2[5];
      puVar1[4] = puVar2[4];
      puVar1[5] = uVar24;
      uVar6 = puVar2[7];
      puVar1[6] = puVar2[6];
      puVar1[7] = uVar6;
      uVar7 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar7;
      uVar8 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar8;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
      lVar23 = 0;
      FUN_1003fdce0();
      lVar21 = *(long *)(lVar23 + -8);
      pcVar19 = *(code **)(lVar21 + 0x30);
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      puVar13 = puVar3;
      (*pcVar19)(puVar3,1,lVar23);
      if ((int)puVar13 == 0) {
        uVar20 = puVar3[1];
        *puVar12 = *puVar3;
        puVar12[1] = uVar20;
        uVar22 = puVar3[3];
        puVar12[2] = puVar3[2];
        puVar12[3] = uVar22;
        uVar24 = puVar3[4];
        puVar12[5] = puVar3[5];
        puVar12[4] = uVar24;
        lVar25 = (long)*(int *)(lVar23 + 0x20);
        DVar15 = Foundation::Date::typeMetadataAccessor();
        lVar26 = *(long *)(DVar15.unknown + -8);
        pcVar19 = *(code **)(lVar26 + 0x30);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar22);
        lVar18 = (long)puVar3 + lVar25;
        (*pcVar19)(lVar18,1,DVar15.unknown);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar26 + 0x10))((long)puVar12 + lVar25,(long)puVar3 + lVar25,DVar15.unknown);
          (**(code **)(lVar26 + 0x38))((long)puVar12 + lVar25,0,1,DVar15.unknown);
        }
        else {
          puVar14 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar12 + lVar25),(void *)((long)puVar3 + lVar25),
                  *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
        }
        *(undefined1 *)((long)puVar12 + (long)*(int *)(lVar23 + 0x24)) =
             *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x24));
        *(undefined1 *)((long)puVar12 + (long)*(int *)(lVar23 + 0x28)) =
             *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar23 + 0x28));
        lVar25 = (long)*(int *)(lVar23 + 0x2c);
        lVar18 = (long)puVar3 + lVar25;
        (*pcVar19)(lVar18,1,DVar15.unknown);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar26 + 0x10))((long)puVar12 + lVar25,(long)puVar3 + lVar25,DVar15.unknown);
          (**(code **)(lVar26 + 0x38))((long)puVar12 + lVar25,0,1,DVar15.unknown);
        }
        else {
          puVar14 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar12 + lVar25),(void *)((long)puVar3 + lVar25),
                  *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
        }
        lVar25 = (long)*(int *)(lVar23 + 0x30);
        lVar18 = (long)puVar3 + lVar25;
        (*pcVar19)(lVar18,1,DVar15.unknown);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar26 + 0x10))((long)puVar12 + lVar25,(long)puVar3 + lVar25,DVar15.unknown);
          (**(code **)(lVar26 + 0x38))((long)puVar12 + lVar25,0,1,DVar15.unknown);
        }
        else {
          puVar14 = &DAT_10054b950;
          FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
          _memcpy((void *)((long)puVar12 + lVar25),(void *)((long)puVar3 + lVar25),
                  *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
        }
        (**(code **)(lVar21 + 0x38))(puVar12,0,1,lVar23);
      }
      else {
        puVar14 = &DAT_10055a2a8;
        FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
        _memcpy(puVar12,puVar3,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x2c));
      lVar21 = (long)*(int *)(lVar11 + 0x30);
      DVar15 = Foundation::Date::typeMetadataAccessor();
      lVar18 = *(long *)(DVar15.unknown + -8);
      pcVar19 = *(code **)(lVar18 + 0x30);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
      uVar20 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar20;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
      uVar20 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar20;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x40));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x40));
      uVar22 = puVar3[1];
      *puVar12 = *puVar3;
      puVar12[1] = uVar22;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x44)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x44));
      uVar24 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x48)) = uVar24;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x4c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x4c));
      lVar21 = (long)*(int *)(lVar11 + 0x50);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar20);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar24);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      lVar21 = (long)*(int *)(lVar11 + 0x54);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      lVar21 = (long)*(int *)(lVar11 + 0x58);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      lVar21 = (long)*(int *)(lVar11 + 0x5c);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      lVar21 = (long)*(int *)(lVar11 + 0x60);
      lVar23 = (long)puVar2 + lVar21;
      (*pcVar19)(lVar23,1,DVar15.unknown);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar21,(long)puVar2 + lVar21,DVar15.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar21,0,1,DVar15.unknown);
      }
      else {
        puVar14 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)puVar2 + lVar21),
                *(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      puVar14 = &DAT_100554ab8;
      FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar14 = &DAT_10055a2b0;
    FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
    *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar14 + 0x1c)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar14 + 0x1c));
    iVar9 = *(int *)(param_3 + 0x28);
    puVar4 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar5 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *puVar4 = *puVar5;
    uVar20 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar20;
    puVar4 = (undefined1 *)((long)param_1 + (long)iVar9);
    puVar5 = (undefined1 *)((long)param_2 + (long)iVar9);
    *puVar4 = *puVar5;
    uVar22 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar22;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *puVar1 = *puVar2;
    lVar23 = puVar2[2];
    uVar24 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar24;
    _swift_retain();
    _swift_retain(uVar20);
    _swift_retain(uVar22);
    _swift_bridgeObjectRetain(uVar24);
  }
  else {
    uVar16 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar23 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar23);
  return param_1;
}

