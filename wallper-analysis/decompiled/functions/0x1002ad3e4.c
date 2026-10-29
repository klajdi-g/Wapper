// rea decompile_all
// name: FUN_1002ad3e4
// address: 0x1002ad3e4
// body: available
// range: 0x1002ad3e4-0x1002ad55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ad558 to 0x10026b218 FUN_10026b218 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ad3e4(void)

{
  Logger LVar1;
  ulong uVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  URL UVar6;
  ulong uVar7;
  MainActor *pMVar8;
  long *plVar9;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x98) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x88) = in_x7;
  LVar1 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = LVar1.unknown;
  lVar10 = *(long *)(LVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = DVar3.unknown;
  lVar10 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = DVar4.unknown;
  lVar10 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf8) = UVar6.unknown;
  lVar10 = *(long *)(UVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x100) = lVar10;
  uVar2 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar7;
  uVar7 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar7;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x120) = pMVar8;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  *(MainActor **)(unaff_x22 + 0x128) = pMVar8;
  plVar9 = (long *)0x300;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1002ad55c;
  FUN_10026b218(in_x4,in_x5);
  return;
}

