// rea decompile_all
// name: FUN_10013b218
// address: 0x10013b218
// body: available
// range: 0x10013b218-0x10013b2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013b218(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  pPVar4 = *(Published **)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x120));
  puVar1 = &DAT_100427590;
  _swift_getKeyPath(&DAT_100427590);
  puVar2 = &DAT_1004275b8;
  _swift_getKeyPath(&DAT_1004275b8);
  *(undefined1 *)(unaff_x22 + 0x14a) = 1;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,unaff_x22 + 0x14a,pPVar4,puVar1,puVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010013b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

