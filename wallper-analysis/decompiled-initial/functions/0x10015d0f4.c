// rea decompile_all
// name: FUN_10015d0f4
// address: 0x10015d0f4
// body: available
// range: 0x10015d0f4-0x10015d1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015d150 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10015d1a4 to 0x100162acc FUN_100162acc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015d0f4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x2d0);
  FUN_100161e0c(lVar1,*(undefined8 *)(unaff_x22 + 0x2d8),*(undefined8 *)(unaff_x22 + 0x2e0),
                *(undefined8 *)(unaff_x22 + 0x2e8),*(undefined8 *)(unaff_x22 + 0x2f0),
                *(undefined8 *)(unaff_x22 + 0x2f8));
  if (lVar1 != 0) {
    *(undefined1 *)(unaff_x22 + 0x206) = 1;
    *(long *)(unaff_x22 + 1000) = lVar1;
    _swift_task_switch(FUN_10015d2c8,*(undefined8 *)(unaff_x22 + 0x3a0),
                       *(undefined8 *)(unaff_x22 + 0x3a8));
    return;
  }
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3d8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10015d1a8;
  FUN_100162acc(*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x2d8),
                *(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x2e8),
                *(undefined8 *)(unaff_x22 + 0x2f0),*(undefined8 *)(unaff_x22 + 0x2f8),
                *(undefined8 *)(unaff_x22 + 0x3d0),*(undefined1 *)(unaff_x22 + 0x205));
  return;
}

