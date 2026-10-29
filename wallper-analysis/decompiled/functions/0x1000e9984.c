// rea decompile_all
// name: FUN_1000e9984
// address: 0x1000e9984
// body: available
// range: 0x1000e9984-0x1000e9a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e9a78 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e9984(undefined8 *param_1)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_100557bb0 != -1) {
    param_1 = &DAT_100557bb0;
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  FUN_1000e3a0c();
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = param_1 + 4;
    do {
      uVar2 = *puVar4;
      IVar1 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      FUN_1002b4050(uVar2,IVar1);
      _swift_bridgeObjectRelease(IVar1);
      FUN_10024ef58(uVar2,0,1);
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}

