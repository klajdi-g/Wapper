// rea decompile_all
// name: FUN_10040ccc8
// address: 0x10040ccc8
// body: available
// range: 0x10040ccc8-0x10040cf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10040ccc8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  Date DVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  uVar13 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar13;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar5 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar5;
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar6;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  uVar7 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar7;
  uVar8 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar8;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  lVar14 = (long)*(int *)(param_3 + 0x48);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar10.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  lVar11 = (long)param_2 + lVar14;
  (*pcVar16)(lVar11,1,DVar10.unknown);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar10.unknown);
  }
  else {
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x50);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  uVar13 = *(undefined8 *)((long)param_2 + (long)iVar9);
  *(undefined8 *)((long)param_1 + (long)iVar9) = uVar13;
  lVar14 = (long)*(int *)(param_3 + 0x54);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar13);
  lVar11 = (long)param_2 + lVar14;
  (*pcVar16)(lVar11,1,DVar10.unknown);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar10.unknown);
  }
  else {
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  lVar14 = (long)*(int *)(param_3 + 0x58);
  lVar11 = (long)param_2 + lVar14;
  (*pcVar16)(lVar11,1,DVar10.unknown);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar10.unknown);
  }
  else {
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  return param_1;
}

