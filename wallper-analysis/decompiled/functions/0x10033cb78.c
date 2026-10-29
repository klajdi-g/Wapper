// rea decompile_all
// name: FUN_10033cb78
// address: 0x10033cb78
// body: available
// range: 0x10033cb78-0x10033cc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033cb78(Animation param_1,undefined1 param_2)

{
  Animation AVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published *pPVar4;
  byte local_50 [16];
  undefined *local_40;
  undefined1 local_38;
  
  AVar1 = SwiftUI::Animation::easeOut(0.2,param_1);
  local_40 = param_1.unknown;
  local_38 = param_2;
  SwiftUI::_withAnimation();
  _swift_release(AVar1.unknown);
  pPVar4 = *(Published **)(param_1.unknown + 8);
  puVar2 = &DAT_1004322c0;
  _swift_getKeyPath(&DAT_1004322c0);
  puVar3 = &DAT_1004322e8;
  _swift_getKeyPath(&DAT_1004322e8);
  Combine::Published::_get_subscript(local_50,pPVar4,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if ((local_50[0] & 1) == 0) {
    puVar2 = &DAT_1004322c0;
    _swift_getKeyPath(&DAT_1004322c0);
    puVar3 = &DAT_1004322e8;
    _swift_getKeyPath(&DAT_1004322e8);
    local_50[0] = 1;
    _swift_retain(pPVar4);
    Combine::Published::_set_subscript(pPVar4,local_50,pPVar4,puVar2,puVar3);
    FUN_1001780a8();
  }
  return;
}

