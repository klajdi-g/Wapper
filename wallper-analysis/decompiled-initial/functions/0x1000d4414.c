// rea decompile_all
// name: FUN_1000d4414
// address: 0x1000d4414
// body: available
// range: 0x1000d4414-0x1000d447b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000d4414(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  
  lVar2 = param_1 / 0x3c + param_2;
  if (SCARRY8(param_1 / 0x3c,param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d4478);
    (*pcVar4)();
  }
  lVar1 = lVar2 + 0x18;
  if (!SCARRY8(lVar2,0x18)) {
    uVar5 = param_1 % 0x3c +
            (lVar1 + (((ulong)(lVar1 / 6 + (lVar1 >> 0x3f)) >> 2) - (lVar1 >> 0x3f)) * -0x18) * 0x3c
    ;
    uVar3 = uVar5 + 0x5a0;
    if (uVar5 < 0xfffffffffffffa60) {
      uVar3 = uVar5;
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d447c);
  (*pcVar4)();
}

