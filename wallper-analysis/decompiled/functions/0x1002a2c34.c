// rea decompile_all
// name: FUN_1002a2c34
// address: 0x1002a2c34
// body: available
// range: 0x1002a2c34-0x1002a2ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002a2ca4) */

void FUN_1002a2c34(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    (extension_AVFoundation)::__C::AVAsynchronousKeyValueLoading::_value();
  }
  else {
    pcVar2 = thunk_FUN_1002a4ab8;
    FUN_1002a31e8(uVar1,thunk_FUN_1002a4ab8,&DAT_100559d18,&DAT_10042ded8);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
    *(int *)(unaff_x22 + 0x58) = (int)pcVar2;
    *(int *)(unaff_x22 + 0x5c) = (int)((ulong)pcVar2 >> 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a2ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

