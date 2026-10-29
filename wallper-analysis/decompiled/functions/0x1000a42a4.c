// rea decompile_all
// name: FUN_1000a42a4
// address: 0x1000a42a4
// body: available
// range: 0x1000a42a4-0x1000a4343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a4340 to 0x100413544 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$yield (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a42a4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined1 *)(unaff_x22 + 0x81) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined1 *)(unaff_x22 + 0x80) = param_3;
  puVar1 = &DAT_10054fa20;
  FUN_100002f94(&DAT_10054fa20,&USHORT_100420f98);
  *(undefined **)(unaff_x22 + 0x58) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x68) = pMVar3;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x70) = pMVar3;
  plVar4 = (long *)(ulong)*(uint *)(PTR__yield_100524768 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000a4344;
  (extension_Swift)::Swift::Task::_yield();
  return;
}

