// rea decompile_all
// name: FUN_1002cba3c
// address: 0x1002cba3c
// body: available
// range: 0x1002cba3c-0x1002cbaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cbaa4 to 0x1002c9fdc FUN_1002c9fdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cba3c(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002cb204();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  puVar2 = &DAT_100556a40;
  FUN_100002f94(&DAT_100556a40,&DAT_10042abc0);
  FUN_1002c9fdc(unaff_x20 + uVar3,
                unaff_x20 +
                (uVar3 + lVar1 + (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50) &
                ((ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}

