// rea decompile_all
// name: FUN_100140fcc
// address: 0x100140fcc
// body: available
// range: 0x100140fcc-0x10014105f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100141040 to 0x1001484f8 FUN_1001484f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100140fcc(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x298) + 0x18);
  *(long *)(unaff_x22 + 0x2c8) = lVar1;
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x298) + 0x28);
    *(long *)(unaff_x22 + 0x2d0) = lVar1;
    if (lVar1 != 0) {
      plVar2 = (long *)0xc0;
      _swift_retain();
      _swift_retain(lVar1);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2d8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100141060;
      FUN_1001484f8(0x4014000000000000,0);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
                    /* WARNING: Could not recover jumptable at 0x00010014105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

