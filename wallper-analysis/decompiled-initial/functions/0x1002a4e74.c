// rea decompile_all
// name: FUN_1002a4e74
// address: 0x1002a4e74
// body: available
// range: 0x1002a4e74-0x1002a4f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002a4e74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  URL UVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  uVar6 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  iVar1 = *(int *)(param_3 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x28);
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar5.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar5.unknown);
  lVar7 = (long)*(int *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

