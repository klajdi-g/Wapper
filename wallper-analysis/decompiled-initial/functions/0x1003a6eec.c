// rea decompile_all
// name: FUN_1003a6eec
// address: 0x1003a6eec
// body: available
// range: 0x1003a6eec-0x1003a7053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003a6eec(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(param_1,param_2,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar8 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar6 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  pcVar13 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar13)(param_1 + iVar6,param_2 + iVar6,DVar9.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x20));
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar8 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x30));
  uVar11 = *(undefined8 *)(param_2 + *(int *)(lVar8 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x34)) = uVar11;
  iVar6 = *(int *)(param_3 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) = uVar12;
  *(undefined1 *)(param_1 + iVar6) = *(undefined1 *)(param_2 + iVar6);
  iVar6 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = *puVar2;
  uVar10 = puVar2[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar10;
  puVar3 = (undefined1 *)(param_1 + iVar6);
  puVar4 = (undefined1 *)(param_2 + iVar6);
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar10;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_retain(uVar5);
  _swift_retain(uVar10);
  return param_1;
}

