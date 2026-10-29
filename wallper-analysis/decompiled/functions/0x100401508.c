// rea decompile_all
// name: FUN_100401508
// address: 0x100401508
// body: available
// range: 0x100401508-0x100401747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100401508(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  URL UVar5;
  long lVar6;
  undefined *puVar7;
  Date DVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  iVar4 = *(int *)(param_3 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,UVar5.unknown);
  lVar9 = (long)*(int *)(param_3 + 0x18);
  lVar6 = (long)param_2 + lVar9;
  (**(code **)(lVar11 + 0x30))(lVar6,1,UVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar12)((long)param_1 + lVar9,(long)param_2 + lVar9,UVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,UVar5.unknown);
  }
  else {
    puVar7 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar8.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar12)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar8.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,DVar8.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar4 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar4 = *(int *)(param_3 + 0x44);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar10 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar10;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  return param_1;
}

