// rea decompile_all
// name: FUN_1002c99a4
// address: 0x1002c99a4
// body: available
// range: 0x1002c99a4-0x1002c9aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c9a60 to 0x100413d18 /usr/lib/swift/libswift_Concurrency.dylib::Swift::$withCheckedContinuation (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002c9aac to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c99a4(MainActor *param_1)

{
  byte bVar1;
  MainActor *pMVar2;
  long *plVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  long unaff_x22;
  String isolation;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x70),param_1);
  *(MainActor **)(unaff_x22 + 0x98) = pMVar2;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100524798 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1002c9ab0;
    isolation.bridgeObject = pMVar2;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pMVar2 == (MainActor *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_getObjectType(pMVar2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1002c9afc,UVar4.unknown,uVar5);
  return;
}

