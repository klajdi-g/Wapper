// rea decompile_all
// name: FUN_1004006a0
// address: 0x1004006a0
// body: available
// range: 0x1004006a0-0x100400887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004006a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  lVar9 = (long)*(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}

