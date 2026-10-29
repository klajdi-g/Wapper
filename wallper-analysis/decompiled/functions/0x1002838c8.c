// rea decompile_all
// name: FUN_1002838c8
// address: 0x1002838c8
// body: available
// range: 0x1002838c8-0x100283973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002838c8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    param_1[1] = lVar6;
    iVar2 = *(int *)(param_3 + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar6);
    (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar3.unknown);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}

