// rea decompile_all
// name: FUN_1002a4b30
// address: 0x1002a4b30
// body: available
// range: 0x1002a4b30-0x1002a4bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002a4b30(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  URL UVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    iVar2 = *(int *)(param_3 + 0x14);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar6);
    (*pcVar8)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar5.unknown);
    iVar2 = *(int *)(param_3 + 0x1c);
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar9 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar9;
    (*pcVar8)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar5.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

