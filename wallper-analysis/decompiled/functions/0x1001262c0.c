// rea decompile_all
// name: FUN_1001262c0
// address: 0x1001262c0
// body: available
// range: 0x1001262c0-0x100126517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1001262c0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  iVar3 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar9 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  iVar3 = *(int *)(param_3 + 0x34);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x18);
  (*pcVar12)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar5.unknown);
  lVar10 = (long)*(int *)(param_3 + 0x38);
  pcVar13 = *(code **)(lVar11 + 0x30);
  lVar6 = (long)param_1 + lVar10;
  (*pcVar13)(lVar6,1,DVar5.unknown);
  lVar7 = (long)param_2 + lVar10;
  (*pcVar13)(lVar7,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (*pcVar12)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
      goto LAB_1001264d8;
    }
    (**(code **)(lVar11 + 8))((long)param_1 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
    goto LAB_1001264d8;
  }
  puVar8 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1001264d8:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}

