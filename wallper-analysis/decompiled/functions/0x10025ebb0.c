// rea decompile_all
// name: FUN_10025ebb0
// address: 0x10025ebb0
// body: available
// range: 0x10025ebb0-0x10025ec97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10025ebb0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  undefined8 uVar5;
  Date DVar6;
  undefined8 uVar7;
  long lVar8;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x28))(param_1,param_2,UVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar7 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar6.unknown)
  ;
  lVar8 = (long)*(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  lVar8 = (long)*(int *)(param_3 + 0x34);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}

