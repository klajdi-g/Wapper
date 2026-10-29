// rea decompile_all
// name: FUN_10008a1fc
// address: 0x10008a1fc
// body: available
// range: 0x10008a1fc-0x10008a43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008a1fc(undefined8 param_1)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  State SVar7;
  long lVar8;
  code *pcVar9;
  void *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  _StringGuts local_70 [2];
  
  puVar5 = &DAT_10054c040;
  FUN_100002f94(&DAT_10054c040,&DAT_100420500);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)local_70 - extraout_x8;
  lVar6 = 0;
  FUN_10009e280();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = (undefined8 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100097a30();
  SVar7.unknown = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  SwiftUI::State::get_wrappedValue(SVar7);
  lVar8 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar6);
  if ((int)lVar8 == 1) {
    FUN_10002a29c(lVar11,&DAT_10054c040,&DAT_100420500);
  }
  else {
    pcVar9 = FUN_10009e280;
    FUN_100007e64(lVar11,puVar10);
    local_70[0].unknown = (undefined *)*puVar10;
    local_70[1].unknown = (undefined *)puVar10[1];
    _swift_bridgeObjectRetain();
    SVar13.bridgeObject = (void *)0xe100000000000000;
    SVar13.str = (char *)0x7c;
    SVar15.bridgeObject = in_x3;
    SVar15.str = (char *)pcVar9;
    Swift::String::append(SVar13,SVar15);
    _Var1.unknown = local_70[1].unknown;
    SVar13 = *(String *)(puVar10 + 2);
    _swift_bridgeObjectRetain(local_70[1].unknown);
    SVar16.bridgeObject = in_x3;
    SVar16.str = (char *)pcVar9;
    Swift::String::append(SVar13,SVar16);
    _swift_bridgeObjectRelease(_Var1.unknown);
    _Var2.unknown = local_70[1].unknown;
    _Var1.unknown = local_70[0].unknown;
    local_70[0].unknown = (undefined *)*unaff_x20;
    local_70[1].unknown = (undefined *)unaff_x20[1];
    _swift_bridgeObjectRetain();
    SVar14.bridgeObject = (void *)0xe100000000000000;
    SVar14.str = (char *)0x7c;
    SVar17.bridgeObject = in_x3;
    SVar17.str = (char *)pcVar9;
    Swift::String::append(SVar14,SVar17);
    _Var3.unknown = local_70[1].unknown;
    SVar13 = *(String *)(unaff_x20 + 2);
    _swift_bridgeObjectRetain(local_70[1].unknown);
    SVar18.bridgeObject = in_x3;
    SVar18.str = (char *)pcVar9;
    Swift::String::append(SVar13,SVar18);
    _swift_bridgeObjectRelease(_Var3.unknown);
    _Var3.unknown = local_70[1].unknown;
    if ((_Var1.unknown == local_70[0].unknown) && (_Var2.unknown == local_70[1].unknown)) {
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)local_70[0].unknown);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar4) {
        FUN_100007e64(puVar10,param_1,FUN_10009e280);
        return;
      }
    }
    FUN_100095498(puVar10);
  }
  FUN_100029504();
  return;
}

