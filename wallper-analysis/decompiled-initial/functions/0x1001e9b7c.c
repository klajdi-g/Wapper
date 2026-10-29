// rea decompile_all
// name: FUN_1001e9b7c
// address: 0x1001e9b7c
// body: available
// range: 0x1001e9b7c-0x1001e9cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e9cc4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e9b7c(void)

{
  URL UVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  long unaff_x22;
  undefined8 in_stack_00000000;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x7;
  *(undefined8 *)(unaff_x22 + 0xa8) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x88) = in_x4;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb0) = UVar1.unknown;
  lVar8 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  puVar3 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  *(undefined **)(unaff_x22 + 200) = puVar3;
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  LVar5 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe8) = LVar5.unknown;
  lVar8 = *(long *)(LVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x100) = DVar6.unknown;
  lVar8 = *(long *)(DVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x108) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x118) = DVar7.unknown;
  lVar8 = *(long *)(DVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x120) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  _swift_task_switch(FUN_1001e9cc8,0,0);
  return;
}

