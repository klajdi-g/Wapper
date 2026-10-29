// rea decompile_all
// name: FUN_10002fc18
// address: 0x10002fc18
// body: available
// range: 0x10002fc18-0x10002ff1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10002fc18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  URL UVar10;
  long lVar11;
  undefined *puVar12;
  Date DVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar9 = 0;
  FUN_10040211c();
  iVar8 = *(int *)(lVar9 + 0x14);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar10.unknown + -8);
  pcVar19 = *(code **)(lVar17 + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar19)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,UVar10.unknown);
  lVar15 = (long)*(int *)(lVar9 + 0x18);
  lVar11 = (long)param_2 + lVar15;
  (**(code **)(lVar17 + 0x30))(lVar11,1,UVar10.unknown);
  if ((int)lVar11 == 0) {
    (*pcVar19)((long)param_1 + lVar15,(long)param_2 + lVar15,UVar10.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar15,0,1,UVar10.unknown);
  }
  else {
    puVar12 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar15 = (long)*(int *)(lVar9 + 0x2c);
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar13.unknown + -8);
  pcVar19 = *(code **)(lVar17 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  lVar11 = (long)param_2 + lVar15;
  (*pcVar19)(lVar11,1,DVar13.unknown);
  if ((int)lVar11 == 0) {
    (**(code **)(lVar17 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar13.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar15,0,1,DVar13.unknown);
  }
  else {
    puVar12 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x3c));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
  uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x44)) = uVar16;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x48));
  iVar8 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  uVar7 = puVar2[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar7;
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar3 = *puVar4;
  uVar18 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar18;
  iVar8 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
  *puVar3 = *puVar4;
  uVar20 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar20;
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar14 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar14;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar5);
  _swift_retain(uVar18);
  _swift_retain(uVar7);
  _swift_retain(uVar20);
  _swift_retain(uVar14);
  return param_1;
}

