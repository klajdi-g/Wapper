// rea decompile_all
// name: FUN_10025e73c
// address: 0x10025e73c
// body: available
// range: 0x10025e73c-0x10025e85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10025e73c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  UUID UVar5;
  Date DVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    DVar6 = Foundation::Date::typeMetadataAccessor();
    pcVar10 = *(code **)(*(long *)(DVar6.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar9);
    (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar6.unknown);
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x30);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar9;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar9);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

