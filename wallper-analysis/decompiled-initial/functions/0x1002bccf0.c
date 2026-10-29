// rea decompile_all
// name: FUN_1002bccf0
// address: 0x1002bccf0
// body: available
// range: 0x1002bccf0-0x1002bd4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002bccf0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  Date DVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  
  uVar17 = *param_2;
  uVar20 = param_2[1];
  *param_1 = uVar17;
  param_1[1] = uVar20;
  uVar20 = param_2[2];
  uVar16 = param_2[3];
  param_1[2] = uVar20;
  param_1[3] = uVar16;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar16 = param_2[5];
  param_1[5] = uVar16;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar24 = param_2[7];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  param_1[7] = uVar24;
  lVar9 = 0;
  FUN_100400294();
  lVar21 = *(long *)(lVar9 + -8);
  pcVar18 = *(code **)(lVar21 + 0x30);
  _swift_retain(uVar17);
  _swift_retain(uVar20);
  _swift_retain(uVar16);
  _swift_retain(uVar24);
  puVar10 = puVar2;
  (*pcVar18)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    uVar17 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar17;
    uVar20 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar20;
    uVar16 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar16;
    uVar24 = puVar2[7];
    puVar1[6] = puVar2[6];
    puVar1[7] = uVar24;
    uVar6 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar6;
    uVar7 = puVar2[0xb];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = uVar7;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x28));
    lVar11 = 0;
    FUN_1003fdce0();
    lVar15 = *(long *)(lVar11 + -8);
    pcVar18 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    puVar12 = puVar3;
    (*pcVar18)(puVar3,1,lVar11);
    if ((int)puVar12 == 0) {
      uVar17 = puVar3[1];
      *puVar10 = *puVar3;
      puVar10[1] = uVar17;
      uVar20 = puVar3[3];
      puVar10[2] = puVar3[2];
      puVar10[3] = uVar20;
      uVar16 = puVar3[4];
      puVar10[5] = puVar3[5];
      puVar10[4] = uVar16;
      lVar23 = (long)*(int *)(lVar11 + 0x20);
      DVar14 = Foundation::Date::typeMetadataAccessor();
      lVar22 = *(long *)(DVar14.unknown + -8);
      pcVar18 = *(code **)(lVar22 + 0x30);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar20);
      lVar19 = (long)puVar3 + lVar23;
      (*pcVar18)(lVar19,1,DVar14.unknown);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar22 + 0x10))((long)puVar10 + lVar23,(long)puVar3 + lVar23,DVar14.unknown);
        (**(code **)(lVar22 + 0x38))((long)puVar10 + lVar23,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar10 + lVar23),(void *)((long)puVar3 + lVar23),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar11 + 0x24)) =
           *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x24));
      *(undefined1 *)((long)puVar10 + (long)*(int *)(lVar11 + 0x28)) =
           *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x28));
      lVar23 = (long)*(int *)(lVar11 + 0x2c);
      lVar19 = (long)puVar3 + lVar23;
      (*pcVar18)(lVar19,1,DVar14.unknown);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar22 + 0x10))((long)puVar10 + lVar23,(long)puVar3 + lVar23,DVar14.unknown);
        (**(code **)(lVar22 + 0x38))((long)puVar10 + lVar23,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar10 + lVar23),(void *)((long)puVar3 + lVar23),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      lVar23 = (long)*(int *)(lVar11 + 0x30);
      lVar19 = (long)puVar3 + lVar23;
      (*pcVar18)(lVar19,1,DVar14.unknown);
      if ((int)lVar19 == 0) {
        (**(code **)(lVar22 + 0x10))((long)puVar10 + lVar23,(long)puVar3 + lVar23,DVar14.unknown);
        (**(code **)(lVar22 + 0x38))((long)puVar10 + lVar23,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar10 + lVar23),(void *)((long)puVar3 + lVar23),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      (**(code **)(lVar15 + 0x38))(puVar10,0,1,lVar11);
    }
    else {
      puVar13 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      _memcpy(puVar10,puVar3,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x2c));
    lVar19 = (long)*(int *)(lVar9 + 0x30);
    DVar14 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar14.unknown + -8);
    pcVar18 = *(code **)(lVar15 + 0x30);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x34));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x34));
    uVar17 = puVar3[1];
    *puVar10 = *puVar3;
    puVar10[1] = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x38)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x38));
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x3c));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x3c));
    uVar17 = puVar3[1];
    *puVar10 = *puVar3;
    puVar10[1] = uVar17;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x40));
    puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x40));
    uVar20 = puVar3[1];
    *puVar10 = *puVar3;
    puVar10[1] = uVar20;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x44)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x44));
    uVar16 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x48));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x48)) = uVar16;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x4c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x4c));
    lVar19 = (long)*(int *)(lVar9 + 0x50);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar16);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar9 + 0x54);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar9 + 0x58);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar9 + 0x5c);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar19 = (long)*(int *)(lVar9 + 0x60);
    lVar11 = (long)puVar2 + lVar19;
    (*pcVar18)(lVar11,1,DVar14.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar15 + 0x10))((long)puVar1 + lVar19,(long)puVar2 + lVar19,DVar14.unknown);
      (**(code **)(lVar15 + 0x38))((long)puVar1 + lVar19,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)puVar2 + lVar19),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar13 = &DAT_100554ab8;
    FUN_100002f94(&DAT_100554ab8,&DAT_100427d98);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar13 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar13 + 0x1c)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar13 + 0x1c));
  iVar8 = *(int *)(param_3 + 0x28);
  puVar4 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar5 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar4 = *puVar5;
  uVar20 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar4 + 8) = uVar20;
  puVar4 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar5 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar4 = *puVar5;
  uVar16 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar4 + 8) = uVar16;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  uVar17 = param_2[2];
  uVar24 = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[1] = uVar24;
  _swift_retain();
  _swift_retain(uVar20);
  _swift_retain(uVar16);
  _swift_bridgeObjectRetain(uVar24);
  _swift_retain(uVar17);
  return param_1;
}

