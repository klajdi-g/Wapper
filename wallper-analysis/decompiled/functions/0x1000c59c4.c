// rea decompile_all
// name: FUN_1000c59c4
// address: 0x1000c59c4
// body: available
// range: 0x1000c59c4-0x1000c5b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1000c59c4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  UUID UVar5;
  long lVar6;
  Date DVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    lVar6 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    iVar4 = *(int *)(lVar6 + 0x18);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    pcVar11 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar9);
    (*pcVar11)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar7.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
    uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) = uVar9;
    iVar4 = *(int *)(param_3 + 0x18);
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar10;
    *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar10);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

