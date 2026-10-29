// rea decompile_all
// name: FUN_100056c4c
// address: 0x100056c4c
// body: available
// range: 0x100056c4c-0x1000572b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100056c4c(undefined8 param_1,ID param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  UUID UVar6;
  _StringGuts _Var7;
  undefined7 extraout_var;
  StateObject SVar8;
  UUID UVar9;
  undefined *puVar10;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar14;
  long extraout_x12;
  void *unaff_x20;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  void *pvVar19;
  _StringGuts _Var20;
  String SVar21;
  String SVar22;
  undefined1 auStack_270 [4];
  undefined4 local_26c;
  undefined *local_268;
  undefined *local_260;
  String local_258;
  long local_248;
  long local_240;
  undefined *local_238;
  long local_230;
  undefined *local_228;
  undefined1 *local_220;
  long local_218;
  undefined *local_210;
  undefined8 local_208;
  ID local_200;
  long local_1f8 [45];
  long local_90;
  _StringGuts _Var11;
  
  local_208 = param_1;
  local_210 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_218 = *(long *)(local_210 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_218 + 0x40));
  puVar5 = &DAT_10054d7a8;
  local_220 = auStack_270 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054d7a8,&DAT_10041e328);
  local_230 = *(long *)(puVar5 + -8);
  local_228 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = (long)(auStack_270 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_10054d7b8;
  local_240 = lVar13;
  FUN_100002f94(&DAT_10054d7b8,&DAT_10041e330);
  local_248 = *(long *)(puVar5 + -8);
  local_238 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_248 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_01;
  puVar5 = &DAT_10054b0b0;
  local_258.bridgeObject = (void *)lVar13;
  FUN_100002f94(&DAT_10054b0b0,&DAT_10041c2b0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar13 - extraout_x12;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar6.unknown + -8);
  UVar9 = UVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar18 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_200 = param_2;
  FUN_100174ed8();
  if (UVar9.unknown == (undefined *)0x0) {
    UVar9 = Foundation::UUID::init();
    SVar22 = Foundation::UUID::get_uuidString(UVar9);
    _Var11.unknown = SVar22.bridgeObject;
    UVar9 = UVar6;
    (**(code **)(lVar15 + 8))(lVar16);
    SVar21.bridgeObject = UVar9.unknown;
    SVar21.str = SVar22.str;
  }
  else {
    objc_stub::stringValue((ID)UVar9.unknown);
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var11.unknown = SVar21.bridgeObject;
  }
  puVar5 = SVar21.bridgeObject;
  _Var20.unknown = SVar21.str;
  _Var7.unknown = _Var11.unknown;
  _swift_bridgeObjectRetain();
  FUN_1000492d4();
  local_268 = _Var11.unknown;
  local_260 = _Var20.unknown;
  local_258.str = (char *)lVar18;
  if (puVar5 == (undefined *)0x0) {
    local_26c = 0;
  }
  else {
    if ((_Var20.unknown == _Var7.unknown) && (puVar5 == _Var11.unknown)) {
      local_26c = 1;
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var20,_Var11,(_StringComparisonResult)(__int8)_Var7.unknown);
      local_26c = (undefined4)CONCAT71(extraout_var,bVar4);
    }
    _swift_bridgeObjectRelease(_Var11.unknown);
    _Var11.unknown = puVar5;
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  SVar8.unknown = *(undefined **)((long)unaff_x20 + 0xd8);
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar8);
  puVar5 = SVar8.unknown;
  FUN_100174ed8();
  if (puVar5 == (undefined *)0x0) {
    UVar9 = Foundation::UUID::init();
    SVar21 = Foundation::UUID::get_uuidString(UVar9);
    (**(code **)(lVar15 + 8))(lVar16,UVar6.unknown);
  }
  else {
    objc_stub::stringValue((ID)puVar5);
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar19 = SVar21.bridgeObject;
  puVar5 = &DAT_10041e340;
  _swift_getKeyPath(&DAT_10041e340);
  puVar10 = &DAT_10041e368;
  _swift_getKeyPath(&DAT_10041e368);
  Combine::Published::_get_subscript(local_1f8,SVar8.unknown,puVar5,puVar10);
  _swift_release(puVar5);
  _swift_release(puVar10);
  if (*(long *)(local_1f8[0] + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_1f8[0]);
    FUN_10000464c(SVar21.str);
    if (((ulong)SVar21.bridgeObject & 1) != 0) {
      lVar16 = *(long *)(local_1f8[0] + 0x38);
      lVar15 = 0;
      FUN_100170d98();
      pcVar17 = local_258.str;
      lVar18 = *(long *)(lVar15 + -8);
      FUN_100029504(lVar16 + *(long *)(lVar18 + 0x48) * (long)SVar21.str,local_258.str,FUN_100170d98
                   );
      _swift_bridgeObjectRelease(local_1f8[0]);
      pcVar14 = *(code **)(lVar18 + 0x38);
      uVar12 = 0;
      goto LAB_10005704c;
    }
    _swift_bridgeObjectRelease(local_1f8[0]);
  }
  lVar15 = 0;
  FUN_100170d98();
  pcVar14 = *(code **)(*(long *)(lVar15 + -8) + 0x38);
  uVar12 = 1;
  pcVar17 = local_258.str;
LAB_10005704c:
  (*pcVar14)(pcVar17,uVar12,1,lVar15);
  _swift_bridgeObjectRelease(pvVar19);
  _swift_bridgeObjectRelease(local_1f8[0]);
  _swift_release(SVar8.unknown);
  FUN_1000087e4(pcVar17,lVar13,&DAT_10054b0b0,&DAT_10041c2b0);
  FUN_100170d98(0);
  lVar16 = lVar13;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(lVar13,1,lVar15);
  puVar5 = local_260;
  if ((int)lVar16 == 1) {
    FUN_10002a29c(lVar13,&DAT_10054b0b0,&DAT_10041c2b0);
    objc_stub::localizedName(local_200);
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  else {
    SVar21 = *(String *)(lVar13 + 0x18);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar13 + 0x20));
    FUN_100029548(lVar13,FUN_100170d98);
  }
  puVar1 = local_268;
  puVar10 = &DAT_100526e18;
  _swift_allocObject(&DAT_100526e18,0x178,7);
  _memcpy(puVar10 + 0x10,unaff_x20,0x158);
  *(undefined **)(puVar10 + 0x168) = puVar5;
  *(undefined **)(puVar10 + 0x170) = puVar1;
  local_90 = (long)pcVar17;
  FUN_100058a6c();
  FUN_100002f94(&DAT_10054d7c0,&DAT_10041e388);
  FUN_100059384();
  lVar13 = local_240;
  SwiftUI::Button::_init();
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  puVar2 = local_220;
  SwiftUI::PlainButtonStyle::init();
  puVar5 = &DAT_10054d7b0;
  FUN_1000087a0(&DAT_10054d7b0,&DAT_10054d7a8,&DAT_10041e328,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar10 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  puVar3 = local_210;
  puVar1 = local_228;
  pvVar19 = local_258.bridgeObject;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_258.bridgeObject,puVar2,local_228,local_210,puVar5,puVar10);
  (**(code **)(local_218 + 8))(puVar2,puVar3);
  (**(code **)(local_230 + 8))(lVar13,puVar1);
  FUN_10034e74c(local_208);
  (**(code **)(local_248 + 8))(pvVar19,local_238);
  FUN_10002a29c(pcVar17,&DAT_10054b0b0,&DAT_10041c2b0);
  return;
}

