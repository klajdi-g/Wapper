// rea decompile_all
// name: FUN_100143360
// address: 0x100143360
// body: available
// range: 0x100143360-0x10014349f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143450 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10014349c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100143360(void)

{
  byte bVar1;
  NWPathMonitor *pNVar2;
  long *plVar3;
  UnownedSerialExecutor UVar4;
  MainActor *pMVar5;
  undefined8 uVar6;
  long unaff_x22;
  String isolation;
  
  pMVar5 = *(MainActor **)(unaff_x22 + 0x2a0);
  pNVar2 = Network::NWPathMonitor::typeMetadataAccessor();
  _swift_allocObject(pNVar2,*(undefined4 *)(pNVar2 + 0x30),*(undefined2 *)(pNVar2 + 0x34));
  pNVar2 = Network::NWPathMonitor::init(pNVar2);
  *(NWPathMonitor **)(unaff_x22 + 0x338) = pNVar2;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,(MainActor *)pNVar2);
  *(MainActor **)(unaff_x22 + 0x340) = pMVar5;
  *(NWPathMonitor **)(unaff_x22 + 0x60) = pNVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined1 *)(unaff_x22 + 0x70) = 1;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x348) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1001434a0;
    isolation.bridgeObject = pMVar5;
    isolation.str = (char *)(unaff_x22 + 0x3a4);
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pMVar5 == (MainActor *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2b0);
    _swift_getObjectType(pMVar5);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1001434f4,UVar4.unknown,uVar6);
  return;
}

