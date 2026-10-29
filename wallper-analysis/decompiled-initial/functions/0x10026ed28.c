// rea decompile_all
// name: FUN_10026ed28
// address: 0x10026ed28
// body: available
// range: 0x10026ed28-0x10026f2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10026ed28(char *param_1,undefined *param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  ulong uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  undefined8 *puVar6;
  CharacterSet in;
  char *pcVar7;
  code *pcVar8;
  bool bVar9;
  Locale LVar10;
  LocalizationValue LVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  URL UVar16;
  _StringGuts _Var17;
  CharacterSet CVar18;
  LocalizationValue LVar19;
  void *pvVar20;
  _StringGuts _Var21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar22;
  char *pcVar23;
  _StringGuts _Var24;
  ulong uVar25;
  String *pSVar26;
  String SVar27;
  String SVar28;
  String local_c0;
  undefined8 *local_b0;
  long local_a8;
  CharacterSet local_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  undefined7 extraout_var;
  
  LVar10 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  pvVar20 = (void *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar11 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar11.unknown + -8) + 0x40));
  LVar11.unknown = (undefined *)((long)pvVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_90 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_98 + 0x40));
  lVar12 = 0;
  local_a0.unknown = LVar11.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10040211c();
  local_80 = *(long *)(lVar12 + -8);
  local_78 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  pSVar26 = (String *)
            (LVar11.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) +
            -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_88 = (long)pSVar26 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = ((long)pSVar26 - extraout_x12) - extraout_x12_00;
  local_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (DAT_100557fe0 != -1) {
    _swift_once(&DAT_100557fe0,FUN_10025cd74);
  }
  uVar5 = DAT_100577d70;
  puVar13 = &DAT_10042d2e0;
  _swift_getKeyPath(&DAT_10042d2e0);
  puVar14 = &DAT_10042d308;
  _swift_getKeyPath(&DAT_10042d308);
  Combine::Published::_get_subscript(&local_70,uVar5,puVar13,puVar14);
  _swift_release(puVar13);
  _swift_release(puVar14);
  pcVar7 = local_70.str;
  pcVar23 = pcVar7;
  if (*(long *)(local_70.str + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_70.str);
    pcVar15 = param_1;
    puVar13 = param_2;
    FUN_10000464c();
    if (((ulong)puVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar7);
    }
    else {
      pSVar1 = (String *)(*(long *)(pcVar7 + 0x38) + (long)pcVar15 * 0x10);
      pcVar15 = pSVar1->str;
      pcVar23 = pSVar1->bridgeObject;
      SVar28 = *pSVar1;
      _swift_bridgeObjectRetain(pcVar23);
      _swift_bridgeObjectRelease_n(pcVar7,2);
      uVar25 = (ulong)pcVar15 & 0xffffffffffff;
      if (((ulong)pcVar23 & 0x2000000000000000) != 0) {
        uVar25 = (ulong)pcVar23 >> 0x38 & 0xf;
      }
      if (uVar25 != 0) {
        return SVar28;
      }
    }
  }
  local_b0 = (undefined8 *)(lVar12 - extraout_x12_01);
  _swift_bridgeObjectRelease(pcVar23);
  puVar13 = &DAT_10042d1d8;
  _swift_getKeyPath(&DAT_10042d1d8);
  puVar14 = &DAT_10042d200;
  _swift_getKeyPath(&DAT_10042d200);
  Combine::Published::_get_subscript(&local_70);
  _swift_release(puVar13);
  _swift_release(puVar14);
  _Var21.unknown = local_70.str;
  uVar25 = *(ulong *)(local_70.str + 0x10);
  if (uVar25 != 0) {
    uVar22 = 0;
    local_c0.str = LVar11.unknown;
    local_c0.bridgeObject = pvVar20;
    do {
      lVar12 = local_88;
      if (*(ulong *)(_Var21.unknown + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10026f2b4);
        (*pcVar8)();
      }
      FUN_100029504(_Var21.unknown +
                    *(long *)(local_80 + 0x48) * uVar22 +
                    ((ulong)*(byte *)(local_80 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(local_80 + 0x50) ^ 0xffffffffffffffff)),local_88,FUN_10040211c
                   );
      FUN_100007e64(lVar12,pSVar26,FUN_10040211c);
      _Var24.unknown = pSVar26->str;
      _Var4.unknown = pSVar26->bridgeObject;
      SVar28 = *pSVar26;
      if (_Var24.unknown == param_1 && _Var4.unknown == param_2) {
LAB_10026f0ec:
        lVar12 = local_a8;
        _swift_bridgeObjectRelease(_Var21.unknown);
        FUN_100007e64(pSVar26,lVar12,FUN_10040211c);
        puVar6 = local_b0;
        FUN_100007e64(lVar12,local_b0,FUN_10040211c);
        puVar2 = (undefined8 *)((long)puVar6 + (long)*(int *)(local_78 + 0x3c));
        CVar18.unknown = (undefined *)puVar2[1];
        if (CVar18.unknown == (undefined *)0x0) {
          pcVar23 = (char *)*puVar6;
          puVar13 = (undefined *)puVar6[1];
          _swift_bridgeObjectRetain(puVar13);
          CVar18.unknown = (undefined *)0x0;
        }
        else {
          pcVar23 = (char *)*puVar2;
          puVar13 = CVar18.unknown;
        }
        local_70.bridgeObject = puVar13;
        local_70.str = pcVar23;
        _swift_bridgeObjectRetain();
        in.unknown = local_a0.unknown;
        Foundation::CharacterSet::get_whitespacesAndNewlines(CVar18);
        FUN_100026df4();
        SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        _Var21.unknown = SVar28.bridgeObject;
        (**(code **)(local_98 + 8))(in.unknown,puStack_90);
        _swift_bridgeObjectRelease(puVar13);
        uVar25 = (ulong)SVar28.str & 0xffffffffffff;
        if (((ulong)_Var21.unknown & 0x2000000000000000) != 0) {
          uVar25 = (ulong)_Var21.unknown >> 0x38 & 0xf;
        }
        if (uVar25 != 0) {
          SVar28 = Swift::String::lowercased(SVar28);
          _swift_bridgeObjectRelease(_Var21.unknown);
          local_70 = SVar28;
          SVar27 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
          FUN_100029548(puVar6,FUN_10040211c);
          _swift_bridgeObjectRelease(SVar28.bridgeObject);
          return SVar27;
        }
        FUN_100029548(puVar6,FUN_10040211c);
        LVar11.unknown = local_c0.str;
        break;
      }
      UVar16.unknown._0_1_ =
           Swift::_stringCompareWithSmolCheck(_Var24,_Var4,(_StringComparisonResult)(__int8)param_1)
      ;
      UVar16.unknown._1_7_ = extraout_var;
      if (UVar16.unknown._0_1_) goto LAB_10026f0ec;
      SVar27 = Foundation::URL::get_lastPathComponent(UVar16);
      pvVar20 = SVar27.bridgeObject;
      _Var17.unknown = SVar27.str;
      uVar3 = (ulong)_Var17.unknown & 0xffffffffffff;
      if (((ulong)pvVar20 & 0x2000000000000000) != 0) {
        uVar3 = (ulong)pvVar20 >> 0x38 & 0xf;
      }
      if (uVar3 == 0) {
        _swift_bridgeObjectRelease(pvVar20);
        _swift_bridgeObjectRetain(_Var4.unknown);
        SVar27 = SVar28;
        _Var17.unknown = _Var24.unknown;
      }
      _Var24.unknown = SVar27.bridgeObject;
      if ((_Var17.unknown == param_1) && (_Var24.unknown == param_2)) {
        _swift_bridgeObjectRelease(_Var21.unknown);
        _Var21.unknown = _Var24.unknown;
        goto LAB_10026f0ec;
      }
      bVar9 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar27.str,_Var24,(_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(_Var24.unknown);
      if (bVar9) goto LAB_10026f0ec;
      uVar22 = uVar22 + 1;
      FUN_100029548(pSVar26,FUN_10040211c);
      LVar11.unknown = local_c0.str;
    } while (uVar25 != uVar22);
  }
  _swift_bridgeObjectRelease(_Var21.unknown);
  SVar28.bridgeObject = (void *)0xed00006f65646956;
  SVar28.str = (char *)0x2065746176697250;
  LVar19 = LocalizationValue::_init(SVar28);
  Foundation::Locale::get_current((Locale)LVar19.unknown);
  SVar28 = (extension_Foundation)::Swift::String::_init(LVar11,(Locale)0x0);
  return SVar28;
}

