// rea decompile_all
// name: FUN_100199ae8
// address: 0x100199ae8
// body: available
// range: 0x100199ae8-0x100199bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100199bf4 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100199ae8(void)

{
  undefined *puVar1;
  ulong uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  MainActor *pMVar6;
  long *plVar7;
  undefined8 in_x3;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_x3;
  puVar1 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  LVar3 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x78) = LVar3.unknown;
  lVar8 = *(long *)(LVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x80) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x90) = DVar4.unknown;
  lVar8 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x98) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = DVar5.unknown;
  lVar8 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0xc0) = pMVar6;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 200) = pMVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100199bf8;
  (extension_Swift)::Swift::Task::_sleep(200000000);
  return;
}

