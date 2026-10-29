// rea decompile_all
// name: FUN_1000a20d8
// address: 0x1000a20d8
// body: available
// range: 0x1000a20d8-0x1000a224f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a2248 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000a224c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a20d8(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  URL UVar4;
  URLComponents_conflict UVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = UVar4.unknown;
  lVar10 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar10;
  uVar3 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  puVar1 = &DAT_10054f970;
  FUN_100002f94(&DAT_10054f970,&DAT_100420e28);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  UVar5 = Foundation::URLComponents::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x100) = UVar5.unknown;
  lVar10 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar10;
  uVar3 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x118) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar8 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x120) = UVar8.unknown;
  *(undefined8 **)(unaff_x22 + 0x128) = puVar7;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
    _swift_task_switch(FUN_1000a2250,UVar8.unknown,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

