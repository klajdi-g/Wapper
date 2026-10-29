// rea decompile_all
// name: FUN_100143924
// address: 0x100143924
// body: available
// range: 0x100143924-0x10014397f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143978 to 0x100133284 FUN_100133284 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100143924(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (!SCARRY8(*(long *)(unaff_x22 + 0x308),1)) {
    *(long *)(unaff_x22 + 0x358) = *(long *)(unaff_x22 + 0x308) + 1;
    plVar2 = (long *)0x250;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x360) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100143980;
    FUN_100133284();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100143980);
  (*pcVar1)();
}

