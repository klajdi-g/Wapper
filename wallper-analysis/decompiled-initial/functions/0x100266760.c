// rea decompile_all
// name: FUN_100266760
// address: 0x100266760
// body: available
// range: 0x100266760-0x100266953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100266760(long param_1)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  Hasher into;
  ulong uVar4;
  _StringGuts _Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  __int64 _seed;
  undefined *capacity;
  undefined8 uVar10;
  undefined *puVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_1005241a0;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_1005569d0;
    FUN_100002f94(&DAT_1005569d0,&DAT_10042aad0);
    puVar3 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(undefined8 *)(param_1 + 0x20 + (long)puVar11 * 8);
      _seed = *(__int64 *)(puVar3 + 0x28);
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      Swift::Hasher::init(_seed);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar12);
      uVar4 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        do {
          SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var5.unknown = SVar12.bridgeObject;
          SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar12 == SVar13) {
            _swift_bridgeObjectRelease(_Var5.unknown);
            _swift_bridgeObjectRelease(SVar13.bridgeObject);
            goto LAB_1002667e8;
          }
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar12.str,_Var5,
                             (_StringComparisonResult)(__int8)SVar13.str);
          _swift_bridgeObjectRelease(_Var5.unknown);
          _swift_bridgeObjectRelease(SVar13.bridgeObject);
          if (bVar2) goto LAB_1002667e8;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100266954);
        (*pcVar1)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_1002667e8:
      puVar11 = puVar11 + 1;
    } while (puVar11 != capacity);
  }
  return puVar3;
}

