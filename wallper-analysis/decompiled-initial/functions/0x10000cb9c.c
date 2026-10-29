// rea decompile_all
// name: FUN_10000cb9c
// address: 0x10000cb9c
// body: available
// range: 0x10000cb9c-0x10000cc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_10000cb9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  State SVar3;
  undefined8 uVar4;
  long unaff_x20;
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar1 = &DAT_10041c618;
  _swift_getKeyPath(&DAT_10041c618);
  puVar2 = &DAT_10041c640;
  _swift_getKeyPath(&DAT_10041c640);
  Combine::Published::_get_subscript(&local_40,uVar4,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((char)local_40 == '\x01') {
    puVar1 = &DAT_10041c460;
    _swift_getKeyPath(&DAT_10041c460);
    puVar2 = &DAT_10041c488;
    _swift_getKeyPath(&DAT_10041c488);
    Combine::Published::_get_subscript(&local_40,uVar4,puVar1,puVar2);
    _swift_release(puVar1);
    _swift_release(puVar2);
  }
  else {
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x90);
    local_40 = *(undefined8 *)(unaff_x20 + 0x88);
    SVar3.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar3);
    local_40._0_1_ = local_41;
  }
  return (char)local_40;
}

