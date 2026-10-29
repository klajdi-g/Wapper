// rea decompile_all
// name: FUN_100184ec4
// address: 0x100184ec4
// body: available
// range: 0x100184ec4-0x1001850ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001850f8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001850fc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  URL UVar4;
  CharacterSet CVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined8 **)(unaff_x22 + 0x750) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x748) = param_6;
  *(undefined8 *)(unaff_x22 + 0x740) = param_5;
  *(undefined8 *)(unaff_x22 + 0x738) = param_4;
  *(undefined8 *)(unaff_x22 + 0x730) = param_3;
  *(undefined8 *)(unaff_x22 + 0x728) = param_2;
  *(undefined8 *)(unaff_x22 + 0x720) = param_1;
  *(undefined8 *)(unaff_x22 + 0x758) = *unaff_x20;
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x760) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x768) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x770) = UVar4.unknown;
  lVar13 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x778) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x780) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x788) = uVar3;
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x790) = CVar5.unknown;
  lVar13 = *(long *)(CVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x798) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7a0) = uVar3;
  LVar6 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x7a8) = LVar6.unknown;
  lVar13 = *(long *)(LVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x7b0) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7b8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7c0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7c8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 2000) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7d8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7e0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7e8) = uVar3;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x7f0) = DVar7.unknown;
  lVar13 = *(long *)(DVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x7f8) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x800) = uVar3;
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x808) = DVar8.unknown;
  lVar13 = *(long *)(DVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x810) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x818) = uVar3;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x820) = pMVar9;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  *(MainActor **)(unaff_x22 + 0x828) = pMVar9;
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x830) = puVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x838) = UVar11.unknown;
  *(undefined8 **)(unaff_x22 + 0x840) = puVar10;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar12) {
    _swift_task_switch(FUN_100185100,UVar11.unknown,puVar10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

