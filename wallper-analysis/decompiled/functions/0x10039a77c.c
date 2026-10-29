// rea decompile_all
// name: FUN_10039a77c
// address: 0x10039a77c
// body: available
// range: 0x10039a77c-0x10039a91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10039a77c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  undefined8 uVar8;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x18))(param_1,param_2,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x14));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  iVar3 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar6.unknown)
  ;
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x1c));
  lVar7 = (long)*(int *)(lVar5 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = *(undefined8 *)(param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x24));
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x28)) =
       *(undefined1 *)(param_2 + *(int *)(lVar5 + 0x28));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x2c));
  *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x30));
  lVar5 = (long)*(int *)(lVar5 + 0x34);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar8);
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_retain();
  _swift_release(uVar8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar8 = *puVar1;
  *puVar1 = *puVar2;
  _swift_retain();
  _swift_release(uVar8);
  puVar1[1] = puVar2[1];
  return param_1;
}

