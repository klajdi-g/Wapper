// rea decompile_all
// name: FUN_10014a618
// address: 0x10014a618
// body: available
// range: 0x10014a618-0x10014a68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10014a618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  unkuint9 local_40;
  
  puVar1 = &DAT_1004280e0;
  _swift_getKeyPath(&DAT_1004280e0);
  puVar2 = &DAT_100428108;
  _swift_getKeyPath(&DAT_100428108);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  auVar3._9_7_ = 0;
  auVar3._0_9_ = local_40;
  return auVar3;
}

