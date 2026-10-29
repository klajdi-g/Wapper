// rea decompile_all
// name: FUN_100135680
// address: 0x100135680
// body: available
// range: 0x100135680-0x10013571f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10013571c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100135680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  pPVar3 = *(Published **)(unaff_x22 + 0x128);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x210));
  puVar1 = &DAT_1004270b0;
  _swift_getKeyPath(&DAT_1004270b0);
  puVar2 = &DAT_1004270d8;
  _swift_getKeyPath(&DAT_1004270d8);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
  _swift_retain(pPVar3);
  Combine::Published::_set_subscript(pPVar3,(undefined8 *)(unaff_x22 + 0xd8),pPVar3,puVar1,puVar2);
  _swift_task_switch(FUN_100135720,0,0);
  return;
}

