// rea decompile_all
// name: FUN_10012564c
// address: 0x10012564c
// body: available
// range: 0x10012564c-0x1001256eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001256dc to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012564c(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x22 + 0x38) * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001256e4);
    (*pcVar1)();
  }
  if (-1.0 < dVar3) {
    if (dVar3 < 1.8446744073709552e+19) {
      plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa8) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_1001256ec;
      (extension_Swift)::Swift::Task::_sleep((long)dVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001256ec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001256e8);
  (*pcVar1)();
}

