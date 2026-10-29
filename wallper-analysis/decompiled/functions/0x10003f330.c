// rea decompile_all
// name: FUN_10003f330
// address: 0x10003f330
// body: available
// range: 0x10003f330-0x10003f3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003f330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x628);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x620);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x618);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x610);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x608);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x600);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x730));
  FUN_100043c34(uVar2,uVar3,uVar7,uVar6,uVar5,uVar4);
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003f3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

