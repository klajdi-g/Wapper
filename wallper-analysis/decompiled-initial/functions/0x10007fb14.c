// rea decompile_all
// name: FUN_10007fb14
// address: 0x10007fb14
// body: available
// range: 0x10007fb14-0x10007fd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007fd78 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007fb14(void)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  Date DVar4;
  ContinuousClock CVar5;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  long lVar13;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x168) = IVar1.unknown;
  lVar13 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar3;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1e8) = DVar4.unknown;
  lVar13 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x208) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x228) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar3;
  CVar5 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x238) = CVar5.unknown;
  lVar13 = *(long *)(CVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x240) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x278) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar3;
  LVar6 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x288) = LVar6.unknown;
  lVar13 = *(long *)(LVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x290) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar3;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2a0) = DVar7.unknown;
  lVar13 = *(long *)(DVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x2a8) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2b0) = uVar3;
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2b8) = DVar8.unknown;
  lVar13 = *(long *)(DVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2c8) = uVar3;
  puVar9 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  uVar3 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2e0) = uVar3;
  lVar13 = 0;
  FUN_10009e280();
  *(long *)(unaff_x22 + 0x2e8) = lVar13;
  lVar13 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x2f0) = lVar13;
  uVar3 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2f8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x300) = uVar3;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  *(MainActor **)(unaff_x22 + 0x308) = pMVar10;
  puVar11 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar12 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x310) = UVar12.unknown;
  *(undefined8 **)(unaff_x22 + 0x318) = puVar11;
  _swift_task_switch(FUN_10007fd7c,UVar12.unknown,puVar11);
  return;
}

