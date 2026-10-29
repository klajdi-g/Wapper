// rea decompile_all
// name: FUN_1001393b4
// address: 0x1001393b4
// body: available
// range: 0x1001393b4-0x100139497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001393b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  pPVar4 = *(Published **)(unaff_x22 + 0xb0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  puVar1 = &DAT_100427590;
  _swift_getKeyPath(&DAT_100427590);
  puVar2 = &DAT_1004275b8;
  _swift_getKeyPath(&DAT_1004275b8);
  *(undefined1 *)(unaff_x22 + 0x13c) = 1;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,unaff_x22 + 0x13c,pPVar4,puVar1,puVar2);
  pPVar4 = *(Published **)(unaff_x22 + 0xb0);
  puVar1 = &DAT_1004274f8;
  _swift_getKeyPath(&DAT_1004274f8);
  puVar2 = &DAT_100427520;
  _swift_getKeyPath(&DAT_100427520);
  *(undefined1 *)(unaff_x22 + 0x13b) = 0;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,unaff_x22 + 0x13b,pPVar4,puVar1,puVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100139494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

