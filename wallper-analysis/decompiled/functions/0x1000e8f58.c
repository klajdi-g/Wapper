// rea decompile_all
// name: FUN_1000e8f58
// address: 0x1000e8f58
// body: available
// range: 0x1000e8f58-0x1000e9123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000e8f58(void)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  long lVar4;
  undefined1 *puVar5;
  _StringGuts _Var6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  _StringGuts _Var9;
  long lVar10;
  
  puVar2 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffc0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  _Var9.unknown = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = _Var9.unknown + -extraout_x12;
  FUN_1000e3728(puVar8);
  lVar4 = 0;
  FUN_10040211c();
  puVar5 = puVar8;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar8,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_10002a29c(puVar8,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    (**(code **)(lVar10 + 0x10))(_Var9.unknown,puVar8 + *(int *)(lVar4 + 0x14),UVar3.unknown);
    FUN_100029548(puVar8,FUN_10040211c);
    _Var6.unknown = puVar7;
    (**(code **)(lVar10 + 0x20))(puVar7,_Var9.unknown,UVar3.unknown);
    Foundation::URL::_get_scheme((URL)_Var6.unknown);
    if (_Var9.unknown != (undefined *)0x0) {
      if (_Var6.unknown == (undefined *)0x7463617265746e69 &&
          _Var9.unknown == (undefined *)0xeb00000000657669) {
        bVar1 = true;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck(_Var6,_Var9,(_StringComparisonResult)0x69);
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      (**(code **)(lVar10 + 8))(puVar7,UVar3.unknown);
      return bVar1;
    }
    (**(code **)(lVar10 + 8))(puVar7,UVar3.unknown);
  }
  return false;
}

