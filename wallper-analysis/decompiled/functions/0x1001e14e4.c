// rea decompile_all
// name: FUN_1001e14e4
// address: 0x1001e14e4
// body: available
// range: 0x1001e14e4-0x1001e16eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e16e8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e14e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  Logger LVar3;
  ulong uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  URLRequest UVar7;
  URL UVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  long lVar12;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x160) = param_2;
  *(undefined8 *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  puVar1 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  *(undefined **)(unaff_x22 + 0x170) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar2;
  LVar3 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = LVar3.unknown;
  lVar12 = *(long *)(LVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1a8) = DVar5.unknown;
  lVar12 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x1b0) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c0) = DVar6.unknown;
  lVar12 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x1c8) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar2;
  UVar7 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1d8) = UVar7.unknown;
  lVar12 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  puVar1 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x210) = UVar8.unknown;
  lVar12 = *(long *)(UVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x218) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x228) = uVar2;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  *(MainActor **)(unaff_x22 + 0x230) = pMVar9;
  puVar10 = &DAT_100558b80;
  FUN_100047f94(&DAT_100558b80,0xff,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar11 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x238) = UVar11.unknown;
  *(undefined8 **)(unaff_x22 + 0x240) = puVar10;
  _swift_task_switch(FUN_1001e16ec,UVar11.unknown,puVar10);
  return;
}

