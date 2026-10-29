// rea decompile_all
// name: FUN_1001c2494
// address: 0x1001c2494
// body: available
// range: 0x1001c2494-0x1001c257b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c2578 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c2494(void)

{
  undefined *puVar1;
  DispatchTime DVar2;
  ulong uVar3;
  ulong uVar4;
  DispatchWorkItemFlags DVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = DVar2.unknown;
  lVar9 = *(long *)(DVar2.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar4;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb8) = DVar5.unknown;
  uVar4 = *(long *)(*(long *)(DVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar4;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 200) = pMVar6;
  puVar7 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001c257c,UVar8.unknown,puVar7);
  return;
}

