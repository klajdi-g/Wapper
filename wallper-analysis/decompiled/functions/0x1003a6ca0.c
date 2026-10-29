// rea decompile_all
// name: FUN_1003a6ca0
// address: 0x1003a6ca0
// body: available
// range: 0x1003a6ca0-0x1003a6e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003a6ca0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  UUID UVar9;
  long lVar10;
  Date DVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    UVar9 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar9.unknown + -8) + 0x10))(param_1,param_2,UVar9.unknown);
    lVar10 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar8 = *(int *)(lVar10 + 0x18);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    pcVar15 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar5);
    (*pcVar15)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,DVar11.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
    uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34)) = uVar13;
    iVar8 = *(int *)(param_3 + 0x18);
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar14;
    *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
    iVar8 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar3 = (undefined1 *)((long)param_1 + (long)iVar8);
    puVar4 = (undefined1 *)((long)param_2 + (long)iVar8);
    *puVar3 = *puVar4;
    lVar10 = *(long *)(puVar4 + 8);
    *(long *)(puVar3 + 8) = lVar10;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar13);
    _swift_bridgeObjectRetain(uVar14);
    _swift_retain(uVar5);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar12 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar10 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar10);
  return param_1;
}

