// rea decompile_all
// name: FUN_1002a7ee8
// address: 0x1002a7ee8
// body: available
// range: 0x1002a7ee8-0x1002a805b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002a7ee8(undefined8 param_1,undefined *param_2,Substring param_3,ulong param_4)

{
  Character CVar1;
  bool bVar2;
  Iterator IVar3;
  Index after;
  Index IVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined8 uVar7;
  Character CVar8;
  
  IVar3.unknown = param_2;
  _Var5.unknown = param_2;
  _swift_bridgeObjectRetain();
  after.unknown = param_3.unknown;
  do {
    while( true ) {
      if (((ulong)after.unknown ^ param_4) < 0x4000) {
        Swift::String::Iterator::_next(IVar3);
        _swift_bridgeObjectRelease(param_2);
        if (_Var5.unknown == (undefined *)0x0) {
          return 1;
        }
        uVar7 = 0;
        param_2 = _Var5.unknown;
        goto LAB_1002a8034;
      }
      CVar8 = Swift::Substring::get_subscript(after,param_3);
      _Var6.unknown = CVar8.bridgeObject;
      IVar3.unknown = param_3.unknown;
      after = Swift::Substring::index(after,param_3);
      IVar4 = after;
      Swift::String::Iterator::_next((Iterator)after.unknown);
      CVar1.bridgeObject = IVar3.unknown;
      CVar1.str = IVar4.unknown;
      if (IVar3.unknown == (undefined *)0x0) {
        _swift_bridgeObjectRelease(_Var6.unknown);
        uVar7 = 1;
        goto LAB_1002a8034;
      }
      if (CVar8 != CVar1) break;
      _Var5.unknown = IVar3.unknown;
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease();
    }
    _Var5.unknown = _Var6.unknown;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar8.str,_Var6,(_StringComparisonResult)(__int8)IVar4.unknown);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease();
  } while (bVar2);
  uVar7 = 0;
LAB_1002a8034:
  _swift_bridgeObjectRelease(param_2);
  return uVar7;
}

