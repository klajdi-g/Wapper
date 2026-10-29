// rea decompile_all
// name: FUN_100126518
// address: 0x100126518
// body: available
// range: 0x100126518-0x10012669b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100126518(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar1);
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar1);
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  iVar1 = *(int *)(param_3 + 0x34);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x20);
  (*pcVar10)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
  lVar8 = (long)*(int *)(param_3 + 0x38);
  lVar6 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar10)((long)param_1 + lVar8,(long)param_2 + lVar8,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_10054b950;
    FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}

