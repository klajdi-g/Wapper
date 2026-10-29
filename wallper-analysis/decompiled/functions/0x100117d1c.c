// rea decompile_all
// name: FUN_100117d1c
// address: 0x100117d1c
// body: available
// range: 0x100117d1c-0x100117f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100117f34 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100117d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Logger LVar1;
  ulong uVar2;
  ulong uVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  undefined *puVar6;
  URL UVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_3;
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
  *(undefined8 *)(unaff_x22 + 0x178) = param_2;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 400) = LVar1.unknown;
  lVar11 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x198) = lVar11;
  uVar3 = *(long *)(lVar11 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar3;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1b0) = DVar4.unknown;
  lVar11 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar11;
  uVar3 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar3;
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c8) = DVar5.unknown;
  lVar11 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x1d0) = lVar11;
  uVar3 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  lVar11 = 0;
  FUN_100113f00();
  *(long *)(unaff_x22 + 0x1e0) = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar11;
  lVar11 = *(long *)(lVar11 + 0x40);
  *(long *)(unaff_x22 + 0x1f0) = lVar11;
  uVar3 = lVar11 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar3;
  puVar6 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  uVar3 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar3;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x210) = UVar7.unknown;
  lVar11 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x218) = lVar11;
  uVar3 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar3;
  puVar6 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  *(undefined **)(unaff_x22 + 0x228) = puVar6;
  uVar3 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar3;
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar3 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar3;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_1005246d8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  *(MainActor **)(unaff_x22 + 0x250) = pMVar8;
  puVar9 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar10 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 600) = UVar10.unknown;
  *(undefined8 **)(unaff_x22 + 0x260) = puVar9;
  _swift_task_switch(FUN_100117f38,UVar10.unknown,puVar9);
  return;
}

