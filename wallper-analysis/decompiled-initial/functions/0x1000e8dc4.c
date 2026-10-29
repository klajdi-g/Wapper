// rea decompile_all
// name: FUN_1000e8dc4
// address: 0x1000e8dc4
// body: available
// range: 0x1000e8dc4-0x1000e8ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e8dc4(double param_1,long param_2)

{
  State SVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published *pPVar4;
  undefined8 local_68;
  double local_60;
  undefined8 uStack_58;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x50);
  local_60 = *(double *)(param_2 + 0x48);
  SVar1.unknown = &DAT_100551cf8;
  FUN_100002f94(&DAT_100551cf8,&DAT_100423c08);
  SwiftUI::State::get_wrappedValue(SVar1);
  puVar2 = &DAT_100423c50;
  _swift_getKeyPath(&DAT_100423c50);
  puVar3 = &DAT_100423c78;
  _swift_getKeyPath(&DAT_100423c78);
  Combine::Published::_get_subscript(&local_60,local_68,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release(local_68);
  if (local_60 != (double)(long)param_1) {
    uStack_58 = *(undefined8 *)(param_2 + 0x50);
    local_60 = *(double *)(param_2 + 0x48);
    SwiftUI::State::get_wrappedValue(SVar1);
    pPVar4 = (Published *)&DAT_100423c50;
    _swift_getKeyPath(&DAT_100423c50);
    puVar2 = &DAT_100423c78;
    _swift_getKeyPath(&DAT_100423c78);
    local_60 = (double)(long)param_1;
    Combine::Published::_set_subscript(pPVar4,&local_60,local_68,pPVar4,puVar2);
  }
  return;
}

