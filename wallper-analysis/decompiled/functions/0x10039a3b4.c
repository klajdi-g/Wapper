// rea decompile_all
// name: FUN_10039a3b4
// address: 0x10039a3b4
// body: available
// range: 0x10039a3b4-0x10039a54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10039a3b4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(param_1,param_2,UVar7.unknown);
    lVar8 = 0;
    FUN_10025ee04();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
    uVar11 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar11;
    iVar6 = *(int *)(lVar8 + 0x18);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    pcVar13 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar11);
    (*pcVar13)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar9.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
    uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34)) = uVar11;
    iVar6 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar12 = puVar2[1];
    uVar14 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar14;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar8 = *param_2;
    lVar4 = param_2[1];
    *plVar3 = lVar8;
    plVar3[1] = lVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
    _swift_retain(uVar14);
    _swift_retain(uVar12);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar8);
  return param_1;
}

