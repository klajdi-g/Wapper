// rea decompile_all
// name: FUN_10014acdc
// address: 0x10014acdc
// body: available
// range: 0x10014acdc-0x10014ae83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014ae80 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014acdc(void)

{
  undefined *puVar1;
  DateDecodingStrategy DVar2;
  Logger LVar3;
  ulong uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  undefined7 extraout_var;
  URLRequest UVar7;
  URL UVar8;
  ulong uVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  long lVar13;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = unaff_x20;
  LVar3 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c8) = LVar3.unknown;
  lVar13 = *(long *)(LVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x1d0) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar4;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1e0) = DVar5.unknown;
  lVar13 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar4;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1f8) = DVar6.unknown;
  lVar13 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x200) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar4;
  DVar2 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x210) = CONCAT71(extraout_var,DVar2.value);
  lVar13 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  *(long *)(unaff_x22 + 0x218) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar4;
  UVar7 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x228) = UVar7.unknown;
  lVar13 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x230) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar4;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x240) = UVar8.unknown;
  lVar13 = *(long *)(UVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x248) = lVar13;
  uVar4 = *(long *)(lVar13 + 0x40) + 0xf;
  uVar9 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar9;
  uVar9 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar9;
  uVar9 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar9;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar4;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  *(MainActor **)(unaff_x22 + 0x270) = pMVar10;
  puVar11 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar12 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x278) = UVar12.unknown;
  *(undefined8 **)(unaff_x22 + 0x280) = puVar11;
  _swift_task_switch(FUN_10014ae84,UVar12.unknown,puVar11);
  return;
}

