// rea decompile_all
// name: FUN_100136548
// address: 0x100136548
// body: available
// range: 0x100136548-0x100136657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100136654 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100136548(void)

{
  undefined *puVar1;
  Logger LVar2;
  ulong uVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = in_x3;
  LVar2 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = LVar2.unknown;
  lVar9 = *(long *)(LVar2.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf0) = DVar4.unknown;
  lVar9 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = DVar5.unknown;
  lVar9 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  *(MainActor **)(unaff_x22 + 0x120) = pMVar6;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x128) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  *(undefined8 **)(unaff_x22 + 0x130) = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x138) = UVar8.unknown;
  *(undefined8 **)(unaff_x22 + 0x140) = puVar7;
  _swift_task_switch(FUN_100136658,UVar8.unknown,puVar7);
  return;
}

