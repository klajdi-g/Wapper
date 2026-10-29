// rea decompile_all
// name: FUN_100225664
// address: 0x100225664
// body: available
// range: 0x100225664-0x1002256e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002256e4 to 0x10026b218 FUN_10026b218 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100225664(void)

{
  MainActor *pMVar1;
  long *plVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x58) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x60) = pMVar1;
  plVar2 = (long *)0x300;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002256e8;
  FUN_10026b218(in_x4,in_x5);
  return;
}

