// rea decompile_all
// name: FUN_1001e58a4
// address: 0x1001e58a4
// body: available
// range: 0x1001e58a4-0x1001e59c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e59c4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e58a4(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  Published *pPVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  pPVar6 = *(Published **)(unaff_x22 + 800);
  lVar11 = *(long *)(unaff_x22 + 0x318);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x310);
  lVar5 = *(long *)(unaff_x22 + 0x2e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x348));
  uVar1 = lVar5 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar1);
  (**(code **)(lVar11 + 0x10))();
  pcVar4 = *(code **)(lVar11 + 0x38);
  *(code **)(unaff_x22 + 0x350) = pcVar4;
  (*pcVar4)(uVar1,0,1,uVar7);
  puVar2 = &DAT_10042ae68;
  _swift_getKeyPath(&DAT_10042ae68);
  puVar3 = &DAT_10042ae90;
  _swift_getKeyPath(&DAT_10042ae90);
  _swift_bridgeObjectRetain(uVar9);
  pcVar4 = (code *)(unaff_x22 + 0x150);
  Combine::Published::_modify_subscript(pPVar6,pcVar4,uVar8,puVar2,puVar3);
  FUN_100122fac(uVar1,uVar10,uVar9);
  (*pcVar4)(unaff_x22 + 0x150,0);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_switch(FUN_1001e59c8,0,0);
  return;
}

