// rea decompile_all
// name: FUN_1003a7054
// address: 0x1003a7054
// body: available
// range: 0x1003a7054-0x1003a71fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003a7054(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  UUID UVar6;
  long lVar7;
  Date DVar8;
  long lVar9;
  undefined8 uVar10;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x18))(param_1,param_2,UVar6.unknown);
  lVar7 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x14));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  iVar5 = *(int *)(lVar7 + 0x18);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar8.unknown + -8) + 0x18))(param_1 + iVar5,param_2 + iVar5,DVar8.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x1c));
  lVar9 = (long)*(int *)(lVar7 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)(param_2 + lVar9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar7 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar7 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar7 + 0x30));
  lVar7 = (long)*(int *)(lVar7 + 0x34);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  lVar7 = (long)*(int *)(param_3 + 0x14);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar10 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar10);
  puVar1[1] = puVar2[1];
  puVar3 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar4 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x20));
  *puVar3 = *puVar4;
  uVar10 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_retain();
  _swift_release(uVar10);
  return param_1;
}

