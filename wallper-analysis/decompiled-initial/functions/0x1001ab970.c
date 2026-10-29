// rea decompile_all
// name: FUN_1001ab970
// address: 0x1001ab970
// body: available
// range: 0x1001ab970-0x1001aba97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001ab970(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  _StringGuts _Var6;
  long extraout_x8;
  undefined8 *puVar7;
  String SVar8;
  
  puVar3 = &DAT_100556440;
  FUN_100002f94(&DAT_100556440,&DAT_10042a0f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  UVar5.unknown = (undefined *)param_1[1];
  *puVar7 = *param_1;
  *(undefined **)(&stack0xffffffffffffffc8 + -extraout_x8) = UVar5.unknown;
  iVar1 = *(int *)(puVar3 + 0x30);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))
            ((long)puVar7 + (long)iVar1,param_2,UVar4.unknown);
  _swift_bridgeObjectRetain();
  SVar8 = Foundation::URL::get_absoluteString(UVar5);
  _Var6.unknown = SVar8.bridgeObject;
  if (SVar8.str == (undefined *)0xd00000000000001c &&
      _Var6.unknown == (undefined *)0x80000001004dc890) {
    _swift_bridgeObjectRelease(_Var6.unknown);
    bVar2 = false;
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar8.str,_Var6,(_StringComparisonResult)0x1c);
    _swift_bridgeObjectRelease(_Var6.unknown);
    bVar2 = !bVar2;
  }
  FUN_10002a29c(puVar7,&DAT_100556440,&DAT_10042a0f0);
  return bVar2;
}

