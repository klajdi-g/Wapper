// rea decompile_all
// name: FUN_1001d9924
// address: 0x1001d9924
// body: available
// range: 0x1001d9924-0x1001d998b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001d9924(char param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_10025ee04();
  lVar1 = 0x24;
  if (param_1 != '\0') {
    lVar1 = 0x28;
  }
  if ((*(char *)(unaff_x20 + *(int *)(lVar2 + lVar1)) == '\0') && (FUN_1002a9100(), param_4 != 0)) {
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(param_4);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

