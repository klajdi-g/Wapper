// rea decompile_all
// name: FUN_1000afdbc
// address: 0x1000afdbc
// body: available
// range: 0x1000afdbc-0x1000afe2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000afe28 to 0x1000a42a4 FUN_1000a42a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000afdbc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  *(undefined8 *)(lVar2 + 0x90) = param_1;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x98) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1000afe2c;
  FUN_1000a42a4(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48),1,
                *(undefined8 *)(lVar2 + 0x38),*(undefined1 *)(lVar2 + 0xa8));
  return;
}

