// rea decompile_all
// name: FUN_100314c24
// address: 0x100314c24
// body: available
// range: 0x100314c24-0x1003154d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314c24(undefined8 *param_1,CGFloat param_2,void *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Binding BVar9;
  ulong uVar10;
  Design DVar11;
  undefined *puVar12;
  undefined7 extraout_var;
  Color CVar14;
  FocusState FVar15;
  LocalizedStringKey LVar16;
  State SVar17;
  undefined *puVar18;
  Font FVar19;
  Binding<String> text;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  double dVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar23;
  String systemName;
  String stringLiteral;
  undefined8 auStack_2f0 [4];
  long alStack_2d0 [3];
  undefined *local_2b8;
  long local_2b0;
  long local_2a8;
  undefined *local_2a0;
  State local_298;
  FocusState local_290;
  code *local_288;
  long local_280;
  long local_278;
  undefined *local_270;
  long local_268;
  undefined *local_260;
  long local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  long local_230;
  undefined *local_228;
  long local_220;
  undefined8 *local_218;
  long local_210;
  long local_208;
  undefined *local_200;
  long local_1f8;
  Binding local_1f0;
  ulong uStack_1e8;
  undefined1 local_1e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lVar13;
  
  local_218 = param_1;
  local_2a0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_2a8 = *(long *)(local_2a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2a8 + 0x40));
  lVar20 = (long)alStack_2d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10054b348;
  local_2b0 = lVar20;
  FUN_100002f94(&DAT_10054b348,&DAT_100430ef0);
  alStack_2d0[2] = *(long *)(puVar12 + -8);
  local_2b8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_2d0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_00;
  puVar12 = &DAT_10055c1f8;
  alStack_2d0[1] = lVar20;
  FUN_100002f94(&DAT_10055c1f8,&DAT_1004367e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_220 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12;
  local_208 = lVar20;
  local_260 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_258 = *(long *)(local_260 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_258 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_10054def8;
  local_278 = lVar20;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_268 = *(long *)(puVar12 + -8);
  local_270 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_268 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_03;
  puVar12 = &DAT_10055c200;
  local_280 = lVar20;
  FUN_100002f94(&DAT_10055c200,&DAT_100433990);
  local_250 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_04;
  puVar12 = &DAT_10055c208;
  FUN_100002f94(&DAT_10055c208,&DAT_100430f00);
  local_1f8 = *(long *)(puVar12 + -8);
  local_228 = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1f8 + 0x40));
  lVar22 = lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_230 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12_00;
  puVar12 = &DAT_10054a828;
  local_210 = lVar22;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar22 - extraout_x8_06;
  systemName.bridgeObject = (void *)0xef7373616c67676e;
  systemName.str = (char *)0x697966696e67616d;
  local_200 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)local_200);
  DVar11 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var,DVar11.value);
  local_288 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
  (*local_288)(lVar22,1,1,lVar13);
  local_238 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  CVar14.unknown = &DAT_100430d60;
  _swift_getKeyPath();
  local_240 = CVar14.unknown;
  CVar14 = SwiftUI::Color::get_white(CVar14);
  uStack_98 = *(undefined8 *)((long)param_3 + 0x118);
  local_a0 = *(undefined8 *)((long)param_3 + 0x110);
  local_90 = *(undefined1 *)((long)param_3 + 0x120);
  uStack_1e8 = *(ulong *)((long)param_3 + 0x118);
  local_1f0.unknown = *(undefined **)((long)param_3 + 0x110);
  local_1e0 = *(undefined1 *)((long)param_3 + 0x120);
  FVar15.unknown = &DAT_100551478;
  FUN_100002f94(&DAT_100551478,&DAT_1004320a0);
  local_290.unknown = FVar15.unknown;
  SwiftUI::FocusState::get_wrappedValue(FVar15);
  dVar21 = 0.8;
  if ((char)local_80 == '\0') {
    dVar21 = 0.5;
  }
  local_248 = (undefined *)SwiftUI::Color::opacity(dVar21,CVar14);
  _swift_release(CVar14.unknown);
  text.unknown = (undefined *)0x80000001004e60c0;
  stringLiteral.bridgeObject = (void *)0x80000001004e60c0;
  stringLiteral.str = (char *)0xd000000000000014;
  LVar16 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uStack_b8 = *(undefined8 *)((long)param_3 + 0x18);
  local_c0 = *(undefined8 *)((long)param_3 + 0x10);
  local_b0 = *(undefined8 *)((long)param_3 + 0x20);
  uStack_78 = *(undefined8 *)((long)param_3 + 0x18);
  local_80 = *(undefined8 *)((long)param_3 + 0x10);
  local_70 = *(undefined8 *)((long)param_3 + 0x20);
  SVar17.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  local_298.unknown = SVar17.unknown;
  SwiftUI::State::get_projectedValue(SVar17);
  *(code **)(lVar22 + -0x10) = FUN_10002a200;
  *(undefined8 *)(lVar22 + -8) = 0;
  *(code **)(lVar22 + -0x20) = FUN_10002a200;
  *(undefined8 *)(lVar22 + -0x18) = 0;
  lVar4 = local_280;
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar16,text);
  lVar6 = local_278;
  SwiftUI::PlainTextFieldStyle::init();
  puVar12 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar18 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  puVar5 = local_260;
  puVar3 = local_270;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (lVar20,lVar6,local_270,local_260,puVar12,puVar18);
  (**(code **)(local_258 + 8))(lVar6,puVar5);
  (**(code **)(local_268 + 8))(lVar4,puVar3);
  (*local_288)(lVar22,1,1,lVar13);
  FVar19 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar22,&DAT_10054a828,&DAT_10041e3c0);
  puVar12 = &DAT_100430d60;
  _swift_getKeyPath();
  CVar14.unknown = &DAT_100551530;
  FUN_100002f94(&DAT_100551530,&DAT_100430f10);
  iVar2 = *(int *)(CVar14.unknown + 0x24);
  *(undefined8 *)(lVar20 + iVar2) = puVar12;
  ((undefined8 *)(lVar20 + iVar2))[1] = FVar19.unknown;
  CVar14 = SwiftUI::Color::get_white(CVar14);
  *(undefined **)(lVar20 + *(int *)(local_250 + 0x24)) = CVar14.unknown;
  SwiftUI::FocusState::_get_projectedValue(local_290);
  uVar1 = uStack_1e8;
  BVar9.unknown = local_1f0.unknown;
  FUN_10031cfa0();
  lVar13 = local_210;
  (extension_SwiftUI)::SwiftUI::View::_focused(BVar9);
  _swift_release(uVar1);
  _swift_release(BVar9.unknown);
  FUN_10002a29c(lVar20,&DAT_10055c200,&DAT_100433990);
  SwiftUI::State::get_wrappedValue(local_298);
  uVar10 = uStack_1e8;
  BVar9.unknown = local_1f0.unknown;
  _swift_bridgeObjectRelease(uStack_1e8);
  uVar1 = (ulong)BVar9.unknown & 0xffffffffffff;
  if ((uVar10 & 0x2000000000000000) != 0) {
    uVar1 = uVar10 >> 0x38 & 0xf;
  }
  lVar20 = local_208;
  if (uVar1 != 0) {
    puVar12 = &DAT_10053a788;
    _swift_allocObject(&DAT_10053a788,0x131,7);
    _memcpy(puVar12 + 0x10,param_3,0x121);
    FUN_1003181f4(param_3,&local_1f0);
    FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
    FUN_1000297fc();
    lVar22 = alStack_2d0[1];
    SwiftUI::Button::_init();
    lVar4 = local_2b0;
    SwiftUI::PlainButtonStyle::init();
    puVar12 = &DAT_10054b4f0;
    FUN_1000087a0(&DAT_10054b4f0,&DAT_10054b348,&DAT_100430ef0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar18 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    lVar20 = local_208;
    puVar5 = local_2a0;
    puVar3 = local_2b8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_208,lVar4,local_2b8,local_2a0,puVar12,puVar18);
    (**(code **)(local_2a8 + 8))(lVar4,puVar5);
    (**(code **)(alStack_2d0[2] + 8))(lVar22,puVar3);
  }
  puVar12 = &DAT_10055c218;
  FUN_100002f94(&DAT_10055c218,&DAT_100430f20);
  (**(code **)(*(long *)(puVar12 + -8) + 0x38))(lVar20,uVar1 == 0,1,puVar12);
  puVar7 = local_228;
  lVar22 = local_230;
  pcVar23 = *(code **)(local_1f8 + 0x10);
  (*pcVar23)(local_230,lVar13,local_228);
  lVar13 = local_220;
  FUN_1000087e4(lVar20,local_220,&DAT_10055c1f8,&DAT_1004367e0);
  puVar8 = local_218;
  puVar5 = local_238;
  puVar3 = local_240;
  puVar18 = local_248;
  *local_218 = local_200;
  local_218[1] = local_240;
  local_218[2] = local_238;
  local_218[3] = local_248;
  puVar12 = &DAT_10055c220;
  FUN_100002f94(&DAT_10055c220,&DAT_100430f28);
  (*pcVar23)((long)puVar8 + (long)*(int *)(puVar12 + 0x30),lVar22,puVar7);
  FUN_1000087e4(lVar13,(long)puVar8 + (long)*(int *)(puVar12 + 0x40),&DAT_10055c1f8,&DAT_1004367e0);
  puVar12 = local_200;
  _swift_retain(local_200);
  _swift_retain(puVar3);
  _swift_retain(puVar5);
  _swift_retain(puVar18);
  FUN_10002a29c(local_208,&DAT_10055c1f8,&DAT_1004367e0);
  pcVar23 = *(code **)(local_1f8 + 8);
  (*pcVar23)(local_210,puVar7);
  FUN_10002a29c(lVar13,&DAT_10055c1f8,&DAT_1004367e0);
  (*pcVar23)(lVar22,puVar7);
  _swift_release(puVar18);
  _swift_release(puVar5);
  _swift_release(puVar3);
  _swift_release(puVar12);
  return;
}

