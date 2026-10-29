// rea decompile_all
// name: FUN_10000bcdc
// address: 0x10000bcdc
// body: available
// range: 0x10000bcdc-0x10000bd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000bcdc(undefined1 *param_1,void *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 auStack_170 [288];
  void *local_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  puVar2 = &DAT_100525ac8;
  _swift_allocObject(&DAT_100525ac8,0x121,7);
  _memcpy(puVar2 + 0x10,param_2,0x110);
  puVar2[0x120] = uVar1;
  local_50 = param_2;
  local_48 = uVar1;
  FUN_100027a7c(param_2,auStack_170);
  FUN_100002f94(&DAT_10054b558,&DAT_10041c910);
  FUN_10002a8d0();
  SwiftUI::Button::_init();
  return;
}

