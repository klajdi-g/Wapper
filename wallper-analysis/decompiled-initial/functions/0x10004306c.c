// rea decompile_all
// name: FUN_10004306c
// address: 0x10004306c
// body: available
// range: 0x10004306c-0x100043113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000430fc to 0x100043008 FUN_100043008 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10004306c(_StringGuts param_1,URL param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  
  Foundation::URL::_get_scheme((URL)param_1.unknown);
  if (param_2.unknown == (undefined *)0x0) {
    return (undefined *)0x7;
  }
  _Var4.unknown = param_2.unknown;
  if ((param_1.unknown == (undefined *)0x7463617265746e69) &&
     (param_2.unknown == (undefined *)0xeb00000000657669)) {
    _swift_bridgeObjectRelease();
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      (param_1,(_StringGuts)param_2.unknown,(_StringComparisonResult)0x69);
    _swift_bridgeObjectRelease();
    if (!bVar2) {
      return (undefined *)0x7;
    }
  }
  Foundation::URL::_get_host(param_2);
  puVar3 = (undefined *)0x0;
  if (_Var4.unknown != (undefined *)0x0) {
    puVar3 = param_2.unknown;
  }
  puVar1 = (undefined *)0xe000000000000000;
  if (_Var4.unknown != (undefined *)0x0) {
    puVar1 = _Var4.unknown;
  }
  FUN_100043008(puVar3,puVar1);
  return puVar3;
}

