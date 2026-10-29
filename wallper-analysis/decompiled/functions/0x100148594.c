// rea decompile_all
// name: FUN_100148594
// address: 0x100148594
// body: available
// range: 0x100148594-0x1001486df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014868c to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001486dc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100148594(void)

{
  undefined1 uVar1;
  byte bVar2;
  NWPathMonitor *pNVar3;
  MainActor *pMVar4;
  long *plVar5;
  UnownedSerialExecutor UVar6;
  undefined8 uVar7;
  long unaff_x22;
  String isolation;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x72);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  pMVar4 = *(MainActor **)(unaff_x22 + 0x80);
  pNVar3 = Network::NWPathMonitor::typeMetadataAccessor();
  _swift_allocObject(pNVar3,*(undefined4 *)(pNVar3 + 0x30),*(undefined2 *)(pNVar3 + 0x34));
  pNVar3 = Network::NWPathMonitor::init(pNVar3);
  *(NWPathMonitor **)(unaff_x22 + 0xa8) = pNVar3;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,(MainActor *)pNVar3);
  *(MainActor **)(unaff_x22 + 0xb0) = pMVar4;
  *(NWPathMonitor **)(unaff_x22 + 0x60) = pNVar3;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar7;
  *(undefined1 *)(unaff_x22 + 0x70) = uVar1;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1001486e0;
    isolation.bridgeObject = pMVar4;
    isolation.str = (char *)(unaff_x22 + 0x71);
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pMVar4 == (MainActor *)0x0) {
    UVar6.unknown = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
    _swift_getObjectType(pMVar4);
    UVar6 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_10014872c,UVar6.unknown,uVar7);
  return;
}

