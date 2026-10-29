// rea decompile_all
// name: FUN_10039a608
// address: 0x10039a608
// body: available
// range: 0x10039a608-0x10039a77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10039a608(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  UUID UVar6;
  long lVar7;
  Date DVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))(param_1,param_2,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar5 = *(int *)(lVar7 + 0x18);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(DVar8.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar11)(param_1 + iVar5,param_2 + iVar5,DVar8.unknown);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x20));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x30));
  uVar9 = *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x34));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x34)) = uVar9;
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar5);
  puVar2 = (undefined8 *)(param_2 + iVar5);
  uVar10 = puVar2[1];
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar9);
  _swift_retain(uVar12);
  _swift_retain(uVar10);
  _swift_retain(uVar3);
  return param_1;
}

