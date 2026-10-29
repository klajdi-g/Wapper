// rea decompile_all
// name: FUN_10034c274
// address: 0x10034c274
// body: available
// range: 0x10034c274-0x10034c36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10034c274(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  UUID UVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x28);
  (*pcVar8)(param_1,param_2,UVar5.unknown);
  (*pcVar8)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),UVar5.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  uVar6 = puVar1[1];
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar7 = *puVar4;
  puVar1[1] = puVar4[1];
  *puVar1 = uVar7;
  _swift_release(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar6 = *puVar1;
  *puVar1 = *puVar4;
  _swift_release(uVar6);
  puVar1[1] = puVar4[1];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar6 = puVar4[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar4;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar7);
  uVar6 = puVar1[2];
  puVar1[2] = puVar4[2];
  _swift_release(uVar6);
  puVar2 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar3 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar2 = *puVar3;
  uVar6 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar3 + 8);
  _swift_release(uVar6);
  return param_1;
}

