// rea decompile_all
// name: FUN_10013c994
// address: 0x10013c994
// body: available
// range: 0x10013c994-0x10013d37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10013c994(char *param_1)

{
  ulong uVar1;
  String SVar2;
  String SVar3;
  CharacterSet in;
  DecodingError DVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  URLError UVar9;
  undefined *puVar10;
  __int64 _Var11;
  NSError *self;
  Context CVar12;
  char *pcVar13;
  char *pcVar14;
  void *pvVar15;
  void *pvVar16;
  char *pcVar17;
  URLError UVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar20;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar21;
  undefined8 *puVar22;
  long extraout_x12;
  undefined1 uVar23;
  _StringGuts _Var24;
  long lVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  CharacterSet local_110;
  long local_108;
  undefined *puStack_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  undefined *puStack_c8;
  char *local_c0;
  void *local_b8;
  String local_b0;
  undefined8 local_98;
  undefined1 local_88 [24];
  undefined1 auStack_70 [16];
  URLError UVar8;
  
  puStack_100 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  puVar7 = (undefined *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_110.unknown = puVar7;
  local_e8 = (char *)Swift::DecodingError::Context::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar19 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100554690;
  local_f8 = lVar19;
  FUN_100002f94(&DAT_100554690,&DAT_100427628);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_01;
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  UVar8.unknown = (undefined *)CONCAT71(extraout_var,DVar4.value);
  lVar25 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  puVar22 = (undefined8 *)(lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_e0 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = (long)puVar22 - extraout_x12;
  local_d8 = lVar20;
  puStack_c8 = (undefined *)Foundation::URLError::Code::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar20 = lVar20 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100554698;
  FUN_100002f94(&DAT_100554698,&DAT_100427630);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var24.unknown = (undefined *)(lVar20 - extraout_x8_04);
  UVar9 = Foundation::URLError::typeMetadataAccessor();
  lVar26 = *(long *)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = (long)_Var24.unknown - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_b0.str = param_1;
  _swift_errorRetain(param_1);
  puVar7 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  puVar10 = _Var24.unknown;
  _swift_dynamicCast(_Var24.unknown,&local_b0,puVar7,UVar9.unknown,6);
  if ((int)puVar10 != 0) {
    UVar18 = UVar9;
    (**(code **)(lVar26 + 0x38))(_Var24.unknown,0,1);
    (**(code **)(lVar26 + 0x20))(lVar27,_Var24.unknown,UVar9.unknown);
    local_b0.str = (char *)0x0;
    local_b0.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x16,_Var24);
    _swift_bridgeObjectRelease(local_b0.bridgeObject);
    puVar7 = PTR_typeMetadataAccessor_100520d70;
    local_b0.str = (char *)0x206b726f7774654e;
    local_b0.bridgeObject = (void *)0xef203a726f727265;
    pcVar13 = PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100520d68;
    FUN_1000036d0(&DAT_100558c40,PTR_typeMetadataAccessor_100520d70);
    UVar8 = UVar9;
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
    _Var11 = Foundation::URLError::Code::get_rawValue((Code)UVar8.unknown);
    (**(code **)(local_d0 + 8))(lVar20,puStack_c8);
    local_c0 = (char *)_Var11;
    SVar28 = Swift::CustomStringConvertible::get_description();
    SVar37.bridgeObject = UVar18.unknown;
    SVar37.str = pcVar13;
    Swift::String::append(SVar28,SVar37);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar29.bridgeObject = (void *)0xe200000000000000;
    SVar29.str = (char *)0x2820;
    SVar38.bridgeObject = UVar18.unknown;
    SVar38.str = pcVar13;
    Swift::String::append(SVar29,SVar38);
    pcVar13 = PTR_Foundation__Foundation__URLError_>Swift__Error_100520d80;
    FUN_1000036d0(&DAT_1005546b0,puVar7);
    SVar28 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar39.bridgeObject = UVar18.unknown;
    SVar39.str = pcVar13;
    Swift::String::append(SVar28,SVar39);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar30.bridgeObject = (void *)0xe100000000000000;
    SVar30.str = (char *)0x29;
    SVar40.bridgeObject = UVar18.unknown;
    SVar40.str = pcVar13;
    Swift::String::append(SVar30,SVar40);
    pcVar21 = *(code **)(lVar26 + 8);
    UVar8 = UVar9;
    pcVar13 = local_b0.str;
    pvVar15 = local_b0.bridgeObject;
    goto LAB_10013d098;
  }
  (**(code **)(lVar26 + 0x38))(_Var24.unknown,1,1,UVar9.unknown);
  FUN_10002a29c(_Var24.unknown,&DAT_100554698,&DAT_100427630);
  local_b0.str = param_1;
  _swift_errorRetain(param_1);
  lVar27 = lVar19;
  _swift_dynamicCast(lVar19,&local_b0,puVar7,UVar8.unknown,6);
  if ((int)lVar27 == 0) {
    (**(code **)(lVar25 + 0x38))(lVar19,1,1,UVar8.unknown);
    FUN_10002a29c(lVar19,&DAT_100554690,&DAT_100427628);
    self = Foundation::__convertErrorToNSError();
    objc_stub::domain((ID)self);
    SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var24.unknown = SVar28.bridgeObject;
    SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar28 == SVar31) {
      _swift_bridgeObjectRelease(_Var24.unknown);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar28.str,_Var24,(_StringComparisonResult)(__int8)SVar31.str)
      ;
      _swift_bridgeObjectRelease(_Var24.unknown);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      if (!bVar5) {
        _swift_getErrorValue(param_1,auStack_70,local_88);
        local_b0 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        in.unknown = local_110.unknown;
        pvVar15 = local_b0.bridgeObject;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)local_b0.str);
        FUN_100026df4();
        SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        pvVar16 = SVar28.bridgeObject;
        (**(code **)(local_108 + 8))(in.unknown,puStack_100);
        _swift_bridgeObjectRelease(pvVar15);
        uVar1 = (ulong)SVar28.str & 0xffffffffffff;
        if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar16 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          return SVar28;
        }
        _swift_bridgeObjectRelease(pvVar16);
        SVar28.bridgeObject = (void *)0xed0000726f727265;
        SVar28.str = (char *)0x206e776f6e6b6e55;
        return SVar28;
      }
    }
    objc_stub::localizedDescription((ID)self);
    SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    return SVar28;
  }
  puVar7 = UVar8.unknown;
  (**(code **)(lVar25 + 0x38))(lVar19,0,1);
  lVar27 = local_d8;
  (**(code **)(lVar25 + 0x20))(local_d8,lVar19,UVar8.unknown);
  _Var24.unknown = (undefined *)local_e0;
  (**(code **)(lVar25 + 0x10))(local_e0,lVar27,UVar8.unknown);
  puVar22 = (undefined8 *)_Var24.unknown;
  (**(code **)(lVar25 + 0x58))(_Var24.unknown,UVar8.unknown);
  iVar6 = (int)puVar22;
  if (iVar6 == *(int *)
                PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100523d80
     ) {
    (**(code **)(lVar25 + 0x60))(_Var24.unknown,UVar8.unknown);
    uVar23 = (undefined1)*(undefined8 *)_Var24.unknown;
    puVar10 = &DAT_1005546a0;
    FUN_100002f94(&DAT_1005546a0,&DAT_100427638);
    pcVar14 = local_e8;
    lVar20 = local_f0;
    lVar19 = local_f8;
    _Var24.unknown = _Var24.unknown + (long)*(int *)(puVar10 + 0x30);
    pcVar17 = local_e8;
    (**(code **)(local_f0 + 0x20))(local_f8);
    local_b0.str = (char *)0x0;
    local_b0.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2d,_Var24);
    _swift_bridgeObjectRelease(local_b0.bridgeObject);
    pcVar13 = "Decode error: type mismatch \'";
    local_b0.str = (char *)0xd00000000000001d;
LAB_10013cfdc:
    local_b0.bridgeObject = (void *)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    SVar28 = Swift::__typeName((bool)uVar23);
    SVar41.bridgeObject = puVar7;
    SVar41.str = pcVar17;
    Swift::String::append(SVar28,SVar41);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    CVar12.unknown = (undefined *)0x2074612027;
    SVar32.bridgeObject = (void *)0xe500000000000000;
    SVar32.str = (char *)0x2074612027;
    _Var24.unknown = (undefined *)0xe500000000000000;
    SVar42.bridgeObject = puVar7;
    SVar42.str = pcVar17;
    Swift::String::append(SVar32,SVar42);
  }
  else {
    if (iVar6 == *(int *)
                  PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100523d90
       ) {
      (**(code **)(lVar25 + 0x60))(_Var24.unknown,UVar8.unknown);
      uVar23 = (undefined1)*(undefined8 *)_Var24.unknown;
      puVar10 = &DAT_1005546a0;
      FUN_100002f94(&DAT_1005546a0,&DAT_100427638);
      pcVar14 = local_e8;
      lVar20 = local_f0;
      lVar19 = local_f8;
      _Var24.unknown = _Var24.unknown + (long)*(int *)(puVar10 + 0x30);
      pcVar17 = local_e8;
      (**(code **)(local_f0 + 0x20))(local_f8);
      local_b0.str = (char *)0x0;
      local_b0.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x2f,_Var24);
      _swift_bridgeObjectRelease(local_b0.bridgeObject);
      pcVar13 = "Decode error: value not found \'";
      local_b0.str = (char *)0xd00000000000001f;
      goto LAB_10013cfdc;
    }
    if (iVar6 == *(int *)
                  PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100523d78
       ) {
      (**(code **)(lVar25 + 0x60))(_Var24.unknown,UVar8.unknown);
      puVar10 = &DAT_1005546a8;
      FUN_100002f94(&DAT_1005546a8,&DAT_100427640);
      iVar6 = *(int *)(puVar10 + 0x30);
      FUN_10013d430(_Var24.unknown,&local_b0);
      pcVar13 = local_e8;
      lVar20 = local_f0;
      lVar19 = local_f8;
      _Var24.unknown = _Var24.unknown + (long)iVar6;
      pcVar17 = local_e8;
      (**(code **)(local_f0 + 0x20))(local_f8);
      local_c0 = (char *)0x0;
      local_b8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x24,_Var24);
      _swift_bridgeObjectRelease(local_b8);
      local_c0 = (char *)0xd00000000000001b;
      local_b8 = (void *)0x80000001004de320;
      FUN_100007bd0(&local_b0,local_98);
      SVar28 = Swift::CodingKey::get_stringValue();
      SVar46.bridgeObject = puVar7;
      SVar46.str = pcVar17;
      Swift::String::append(SVar28,SVar46);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      CVar12.unknown = (undefined *)0x2074612027;
      SVar35.bridgeObject = (void *)0xe500000000000000;
      SVar35.str = (char *)0x2074612027;
      pvVar15 = (void *)0xe500000000000000;
      SVar47.bridgeObject = puVar7;
      SVar47.str = pcVar17;
      Swift::String::append(SVar35,SVar47);
      Swift::DecodingError::Context::_get_codingPath(CVar12);
      pcVar14 = CVar12.unknown;
      FUN_10013c818();
      _swift_bridgeObjectRelease(CVar12.unknown);
      SVar36.bridgeObject = pvVar15;
      SVar36.str = pcVar14;
      SVar48.bridgeObject = puVar7;
      SVar48.str = pcVar17;
      Swift::String::append(SVar36,SVar48);
      _swift_bridgeObjectRelease(pvVar15);
      SVar31.bridgeObject = local_b8;
      SVar31.str = local_c0;
      (**(code **)(lVar20 + 8))(lVar19,pcVar13);
      (**(code **)(lVar25 + 8))(lVar27,UVar8.unknown);
      FUN_100043f24(&local_b0);
      return SVar31;
    }
    if (iVar6 != *(int *)
                  PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100523d88
       ) {
      pcVar21 = *(code **)(lVar25 + 8);
      (*pcVar21)(lVar27,UVar8.unknown);
      (*pcVar21)(_Var24.unknown,UVar8.unknown);
      SVar3.bridgeObject = (void *)0xec000000726f7272;
      SVar3.str = (char *)0x652065646f636544;
      return SVar3;
    }
    (**(code **)(lVar25 + 0x60))(_Var24.unknown,UVar8.unknown);
    pcVar14 = local_e8;
    lVar20 = local_f0;
    lVar19 = local_f8;
    pcVar17 = local_e8;
    (**(code **)(local_f0 + 0x20))(local_f8);
    local_b0.str = (char *)0x0;
    local_b0.bridgeObject = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var24);
    CVar12.unknown = local_b0.bridgeObject;
    _swift_bridgeObjectRelease();
    local_b0.str = (char *)0xd000000000000020;
    local_b0.bridgeObject = (void *)0x80000001004de2b0;
  }
  Swift::DecodingError::Context::_get_codingPath(CVar12);
  pcVar13 = CVar12.unknown;
  FUN_10013c818();
  _swift_bridgeObjectRelease(CVar12.unknown);
  SVar33.bridgeObject = _Var24.unknown;
  SVar33.str = pcVar13;
  SVar43.bridgeObject = puVar7;
  SVar43.str = pcVar17;
  Swift::String::append(SVar33,SVar43);
  _swift_bridgeObjectRelease(_Var24.unknown);
  CVar12.unknown = (undefined *)0x209480e220;
  SVar34.bridgeObject = (void *)0xa500000000000000;
  SVar34.str = (char *)0x209480e220;
  SVar44.bridgeObject = puVar7;
  SVar44.str = pcVar17;
  Swift::String::append(SVar34,SVar44);
  SVar28 = Swift::DecodingError::Context::get_debugDescription(CVar12);
  SVar45.bridgeObject = puVar7;
  SVar45.str = pcVar17;
  Swift::String::append(SVar28,SVar45);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  pvVar15 = local_b0.bridgeObject;
  pcVar13 = local_b0.str;
  (**(code **)(lVar20 + 8))(lVar19,pcVar14);
  pcVar21 = *(code **)(lVar25 + 8);
LAB_10013d098:
  SVar2.bridgeObject = pvVar15;
  SVar2.str = pcVar13;
  (*pcVar21)(lVar27,UVar8.unknown);
  return SVar2;
}

