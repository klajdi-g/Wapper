// rea decompile_all
// name: FUN_100228700
// address: 0x100228700
// body: available
// range: 0x100228700-0x100228b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100228700(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  bool bVar2;
  CharacterSet CVar3;
  long lVar4;
  URL UVar5;
  CharacterSet CVar6;
  CharacterSet CVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  code *pcVar13;
  _StringGuts _Var14;
  long lVar15;
  long lVar16;
  long lVar17;
  CharacterSet in;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_110 [8];
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  in.unknown = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar9 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar17 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar10 = *param_4;
    lVar11 = *(long *)(extraout_x12 + 0x48);
    puVar18 = (undefined *)(lVar10 + lVar11 * (param_3 + -1));
    param_1 = param_1 - param_3;
    lVar15 = lVar10 + lVar11 * param_3;
    puVar19 = puVar18;
    lVar16 = lVar15;
    lVar12 = param_1;
LAB_1002288b4:
    do {
      FUN_10002f154(lVar15,lVar20);
      UVar5.unknown = puVar18;
      FUN_10002f154(puVar18,lVar17);
      SVar21 = Foundation::URL::get_lastPathComponent(UVar5);
      CVar6.unknown = SVar21.bridgeObject;
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar21.str);
      FUN_100026df4();
      SVar21 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar7.unknown = SVar21.bridgeObject;
      pcVar13 = *(code **)(lVar8 + 8);
      (*pcVar13)(in.unknown,CVar3.unknown);
      _swift_bridgeObjectRelease();
      uVar1 = (ulong)SVar21.str & 0xffffffffffff;
      if (((ulong)CVar7.unknown & 0x2000000000000000) != 0) {
        uVar1 = (ulong)CVar7.unknown >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar7);
        SVar21 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar6.unknown = in.unknown;
        (*pcVar13)(in.unknown,CVar3.unknown);
      }
      _Var14.unknown = SVar21.bridgeObject;
      SVar22 = Foundation::URL::get_lastPathComponent((URL)CVar6.unknown);
      Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar22.str);
      SVar23 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      CVar6.unknown = SVar23.bridgeObject;
      (*pcVar13)(in.unknown,CVar3.unknown);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      uVar1 = (ulong)SVar23.str & 0xffffffffffff;
      if (((ulong)CVar6.unknown & 0x2000000000000000) != 0) {
        uVar1 = (ulong)CVar6.unknown >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease();
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar6);
        SVar23 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        (*pcVar13)(in.unknown,CVar3.unknown);
      }
      if (SVar21 == SVar23) {
        _swift_bridgeObjectRelease(_Var14.unknown);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_100029548(lVar17,FUN_10040211c);
        FUN_100029548(lVar20,FUN_10040211c);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar21.str,_Var14,
                           (_StringComparisonResult)(__int8)SVar23.str);
        _swift_bridgeObjectRelease(_Var14.unknown);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_100029548(lVar17,FUN_10040211c);
        FUN_100029548(lVar20,FUN_10040211c);
        if (bVar2) {
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100228b04);
            (*pcVar13)();
          }
          FUN_100007e64(lVar15,lVar9,FUN_10040211c);
          _swift_arrayInitWithTakeFrontToBack(lVar15,puVar18,1,lVar4);
          FUN_100007e64(lVar9,puVar18,FUN_10040211c);
          puVar18 = puVar18 + -lVar11;
          lVar15 = lVar15 + -lVar11;
          bVar2 = param_1 != -1;
          param_1 = param_1 + 1;
          if (bVar2) goto LAB_1002288b4;
        }
      }
      param_3 = param_3 + 1;
      puVar18 = puVar19 + lVar11;
      param_1 = lVar12 + -1;
      lVar15 = lVar16 + lVar11;
      puVar19 = puVar18;
      lVar16 = lVar15;
      lVar12 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

