// rea decompile_all
// name: FUN_1002a5d10
// address: 0x1002a5d10
// body: available
// range: 0x1002a5d10-0x1002a5e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a5e60 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a5e7c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a5d10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100521138;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x180));
  if (DAT_100556f80 != -1) {
    _swift_once(&DAT_100556f80,FUN_1001dd604);
  }
  uVar1 = DAT_100577cf0;
  *(undefined8 *)(unaff_x22 + 400) = DAT_100577cf0;
  puVar2 = &DAT_10042df08;
  _swift_getKeyPath(&DAT_10042df08);
  puVar3 = &DAT_10042df30;
  _swift_getKeyPath(&DAT_10042df30);
  Combine::Published::_get_subscript(unaff_x22 + 0x78,uVar1,puVar2,puVar3);
  _swift_release(puVar3);
  _swift_release(puVar2);
  lVar9 = *(long *)(unaff_x22 + 0x78);
  if (*(long *)(lVar9 + 0x10) == 0) {
    bVar8 = true;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x158);
    uVar5 = *(ulong *)(unaff_x22 + 0x160);
    _swift_bridgeObjectRetain(lVar9);
    FUN_10000464c(lVar4);
    bVar8 = (uVar5 & 1) == 0;
    if (!bVar8) {
      (**(code **)(unaff_x22 + 0x170))
                (*(undefined8 *)(unaff_x22 + 0x118),
                 *(long *)(lVar9 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x128) + 0x48) * lVar4,
                 *(undefined8 *)(unaff_x22 + 0x120));
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0x128) + 0x38);
  *(code **)(unaff_x22 + 0x198) = pcVar7;
  (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x118),bVar8,1,*(undefined8 *)(unaff_x22 + 0x120));
  _swift_bridgeObjectRelease(lVar9);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar6) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _swift_task_switch(FUN_1002a5e80,0,0);
  return;
}

