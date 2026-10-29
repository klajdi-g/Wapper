// rea decompile_all
// name: FUN_10032dee0
// address: 0x10032dee0
// body: available
// range: 0x10032dee0-0x10032e04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032dee0(long param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  bool bVar3;
  State SVar4;
  _StringGuts local_a8;
  _StringGuts local_a0;
  undefined1 local_98;
  State local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  local_70 = *(undefined8 *)(param_1 + 0xa0);
  local_60 = *(undefined1 *)(param_1 + 0xb0);
  local_80 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xa8);
  local_90.unknown = *(undefined **)(param_1 + 0xa0);
  uStack_78 = uVar1;
  local_48 = uVar1;
  FUN_1000087e4(&local_70,&local_a8,&DAT_100553c60,&DAT_100432030);
  FUN_1000087e4(&local_48,&local_a8,&DAT_10055cc10,&DAT_100432038);
  SVar4.unknown = &DAT_10055c968;
  FUN_100002f94(&DAT_10055c968,&DAT_100431b18);
  SwiftUI::State::get_wrappedValue(SVar4);
  _Var2.unknown = local_a0.unknown;
  if (local_a0.unknown != (undefined *)0x0) {
    if ((local_a8.unknown == param_2) && (local_a0.unknown == param_3)) {
      _swift_bridgeObjectRelease(local_a0.unknown);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (local_a8,local_a0,(_StringComparisonResult)(__int8)param_2);
      _swift_bridgeObjectRelease(_Var2.unknown);
      if (!bVar3) goto LAB_10032e000;
    }
    uStack_88 = *(undefined8 *)(param_1 + 0xa8);
    local_90.unknown = *(undefined **)(param_1 + 0xa0);
    local_80 = *(undefined8 *)(param_1 + 0xb0);
    local_a8.unknown = (undefined *)0x0;
    local_a0.unknown = (undefined *)0x0;
    local_98 = 0;
    uStack_78 = uVar1;
    SwiftUI::State::set_wrappedValue(&local_90,&local_a8,SVar4.unknown);
  }
LAB_10032e000:
  FUN_10002a29c(&local_70,&DAT_100553c60,&DAT_100432030);
  FUN_10002a29c(&local_48,&DAT_10055cc10,&DAT_100432038);
  return;
}

