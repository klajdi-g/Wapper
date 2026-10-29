// rea decompile_all
// name: FUN_1001e579c
// address: 0x1001e579c
// body: available
// range: 0x1001e579c-0x1001e58a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e583c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e5888 to 0x1001ebb88 FUN_1001ebb88 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e579c(URL param_1)

{
  NSString *pNVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  long *plVar4;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x22;
  String SVar7;
  
  IVar5 = *(ID *)(unaff_x22 + 0x340);
  SVar7 = Foundation::URL::get_path(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  IVar5 = objc_stub::fileExistsAtPath_(IVar5,pNVar1);
  if ((int)IVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x308);
    pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x2f8),(MainActor *)0x0);
    *(MainActor **)(unaff_x22 + 0x348) = pMVar2;
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1001e58a4,UVar3.unknown,uVar6);
    return;
  }
  if (DAT_100556f90 != -1) {
    _swift_once(&DAT_100556f90,FUN_1001dd6fc);
  }
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x358) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001e5a68;
  FUN_1001ebb88();
  return;
}

