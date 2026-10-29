// rea decompile_all
// name: FUN_1003c00b0
// address: 0x1003c00b0
// body: available
// range: 0x1003c00b0-0x1003c01b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c00b0(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *param_2;
  lVar1 = 0;
  FUN_1003cff30(0,param_4,param_5);
  lVar5 = lVar1;
  FUN_1003bce9c();
  lVar5 = *(long *)(lVar5 + 0x10);
  _swift_bridgeObjectRelease();
  if ((long)uVar4 < lVar5) {
    FUN_1003bce9c();
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c01b0);
      (*pcVar3)();
    }
    if (*(ulong *)(lVar1 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c01b4);
      (*pcVar3)();
    }
    lVar5 = 0;
    FUN_10040211c();
    lVar6 = *(long *)(lVar5 + -8);
    FUN_100029504(lVar1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(lVar6 + 0x48) * uVar4,param_1,FUN_10040211c);
    _swift_bridgeObjectRelease(lVar1);
    pcVar3 = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
  else {
    lVar5 = 0;
    FUN_10040211c();
    pcVar3 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar2 = 1;
  }
  (*pcVar3)(param_1,uVar2,1,lVar5);
  return;
}

