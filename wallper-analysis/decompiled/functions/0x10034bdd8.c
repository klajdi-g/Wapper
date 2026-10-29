// rea decompile_all
// name: FUN_10034bdd8
// address: 0x10034bdd8
// body: available
// range: 0x10034bdd8-0x10034beff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10034bdd8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  UUID UVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    pcVar12 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x10);
    (*pcVar12)(param_1,param_2,UVar7.unknown);
    (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x14),
               (long)param_2 + (long)*(int *)(param_3 + 0x14),UVar7.unknown);
    iVar4 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar8 = puVar1[1];
    uVar13 = *puVar1;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar6[1] = puVar1[1];
    *puVar6 = uVar13;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar6 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar13 = *puVar6;
    uVar11 = puVar6[1];
    *puVar1 = uVar13;
    puVar1[1] = uVar11;
    iVar4 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *puVar1 = *puVar6;
    uVar11 = puVar6[2];
    uVar14 = puVar6[1];
    puVar1[2] = puVar6[2];
    puVar1[1] = uVar14;
    puVar2 = (undefined1 *)((long)param_1 + (long)iVar4);
    puVar3 = (undefined1 *)((long)param_2 + (long)iVar4);
    *puVar2 = *puVar3;
    lVar10 = *(long *)(puVar3 + 8);
    *(long *)(puVar2 + 8) = lVar10;
    _swift_retain(uVar8);
    _swift_retain(uVar13);
    _swift_bridgeObjectRetain(uVar14);
    _swift_retain(uVar11);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar10);
  return param_1;
}

