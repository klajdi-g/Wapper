// rea decompile_all
// name: FUN_10031d4dc
// address: 0x10031d4dc
// body: available
// range: 0x10031d4dc-0x10031d75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10031d4dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  URL UVar8;
  long lVar9;
  undefined *puVar10;
  Date DVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  lVar7 = 0;
  FUN_10040211c();
  iVar6 = *(int *)(lVar7 + 0x14);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar8.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar15)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,UVar8.unknown);
  lVar12 = (long)*(int *)(lVar7 + 0x18);
  lVar9 = (long)param_2 + lVar12;
  (**(code **)(lVar14 + 0x30))(lVar9,1,UVar8.unknown);
  if ((int)lVar9 == 0) {
    (*pcVar15)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar8.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar12,0,1,UVar8.unknown);
  }
  else {
    puVar10 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar12 = (long)*(int *)(lVar7 + 0x2c);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar11.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar9 = (long)param_2 + lVar12;
  (*pcVar15)(lVar9,1,DVar11.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar11.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar12,0,1,DVar11.unknown);
  }
  else {
    puVar10 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x3c));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x40));
  uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x44)) = uVar13;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x48));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar3 = *param_2;
  uVar5 = param_2[1];
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar13);
  _swift_retain(uVar3);
  return param_1;
}

