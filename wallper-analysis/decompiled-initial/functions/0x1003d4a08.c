// rea decompile_all
// name: FUN_1003d4a08
// address: 0x1003d4a08
// body: available
// range: 0x1003d4a08-0x1003d4cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d4a08(byte param_1,undefined8 *param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  int iVar3;
  bool bVar4;
  long lVar5;
  Animation AVar6;
  long lVar7;
  long lVar8;
  Binding BVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *apuStack_90 [5];
  byte local_68;
  
  lVar5 = 0;
  FUN_10040211c();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)apuStack_90 + lVar7);
  AVar6.unknown = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar6.unknown + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar11 - extraout_x12_00;
  AVar6 = SwiftUI::Animation::easeOut(0.12,AVar6);
  apuStack_90[4] = param_2;
  local_68 = param_1;
  SwiftUI::_withAnimation();
  _swift_release(AVar6.unknown);
  if ((param_1 & 1) == 0) {
    lVar8 = 0;
    FUN_1003e4bc8();
    iVar3 = *(int *)(lVar8 + 0x18);
    BVar9.unknown = &DAT_100560758;
    FUN_100002f94(&DAT_100560758,&DAT_100436160);
    SwiftUI::Binding::get_wrappedValue(BVar9);
    lVar8 = lVar13;
    (**(code **)(lVar14 + 0x30))(lVar13,1,lVar5);
    if ((int)lVar8 != 0) goto LAB_1003d4cc0;
    FUN_100029504(lVar13,puVar12,FUN_10040211c);
    FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
    _Var1.unknown = (undefined *)*puVar12;
    _Var2.unknown = *(undefined **)((long)apuStack_90 + lVar7 + 8);
    _swift_bridgeObjectRetain(_Var2.unknown);
    FUN_100029548(puVar12,FUN_10040211c);
    if (_Var1.unknown == (undefined *)*param_2 && _Var2.unknown == (undefined *)param_2[1]) {
      _swift_bridgeObjectRelease(_Var2.unknown);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)(undefined *)*param_2);
      _swift_bridgeObjectRelease(_Var2.unknown);
      if (!bVar4) {
        return;
      }
    }
    (**(code **)(lVar14 + 0x38))(lVar10,1,1,lVar5);
    FUN_1000087e4(lVar10,lVar11,&DAT_10054ac40,&DAT_10041ce70);
  }
  else {
    FUN_100029504(param_2,lVar10,FUN_10040211c);
    (**(code **)(lVar14 + 0x38))(lVar10,0,1,lVar5);
    lVar7 = 0;
    FUN_1003e4bc8();
    iVar3 = *(int *)(lVar7 + 0x18);
    FUN_1000087e4(lVar10,lVar11,&DAT_10054ac40,&DAT_10041ce70);
    BVar9.unknown = &DAT_100560758;
    FUN_100002f94(&DAT_100560758,&DAT_100436160);
  }
  SwiftUI::Binding::set_wrappedValue((Binding *)((long)param_2 + (long)iVar3),lVar11,BVar9.unknown);
  lVar13 = lVar10;
LAB_1003d4cc0:
  FUN_10002a29c(lVar13,&DAT_10054ac40,&DAT_10041ce70);
  return;
}

