// rea decompile_all
// name: FUN_100331c20
// address: 0x100331c20
// body: available
// range: 0x100331c20-0x10033277f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003324c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100331c20(undefined8 *param_1,CGFloat param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  Binding BVar3;
  code *pcVar4;
  Design DVar5;
  undefined *puVar6;
  Image IVar7;
  Color CVar9;
  undefined *puVar10;
  LocalizedStringKey LVar11;
  State SVar12;
  FocusState FVar13;
  undefined **ppuVar14;
  Text TVar15;
  Font FVar16;
  Text TVar17;
  Text TVar18;
  undefined8 *puVar19;
  Binding<String> text;
  Text TVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  Weight WVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar25;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 *puVar26;
  long extraout_x8_06;
  long extraout_x8_07;
  CGFloat CVar27;
  long extraout_x12;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String systemName;
  String stringLiteral;
  undefined8 auStack_260 [4];
  State local_240;
  long local_238;
  long local_230;
  undefined *local_228;
  long local_220;
  undefined *local_218;
  long local_210;
  undefined *local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  code *local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined8 *local_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined **local_150;
  undefined *puStack_148;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Binding local_80;
  undefined *puStack_78;
  undefined8 local_70;
  Color CVar8;
  
  local_218 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_220 = *(long *)(local_218 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_220 + 0x40));
  lVar23 = (long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054def8;
  local_238 = lVar23;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_230 = *(long *)(puVar6 + -8);
  local_228 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar23 = lVar23 - extraout_x8_00;
  puVar6 = &DAT_1005515e0;
  FUN_100002f94(&DAT_1005515e0,&DAT_100432070);
  local_210 = *(long *)(puVar6 + -8);
  local_208 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_210 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  WVar24.unknown = (undefined *)(lVar23 - extraout_x8_01);
  puVar6 = &DAT_10055cc40;
  FUN_100002f94(&DAT_10055cc40,&DAT_100432078);
  local_1b8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055cc48;
  local_200 = (long)WVar24.unknown - extraout_x8_02;
  FUN_100002f94(&DAT_10055cc48,&DAT_100432080);
  local_1f0 = *(long *)(puVar6 + -8);
  local_190 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = ((long)WVar24.unknown - extraout_x8_02) - extraout_x8_03;
  puVar6 = &DAT_10055cc50;
  local_1f8 = lVar25;
  FUN_100002f94(&DAT_10055cc50,&DAT_100432088);
  local_1e0 = *(long *)(puVar6 + -8);
  local_180 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar25 - extraout_x8_04;
  puVar6 = &DAT_10055cc58;
  local_1e8 = lVar25;
  FUN_100002f94(&DAT_10055cc58,&DAT_100432090);
  local_1c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)(lVar25 - extraout_x8_05);
  puVar6 = &DAT_10055cc60;
  local_1a0 = puVar26;
  FUN_100002f94(&DAT_10055cc60,&DAT_100432098);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar28 = (long)puVar26 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar6 = &DAT_10054a828;
  local_178 = lVar28 - extraout_x12;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (lVar28 - extraout_x12) - extraout_x8_07;
  systemName.bridgeObject = (void *)0xe800000000000000;
  systemName.str = (char *)0x6c6c69662e79656b;
  IVar7 = SwiftUI::Image::init(systemName);
  local_188 = IVar7.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar7.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  CVar8.unknown = (undefined *)CONCAT71((int7)((ulong)IVar7.unknown >> 8),DVar5.value);
  local_1d8 = *(code **)(*(long *)(CVar8.unknown + -8) + 0x38);
  local_1d0 = CVar8.unknown;
  (*local_1d8)(lVar29,1,1);
  local_198 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  local_1c8 = lVar29;
  FUN_10002a29c(lVar29,&DAT_10054a828,&DAT_10041e3c0);
  CVar9.unknown = &DAT_100431cb8;
  _swift_getKeyPath();
  local_1a8 = CVar9.unknown;
  CVar9 = SwiftUI::Color::get_white(CVar9);
  CVar27.unknown = (undefined *)0x3feccccccccccccd;
  local_1b0 = (undefined *)SwiftUI::Color::opacity(0.9,CVar9);
  _swift_release(CVar9.unknown);
  lVar25 = param_3[4];
  if (lVar25 == 0) {
    FUN_10014e37c(0);
    FUN_1000036d0(&DAT_100553148,FUN_10014e37c,&TargetProtocolConformanceDescriptor_100427f04);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100332780);
    (*pcVar4)();
  }
  puVar6 = &DAT_100431b60;
  local_168 = param_1;
  _swift_getKeyPath(&DAT_100431b60);
  puVar10 = &DAT_100431b88;
  _swift_getKeyPath(&DAT_100431b88);
  _swift_retain(lVar25);
  Combine::Published::_get_subscript(&local_160);
  _swift_release(puVar6);
  _swift_release(puVar10);
  local_170 = lVar28;
  if (((ulong)local_160 & 1) == 0) {
    _swift_release(lVar25);
    text.unknown = (undefined *)0x80000001004e6720;
    stringLiteral.bridgeObject = (void *)0x80000001004e6720;
    stringLiteral.str = (char *)0xd000000000000013;
    LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    uStack_98 = param_3[9];
    local_a0 = param_3[8];
    local_90 = param_3[10];
    puStack_78 = (undefined *)param_3[9];
    local_80.unknown = (undefined *)param_3[8];
    local_70 = param_3[10];
    SVar12.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    local_240.unknown = SVar12.unknown;
    SwiftUI::State::get_projectedValue(SVar12);
    *(code **)(lVar29 + -0x10) = FUN_10002a200;
    *(undefined8 *)(lVar29 + -8) = 0;
    *(code **)(lVar29 + -0x20) = FUN_10002a200;
    *(undefined8 *)(lVar29 + -0x18) = 0;
    (extension_SwiftUI)::SwiftUI::TextField::_init(LVar11,text);
    lVar25 = local_238;
    SwiftUI::PlainTextFieldStyle::init();
    puVar6 = &DAT_100551538;
    FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                  PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
    puVar10 = &DAT_100551540;
    FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                  PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
    puVar22 = local_218;
    puVar21 = local_228;
    (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
              (WVar24.unknown,lVar25,local_228,local_218,puVar6,puVar10);
    (**(code **)(local_220 + 8))(lVar25,puVar22);
    (**(code **)(local_230 + 8))(lVar23,puVar21);
    puStack_158 = (undefined8 *)param_3[0xc];
    CVar27.unknown = (undefined *)param_3[0xb];
    local_150 = (undefined **)CONCAT71(local_150._1_7_,*(undefined1 *)(param_3 + 0xd));
    FVar13.unknown = &DAT_100551478;
    local_160 = CVar27.unknown;
    FUN_100002f94(&DAT_100551478,&DAT_1004320a0);
    SwiftUI::FocusState::_get_projectedValue(FVar13);
    puVar2 = puStack_78;
    BVar3.unknown = local_80.unknown;
    local_160 = puVar21;
    puStack_158 = (undefined8 *)puVar22;
    local_150 = (undefined **)puVar6;
    puStack_148 = puVar10;
    _swift_getOpaqueTypeConformance2
              (&local_160,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_textFieldStyle<A_where_A1:_SwiftUI_TextFieldStyle>(A1)__>_some>>_100522f80
               ,1);
    lVar23 = local_200;
    puVar6 = local_208;
    (extension_SwiftUI)::SwiftUI::View::_focused(BVar3);
    _swift_release(puVar2);
    _swift_release(BVar3.unknown);
    (**(code **)(local_210 + 8))(WVar24.unknown,puVar6);
    SwiftUI::Font::Weight::get_medium(WVar24);
    lVar25 = local_1c8;
    (*local_1d8)(local_1c8,1,1,local_1d0);
    FVar16 = SwiftUI::Font::_system(CVar27,(Font)0x0);
    FUN_10002a29c(lVar25,&DAT_10054a828,&DAT_10041e3c0);
    puVar6 = &DAT_100431cb8;
    _swift_getKeyPath();
    CVar9.unknown = &DAT_10055cc68;
    FUN_100002f94(&DAT_10055cc68,&DAT_1004320a8);
    iVar1 = *(int *)(CVar9.unknown + 0x24);
    *(undefined8 *)(lVar23 + iVar1) = puVar6;
    ((undefined8 *)(lVar23 + iVar1))[1] = FVar16.unknown;
    CVar9 = SwiftUI::Color::get_white(CVar9);
    puVar6 = &DAT_1004320b0;
    _swift_getKeyPath();
    puVar21 = local_1b8;
    iVar1 = *(int *)(local_1b8 + 0x24);
    *(undefined8 *)(lVar23 + iVar1) = puVar6;
    ((undefined8 *)(lVar23 + iVar1))[1] = CVar9.unknown;
    FUN_100336efc();
    lVar25 = local_1f8;
    (extension_SwiftUI)::SwiftUI::View::_disableAutocorrection();
    FUN_10002a29c(lVar23,&DAT_10055cc40,&DAT_100432078);
    SwiftUI::State::get_wrappedValue(local_240);
    puVar26 = puStack_158;
    local_80.unknown = local_160;
    puStack_78 = (undefined *)puStack_158;
    puVar10 = &DAT_10053b210;
    _swift_allocObject(&DAT_10053b210,0xd0,7);
    uVar30 = param_3[0x10];
    uVar32 = param_3[0x13];
    uVar31 = param_3[0x12];
    *(undefined8 *)(puVar10 + 0x98) = param_3[0x11];
    *(undefined8 *)(puVar10 + 0x90) = uVar30;
    *(undefined8 *)(puVar10 + 0xa8) = uVar32;
    *(undefined8 *)(puVar10 + 0xa0) = uVar31;
    uVar30 = param_3[0x14];
    uVar32 = param_3[0x17];
    uVar31 = param_3[0x16];
    *(undefined8 *)(puVar10 + 0xb8) = param_3[0x15];
    *(undefined8 *)(puVar10 + 0xb0) = uVar30;
    *(undefined8 *)(puVar10 + 200) = uVar32;
    *(undefined8 *)(puVar10 + 0xc0) = uVar31;
    uVar30 = param_3[8];
    uVar32 = param_3[0xb];
    uVar31 = param_3[10];
    *(undefined8 *)(puVar10 + 0x58) = param_3[9];
    *(undefined8 *)(puVar10 + 0x50) = uVar30;
    *(undefined8 *)(puVar10 + 0x68) = uVar32;
    *(undefined8 *)(puVar10 + 0x60) = uVar31;
    uVar30 = param_3[0xc];
    uVar32 = param_3[0xf];
    uVar31 = param_3[0xe];
    *(undefined8 *)(puVar10 + 0x78) = param_3[0xd];
    *(undefined8 *)(puVar10 + 0x70) = uVar30;
    *(undefined8 *)(puVar10 + 0x88) = uVar32;
    *(undefined8 *)(puVar10 + 0x80) = uVar31;
    uVar30 = *param_3;
    uVar32 = param_3[3];
    uVar31 = param_3[2];
    *(undefined8 *)(puVar10 + 0x18) = param_3[1];
    *(undefined8 *)(puVar10 + 0x10) = uVar30;
    *(undefined8 *)(puVar10 + 0x28) = uVar32;
    *(undefined8 *)(puVar10 + 0x20) = uVar31;
    uVar30 = param_3[4];
    uVar32 = param_3[7];
    uVar31 = param_3[6];
    *(undefined8 *)(puVar10 + 0x38) = param_3[5];
    *(undefined8 *)(puVar10 + 0x30) = uVar30;
    *(undefined8 *)(puVar10 + 0x48) = uVar32;
    *(undefined8 *)(puVar10 + 0x40) = uVar31;
    FUN_100336150(param_3,&local_160);
    local_160 = puVar21;
    ppuVar14 = &local_160;
    puStack_158 = (undefined8 *)puVar6;
    _swift_getOpaqueTypeConformance2
              (ppuVar14,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_disableAutocorrection(Swift_Bool_)__>_some>>_100523000
               ,1);
    puVar22 = local_190;
    lVar23 = local_1e8;
    puVar21 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
    puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_1e8,&local_80,0,FUN_100337180,puVar10,local_190,
               PTR___type_metadata_for_Swift_String_100523a98,ppuVar14,
               PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0);
    _swift_bridgeObjectRelease(puVar26);
    _swift_release(puVar10);
    (**(code **)(local_1f0 + 8))(lVar25,puVar22);
    puVar10 = local_180;
    puVar26 = local_1a0;
    lVar25 = local_1e0;
    (**(code **)(local_1e0 + 0x10))(local_1a0,lVar23,local_180);
    _swift_storeEnumTagMultiPayload(puVar26,local_1c0,1);
    local_160 = puVar22;
    puStack_158 = (undefined8 *)puVar6;
    puStack_148 = puVar21;
    local_150 = ppuVar14;
    _swift_getOpaqueTypeConformance2
              (&local_160,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
               ,1);
    lVar28 = local_178;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
    (**(code **)(lVar25 + 8))(lVar23,puVar10);
  }
  else {
    puVar6 = &DAT_100431e68;
    _swift_getKeyPath(&DAT_100431e68);
    puVar10 = &DAT_100431e90;
    _swift_getKeyPath(&DAT_100431e90);
    Combine::Published::_get_subscript(&local_160,lVar25,puVar6,puVar10);
    _swift_release(lVar25);
    _swift_release(puVar6);
    _swift_release(puVar10);
    if (puStack_158 == (undefined8 *)0x0) {
      puStack_158 = (undefined8 *)0x80000001004e6740;
      local_160 = (undefined *)0xd000000000000015;
    }
    FUN_100026df4();
    puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar15 = SwiftUI::Text::_init(puVar10,PTR___type_metadata_for_Swift_String_100523a98,puVar10);
    SwiftUI::Font::Weight::get_medium((Weight)TVar15.unknown);
    lVar23 = local_1c8;
    (*local_1d8)(local_1c8,1,1,local_1d0);
    FVar16 = SwiftUI::Font::_system(CVar27,(Font)0x0);
    FUN_10002a29c(lVar23,&DAT_10054a828,&DAT_10041e3c0);
    TVar20 = TVar15;
    puVar21 = puVar6;
    puVar22 = puVar10;
    TVar17 = SwiftUI::Text::_font(FVar16.unknown);
    _swift_release(FVar16.unknown);
    FUN_100025b34(TVar15.unknown,puVar6,puVar10);
    _swift_bridgeObjectRelease();
    CVar9 = SwiftUI::Color::get_white(CVar8);
    TVar15 = TVar17;
    puVar6 = TVar20.unknown;
    puVar10 = puVar21;
    TVar18 = SwiftUI::Text::_foregroundColor(CVar9.unknown);
    _swift_release(CVar9.unknown);
    FUN_100025b34(TVar17.unknown,TVar20.unknown,puVar21);
    _swift_bridgeObjectRelease(puVar22);
    puVar26 = local_1a0;
    *local_1a0 = TVar18.unknown;
    puVar26[1] = TVar15.unknown;
    *(char *)(puVar26 + 2) = (char)puVar6;
    puVar26[3] = puVar10;
    puVar19 = puVar26;
    _swift_storeEnumTagMultiPayload(puVar26,local_1c0,0);
    FUN_100336efc();
    local_160 = local_1b8;
    ppuVar14 = &local_160;
    puStack_158 = puVar19;
    _swift_getOpaqueTypeConformance2
              (ppuVar14,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_disableAutocorrection(Swift_Bool_)__>_some>>_100523000
               ,1);
    local_160 = local_190;
    puStack_158 = (undefined8 *)PTR___type_metadata_for_Swift_String_100523a98;
    puStack_148 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0
    ;
    local_150 = ppuVar14;
    _swift_getOpaqueTypeConformance2
              (&local_160,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
               ,1);
    lVar28 = local_178;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
  }
  lVar23 = local_170;
  FUN_1000087e4(lVar28,local_170,&DAT_10055cc60,&DAT_100432098);
  puVar26 = local_168;
  puVar2 = local_188;
  puVar22 = local_198;
  puVar21 = local_1a8;
  puVar10 = local_1b0;
  *local_168 = local_188;
  local_168[1] = local_1a8;
  local_168[2] = local_198;
  local_168[3] = local_1b0;
  puVar6 = &DAT_10055cc80;
  FUN_100002f94(&DAT_10055cc80,&DAT_1004320e0);
  FUN_1000087e4(lVar23,(long)puVar26 + (long)*(int *)(puVar6 + 0x30),&DAT_10055cc60,&DAT_100432098);
  _swift_retain(puVar2);
  _swift_retain(puVar21);
  _swift_retain(puVar22);
  _swift_retain(puVar10);
  FUN_10002a29c(lVar28,&DAT_10055cc60,&DAT_100432098);
  FUN_10002a29c(lVar23,&DAT_10055cc60,&DAT_100432098);
  _swift_release(puVar10);
  _swift_release(puVar22);
  _swift_release(puVar21);
  _swift_release(puVar2);
  return;
}

