// rea decompile_all
// name: FUN_1001b14a4
// address: 0x1001b14a4
// body: available
// range: 0x1001b14a4-0x1001b154b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1001b14a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar5 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar5;
    lVar5 = param_2[3];
    param_1[3] = lVar5;
    iVar2 = *(int *)(param_3 + 0x1c);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    pcVar6 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    (*pcVar6)((undefined1 *)((long)param_1 + (long)iVar2),
              (undefined1 *)((long)param_2 + (long)iVar2),DVar3.unknown);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

