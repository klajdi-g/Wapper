// rea decompile_all
// name: FUN_1000dc960
// address: 0x1000dc960
// body: available
// range: 0x1000dc960-0x1000dd0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dc960(undefined8 *param_1,CGFloat param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  SubmitTriggers of;
  undefined8 *puVar6;
  Design DVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  Color CVar10;
  LocalizedStringKey LVar11;
  Binding BVar12;
  undefined *puVar13;
  Weight WVar14;
  Font FVar15;
  FocusState FVar16;
  undefined **ppuVar17;
  SubmitTriggers SVar18;
  Binding<String> text;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long lVar20;
  code *pcVar21;
  long lVar22;
  Color CVar23;
  CGFloat size;
  String systemName;
  String stringLiteral;
  undefined8 auStack_1a0 [4];
  code *apcStack_180 [3];
  long local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  SubmitTriggers local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  Binding local_b0;
  undefined8 uStack_a8;
  undefined *local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar9;
  
  local_c0 = param_1;
  local_b8 = param_3;
  puStack_c8 = (undefined *)SwiftUI::SubmitTriggers::typeMetadataAccessor();
  local_d0 = *(long *)(puStack_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  puVar8 = (undefined *)((long)apcStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_d8.unknown = puVar8;
  local_160 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_158 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_158 + 0x40));
  lVar22 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054def8;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_168 = *(long *)(puVar8 + -8);
  apcStack_180[2] = (code *)puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  CVar23.unknown = (undefined *)(lVar22 - extraout_x8_01);
  puVar8 = &DAT_100551918;
  FUN_100002f94(&DAT_100551918,&DAT_100423838);
  local_138 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)CVar23.unknown - extraout_x8_02;
  puVar8 = &DAT_100551920;
  FUN_100002f94(&DAT_100551920,&DAT_100423840);
  local_108 = *(long *)(puVar8 + -8);
  local_110 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar8 = &DAT_100551928;
  local_148 = (undefined *)(lVar20 - extraout_x8_03);
  FUN_100002f94(&DAT_100551928,&DAT_100423848);
  local_e0 = *(long *)(puVar8 + -8);
  local_f0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (lVar20 - extraout_x8_03) - extraout_x8_04;
  puVar8 = &DAT_100551930;
  local_128 = lVar19;
  FUN_100002f94(&DAT_100551930,&DAT_100423850);
  local_f8 = *(long *)(puVar8 + -8);
  local_e8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar19 = lVar19 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  puVar8 = &DAT_10054a828;
  local_120 = lVar19;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_06;
  systemName.bridgeObject = (void *)0xef7373616c67676e;
  systemName.str = (char *)0x697966696e67616d;
  local_118 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)local_118);
  DVar7 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,DVar7.value);
  apcStack_180[1] = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*apcStack_180[1])(lVar19,1,1,lVar9);
  local_130 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar19,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_100423858;
  _swift_getKeyPath();
  local_140 = CVar10.unknown;
  CVar10 = SwiftUI::Color::get_white(CVar10);
  local_150 = (undefined *)SwiftUI::Color::opacity(0.6,CVar10);
  _swift_release(CVar10.unknown);
  text.unknown = (undefined *)0x80000001004dd5a0;
  stringLiteral.bridgeObject = (void *)0x80000001004dd5a0;
  stringLiteral.str = (char *)0xd000000000000011;
  LVar11 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  ppuStack_88 = (undefined **)local_b8[1];
  size.unknown = (undefined *)*local_b8;
  uStack_78 = local_b8[3];
  local_80 = local_b8[2];
  BVar12.unknown = &DAT_100551938;
  local_90 = size.unknown;
  FUN_100002f94(&DAT_100551938,&DAT_100423888);
  SwiftUI::Binding::get_projectedValue(BVar12);
  *(code **)(lVar19 + -0x10) = FUN_10002a200;
  *(undefined8 *)(lVar19 + -8) = 0;
  *(code **)(lVar19 + -0x20) = FUN_10002a200;
  *(undefined8 *)(lVar19 + -0x18) = 0;
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar11,text);
  SwiftUI::PlainTextFieldStyle::init();
  puVar8 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar13 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  puVar2 = local_160;
  pcVar21 = apcStack_180[2];
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (lVar20,lVar22,apcStack_180[2],local_160,puVar8,puVar13);
  (**(code **)(local_158 + 8))(lVar22,puVar2);
  (**(code **)(local_168 + 8))(CVar23.unknown,pcVar21);
  CVar10 = SwiftUI::Color::get_white(CVar23);
  puVar8 = &DAT_100423890;
  _swift_getKeyPath();
  WVar14.unknown = &DAT_100551940;
  FUN_100002f94(&DAT_100551940,&DAT_1004238c0);
  iVar1 = *(int *)(WVar14.unknown + 0x24);
  *(undefined8 *)(lVar20 + iVar1) = puVar8;
  ((undefined8 *)(lVar20 + iVar1))[1] = CVar10.unknown;
  SwiftUI::Font::Weight::get_regular(WVar14);
  (*apcStack_180[1])(lVar19,1,1,lVar9);
  FVar15 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar19,&DAT_10054a828,&DAT_10041e3c0);
  puVar8 = &DAT_100423858;
  _swift_getKeyPath();
  puVar13 = local_138;
  iVar1 = *(int *)(local_138 + 0x24);
  *(undefined8 *)(lVar20 + iVar1) = puVar8;
  ((undefined8 *)(lVar20 + iVar1))[1] = FVar15.unknown;
  FUN_1000e1348();
  SVar18.unknown = local_148;
  (extension_SwiftUI)::SwiftUI::View::_disableAutocorrection();
  FUN_10002a29c(lVar20,&DAT_100551918,&DAT_100423838);
  ppuStack_88 = (undefined **)local_b8[5];
  local_90 = (undefined *)local_b8[4];
  local_80 = CONCAT71(local_80._1_7_,*(undefined1 *)(local_b8 + 6));
  FVar16.unknown = &DAT_100551478;
  FUN_100002f94(&DAT_100551478,&DAT_1004320a0);
  SwiftUI::FocusState::_get_projectedValue(FVar16);
  local_90 = puVar13;
  ppuVar17 = &local_90;
  ppuStack_88 = (undefined **)puVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_disableAutocorrection(Swift_Bool_)__>_some>>_100523000
             ,1);
  puVar8 = local_110;
  lVar9 = local_128;
  (extension_SwiftUI)::SwiftUI::View::_focused(local_b0);
  _swift_release(uStack_a8);
  _swift_release(local_b0.unknown);
  (**(code **)(local_108 + 8))(SVar18.unknown,puVar8);
  of.unknown = local_d8.unknown;
  SwiftUI::SubmitTriggers::get_text(SVar18);
  local_90 = puVar8;
  ppuStack_88 = ppuVar17;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focused(SwiftUI_FocusState<Swift_Bool>_Binding)__>_some>>_1005230c8
             ,1);
  puVar8 = local_f0;
  lVar19 = local_120;
  (extension_SwiftUI)::SwiftUI::View::_onSubmit(of);
  (**(code **)(local_d0 + 8))(of.unknown,puStack_c8);
  (**(code **)(local_e0 + 8))(lVar9,puVar8);
  puVar5 = local_e8;
  lVar20 = local_f8;
  lVar9 = local_100;
  pcVar21 = *(code **)(local_f8 + 0x10);
  (*pcVar21)(local_100,lVar19,local_e8);
  puVar6 = local_c0;
  puVar4 = local_118;
  puVar3 = local_130;
  puVar2 = local_140;
  puVar13 = local_150;
  *local_c0 = local_118;
  local_c0[1] = local_140;
  local_c0[2] = local_130;
  local_c0[3] = local_150;
  puVar8 = &DAT_100551968;
  FUN_100002f94(&DAT_100551968,&DAT_1004238c8);
  (*pcVar21)((long)puVar6 + (long)*(int *)(puVar8 + 0x30),lVar9,puVar5);
  pcVar21 = *(code **)(lVar20 + 8);
  _swift_retain(puVar4);
  _swift_retain(puVar2);
  _swift_retain(puVar3);
  _swift_retain(puVar13);
  (*pcVar21)(lVar19,puVar5);
  (*pcVar21)(lVar9,puVar5);
  _swift_release(puVar13);
  _swift_release(puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  return;
}

