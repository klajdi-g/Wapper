// rea decompile_all
// name: FUN_10026f574
// address: 0x10026f574
// body: available
// range: 0x10026f574-0x10026f753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026f750 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026f574(void)

{
  undefined *puVar1;
  ulong uVar2;
  Logger LVar3;
  ulong uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  URL UVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x148) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = *unaff_x20;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  LVar3 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x160) = LVar3.unknown;
  lVar11 = *(long *)(LVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x168) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar2;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = DVar5.unknown;
  lVar11 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar2;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x198) = DVar6.unknown;
  lVar11 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar2;
  puVar1 = &DAT_100558c90;
  FUN_100002f94(&DAT_100558c90,&DAT_10042d4c8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
  lVar11 = 0;
  FUN_100282f08();
  *(long *)(unaff_x22 + 0x1b8) = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar2;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1d0) = UVar7.unknown;
  lVar11 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x1d8) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  *(MainActor **)(unaff_x22 + 0x1f8) = pMVar8;
  puVar9 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar10 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x200) = UVar10.unknown;
  *(undefined8 **)(unaff_x22 + 0x208) = puVar9;
  _swift_task_switch(FUN_10026f754,UVar10.unknown,puVar9);
  return;
}

