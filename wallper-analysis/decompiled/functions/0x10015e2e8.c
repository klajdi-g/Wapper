// rea decompile_all
// name: FUN_10015e2e8
// address: 0x10015e2e8
// body: available
// range: 0x10015e2e8-0x10015e363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015e360 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015e2e8(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x410);
  if ((lVar2 == 0) || (*(char *)(unaff_x22 + 0x205) == '\x01')) {
    uVar1 = 0;
  }
  else {
    FUN_100162f58(lVar2,*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x2d8),
                  *(undefined8 *)(unaff_x22 + 0x2e0),*(undefined8 *)(unaff_x22 + 0x2e8),
                  *(undefined8 *)(unaff_x22 + 0x2f0),*(undefined8 *)(unaff_x22 + 0x2f8));
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_x22 + 0x206) = uVar1;
  *(long *)(unaff_x22 + 1000) = lVar2;
  _swift_task_switch(FUN_10015d2c8,*(undefined8 *)(unaff_x22 + 0x3a0),
                     *(undefined8 *)(unaff_x22 + 0x3a8));
  return;
}

