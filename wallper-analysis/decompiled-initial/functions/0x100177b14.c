// rea decompile_all
// name: FUN_100177b14
// address: 0x100177b14
// body: available
// range: 0x100177b14-0x100177b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100177b14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  unkuint9 local_40;
  
  puVar1 = &DAT_10042a230;
  _swift_getKeyPath(&DAT_10042a230);
  puVar2 = &DAT_10042a258;
  _swift_getKeyPath(&DAT_10042a258);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  auVar3._9_7_ = 0;
  auVar3._0_9_ = local_40;
  return auVar3;
}

