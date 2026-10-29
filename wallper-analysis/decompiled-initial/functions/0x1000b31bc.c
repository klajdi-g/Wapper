// rea decompile_all
// name: FUN_1000b31bc
// address: 0x1000b31bc
// body: available
// range: 0x1000b31bc-0x1000b3323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1000b31bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Date DVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = param_2[2];
  uVar11 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar11;
  uVar10 = param_2[6];
  uVar9 = param_2[7];
  param_1[5] = param_2[5];
  param_1[6] = uVar10;
  param_1[7] = uVar9;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar5 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x2c));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_10015f8e8();
  iVar4 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar10);
  (*pcVar8)((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,DVar7.unknown);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar6 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  iVar4 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}

