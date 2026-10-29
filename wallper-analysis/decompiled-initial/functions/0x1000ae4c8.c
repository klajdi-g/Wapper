// rea decompile_all
// name: FUN_1000ae4c8
// address: 0x1000ae4c8
// body: available
// range: 0x1000ae4c8-0x1000ae573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ae4c8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
    param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
    uVar1 = uVar5;
    if (param_2 <= uVar5) {
      uVar1 = param_2;
    }
    if (SCARRY8(uVar1,8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae568);
      (*pcVar3)();
    }
    uVar6 = uVar1 - 6;
    uVar2 = uVar1 + 8;
    if (uVar5 <= uVar1 + 8) {
      uVar2 = uVar5;
    }
    if (uVar2 < (uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae56c);
      (*pcVar3)();
    }
    if ((long)uVar4 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae570);
      (*pcVar3)();
    }
    if (uVar4 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ae574);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain();
  }
  return;
}

