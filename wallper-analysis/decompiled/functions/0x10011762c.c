// rea decompile_all
// name: FUN_10011762c
// address: 0x10011762c
// body: available
// range: 0x10011762c-0x10011788b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100117884 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100117888 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10011762c(void)

{
  undefined8 uVar1;
  URL UVar2;
  NSString *pNVar3;
  ID IVar4;
  NSURL *pNVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  MainActor *this;
  long unaff_x22;
  String SVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = uVar10;
  (**(code **)(unaff_x22 + 0xa8))(uVar10,1,uVar9);
  if ((int)uVar11 == 1) {
    FUN_10002a29c(uVar10,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x68),uVar10,uVar9);
    UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar12 = Foundation::URL::get_path(UVar2);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    IVar4 = NSFileManager::fileExistsAtPath_((ID)UVar2.unknown,pNVar3);
    if ((int)IVar4 != 0) {
      UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar2);
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
      IVar4 = NSFileManager::removeItemAtURL_error_((ID)UVar2.unknown,pNVar5,unaff_x22 + 0x20);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
      if ((int)IVar4 == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar11);
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      this = *(MainActor **)(unaff_x22 + 0x88);
      pMVar6 = (MainActor *)0x0;
      FUN_100113f00();
      *(undefined4 *)(unaff_x22 + 0xc0) = *(undefined4 *)(pMVar6 + 0x14);
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      *(MainActor **)(unaff_x22 + 0xb8) = pMVar6;
      UVar7 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
        _swift_task_switch(FUN_10011788c,UVar7.unknown,uVar11);
        return;
      }
      goto LAB_100117888;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  **(undefined8 **)(unaff_x22 + 0x28) = 0;
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001001177d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_100117888:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

