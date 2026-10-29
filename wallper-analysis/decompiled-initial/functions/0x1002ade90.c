// rea decompile_all
// name: FUN_1002ade90
// address: 0x1002ade90
// body: available
// range: 0x1002ade90-0x1002adf3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002adf38 to 0x100227100 FUN_100227100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ade90(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1002adf3c;
  FUN_100227100(2000000000000000000,0,0,0,1);
  return;
}

