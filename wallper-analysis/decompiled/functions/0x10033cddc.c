// rea decompile_all
// name: switchD_10033ccc8::caseD_f0
// address: 0x10033cddc
// body: available
// range: 0x10033cddc-0x10033d2fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void switchD_10033ccc8::caseD_f0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  bool bVar7;
  Date DVar8;
  long lVar9;
  State SVar10;
  StateObject SVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  char *pcVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  char *apcStack_150 [2];
  String local_140;
  char *local_130;
  char *local_120;
  undefined *local_118;
  char *local_110;
  void *pvStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  _StringGuts local_f0;
  _StringGuts _Stack_e8;
  char *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  void *pvStack_98;
  char *local_88;
  char *local_80;
  void *pvStack_78;
  
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = (long)apcStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  FUN_10009e280();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar15 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  Foundation::Date::init();
  FUN_10009f5dc(puVar15,lVar16);
  (**(code **)(lVar17 + 8))(lVar16,DVar8.unknown);
  pcVar1 = (char *)*puVar15;
  puVar14 = (undefined *)puVar15[1];
  local_f0.unknown = pcVar1;
  _Stack_e8.unknown = puVar14;
  _swift_bridgeObjectRetain(puVar14);
  SVar20.bridgeObject = (void *)0xe100000000000000;
  SVar20.str = (char *)0x7c;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar20,SVar24);
  _Var5.unknown = _Stack_e8.unknown;
  pcVar13 = ((String *)(puVar15 + 2))->str;
  pvVar2 = (void *)puVar15[3];
  SVar20 = *(String *)(puVar15 + 2);
  _swift_bridgeObjectRetain(_Stack_e8.unknown);
  SVar25.bridgeObject = param_4;
  SVar25.str = param_3;
  apcStack_150[1] = pcVar13;
  Swift::String::append(SVar20,SVar25);
  _swift_bridgeObjectRelease(_Var5.unknown);
  _Var5.unknown = _Stack_e8.unknown;
  _swift_bridgeObjectRetain(_Stack_e8.unknown);
  SVar19.bridgeObject = (void *)0xe100000000000000;
  SVar19.str = (char *)0x23;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar19,SVar26);
  _swift_bridgeObjectRelease(_Var5.unknown);
  _Var6.unknown = _Stack_e8.unknown;
  _Var5.unknown = local_f0.unknown;
  SVar20 = Swift::CustomStringConvertible::get_description();
  local_f0.unknown = _Var5.unknown;
  _Stack_e8.unknown = _Var6.unknown;
  _swift_bridgeObjectRetain(_Var6.unknown);
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar20,SVar27);
  _swift_bridgeObjectRelease(_Var6.unknown);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  _Var6.unknown = _Stack_e8.unknown;
  _Var5.unknown = local_f0.unknown;
  pvStack_98 = *(void **)(unaff_x20 + 0x38);
  local_a0 = *(char **)(unaff_x20 + 0x30);
  pcVar18 = *(char **)(unaff_x20 + 0x40);
  _Stack_e8.unknown = *(undefined **)(unaff_x20 + 0x38);
  local_f0.unknown = *(undefined **)(unaff_x20 + 0x30);
  local_e0 = pcVar18;
  local_88 = pcVar18;
  local_80 = local_a0;
  pvStack_78 = pvStack_98;
  FUN_1000087e4(&local_80,&local_120,&DAT_100549db0,&DAT_100419ed0);
  pcVar13 = &DAT_10054ac48;
  puVar12 = &DAT_10041bf60;
  FUN_1000087e4(&local_88,&local_120);
  SVar10.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar10);
  puVar4 = local_118;
  if (local_118 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(_Var6.unknown);
switchD_10033ccc8_caseD_30:
    FUN_100341718(&local_120,puVar15);
    if (local_118 != (undefined *)0x0) {
      local_f0.unknown = local_120;
      _Stack_e8.unknown = local_118;
      pvStack_d8 = pvStack_108;
      local_e0 = local_110;
      local_c8 = uStack_f8;
      local_d0 = uStack_100;
      local_140.str = pcVar1;
      local_140.bridgeObject = puVar14;
      _swift_bridgeObjectRetain(puVar14);
      SVar21.bridgeObject = (void *)0xe100000000000000;
      SVar21.str = (char *)0x7c;
      SVar28.bridgeObject = puVar12;
      SVar28.str = pcVar13;
      Swift::String::append(SVar21,SVar28);
      pvVar3 = local_140.bridgeObject;
      _swift_bridgeObjectRetain(local_140.bridgeObject);
      SVar22.bridgeObject = pvVar2;
      SVar22.str = apcStack_150[1];
      SVar29.bridgeObject = puVar12;
      SVar29.str = pcVar13;
      Swift::String::append(SVar22,SVar29);
      _swift_bridgeObjectRelease(pvVar3);
      pvVar2 = local_140.bridgeObject;
      _swift_bridgeObjectRetain(local_140.bridgeObject);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x23;
      SVar30.bridgeObject = puVar12;
      SVar30.str = pcVar13;
      Swift::String::append(SVar23,SVar30);
      _swift_bridgeObjectRelease(pvVar2);
      pvVar2 = local_140.bridgeObject;
      pcVar1 = local_140.str;
      SVar20 = Swift::CustomStringConvertible::get_description();
      local_140.str = pcVar1;
      local_140.bridgeObject = pvVar2;
      _swift_bridgeObjectRetain(pvVar2);
      SVar31.bridgeObject = puVar12;
      SVar31.str = pcVar13;
      Swift::String::append(SVar20,SVar31);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      puStack_b8 = local_140.bridgeObject;
      local_c0 = local_140.str;
      local_140.bridgeObject = pvStack_98;
      local_140.str = local_a0;
      local_130 = pcVar18;
      SwiftUI::State::set_wrappedValue((State *)&local_140,&local_c0,SVar10.unknown);
      FUN_10002a29c(&local_80,&DAT_100549db0,&DAT_100419ed0);
      FUN_10002a29c(&local_88,&DAT_10054ac48,&DAT_10041bf60);
      SVar11.unknown = *(undefined **)(unaff_x20 + 0x18);
      FUN_1000447d4(0);
      FUN_1000036d0(&DAT_10054d408,FUN_1000447d4,&TargetProtocolConformanceDescriptor_10041dc44);
      SwiftUI::StateObject::get_wrappedValue(SVar11);
      FUN_10004462c(&local_f0);
      _swift_release(SVar11.unknown);
      puStack_b8 = _Stack_e8.unknown;
      local_c0 = local_f0.unknown;
      FUN_100043c00(&local_c0);
      local_140.bridgeObject = pvStack_d8;
      local_140.str = local_e0;
      FUN_100043c00(&local_140);
      local_b0 = local_d0;
      FUN_10002a29c(&local_b0,&DAT_10054c050,&DAT_10041dca0);
      local_a8 = local_c8;
      puVar12 = &DAT_10054c058;
      puVar14 = &DAT_10041d7d0;
      lVar9 = -0x98;
      goto LAB_10033d2c8;
    }
  }
  else if ((_Var5.unknown == local_120) && (local_118 == _Var6.unknown)) {
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(local_118);
  }
  else {
    pcVar13 = local_120;
    puVar12 = local_118;
    bVar7 = Swift::_stringCompareWithSmolCheck
                      (_Var5,_Var6,(_StringComparisonResult)(__int8)local_120);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(puVar4);
    if (!bVar7) goto switchD_10033ccc8_caseD_30;
  }
  FUN_10002a29c(&local_80,&DAT_100549db0,&DAT_100419ed0);
  puVar12 = &DAT_10054ac48;
  puVar14 = &DAT_10041bf60;
  lVar9 = -0x78;
LAB_10033d2c8:
  FUN_10002a29c(&stack0xfffffffffffffff0 + lVar9,puVar12,puVar14);
  FUN_100029548(puVar15,FUN_10009e280);
  return;
}

