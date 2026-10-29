// rea decompile_all
// name: FUN_100134390
// address: 0x100134390
// body: available
// range: 0x100134390-0x1001345cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001345c8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100134390(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  Published *pPVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *(undefined1 *)(unaff_x22 + 0x243);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x220);
  pcVar11 = *(code **)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar4 = *(long *)(unaff_x22 + 0x1b8);
  lVar2 = *(long *)(unaff_x22 + 0x120);
  lVar5 = *(long *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  pPVar12 = *(Published **)(unaff_x22 + 0x108);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x238));
  puVar9 = &DAT_100426f40;
  _swift_getKeyPath(&DAT_100426f40);
  puVar10 = &DAT_100426f68;
  _swift_getKeyPath(&DAT_100426f68);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar14;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar13;
  _swift_bridgeObjectRetain(uVar13);
  _swift_retain(pPVar12);
  Combine::Published::_set_subscript
            (pPVar12,(undefined8 *)(unaff_x22 + 0xa8),pPVar12,puVar9,puVar10);
  (*pcVar11)(uVar6,lVar5 + *(int *)(lVar2 + 0x14),uVar1);
  (**(code **)(lVar4 + 0x38))(uVar6,0,1,uVar1);
  _swift_getKeyPath(&DAT_100426f88);
  _swift_getKeyPath(&DAT_100426fb0);
  FUN_100077938(uVar6,uVar3);
  _swift_retain(pPVar12);
  Combine::Published::_set_subscript();
  FUN_100137f9c(uVar6);
  uVar8 = *(undefined1 *)(lVar5 + *(int *)(lVar2 + 0x18));
  _swift_getKeyPath(&DAT_100426fd0);
  _swift_getKeyPath(&DAT_100426ff8);
  *(undefined1 *)(unaff_x22 + 0x240) = uVar8;
  _swift_retain(pPVar12);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427018);
  _swift_getKeyPath(&DAT_100427040);
  *(undefined1 *)(unaff_x22 + 0x241) = 1;
  _swift_retain(pPVar12);
  Combine::Published::_set_subscript();
  _swift_getKeyPath(&DAT_100427060);
  _swift_getKeyPath(&DAT_100427088);
  *(undefined1 *)(unaff_x22 + 0x242) = uVar7;
  _swift_retain(pPVar12);
  Combine::Published::_set_subscript();
  _swift_task_switch(FUN_1001345cc,0,0);
  return;
}

