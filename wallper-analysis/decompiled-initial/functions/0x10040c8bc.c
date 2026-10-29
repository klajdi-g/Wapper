// rea decompile_all
// name: FUN_10040c8bc
// address: 0x10040c8bc
// body: available
// range: 0x10040c8bc-0x10040cba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10040c8bc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar16 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar16;
    lVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar3;
    *(char *)(param_1 + 8) = (char)param_2[8];
    param_1[9] = param_2[9];
    *(char *)(param_1 + 10) = (char)param_2[10];
    param_1[0xb] = param_2[0xb];
    *(char *)(param_1 + 0xc) = (char)param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(char *)(param_1 + 0xe) = (char)param_2[0xe];
    lVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar4;
    lVar5 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar5;
    *(char *)(param_1 + 0x14) = (char)param_2[0x14];
    param_1[0x13] = param_2[0x13];
    lVar6 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = lVar6;
    lVar7 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = lVar7;
    *(char *)(param_1 + 0x19) = (char)param_2[0x19];
    lVar15 = (long)*(int *)(param_3 + 0x48);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar17 = *(long *)(DVar10.unknown + -8);
    pcVar18 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar7);
    lVar12 = (long)param_2 + lVar15;
    (*pcVar18)(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar10.unknown);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar15,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    iVar8 = *(int *)(param_3 + 0x50);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
    uVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar14;
    uVar14 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar14;
    lVar16 = (long)*(int *)(param_3 + 0x54);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    lVar12 = (long)param_2 + lVar16;
    (*pcVar18)(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar10.unknown);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(param_3 + 0x58);
    lVar12 = (long)param_2 + lVar16;
    (*pcVar18)(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar17 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,DVar10.unknown);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar13 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar12 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

