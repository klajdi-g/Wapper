// rea decompile_all
// name: FUN_100169ba0
// address: 0x100169ba0
// body: available
// range: 0x100169ba0-0x100169d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100169ba0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar9 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar9;
  lVar12 = (long)*(int *)(param_3 + 0x24);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar6.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  lVar7 = (long)param_2 + lVar12;
  (*pcVar14)(lVar7,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar5 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar10 = puVar2[1];
  if (uVar10 >> 0x3c < 0xf) {
    uVar11 = *puVar2;
    FUN_10011a30c(uVar11,uVar10);
    *puVar1 = uVar11;
    puVar1[1] = uVar10;
  }
  else {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
  }
  iVar5 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}

