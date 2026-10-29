// rea decompile_all
// name: FUN_100155d54
// address: 0x100155d54
// body: available
// range: 0x100155d54-0x100155e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100155e84 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100155d54(void)

{
  Logger LVar1;
  ulong uVar2;
  ulong uVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  URL UVar6;
  URLRequest UVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xf8) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xe8) = in_x3;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x100) = LVar1.unknown;
  lVar8 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x120) = DVar4.unknown;
  lVar8 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x128) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar3;
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x138) = DVar5.unknown;
  lVar8 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x140) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x150) = UVar6.unknown;
  lVar8 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x158) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar3;
  UVar7 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = UVar7.unknown;
  lVar8 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  _swift_task_switch(FUN_100155e88,0,0);
  return;
}

