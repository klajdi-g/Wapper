// rea decompile_all
// name: FUN_10028861c
// address: 0x10028861c
// body: available
// range: 0x10028861c-0x1002886bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028861c(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *unaff_x20;
  long lVar6;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002886b0);
    (*pcVar5)();
  }
  lVar3 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1002886b4);
    (*pcVar5)();
  }
  if (lVar3 != 0) {
    lVar6 = *unaff_x20;
    lVar4 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002886b8);
      (*pcVar5)();
    }
    pvVar1 = (void *)(lVar6 + 0x20 + param_1 * 0x20 + param_3 * 0x20);
    pvVar2 = (void *)(lVar6 + 0x20 + param_2 * 0x20);
    if (pvVar1 != pvVar2 || (void *)((long)pvVar2 + lVar4 * 0x20) <= pvVar1) {
      _memmove(pvVar1,pvVar2,lVar4 * 0x20);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002886bc);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar3;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1002886c0);
  (*pcVar5)();
}

