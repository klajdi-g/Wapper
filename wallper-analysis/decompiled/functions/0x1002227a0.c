// rea decompile_all
// name: FUN_1002227a0
// address: 0x1002227a0
// body: available
// range: 0x1002227a0-0x100222e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002227a0(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  CharacterSet CVar5;
  long lVar6;
  undefined *puVar7;
  URL UVar8;
  undefined *puVar9;
  Published *pPVar10;
  void *pvVar11;
  void *pvVar12;
  CharacterSet CVar13;
  _StringGuts _Var14;
  long lVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar16;
  long lVar17;
  long extraout_x12;
  URL UVar18;
  undefined8 unaff_x20;
  code *pcVar19;
  long lVar20;
  undefined *puVar21;
  char *pcVar22;
  CharacterSet in;
  long lVar23;
  String SVar24;
  String SVar25;
  undefined *local_e0;
  undefined *local_d8;
  String local_70;
  
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar15 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  in.unknown = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  FUN_10040211c();
  lVar6 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar6 + 0x40));
  lVar17 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar17 - extraout_x12;
  puVar7 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar18.unknown = (undefined *)(lVar23 - extraout_x8_01);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  puVar21 = UVar18.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10021d764(UVar18.unknown);
  puVar7 = UVar18.unknown;
  (**(code **)(lVar20 + 0x30))(UVar18.unknown,1,UVar8.unknown);
  if ((int)puVar7 == 1) {
    FUN_10002a29c(UVar18.unknown,&DAT_100553d90,&DAT_10041bf10);
    return;
  }
  _Var14.unknown = puVar21;
  (**(code **)(lVar20 + 0x20))(puVar21,UVar18.unknown,UVar8.unknown);
  Foundation::URL::_get_scheme((URL)_Var14.unknown);
  if (UVar18.unknown == (undefined *)0x0) {
LAB_100222978:
    local_d8 = UVar8.unknown;
    SVar24 = Foundation::URL::get_lastPathComponent((URL)_Var14.unknown);
    pvVar11 = SVar24.bridgeObject;
    _swift_getKeyPath(&DAT_10042b588);
    pPVar10 = (Published *)&DAT_10042b5b0;
    _swift_getKeyPath(&DAT_10042b5b0);
    local_70 = SVar24;
    _swift_retain();
    _swift_bridgeObjectRetain(pvVar11);
    Combine::Published::_set_subscript(pPVar10,&local_70);
    puVar7 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar9 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar7);
    _swift_release(puVar9);
    pcVar3 = local_70.str;
    pcVar16 = *(char **)(local_70.str + 0x10);
    if (pcVar16 == (char *)0x0) {
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(pcVar3);
      UVar8.unknown = local_d8;
    }
    else {
      pcVar22 = (char *)0x0;
      bVar2 = *(byte *)(lVar6 + 0x50);
      local_e0 = puVar21;
      do {
        if (*(char **)(pcVar3 + 0x10) <= pcVar22) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100222e64);
          (*pcVar19)();
        }
        UVar8.unknown =
             pcVar3 + *(long *)(lVar6 + 0x48) * (long)pcVar22 +
                      ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
        FUN_10002f154(UVar8.unknown,lVar17);
        local_70 = Foundation::URL::get_lastPathComponent(UVar8);
        pvVar12 = local_70.bridgeObject;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_70.str);
        FUN_100026df4();
        SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar13.unknown = SVar25.bridgeObject;
        pcVar19 = *(code **)(lVar15 + 8);
        (*pcVar19)(in.unknown,CVar5.unknown);
        _swift_bridgeObjectRelease(pvVar12);
        uVar1 = (ulong)SVar25.str & 0xffffffffffff;
        if (((ulong)CVar13.unknown & 0x2000000000000000) != 0) {
          uVar1 = (ulong)CVar13.unknown >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar13);
          SVar25 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (*pcVar19)(in.unknown,CVar5.unknown);
        }
        _Var14.unknown = SVar25.bridgeObject;
        if (SVar25 == SVar24) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          FUN_100029548(lVar17,FUN_10040211c);
LAB_100222d5c:
          _swift_bridgeObjectRelease(pcVar3);
          _swift_bridgeObjectRelease(pvVar11);
          puVar7 = &DAT_10042b4f8;
          _swift_getKeyPath(&DAT_10042b4f8);
          pPVar10 = (Published *)&DAT_10042b520;
          _swift_getKeyPath(&DAT_10042b520);
          local_70.str = pcVar22;
          _swift_retain(unaff_x20);
          Combine::Published::_set_subscript(pPVar10,&local_70,unaff_x20,puVar7,pPVar10);
          puVar21 = local_e0;
          UVar8.unknown = local_d8;
          goto LAB_100222e24;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar25.str,_Var14,
                           (_StringComparisonResult)(__int8)SVar24.str);
        _swift_bridgeObjectRelease(_Var14.unknown);
        FUN_100029548(lVar17,FUN_10040211c);
        if (bVar4) goto LAB_100222d5c;
        pcVar22 = pcVar22 + 1;
      } while (pcVar16 != pcVar22);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(pcVar3);
      puVar21 = local_e0;
      UVar8.unknown = local_d8;
    }
  }
  else {
    if (_Var14.unknown == (undefined *)0x7463617265746e69 &&
        UVar18.unknown == (undefined *)0xeb00000000657669) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var14,(_StringGuts)UVar18.unknown,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease();
      _Var14.unknown = UVar18.unknown;
      if (!bVar4) goto LAB_100222978;
    }
    SVar24 = Foundation::URL::get_absoluteString(UVar18);
    _swift_getKeyPath(&DAT_10042b588);
    _swift_getKeyPath(&DAT_10042b5b0);
    local_70 = SVar24;
    _swift_retain();
    Combine::Published::_set_subscript(SVar24.bridgeObject,&local_70);
    puVar7 = &DAT_10042b5e8;
    _swift_getKeyPath(&DAT_10042b5e8);
    puVar9 = &DAT_10042b610;
    _swift_getKeyPath(&DAT_10042b610);
    Combine::Published::_get_subscript(&local_70);
    _swift_release(puVar7);
    _swift_release(puVar9);
    pcVar3 = local_70.str;
    pcVar16 = *(char **)(local_70.str + 0x10);
    if (pcVar16 != (char *)0x0) {
      pcVar22 = (char *)0x0;
      do {
        if (*(char **)(pcVar3 + 0x10) <= pcVar22) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100222e68);
          (*pcVar19)();
        }
        UVar18.unknown =
             pcVar3 + *(long *)(lVar6 + 0x48) * (long)pcVar22 +
                      ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
        FUN_10002f154(UVar18.unknown,lVar23);
        SVar24 = Foundation::URL::get_absoluteString(UVar18);
        _Var14.unknown = SVar24.bridgeObject;
        SVar25 = Foundation::URL::get_absoluteString((URL)SVar24.str);
        if (SVar24 == SVar25) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          _swift_bridgeObjectRelease(SVar25.bridgeObject);
          FUN_100029548(lVar23,FUN_10040211c);
LAB_100222dd8:
          _swift_bridgeObjectRelease(pcVar3);
          _swift_getKeyPath(&DAT_10042b4f8);
          pPVar10 = (Published *)&DAT_10042b520;
          _swift_getKeyPath(&DAT_10042b520);
          local_70.str = pcVar22;
          _swift_retain();
          Combine::Published::_set_subscript(pPVar10,&local_70);
          goto LAB_100222e24;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,_Var14,
                           (_StringComparisonResult)(__int8)SVar25.str);
        _swift_bridgeObjectRelease(_Var14.unknown);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        FUN_100029548(lVar23,FUN_10040211c);
        if (bVar4) goto LAB_100222dd8;
        pcVar22 = pcVar22 + 1;
      } while (pcVar16 != pcVar22);
    }
    _swift_bridgeObjectRelease(pcVar3);
  }
LAB_100222e24:
  FUN_100217d50();
  (**(code **)(lVar20 + 8))(puVar21,UVar8.unknown);
  return;
}

