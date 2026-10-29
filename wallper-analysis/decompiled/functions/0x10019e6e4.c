// rea decompile_all
// name: FUN_10019e6e4
// address: 0x10019e6e4
// body: available
// range: 0x10019e6e4-0x10019e7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019e7a4 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019e7b4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019e6e4(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  double dVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100521138;
  dVar4 = *(double *)(unaff_x22 + 0x140) * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e7ac);
    (*pcVar1)();
  }
  if (dVar4 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e7b0);
    (*pcVar1)();
  }
  if (1.8446744073709552e+19 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e7b4);
    (*pcVar1)();
  }
  plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10019e7b8;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar3) {
    (extension_Swift)::Swift::Task::_sleep((long)dVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

