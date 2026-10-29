// rea decompile_all
// name: FUN_10006a04c
// address: 0x10006a04c
// body: available
// range: 0x10006a04c-0x10006a0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006a04c(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  FUN_10006866c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  FUN_10025ee04();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010006a0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (unaff_x20 + uVar3,unaff_x20 + (uVar3 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}

