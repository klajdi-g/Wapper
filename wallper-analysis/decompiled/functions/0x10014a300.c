// rea decompile_all
// name: FUN_10014a300
// address: 0x10014a300
// body: available
// range: 0x10014a300-0x10014a3a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014a3a4 to 0x100413d3c /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10014a300(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  _StringGuts _Var3;
  
  _Var3.unknown = (undefined *)param_1[1];
  puVar1 = (undefined *)param_2[1];
  if ((long)_Var3.unknown < 2) {
    if (_Var3.unknown == (undefined *)0x0) {
      if (puVar1 == (undefined *)0x0) {
        return true;
      }
      return false;
    }
    if (_Var3.unknown == (undefined *)0x1) {
      if (puVar1 == (undefined *)0x1) {
        return true;
      }
      return false;
    }
  }
  else {
    if (_Var3.unknown == (undefined *)0x2) {
      if (puVar1 != (undefined *)0x2) {
        return false;
      }
      return true;
    }
    if (_Var3.unknown == (undefined *)0x3) {
      if (puVar1 == (undefined *)0x3) {
        return true;
      }
      return false;
    }
    if (_Var3.unknown == (undefined *)0x4) {
      if (puVar1 == (undefined *)0x4) {
        return true;
      }
      return false;
    }
  }
  if (puVar1 < (undefined *)0x5) {
    return false;
  }
  if (((undefined *)*param_1 == (undefined *)*param_2) && (_Var3.unknown == puVar1)) {
    return true;
  }
  bVar2 = Swift::_stringCompareWithSmolCheck
                    ((undefined *)*param_1,_Var3,
                     (_StringComparisonResult)(__int8)(undefined *)*param_2);
  return bVar2;
}

