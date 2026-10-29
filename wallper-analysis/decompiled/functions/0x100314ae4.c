// rea decompile_all
// name: FUN_100314ae4
// address: 0x100314ae4
// body: available
// range: 0x100314ae4-0x100314c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314ae4(long param_1,undefined *param_2,undefined *param_3)

{
  bool bVar1;
  State SVar2;
  undefined8 uVar3;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  State local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80.unknown = *(undefined **)(param_1 + 0x10);
  local_70 = uVar3;
  uStack_68 = uVar3;
  FUN_100043d74(&local_60,&local_90);
  FUN_1000087e4(&uStack_68,&local_90,&DAT_10055a7a0,&DAT_10042e998);
  SVar2.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar2);
  if ((local_90.unknown == param_2) && (_Stack_88.unknown == param_3)) {
    _swift_bridgeObjectRelease(_Stack_88.unknown);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (local_90,_Stack_88,(_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(_Stack_88.unknown);
    if (!bVar1) {
      _swift_bridgeObjectRetain(param_3);
      goto LAB_100314bc8;
    }
  }
  param_2 = (undefined *)0x0;
  param_3 = (undefined *)0xe000000000000000;
LAB_100314bc8:
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80.unknown = *(undefined **)(param_1 + 0x10);
  local_90.unknown = param_2;
  _Stack_88.unknown = param_3;
  local_70 = uVar3;
  SwiftUI::State::set_wrappedValue(&local_80,&local_90,SVar2.unknown);
  FUN_100043c00(&local_60);
  FUN_10002a29c(&uStack_68,&DAT_10055a7a0,&DAT_10042e998);
  return;
}

