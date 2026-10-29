// rea decompile_all
// name: FUN_10018c160
// address: 0x10018c160
// body: available
// range: 0x10018c160-0x10018c313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018c308 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018c310 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10018c160(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  undefined8 uVar8;
  Published *pPVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100521138;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x8d0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x860);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x858);
  pPVar9 = *(Published **)(unaff_x22 + 0x750);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x8e0));
  puVar1 = (undefined8 *)((long)&pPVar9->unknown + _TtC7Wallper17NowPlayingManager::artworkKey);
  uVar3 = puVar1[1];
  *puVar1 = uVar11;
  puVar1[1] = uVar10;
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = &DAT_100429f20;
  _swift_getKeyPath(&DAT_100429f20);
  puVar5 = &DAT_100429f48;
  _swift_getKeyPath(&DAT_100429f48);
  *(undefined8 *)(unaff_x22 + 0x698) = uVar8;
  _swift_bridgeObjectRetain(uVar10);
  _swift_retain(pPVar9);
  Combine::Published::_set_subscript(pPVar9,unaff_x22 + 0x698,pPVar9,puVar4,puVar5);
  puVar4 = &DAT_100429f68;
  _swift_getKeyPath(&DAT_100429f68);
  puVar5 = &DAT_100429f90;
  _swift_getKeyPath(&DAT_100429f90);
  pcVar2 = (code *)(unaff_x22 + 0x200);
  Combine::Published::_modify_subscript();
  if (SCARRY8((long)pPVar9->unknown,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10018c310);
    (*pcVar2)();
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x8d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x848);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x830);
  pPVar9->unknown = pPVar9->unknown + 1;
  (*pcVar2)(unaff_x22 + 0x200,0);
  _swift_release(puVar5);
  _swift_release(puVar4);
  FUN_10019cc8c(uVar8,uVar10,uVar11);
  FUN_100184828(uVar8);
  UVar6 = Swift::Actor::get_unownedExecutor();
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar7) {
    _swift_task_switch(FUN_10018c314,UVar6.unknown,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

