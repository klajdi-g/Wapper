// rea decompile_all
// name: FUN_1001ab2d4
// address: 0x1001ab2d4
// body: available
// range: 0x1001ab2d4-0x1001ab357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ab2d4(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  URL UVar2;
  long lVar3;
  
  if (param_2 >> ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab350);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 6) * 8 + 0x40) >> (param_2 & 0x3f) & 1) != 0) {
    if (*(int *)(param_5 + 0x24) == param_3) {
      lVar3 = *(long *)(param_5 + 0x38);
      UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001001ab348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))
                (param_1,lVar3 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_2,
                 UVar2.unknown);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab358);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab354);
  (*pcVar1)();
}

