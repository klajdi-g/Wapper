// rea decompile_all
// name: FUN_1001170d8
// address: 0x1001170d8
// body: available
// range: 0x1001170d8-0x100117217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100117210 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100117214 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001170d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100521138;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  puVar1 = &DAT_1004262a8;
  _swift_getKeyPath(&DAT_1004262a8);
  puVar2 = &DAT_1004262d0;
  _swift_getKeyPath(&DAT_1004262d0);
  Combine::Published::_get_subscript(unaff_x22 + 0x10,uVar8,puVar1,puVar2);
  _swift_release(puVar2);
  _swift_release(puVar1);
  lVar9 = *(long *)(unaff_x22 + 0x10);
  if (*(long *)(lVar9 + 0x10) == 0) {
    bVar7 = true;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x78);
    uVar4 = *(ulong *)(unaff_x22 + 0x80);
    _swift_bridgeObjectRetain(lVar9);
    FUN_10000464c(lVar3);
    bVar7 = (uVar4 & 1) == 0;
    if (!bVar7) {
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x50),
                 *(long *)(lVar9 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x60) + 0x48) * lVar3,
                 *(undefined8 *)(unaff_x22 + 0x58));
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x60) + 0x38);
  *(code **)(unaff_x22 + 0xa0) = pcVar6;
  (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x50),bVar7,1,*(undefined8 *)(unaff_x22 + 0x58));
  _swift_bridgeObjectRelease(lVar9);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar5) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _swift_task_switch(FUN_100117218,0,0);
  return;
}

