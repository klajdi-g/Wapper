// rea decompile_all
// name: FUN_1003fd67c
// address: 0x1003fd67c
// body: available
// range: 0x1003fd67c-0x1003fdcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003fd67c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  Date DVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    lVar18 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar18;
    lVar20 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar20;
    lVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar3;
    lVar4 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar4;
    lVar5 = param_2[0xb];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    param_1[10] = param_2[10];
    param_1[0xb] = lVar5;
    lVar10 = 0;
    FUN_1003fdce0();
    lVar15 = *(long *)(lVar10 + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    puVar11 = puVar2;
    (*pcVar16)(puVar2,1,lVar10);
    if ((int)puVar11 == 0) {
      uVar6 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      uVar7 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar7;
      uVar19 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar19;
      lVar20 = (long)*(int *)(lVar10 + 0x20);
      DVar14 = Foundation::Date::typeMetadataAccessor();
      lVar18 = *(long *)(DVar14.unknown + -8);
      pcVar16 = *(code **)(lVar18 + 0x30);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      lVar12 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar12,1,DVar14.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar14.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
      lVar20 = (long)*(int *)(lVar10 + 0x2c);
      lVar12 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar12,1,DVar14.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar14.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      lVar20 = (long)*(int *)(lVar10 + 0x30);
      lVar12 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar12,1,DVar14.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar14.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar14.unknown);
      }
      else {
        puVar13 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar10);
    }
    else {
      puVar13 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x30);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    DVar14 = Foundation::Date::typeMetadataAccessor();
    lVar20 = *(long *)(DVar14.unknown + -8);
    pcVar16 = *(code **)(lVar20 + 0x30);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    iVar8 = *(int *)(param_3 + 0x38);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
    iVar8 = *(int *)(param_3 + 0x40);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    iVar8 = *(int *)(param_3 + 0x48);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    uVar19 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar19;
    lVar18 = (long)*(int *)(param_3 + 0x50);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar19);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x54);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x58);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x5c);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(param_3 + 0x60);
    lVar12 = (long)param_2 + lVar18;
    (*pcVar16)(lVar12,1,DVar14.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar14.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar14.unknown);
    }
    else {
      puVar13 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar17 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar12 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

