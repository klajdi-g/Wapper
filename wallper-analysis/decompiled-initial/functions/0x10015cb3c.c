// rea decompile_all
// name: FUN_10015cb3c
// address: 0x10015cb3c
// body: available
// range: 0x10015cb3c-0x10015ccf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015ccf4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015cb3c(void)

{
  undefined *puVar1;
  Logger LVar2;
  ulong uVar3;
  ulong uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  Instant IVar7;
  ContinuousClock CVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined1 in_w5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  *(undefined8 *)(unaff_x22 + 0x2c8) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x2c0) = in_x6;
  *(undefined1 *)(unaff_x22 + 0x204) = in_w5;
  *(undefined8 *)(unaff_x22 + 0x2b8) = in_x3;
  uVar13 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0x2d8) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x2e0) = in_x4[2];
  uVar13 = in_x4[3];
  *(undefined8 *)(unaff_x22 + 0x2f0) = in_x4[4];
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x2f8) = in_x4[5];
  LVar2 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x300) = LVar2.unknown;
  lVar12 = *(long *)(LVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x308) = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x310) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x318) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 800) = uVar4;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x328) = DVar5.unknown;
  lVar12 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x330) = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x338) = uVar4;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x340) = DVar6.unknown;
  lVar12 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x348) = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x350) = uVar4;
  IVar7 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x358) = IVar7.unknown;
  lVar12 = *(long *)(IVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x360) = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x368) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x370) = uVar4;
  CVar8 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x378) = CVar8.unknown;
  lVar12 = *(long *)(CVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x380) = lVar12;
  uVar4 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x388) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x390) = uVar4;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  *(MainActor **)(unaff_x22 + 0x398) = pMVar9;
  puVar10 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar11 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x3a0) = UVar11.unknown;
  *(undefined8 **)(unaff_x22 + 0x3a8) = puVar10;
  _swift_task_switch(FUN_10015ccf8,UVar11.unknown,puVar10);
  return;
}

