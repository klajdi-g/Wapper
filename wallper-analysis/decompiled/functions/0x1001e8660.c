// rea decompile_all
// name: FUN_1001e8660
// address: 0x1001e8660
// body: available
// range: 0x1001e8660-0x1001e87f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e87ec to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e87f0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e8660(void)

{
  Logger LVar1;
  ulong uVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  URL UVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined1 in_stack_00000000;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined1 *)(unaff_x22 + 0x1a8) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0xf8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x100) = in_x7;
  *(undefined8 *)(unaff_x22 + 0xe8) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xf0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0xe0) = in_x3;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = LVar1.unknown;
  lVar8 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x120) = DVar3.unknown;
  lVar8 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x128) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x138) = DVar4.unknown;
  lVar8 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x140) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x150) = UVar5.unknown;
  lVar8 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x158) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  puVar6 = &DAT_10054ea38;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  *(undefined **)(unaff_x22 + 0x168) = puVar6;
  uVar2 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar2;
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar7;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar7;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar7;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar2;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
    _swift_task_switch(FUN_1001e87f4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

