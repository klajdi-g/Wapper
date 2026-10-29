// rea decompile_all
// name: FUN_1001ade18
// address: 0x1001ade18
// body: available
// range: 0x1001ade18-0x1001adeff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ade18(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  NSData *pNVar6;
  long unaff_x22;
  
  pNVar6 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0xb0));
  _CGImageSourceCreateWithData(pNVar6,0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar2 = *(long *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  if (pNVar6 == (NSData *)0x0) {
    (**(code **)(lVar2 + 8))(uVar4,uVar5);
    FUN_100093624(uVar1,uVar3);
  }
  else {
    FUN_10010f93c(pNVar6,0x5dc);
    (**(code **)(lVar2 + 8))(uVar4,uVar5);
    FUN_100093624(uVar1,uVar3);
    if (pNVar6 != (NSData *)0x0) goto LAB_1001aded4;
  }
  pNVar6 = (NSData *)0x0;
LAB_1001aded4:
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001001adefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pNVar6);
  return;
}

