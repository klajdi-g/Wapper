// rea decompile_all
// name: FUN_10019c8e8
// address: 0x10019c8e8
// body: available
// range: 0x10019c8e8-0x10019c9ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019c9fc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019c8e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  Published *pPVar10;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
                    /* WARNING: Load size is inaccurate */
  pPVar10._0_1_ = *(Published **)(unaff_x22 + 0x174);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x168));
  puVar6 = &DAT_100429b98;
  _swift_getKeyPath(&DAT_100429b98);
  puVar7 = &DAT_100429bc0;
  _swift_getKeyPath(&DAT_100429bc0);
  *(undefined1 *)(unaff_x22 + 0x170) = 1;
  _swift_retain(uVar8);
  Combine::Published::_set_subscript(pPVar10._0_1_,unaff_x22 + 0x170,uVar8,puVar6,puVar7);
  _swift_getKeyPath(&DAT_100429be0);
  _swift_getKeyPath(&DAT_100429c08);
                    /* WARNING: Store size is inaccurate */
  *(Published **)(unaff_x22 + 0x171) = pPVar10._0_1_;
  _swift_retain(uVar8);
  Combine::Published::_set_subscript();
  FUN_10019a25c(uVar9,uVar3,uVar5,uVar2,uVar4,uVar1);
  _swift_task_switch(FUN_10019ca00,0,0);
  return;
}

