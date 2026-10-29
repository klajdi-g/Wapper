// rea decompile_all
// name: FUN_10015a1a0
// address: 0x10015a1a0
// body: available
// range: 0x10015a1a0-0x10015a283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015a280 to 0x100413d3c /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10015a1a0(undefined8 *param_1,long *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  _StringGuts _Var9;
  
  _Var4.unknown = (undefined *)param_1[2];
  _Var1.unknown = (undefined *)param_1[3];
  _Var5.unknown = (undefined *)param_1[4];
  _Var9.unknown = (undefined *)param_1[5];
  puVar2 = (undefined *)param_2[2];
  puVar6 = (undefined *)param_2[3];
  puVar3 = (undefined *)param_2[4];
  puVar7 = (undefined *)param_2[5];
  if (((((undefined *)*param_1 == (undefined *)*param_2) &&
       ((undefined *)param_1[1] == (undefined *)param_2[1])) ||
      (bVar8 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar8)) &&
     (((_Var4.unknown == puVar2 && (_Var1.unknown == puVar6)) ||
      (bVar8 = Swift::_stringCompareWithSmolCheck
                         (_Var4,_Var1,(_StringComparisonResult)(__int8)puVar2), bVar8)))) {
    if ((_Var5.unknown != puVar3) || (_Var9.unknown != puVar7)) {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var5,_Var9,(_StringComparisonResult)(__int8)puVar3);
      return bVar8;
    }
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

