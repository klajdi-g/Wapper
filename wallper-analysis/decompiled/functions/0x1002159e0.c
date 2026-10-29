// rea decompile_all
// name: FUN_1002159e0
// address: 0x1002159e0
// body: available
// range: 0x1002159e0-0x100215aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002159e0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char local_32;
  char local_31;
  
  puVar2 = &DAT_10042b4b0;
  _swift_getKeyPath(&DAT_10042b4b0);
  puVar3 = &DAT_10042b4d8;
  _swift_getKeyPath(&DAT_10042b4d8);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (local_31 == '\x01') {
    puVar2 = &DAT_10042b540;
    _swift_getKeyPath(&DAT_10042b540);
    puVar3 = &DAT_10042b568;
    _swift_getKeyPath(&DAT_10042b568);
    Combine::Published::_get_subscript(&local_32);
    _swift_release(puVar2);
    _swift_release(puVar3);
    bVar1 = local_32 != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

