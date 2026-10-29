// rea decompile_all
// name: FUN_100152394
// address: 0x100152394
// body: available
// range: 0x100152394-0x1001524bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100152394(char *param_1,void *param_2,char *param_3,void *param_4,_StringGuts param_5,
                  _StringGuts param_6)

{
  bool bVar1;
  String SVar4;
  String SVar5;
  String SVar6;
  _StringGuts _Var2;
  void *pvVar3;
  
  if ((param_6.unknown == (undefined *)0x0) ||
     (((param_5.unknown != (undefined *)0xd000000000000022 ||
       (param_6.unknown != (undefined *)0x80000001004de000)) &&
      (bVar1 = Swift::_stringCompareWithSmolCheck(param_5,param_6,(_StringComparisonResult)0x22),
      !bVar1)))) {
    bVar1 = false;
  }
  else {
    if (param_4 == (void *)0x0) {
      SVar4.bridgeObject = param_2;
      SVar4.str = param_1;
      SVar4 = Swift::String::uppercased(SVar4);
      pvVar3 = SVar4.bridgeObject;
      bVar1 = false;
    }
    else {
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      SVar4 = Swift::String::uppercased(SVar5);
      _Var2.unknown = SVar4.bridgeObject;
      SVar6.bridgeObject = param_2;
      SVar6.str = param_1;
      SVar5 = Swift::String::uppercased(SVar6);
      pvVar3 = SVar5.bridgeObject;
      if (_Var2.unknown == (undefined *)0x0) {
        bVar1 = false;
      }
      else if (SVar4 == SVar5) {
        _swift_bridgeObjectRelease(_Var2.unknown);
        bVar1 = true;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar4.str,_Var2,(_StringComparisonResult)(__int8)SVar5.str);
        _swift_bridgeObjectRelease(_Var2.unknown);
      }
    }
    _swift_bridgeObjectRelease(pvVar3);
  }
  return bVar1;
}

