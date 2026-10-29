// rea decompile_all
// name: FUN_10011067c
// address: 0x10011067c
// body: available
// range: 0x10011067c-0x1001107cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001107c8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011067c(void)

{
  Logger LVar1;
  ulong uVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  URL UVar6;
  ulong uVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xa8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x4;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb0) = LVar1.unknown;
  lVar8 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 200) = DVar3.unknown;
  lVar8 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe0) = DVar4.unknown;
  lVar8 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  puVar5 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  lVar8 = 0;
  FUN_100112cd8();
  *(long *)(unaff_x22 + 0x100) = lVar8;
  uVar2 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x110) = UVar6.unknown;
  lVar8 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x118) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar7;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar7;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar7;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  _swift_task_switch(FUN_1001107cc,0,0);
  return;
}

