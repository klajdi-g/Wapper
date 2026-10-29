// rea decompile_all
// name: FUN_100004c84
// address: 0x100004c84
// body: available
// range: 0x100004c84-0x100004d7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100004c84(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  String SVar5;
  String SVar6;
  undefined1 auVar7 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    while( true ) {
      SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var2.unknown = SVar5.bridgeObject;
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar5 == SVar6) break;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar5.str,_Var2,(_StringComparisonResult)(__int8)SVar6.str);
      uVar4 = (ulong)bVar1;
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(SVar6.bridgeObject);
      if ((bVar1) ||
         (param_2 = param_2 + 1 & ~uVar3,
         (*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0))
      goto LAB_100004d5c;
    }
    _swift_bridgeObjectRelease(_Var2.unknown);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    uVar4 = 1;
  }
LAB_100004d5c:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_2;
  return auVar7;
}

