// rea decompile_all
// name: FUN_10011b268
// address: 0x10011b268
// body: available
// range: 0x10011b268-0x10011b543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10011b268(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  URL UVar9;
  long lVar10;
  undefined *puVar11;
  Date DVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar8 = 0;
  FUN_10040211c();
  iVar7 = *(int *)(lVar8 + 0x14);
  UVar9 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar9.unknown + -8);
  pcVar18 = *(code **)(lVar16 + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar18)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,UVar9.unknown);
  lVar14 = (long)*(int *)(lVar8 + 0x18);
  lVar10 = (long)param_2 + lVar14;
  (**(code **)(lVar16 + 0x30))(lVar10,1,UVar9.unknown);
  if ((int)lVar10 == 0) {
    (*pcVar18)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar9.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar14,0,1,UVar9.unknown);
  }
  else {
    puVar11 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar14 = (long)*(int *)(lVar8 + 0x2c);
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar12.unknown + -8);
  pcVar18 = *(code **)(lVar16 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  lVar10 = (long)param_2 + lVar14;
  (*pcVar18)(lVar10,1,DVar12.unknown);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar16 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar12.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar14,0,1,DVar12.unknown);
  }
  else {
    puVar11 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
            *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x3c));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
  uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x44)) = uVar15;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x48));
  iVar7 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
  iVar7 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = *puVar2;
  uVar13 = puVar2[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar13;
  puVar3 = (undefined1 *)((long)param_1 + (long)iVar7);
  puVar4 = (undefined1 *)((long)param_2 + (long)iVar7);
  *puVar3 = *puVar4;
  uVar17 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar17;
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  uVar13 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar13;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar15);
  _swift_retain(uVar5);
  _swift_retain(uVar17);
  _swift_retain(uVar13);
  return param_1;
}

