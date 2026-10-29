// rea decompile_all
// name: FUN_10008cd8c
// address: 0x10008cd8c
// body: available
// range: 0x10008cd8c-0x10008cf9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008cf98 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008cd8c(void)

{
  undefined *puVar1;
  ulong uVar2;
  Instant IVar3;
  ulong uVar4;
  Date DVar5;
  ContinuousClock CVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  long lVar10;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  puVar1 = &DAT_10054c060;
  FUN_100002f94(&DAT_10054c060,&DAT_10041d7d8);
  *(undefined **)(unaff_x22 + 0xa8) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  IVar3 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe8) = IVar3.unknown;
  lVar10 = *(long *)(IVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x120) = DVar5.unknown;
  lVar10 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x128) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  CVar6 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x140) = CVar6.unknown;
  lVar10 = *(long *)(CVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x148) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  puVar1 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar2;
  lVar10 = 0;
  FUN_10009e280();
  *(long *)(unaff_x22 + 0x1a0) = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x1a8) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0x1c0) = pMVar7;
  puVar8 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar9 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x1c8) = UVar9.unknown;
  *(undefined8 **)(unaff_x22 + 0x1d0) = puVar8;
  _swift_task_switch(FUN_10008cf9c,UVar9.unknown,puVar8);
  return;
}

