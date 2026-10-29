// rea decompile_all
// name: FUN_100139168
// address: 0x100139168
// body: available
// range: 0x100139168-0x1001392db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001392d8 to 0x10013a158 FUN_10013a158 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100139168(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Published *pPVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar1 = &DAT_1004274f8;
  _swift_getKeyPath(&DAT_1004274f8);
  puVar2 = &DAT_100427520;
  _swift_getKeyPath(&DAT_100427520);
  Combine::Published::_get_subscript(unaff_x22 + 0x138,uVar4,puVar1,puVar2);
  _swift_release(puVar2);
  _swift_release(puVar1);
  if (*(char *)(unaff_x22 + 0x138) == '\x01') {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100139210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  pPVar6 = *(Published **)(unaff_x22 + 0xb0);
  puVar1 = &DAT_1004274f8;
  _swift_getKeyPath(&DAT_1004274f8);
  puVar2 = &DAT_100427520;
  _swift_getKeyPath(&DAT_100427520);
  *(undefined1 *)(unaff_x22 + 0x139) = 1;
  _swift_retain(pPVar6);
  Combine::Published::_set_subscript(pPVar6,unaff_x22 + 0x139,pPVar6,puVar1,puVar2);
  _swift_getKeyPath(&DAT_100427540);
  _swift_getKeyPath(&DAT_100427568);
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  _swift_retain(pPVar6);
  Combine::Published::_set_subscript();
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001392dc;
  FUN_10013a158();
  return;
}

