// rea decompile_all
// name: FUN_100133284
// address: 0x100133284
// body: available
// range: 0x100133284-0x10013342b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100133428 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100133284(void)

{
  DateDecodingStrategy DVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined7 extraout_var;
  Logger LVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  URLRequest UVar9;
  URL UVar10;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  puVar2 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar4;
  lVar5 = 0;
  FUN_100137890();
  *(long *)(unaff_x22 + 0x120) = lVar5;
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar4;
  DVar1 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x130) = CONCAT71(extraout_var,DVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  *(long *)(unaff_x22 + 0x138) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar4;
  LVar6 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x148) = LVar6.unknown;
  lVar5 = *(long *)(LVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x150) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar4;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x168) = DVar7.unknown;
  lVar5 = *(long *)(DVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x170) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = DVar8.unknown;
  lVar5 = *(long *)(DVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar4;
  UVar9 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x198) = UVar9.unknown;
  lVar5 = *(long *)(UVar9.unknown + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar4;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1b0) = UVar10.unknown;
  lVar5 = *(long *)(UVar10.unknown + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar4;
  _swift_task_switch(FUN_10013342c,0,0);
  return;
}

