// rea decompile_all
// name: FUN_1001ca358
// address: 0x1001ca358
// body: available
// range: 0x1001ca358-0x1001ca503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001ca358(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  Hasher into;
  ulong uVar2;
  _StringGuts _Var3;
  ulong uVar4;
  long *unaff_x20;
  __int64 _seed;
  long lVar5;
  String SVar6;
  String SVar7;
  long local_a8 [9];
  
  lVar5 = *unaff_x20;
  _seed = *(__int64 *)(lVar5 + 0x28);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(_seed);
  into.unknown = (undefined *)local_a8;
  Swift::String::hash(into,SVar6);
  uVar2 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var3.unknown = SVar6.bridgeObject;
      SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar6 == SVar7) {
        _swift_bridgeObjectRelease(_Var3.unknown);
        _swift_bridgeObjectRelease(SVar7.bridgeObject);
LAB_1001ca4d0:
        *param_1 = *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar2 * 8);
        return 0;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar6.str,_Var3,(_StringComparisonResult)(__int8)SVar7.str);
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      if (bVar1) goto LAB_1001ca4d0;
      uVar2 = uVar2 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  local_a8[0] = *unaff_x20;
  FUN_1001ca9bc(param_2,uVar2,lVar5);
  *unaff_x20 = local_a8[0];
  *param_1 = param_2;
  return 1;
}

