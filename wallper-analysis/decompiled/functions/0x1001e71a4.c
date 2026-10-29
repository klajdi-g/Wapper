// rea decompile_all
// name: FUN_1001e71a4
// address: 0x1001e71a4
// body: available
// range: 0x1001e71a4-0x1001e7313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e725c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e71a4(URL param_1)

{
  NSString *pNVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  ID IVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  String SVar10;
  
  IVar4 = *(ID *)(unaff_x22 + 0x340);
  SVar10 = Foundation::URL::get_path(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  IVar4 = objc_stub::fileExistsAtPath_(IVar4,pNVar1);
  if ((int)IVar4 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x308);
    pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x2f8),(MainActor *)0x0);
    *(MainActor **)(unaff_x22 + 0x3d0) = pMVar2;
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1001e7314,UVar3.unknown,uVar5);
    return;
  }
  pcVar9 = *(code **)(unaff_x22 + 0x328);
  uVar5 = *(undefined8 *)(unaff_x22 + 800);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2e0);
  (**(code **)(*(long *)(unaff_x22 + 0x318) + 0x38))(*(undefined8 *)(unaff_x22 + 0x2b8),1,1,uVar6);
  FUN_1001e85a4(uVar8);
  (*pcVar9)(uVar5,uVar6);
  FUN_10002a29c(uVar7,&DAT_100553d90,&DAT_10041bf10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001001e7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

