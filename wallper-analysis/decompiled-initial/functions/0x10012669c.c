// rea decompile_all
// name: FUN_10012669c
// address: 0x10012669c
// body: available
// range: 0x10012669c-0x1001268a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10012669c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  UUID UVar6;
  Date DVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  
  uVar3 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x14);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,UVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  iVar4 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x34);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar7.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x28);
  (*pcVar13)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar7.unknown);
  lVar11 = (long)*(int *)(param_3 + 0x38);
  pcVar14 = *(code **)(lVar12 + 0x30);
  lVar8 = (long)param_1 + lVar11;
  (*pcVar14)(lVar8,1,DVar7.unknown);
  lVar9 = (long)param_2 + lVar11;
  (*pcVar14)(lVar9,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar9 == 0) {
      (*pcVar13)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
      goto LAB_100126868;
    }
    (**(code **)(lVar12 + 8))((long)param_1 + lVar11,DVar7.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar12 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar7.unknown);
    goto LAB_100126868;
  }
  puVar10 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
          *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_100126868:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}

