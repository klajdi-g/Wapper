// rea decompile_all
// name: FUN_1001a06b0
// address: 0x1001a06b0
// body: available
// range: 0x1001a06b0-0x1001a07af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a07a8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a07ac to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a06b0(void)

{
  undefined8 uVar1;
  URL UVar2;
  ulong uVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  MainActor *this;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100521138;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  this = *(MainActor **)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  pMVar5 = *(MainActor **)(unaff_x22 + 0x170);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x208) = UVar2.unknown;
  lVar8 = *(long *)(UVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x210) = lVar8;
  lVar8 = *(long *)(lVar8 + 0x40);
  *(long *)(unaff_x22 + 0x218) = lVar8;
  uVar3 = lVar8 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar3;
  puVar4 = &DAT_100530548;
  _swift_allocObject(&DAT_100530548,0x28,7);
  *(undefined **)(unaff_x22 + 0x228) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(MainActor **)(puVar4 + 0x20) = pMVar5;
  _swift_retain(uVar10);
  _swift_bridgeObjectRetain();
  pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
  *(MainActor **)(unaff_x22 + 0x230) = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar7) {
    _swift_task_switch(FUN_1001a07b0,UVar6.unknown,uVar9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

