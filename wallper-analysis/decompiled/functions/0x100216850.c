// rea decompile_all
// name: FUN_100216850
// address: 0x100216850
// body: available
// range: 0x100216850-0x10021693b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100216850(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = &DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  puVar3 = &DAT_10042b5b0;
  _swift_getKeyPath(&DAT_10042b5b0);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _Var4.unknown = local_40;
  _Var5.unknown = puStack_38;
  FUN_10022a100();
  _Var6.unknown = _Var5.unknown;
  _swift_bridgeObjectRelease();
  if (_Var5.unknown == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_10026ac6c();
    if ((_Var4.unknown == puStack_38) && (_Var5.unknown == _Var6.unknown)) {
      bVar1 = true;
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var5,(_StringComparisonResult)(__int8)puStack_38);
    }
    _swift_bridgeObjectRelease(_Var5.unknown);
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  return bVar1;
}

