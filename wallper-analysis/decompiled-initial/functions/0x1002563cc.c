// rea decompile_all
// name: FUN_1002563cc
// address: 0x1002563cc
// body: available
// range: 0x1002563cc-0x10025644f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16]
FUN_1002563cc(undefined8 *param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  
  if (param_2 >> ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100256448);
    (*pcVar4)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 6) * 8 + 0x40) >> (param_2 & 0x3f) & 1) != 0) {
    if (*(int *)(param_5 + 0x24) == param_3) {
      pauVar1 = (undefined1 (*) [16])(*(long *)(param_5 + 0x30) + param_2 * 0x10);
      uVar2 = *(undefined8 *)(*pauVar1 + 8);
      auVar3 = *pauVar1;
      *param_1 = *(undefined8 *)(*(long *)(param_5 + 0x38) + param_2 * 8);
      _swift_bridgeObjectRetain(uVar2);
      return auVar3;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100256450);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10025644c);
  (*pcVar4)();
}

