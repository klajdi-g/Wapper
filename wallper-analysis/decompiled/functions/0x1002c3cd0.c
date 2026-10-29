// rea decompile_all
// name: FUN_1002c3cd0
// address: 0x1002c3cd0
// body: available
// range: 0x1002c3cd0-0x1002c439f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002c3cd0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  Date DVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
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
    param_1[10] = param_2[10];
    param_1[0xb] = lVar5;
    lVar9 = 0;
    FUN_100400294();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    lVar10 = 0;
    FUN_1003fdce0();
    lVar15 = *(long *)(lVar10 + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(lVar20);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    puVar11 = puVar2;
    (*pcVar16)(puVar2,1,lVar10);
    if ((int)puVar11 == 0) {
      uVar21 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar21;
      uVar6 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      uVar19 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar19;
      lVar20 = (long)*(int *)(lVar10 + 0x20);
      DVar13 = Foundation::Date::typeMetadataAccessor();
      lVar18 = *(long *)(DVar13.unknown + -8);
      pcVar16 = *(code **)(lVar18 + 0x30);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar6);
      lVar14 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar14,1,DVar13.unknown);
      if ((int)lVar14 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar13.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar13.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x24));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x28)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x28));
      lVar20 = (long)*(int *)(lVar10 + 0x2c);
      lVar14 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar14,1,DVar13.unknown);
      if ((int)lVar14 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar13.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar13.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      lVar20 = (long)*(int *)(lVar10 + 0x30);
      lVar14 = (long)puVar2 + lVar20;
      (*pcVar16)(lVar14,1,DVar13.unknown);
      if ((int)lVar14 == 0) {
        (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,DVar13.unknown);
        (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar20,0,1,DVar13.unknown);
      }
      else {
        puVar12 = &DAT_10054b950;
        FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
        _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)puVar2 + lVar20),
                *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
      }
      (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar10);
    }
    else {
      puVar12 = &DAT_10055a2a8;
      FUN_100002f94(&DAT_10055a2a8,&DAT_10042e0d8);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    lVar18 = (long)*(int *)(lVar9 + 0x30);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    lVar20 = *(long *)(DVar13.unknown + -8);
    pcVar16 = *(code **)(lVar20 + 0x30);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x38));
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
    uVar21 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar21;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x44)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x44));
    uVar19 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x48));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x48)) = uVar19;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x4c));
    lVar18 = (long)*(int *)(lVar9 + 0x50);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar21);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar19);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar9 + 0x54);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar9 + 0x58);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar9 + 0x5c);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    lVar18 = (long)*(int *)(lVar9 + 0x60);
    lVar14 = (long)param_2 + lVar18;
    (*pcVar16)(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar20 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,DVar13.unknown);
      (**(code **)(lVar20 + 0x38))((long)param_1 + lVar18,0,1,DVar13.unknown);
    }
    else {
      puVar12 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    iVar7 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
    iVar7 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
    iVar7 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar7);
    lVar14 = puVar1[1];
    uVar21 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar21;
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar17 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar14 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar14);
  return param_1;
}

