// rea decompile_all
// name: FUN_10014c0f8
// address: 0x10014c0f8
// body: available
// range: 0x10014c0f8-0x10014c2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014c2c4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014c0f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  DateDecodingStrategy DVar2;
  Logger LVar3;
  ulong uVar4;
  ulong uVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  undefined7 extraout_var;
  URLRequest UVar8;
  URL UVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  long lVar13;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  LVar3 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x160) = LVar3.unknown;
  lVar13 = *(long *)(LVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x168) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar5;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = DVar6.unknown;
  lVar13 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar5;
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x198) = DVar7.unknown;
  lVar13 = *(long *)(DVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar5;
  lVar13 = 0;
  FUN_100150a0c();
  *(long *)(unaff_x22 + 0x1b0) = lVar13;
  uVar5 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar5;
  DVar2 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x1c0) = CONCAT71(extraout_var,DVar2.value);
  lVar13 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  *(long *)(unaff_x22 + 0x1c8) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar5;
  UVar8 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1d8) = UVar8.unknown;
  lVar13 = *(long *)(UVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar5;
  UVar9 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1f0) = UVar9.unknown;
  lVar13 = *(long *)(UVar9.unknown + -8);
  *(long *)(unaff_x22 + 0x1f8) = lVar13;
  uVar5 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar4;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar5;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  *(MainActor **)(unaff_x22 + 0x218) = pMVar10;
  puVar11 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar12 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x220) = UVar12.unknown;
  *(undefined8 **)(unaff_x22 + 0x228) = puVar11;
  _swift_task_switch(FUN_10014c2c8,UVar12.unknown,puVar11);
  return;
}

