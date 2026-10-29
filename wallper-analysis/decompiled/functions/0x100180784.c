// rea decompile_all
// name: FUN_100180784
// address: 0x100180784
// body: available
// range: 0x100180784-0x100180803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100180784(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar5 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_10042a230;
  _swift_getKeyPath(&DAT_10042a230);
  puVar3 = &DAT_10042a258;
  _swift_getKeyPath(&DAT_10042a258);
  local_50 = uVar5;
  local_48 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_50,uVar4,pPVar2,puVar3);
  return;
}

