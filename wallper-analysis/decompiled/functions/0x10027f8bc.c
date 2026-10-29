// rea decompile_all
// name: FUN_10027f8bc
// address: 0x10027f8bc
// body: available
// range: 0x10027f8bc-0x10027fa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027fa54 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027fa58 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027f8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Logger LVar2;
  ulong uVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  URLRequest UVar6;
  URL UVar7;
  ulong uVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined8 *)(unaff_x22 + 0x120) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = param_3;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  LVar2 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x130) = LVar2.unknown;
  lVar13 = *(long *)(LVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x138) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x148) = DVar4.unknown;
  lVar13 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x150) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x160) = DVar5.unknown;
  lVar13 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x168) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  UVar6 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x178) = UVar6.unknown;
  lVar13 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x180) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar3;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 400) = UVar7.unknown;
  lVar13 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x198) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar8 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar8;
  uVar8 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar8;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar3;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  *(MainActor **)(unaff_x22 + 0x1b8) = pMVar9;
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar11 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x1c0) = UVar11.unknown;
  *(undefined8 **)(unaff_x22 + 0x1c8) = puVar10;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar12) {
    _swift_task_switch(FUN_10027fa5c,UVar11.unknown,puVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

