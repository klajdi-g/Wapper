// rea decompile_all
// name: FUN_100117004
// address: 0x100117004
// body: available
// range: 0x100117004-0x1001170d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001170d0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001170d4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100117004(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined8 *)(unaff_x22 + 0x78) = **(undefined8 **)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x80) = (*(undefined8 **)(unaff_x22 + 0x38))[1];
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x88) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar2;
  puVar3 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x98) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar5) {
    _swift_task_switch(FUN_1001170d8,UVar4.unknown,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

