// rea decompile_all
// name: FUN_10001d364
// address: 0x10001d364
// body: available
// range: 0x10001d364-0x10001dc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001db0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001d364(long param_1,ID param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  RoundedCornerStyle RVar7;
  Capsule CVar8;
  undefined *puVar9;
  UUID UVar10;
  _StringGuts _Var11;
  StateObject SVar12;
  UUID UVar13;
  undefined *puVar14;
  char *pcVar15;
  Material MVar16;
  Color CVar17;
  Color CVar18;
  Alignment AVar19;
  Alignment AVar20;
  void *pvVar23;
  undefined8 uVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar26;
  long extraout_x12;
  void *unaff_x20;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  _StringGuts _Var31;
  long lVar32;
  String SVar33;
  String SVar34;
  undefined auStack_220 [12];
  undefined4 local_214;
  undefined *local_210;
  String local_208;
  long local_1f8;
  undefined *local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  ID local_1c0;
  long local_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long local_190;
  long local_90;
  _StringGuts _Var21;
  void *pvVar22;
  
  local_1d0 = param_1;
  CVar8 = SwiftUI::Capsule::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(CVar8.unknown + -8) + 0x40));
  local_1c8 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1d8 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_1e0 = *(long *)(local_1d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1e0 + 0x40));
  lVar25 = (long)(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_10054b088;
  local_1e8 = lVar25;
  FUN_100002f94(&DAT_10054b088,&DAT_10041c2a0);
  local_1f8 = *(long *)(puVar9 + -8);
  local_1f0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar25 - extraout_x8_01;
  puVar9 = &DAT_10054b0b0;
  local_208.bridgeObject = (void *)lVar25;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar25 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar25 - extraout_x12;
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar29 = *(long *)(UVar10.unknown + -8);
  UVar13 = UVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  lVar27 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = param_2;
  FUN_100174ed8();
  if (UVar13.unknown == (undefined *)0x0) {
    UVar13 = Foundation::UUID::init();
    SVar34 = Foundation::UUID::get_uuidString(UVar13);
    _Var21.unknown = SVar34.bridgeObject;
    UVar13 = UVar10;
    (**(code **)(lVar29 + 8))(lVar27);
    SVar33.bridgeObject = UVar13.unknown;
    SVar33.str = SVar34.str;
  }
  else {
    objc_stub::stringValue((ID)UVar13.unknown);
    SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var21.unknown = SVar33.bridgeObject;
  }
  puVar9 = SVar33.bridgeObject;
  _Var31.unknown = SVar33.str;
  _Var11.unknown = _Var21.unknown;
  _swift_bridgeObjectRetain();
  FUN_100009f74();
  local_210 = _Var21.unknown;
  local_208.str = _Var31.unknown;
  local_1b8 = lVar28;
  if (puVar9 == (undefined *)0x0) {
    local_214 = 0;
  }
  else {
    if (_Var31.unknown == _Var11.unknown) {
      if (puVar9 != _Var21.unknown) goto LAB_10001d598;
      local_214 = 1;
    }
    else {
LAB_10001d598:
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var31,_Var21,(_StringComparisonResult)(__int8)_Var11.unknown);
      local_214 = (undefined4)CONCAT71((int7)((ulong)_Var11.unknown >> 8),bVar6);
    }
    _swift_bridgeObjectRelease(_Var21.unknown);
    _Var21.unknown = puVar9;
  }
  _swift_bridgeObjectRelease(_Var21.unknown);
  SVar12.unknown = *(undefined **)((long)unaff_x20 + 0x48);
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar12);
  puVar9 = SVar12.unknown;
  FUN_100174ed8();
  if (puVar9 == (undefined *)0x0) {
    UVar13 = Foundation::UUID::init();
    SVar33 = Foundation::UUID::get_uuidString(UVar13);
    pvVar22 = SVar33.bridgeObject;
    (**(code **)(lVar29 + 8))(lVar27,UVar10.unknown);
    SVar34.bridgeObject = UVar10.unknown;
    SVar34.str = SVar33.str;
  }
  else {
    objc_stub::stringValue((ID)puVar9);
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar22 = SVar34.bridgeObject;
  }
  pcVar15 = SVar34.str;
  puVar9 = &DAT_10041c2b8;
  _swift_getKeyPath(&DAT_10041c2b8);
  puVar14 = &DAT_10041c2e0;
  _swift_getKeyPath(&DAT_10041c2e0);
  Combine::Published::_get_subscript(&local_1b0,SVar12.unknown,puVar9,puVar14);
  _swift_release(puVar9);
  _swift_release(puVar14);
  lVar27 = local_1b0;
  if (*(long *)(local_1b0 + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_1b0);
    pvVar23 = pvVar22;
    FUN_10000464c(pcVar15);
    if (((ulong)pvVar23 & 1) != 0) {
      lVar30 = *(long *)(lVar27 + 0x38);
      lVar29 = 0;
      FUN_100170d98();
      lVar28 = local_1b8;
      lVar32 = *(long *)(lVar29 + -8);
      FUN_100029504(lVar30 + *(long *)(lVar32 + 0x48) * (long)pcVar15,local_1b8,FUN_100170d98);
      _swift_bridgeObjectRelease(lVar27);
      pcVar26 = *(code **)(lVar32 + 0x38);
      uVar24 = 0;
      goto LAB_10001d754;
    }
    _swift_bridgeObjectRelease(lVar27);
  }
  lVar29 = 0;
  FUN_100170d98();
  pcVar26 = *(code **)(*(long *)(lVar29 + -8) + 0x38);
  uVar24 = 1;
  lVar28 = local_1b8;
LAB_10001d754:
  (*pcVar26)(lVar28,uVar24,1,lVar29);
  _swift_bridgeObjectRelease(pvVar22);
  _swift_bridgeObjectRelease(lVar27);
  _swift_release(SVar12.unknown);
  FUN_1000087e4(lVar28,lVar25,&DAT_10054b0b0,&DAT_10041c2b0);
  FUN_100170d98(0);
  lVar27 = lVar25;
  (**(code **)(*(long *)(lVar29 + -8) + 0x30))(lVar25,1,lVar29);
  pcVar15 = local_208.str;
  if ((int)lVar27 == 1) {
    FUN_10002a29c(lVar25,&DAT_10054b0b0,&DAT_10041c2b0);
    objc_stub::localizedName(local_1c0);
    SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  else {
    SVar33 = *(String *)(lVar25 + 0x18);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar25 + 0x20));
    FUN_100029548(lVar25,FUN_100170d98);
  }
  puVar9 = &DAT_1005257a8;
  _swift_allocObject(&DAT_1005257a8,0x130,7);
  _memcpy(puVar9 + 0x10,unaff_x20,0x110);
  *(char **)(puVar9 + 0x120) = pcVar15;
  *(undefined **)(puVar9 + 0x128) = local_210;
  local_90 = lVar28;
  FUN_100027a7c();
  FUN_100002f94(&DAT_10054b0b8,&DAT_10041c300);
  FUN_100029340();
  pvVar22 = local_208.bridgeObject;
  SwiftUI::Button::_init();
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  lVar25 = local_1e8;
  SwiftUI::PlainButtonStyle::init();
  puVar9 = &DAT_10054b090;
  FUN_1000087a0(&DAT_10054b090,&DAT_10054b088,&DAT_10041c2a0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar14 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar27 = local_1d0;
  puVar5 = local_1d8;
  puVar1 = local_1f0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_1d0,lVar25,local_1f0,local_1d8,puVar9,puVar14);
  (**(code **)(local_1e0 + 8))(lVar25,puVar5);
  (**(code **)(local_1f8 + 8))(pvVar22,puVar1);
  puVar9 = &DAT_10054b080;
  FUN_100002f94(&DAT_10054b080,&DAT_10041c298);
  lVar25 = lVar27 + *(int *)(puVar9 + 0x24);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar28 = CONCAT71((int7)((ulong)puVar9 >> 8),RVar7.value);
  pcVar26 = *(code **)(*(long *)(lVar28 + -8) + 0x68);
  (*pcVar26)(lVar25,uVar3,lVar28);
  MVar16.unknown = &DAT_10054b108;
  FUN_100002f94(&DAT_10054b108,&DAT_100431c70);
  SwiftUI::Material::get_ultraThin(MVar16);
  *(undefined2 *)(lVar25 + *(int *)(MVar16.unknown + 0x38)) = 0x100;
  puVar9 = &DAT_10054b110;
  FUN_100002f94(&DAT_10054b110,&DAT_10041c330);
  puVar1 = (undefined *)(lVar25 + *(int *)(puVar9 + 0x24));
  CVar17.unknown = puVar1;
  (*pcVar26)(puVar1,uVar3,lVar28);
  CVar17 = SwiftUI::Color::get_black(CVar17);
  CVar18 = SwiftUI::Color::opacity(0.2,CVar17);
  _swift_release(CVar17.unknown);
  AVar20.unknown = &DAT_10054b118;
  puVar9 = &DAT_10041f7b0;
  FUN_100002f94();
  *(undefined **)(puVar1 + *(int *)(AVar20.unknown + 0x34)) = CVar18.unknown;
  *(undefined2 *)(puVar1 + *(int *)(AVar20.unknown + 0x38)) = 0x100;
  AVar19 = SwiftUI::Alignment::get_center(AVar20);
  AVar20.unknown = &DAT_10054b120;
  puVar14 = &DAT_10041c340;
  FUN_100002f94();
  iVar4 = *(int *)(AVar20.unknown + 0x24);
  *(undefined **)(puVar1 + iVar4) = AVar19.unknown;
  *(undefined **)((long)(puVar1 + iVar4) + 8) = puVar9;
  AVar20 = SwiftUI::Alignment::get_center(AVar20);
  puVar9 = &DAT_10054b0a0;
  FUN_100002f94(&DAT_10054b0a0,&DAT_100431c80);
  puVar1 = local_1c8;
  iVar4 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(lVar25 + iVar4) = AVar20.unknown;
  ((undefined8 *)(lVar25 + iVar4))[1] = puVar14;
  CVar17.unknown = local_1c8;
  (*pcVar26)(local_1c8,uVar3,lVar28);
  CVar17 = SwiftUI::Color::get_white(CVar17);
  CVar18 = SwiftUI::Color::opacity(0.12,CVar17);
  _swift_release(CVar17.unknown);
  SwiftUI::StrokeStyle::init
            (&local_1b0,0x3ff0000000000000,0x4024000000000000,0,CVar18.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar9 = &DAT_10054b060;
  FUN_100002f94(&DAT_10054b060,&DAT_10041c290);
  puVar14 = PTR_typeMetadataAccessor_100523540;
  lVar27 = lVar27 + *(int *)(puVar9 + 0x24);
  FUN_100029504(puVar1,lVar27,PTR_typeMetadataAccessor_100523540);
  puVar9 = &DAT_10054a698;
  FUN_100002f94(&DAT_10054a698,&DAT_10041b660);
  plVar2 = (long *)(lVar27 + *(int *)(puVar9 + 0x24));
  plVar2[1] = lStack_1a8;
  *plVar2 = local_1b0;
  plVar2[3] = lStack_198;
  plVar2[2] = lStack_1a0;
  plVar2[4] = local_190;
  AVar20.unknown = &DAT_10054a6a0;
  puVar9 = &DAT_10041c350;
  FUN_100002f94();
  *(undefined **)(lVar27 + *(int *)(AVar20.unknown + 0x34)) = CVar18.unknown;
  *(undefined2 *)(lVar27 + *(int *)(AVar20.unknown + 0x38)) = 0x100;
  AVar19 = SwiftUI::Alignment::get_center(AVar20);
  FUN_100029548(puVar1,puVar14);
  AVar20.unknown = &DAT_10054a6a8;
  puVar14 = &DAT_10041b670;
  FUN_100002f94();
  iVar4 = *(int *)(AVar20.unknown + 0x24);
  *(undefined8 *)(lVar27 + iVar4) = AVar19.unknown;
  ((undefined8 *)(lVar27 + iVar4))[1] = puVar9;
  AVar20 = SwiftUI::Alignment::get_center(AVar20);
  puVar9 = &DAT_10054a668;
  FUN_100002f94(&DAT_10054a668,&DAT_10041b650);
  iVar4 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(lVar27 + iVar4) = AVar20.unknown;
  ((undefined8 *)(lVar27 + iVar4))[1] = puVar14;
  FUN_10002a29c(local_1b8,&DAT_10054b0b0,&DAT_10041c2b0);
  return;
}

