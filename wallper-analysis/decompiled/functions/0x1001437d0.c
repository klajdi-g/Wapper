// rea decompile_all
// name: FUN_1001437d0
// address: 0x1001437d0
// body: available
// range: 0x1001437d0-0x1001438bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001438b4 to 0x100133284 FUN_100133284 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001437d0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  Published *pPVar5;
  long unaff_x22;
  
  pPVar5 = *(Published **)(unaff_x22 + 0x298);
  puVar2 = &DAT_100427c18;
  _swift_getKeyPath(&DAT_100427c18);
  puVar3 = &DAT_100427c40;
  _swift_getKeyPath(&DAT_100427c40);
  *(undefined1 *)(unaff_x22 + 0x3a2) = 0;
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript(pPVar5,unaff_x22 + 0x3a2,pPVar5,puVar2,puVar3);
  _swift_getKeyPath(&DAT_100427a80);
  _swift_getKeyPath(&DAT_100427aa8);
  *(undefined1 *)(unaff_x22 + 0x3aa) = 1;
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript();
  if (!SCARRY8(*(long *)(unaff_x22 + 0x308),1)) {
    *(long *)(unaff_x22 + 0x358) = *(long *)(unaff_x22 + 0x308) + 1;
    plVar4 = (long *)0x250;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x360) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100143980;
    FUN_100133284();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001438bc);
  (*pcVar1)();
}

