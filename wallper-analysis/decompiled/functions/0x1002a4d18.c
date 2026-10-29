// rea decompile_all
// name: FUN_1002a4d18
// address: 0x1002a4d18
// body: available
// range: 0x1002a4d18-0x1002a4de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002a4d18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  iVar3 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x18);
  (*pcVar7)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  (*pcVar7)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
            (long)param_2 + (long)*(int *)(param_3 + 0x1c),UVar4.unknown);
  lVar5 = (long)*(int *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

