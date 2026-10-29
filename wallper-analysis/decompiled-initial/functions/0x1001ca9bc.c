// rea decompile_all
// name: FUN_1001ca9bc
// address: 0x1001ca9bc
// body: available
// range: 0x1001ca9bc-0x1001cab87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ca9bc(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  Hasher into;
  _StringGuts _Var3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  __int64 _seed;
  long lVar6;
  String SVar7;
  String SVar8;
  undefined1 auStack_a8 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1001c90b8();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1001c8840(uVar4 + 1);
    }
    else {
      FUN_1001c9a14();
    }
    lVar6 = *unaff_x20;
    _seed = *(__int64 *)(lVar6 + 0x28);
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Swift::Hasher::init(_seed);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    param_2 = Swift::Hasher::_finalize(into);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_100008040(0);
      do {
        SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var3.unknown = SVar7.bridgeObject;
        SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar7 == SVar8) {
          _swift_bridgeObjectRelease(_Var3.unknown);
          _swift_bridgeObjectRelease(SVar8.bridgeObject);
LAB_1001cab7c:
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001cab88);
          (*pcVar1)();
        }
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar7.str,_Var3,(_StringComparisonResult)(__int8)SVar8.str);
        _swift_bridgeObjectRelease(_Var3.unknown);
        _swift_bridgeObjectRelease(SVar8.bridgeObject);
        if (bVar2) goto LAB_1001cab7c;
        param_2 = param_2 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_2 & 0x3f);
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001cab6c);
  (*pcVar1)();
}

