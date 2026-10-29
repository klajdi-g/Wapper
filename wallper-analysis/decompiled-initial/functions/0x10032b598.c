// rea decompile_all
// name: FUN_10032b598
// address: 0x10032b598
// body: available
// range: 0x10032b598-0x10032b823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10032b598(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  URL UVar7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  lVar6 = 0;
  FUN_10040211c();
  iVar5 = *(int *)(lVar6 + 0x14);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar7.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar14)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar7.unknown);
  lVar11 = (long)*(int *)(lVar6 + 0x18);
  lVar8 = (long)param_2 + lVar11;
  (**(code **)(lVar13 + 0x30))(lVar8,1,UVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar14)((long)param_1 + lVar11,(long)param_2 + lVar11,UVar7.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  lVar11 = (long)*(int *)(lVar6 + 0x2c);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar10.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar14)(lVar8,1,DVar10.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar13 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar10.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,DVar10.unknown);
  }
  else {
    puVar9 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x34));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x3c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
  uVar12 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x44));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x44)) = uVar12;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x48));
  iVar5 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar12);
  _swift_retain(uVar4);
  return param_1;
}

