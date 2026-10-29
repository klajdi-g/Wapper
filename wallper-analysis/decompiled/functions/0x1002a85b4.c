// rea decompile_all
// name: FUN_1002a85b4
// address: 0x1002a85b4
// body: available
// range: 0x1002a85b4-0x1002a8797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002a85b4(void *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  bool bVar1;
  Substring SVar2;
  _StringGuts _Var3;
  Index after;
  uint uVar4;
  void *pvVar5;
  _StringGuts _Var6;
  undefined8 uVar8;
  undefined8 uVar9;
  Character CVar10;
  String SVar11;
  Index IVar7;
  
  _swift_bridgeObjectRetain(param_2);
  SVar2.unknown = (undefined *)0x1;
  pvVar5 = param_1;
  FUN_1002a8150(1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  after.unknown = SVar2.unknown;
  while( true ) {
    if (((ulong)after.unknown ^ (ulong)pvVar5) < 0x4000) {
      _swift_bridgeObjectRelease(param_4);
      return (undefined *)0x0;
    }
    CVar10 = Swift::Substring::get_subscript(after,SVar2);
    _Var6.unknown = CVar10.bridgeObject;
    _Var3.unknown = CVar10.str;
    if (((_Var3.unknown == (undefined *)0x2b) && (_Var6.unknown == (undefined *)0xe100000000000000))
       || (bVar1 = Swift::_stringCompareWithSmolCheck(_Var3,_Var6,(_StringComparisonResult)0x2b),
          bVar1)) break;
    if ((_Var3.unknown == (undefined *)0x2d) && (_Var6.unknown == (undefined *)0xe100000000000000))
    {
      _Var6.unknown = param_4;
      param_4 = (undefined *)0xe100000000000000;
      break;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var3,_Var6,(_StringComparisonResult)0x2d);
    _swift_bridgeObjectRelease(_Var6.unknown);
    if (bVar1) goto LAB_1002a86ec;
    after = Swift::Substring::index(after,SVar2);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
LAB_1002a86ec:
  _swift_bridgeObjectRelease(param_4);
  SVar11.bridgeObject = param_1;
  SVar11.str = after.unknown;
  IVar7.unknown = after.unknown;
  uVar8 = param_2;
  SVar2 = Swift::String::get_subscript((Range<Index>)0xf,SVar11);
  uVar4 = (uint)IVar7.unknown;
  uVar9 = uVar8;
  FUN_1002a81f0();
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar4 & 0xff) == 1) {
    return (undefined *)0x0;
  }
  FUN_10029bb7c(after.unknown,param_1,param_2);
  uVar4 = (uint)param_1;
  FUN_1002a81f0();
  _swift_bridgeObjectRelease(uVar9);
  if ((uVar4 & 0xff) != 1) {
    return SVar2.unknown;
  }
  return (undefined *)0x0;
}

