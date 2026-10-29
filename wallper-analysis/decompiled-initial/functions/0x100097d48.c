// rea decompile_all
// name: FUN_100097d48
// address: 0x100097d48
// body: available
// range: 0x100097d48-0x100097e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100097d48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  Date DVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = param_2[2];
  uVar11 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar11;
  uVar3 = param_2[6];
  uVar5 = param_2[7];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  param_1[7] = uVar5;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  lVar7 = 0;
  FUN_10009e280();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  *puVar1 = *puVar2;
  lVar8 = 0;
  FUN_10015f8e8();
  iVar6 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar10)((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,DVar9.unknown);
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)) =
       *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined2 *)((long)param_1 + (long)iVar6) = *(undefined2 *)((long)param_2 + (long)iVar6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}

