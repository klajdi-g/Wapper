// rea decompile_all
// name: FUN_1001de37c
// address: 0x1001de37c
// body: available
// range: 0x1001de37c-0x1001de917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001de3bc) */
/* WARNING: Removing unreachable block (ram,0x0001001de8e8) */
/* WARNING: Removing unreachable block (ram,0x0001001de5d8) */
/* WARNING: Removing unreachable block (ram,0x0001001de900) */
/* WARNING: Removing unreachable block (ram,0x0001001de754) */
/* WARNING: Removing unreachable block (ram,0x0001001de850) */
/* WARNING: Removing unreachable block (ram,0x0001001de7b0) */
/* WARNING: Removing unreachable block (ram,0x0001001de85c) */

void FUN_1001de37c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  Foundation::Data::_write
            ((URL)*(undefined **)(unaff_x22 + 0xa8),(NSDataWritingOptions)0x1,
             (Data)*(undefined **)(unaff_x22 + 0x98));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  **(undefined1 **)(unaff_x22 + 0x90) = 1;
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001de8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

