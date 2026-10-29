// rea decompile_all
// name: FUN_100324090
// address: 0x100324090
// body: available
// range: 0x100324090-0x1003241c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100324090(double param_1,long param_2)

{
  State SVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published *pPVar4;
  double dVar5;
  undefined8 local_68;
  double local_60;
  undefined8 uStack_58;
  
  dVar5 = 500.0;
  if (param_1 <= 500.0) {
    dVar5 = param_1;
  }
  dVar5 = (double)(long)dVar5;
  if (param_1 < 0.0) {
    dVar5 = 0.0;
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  local_60 = *(double *)(param_2 + 0x28);
  SVar1.unknown = &DAT_10055c688;
  FUN_100002f94(&DAT_10055c688,&DAT_100431468);
  SwiftUI::State::get_wrappedValue(SVar1);
  puVar2 = &DAT_100431470;
  _swift_getKeyPath(&DAT_100431470);
  puVar3 = &DAT_100431498;
  _swift_getKeyPath(&DAT_100431498);
  Combine::Published::_get_subscript(&local_60,local_68,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release(local_68);
  if (local_60 != dVar5) {
    uStack_58 = *(undefined8 *)(param_2 + 0x30);
    local_60 = *(double *)(param_2 + 0x28);
    SwiftUI::State::get_wrappedValue(SVar1);
    pPVar4 = (Published *)&DAT_100431470;
    _swift_getKeyPath(&DAT_100431470);
    puVar2 = &DAT_100431498;
    _swift_getKeyPath(&DAT_100431498);
    local_60 = dVar5;
    Combine::Published::_set_subscript(pPVar4,&local_60,local_68,pPVar4,puVar2);
  }
  return;
}

