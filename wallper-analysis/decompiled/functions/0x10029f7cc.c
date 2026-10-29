// rea decompile_all
// name: FUN_10029f7cc
// address: 0x10029f7cc
// body: available
// range: 0x10029f7cc-0x10029f90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029f894 to 0x10041382c /usr/lib/swift/libswiftAVFoundation.dylib::(extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::$load (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f908 to 0x1002a2578 FUN_1002a2578 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f90c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029f7cc(void)

{
  char cVar1;
  AVPartialAsyncProperty *pAVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  cVar1 = *(char *)(unaff_x22 + 0x5e8);
  pAVar2 = (AVPartialAsyncProperty *)&DAT_100558e80;
  FUN_100002f94(&DAT_100558e80,&DAT_10042d788);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x3b0) = pAVar2;
  (extension_AVFoundation)::AVFoundation::AVPartialAsyncProperty::_get_preferredTransform(pAVar2);
  *(AVPartialAsyncProperty **)(unaff_x22 + 0x3b8) = pAVar2;
  if (cVar1 == '\x01') {
    plVar3 = (long *)(ulong)*(uint *)(PTR__load_100523940 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3c8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10029f97c;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar4) {
      (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_load();
      return;
    }
  }
  else {
    plVar3 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3d0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10029fa58;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar4) {
      FUN_1002a2578(plVar3,unaff_x22 + 0x118,pAVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

