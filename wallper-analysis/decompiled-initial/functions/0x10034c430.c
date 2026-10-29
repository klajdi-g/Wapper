// rea decompile_all
// name: FUN_10034c430
// address: 0x10034c430
// body: available
// range: 0x10034c430-0x10034c4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10034c430(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  UUID UVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 0x10))(param_1,param_2,UVar7.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar8 = puVar1[1];
    uVar11 = *puVar1;
    puVar6 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar6[1] = puVar1[1];
    *puVar6 = uVar11;
    plVar2 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar10 = *param_2;
    lVar3 = param_2[1];
    *plVar2 = lVar10;
    plVar2[1] = lVar3;
    _swift_retain(uVar8);
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

