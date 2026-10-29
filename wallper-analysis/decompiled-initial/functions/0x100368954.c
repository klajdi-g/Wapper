// rea decompile_all
// name: FUN_100368954
// address: 0x100368954
// body: available
// range: 0x100368954-0x1003691ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100368954(undefined8 *param_1,CGFloat param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Design DVar9;
  long lVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  Color CVar13;
  LocalizedStringKey LVar14;
  State SVar15;
  undefined *puVar16;
  Font FVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar21;
  String systemName;
  String stringLiteral;
  undefined8 auStack_1a0 [4];
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  long local_120;
  code *local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined8 *local_b0;
  long local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  long lVar12;
  Binding<String> text;
  
  local_b0 = param_1;
  local_a8 = param_3;
  local_140 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar18 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  local_150 = lVar18;
  FUN_100386f18();
  local_180 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054b348;
  local_178 = extraout_x12;
  local_170 = lVar18;
  FUN_100002f94(&DAT_10054b348,&DAT_100430ef0);
  local_160 = *(long *)(puVar11 + -8);
  local_158 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = lVar18 - extraout_x8_00;
  puVar11 = &DAT_10055c1f8;
  local_168 = lVar18;
  FUN_100002f94(&DAT_10055c1f8,&DAT_1004367e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12_00;
  local_d0 = lVar18;
  local_100 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_f8 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar18 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10054def8;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_108 = *(long *)(puVar11 + -8);
  local_110 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = &DAT_10055c200;
  FUN_100002f94(&DAT_10055c200,&DAT_100433990);
  local_f0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar20 = (lVar18 - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_01;
  puVar11 = &DAT_10054a828;
  local_120 = lVar20;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_05;
  systemName.bridgeObject = (void *)0xef7373616c67676e;
  systemName.str = (char *)0x697966696e67616d;
  local_c8 = (undefined *)SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)local_c8);
  DVar9 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var,DVar9.value);
  local_118 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*local_118)(lVar20,1,1,lVar12);
  local_d8 = (undefined *)SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar20,&DAT_10054a828,&DAT_10041e3c0);
  CVar13.unknown = &DAT_100432f88;
  _swift_getKeyPath();
  local_e0 = CVar13.unknown;
  CVar13 = SwiftUI::Color::get_white(CVar13);
  local_e8 = (undefined *)SwiftUI::Color::opacity(0.5,CVar13);
  _swift_release(CVar13.unknown);
  stringLiteral.bridgeObject = (void *)0xe600000000000000;
  stringLiteral.str = (char *)0x686372616553;
  text.unknown = (undefined *)0xe600000000000000;
  LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar1 = (ulong *)(local_a8 + *(int *)(lVar10 + 0x30));
  local_128 = *puVar1;
  local_130 = puVar1[1];
  local_138 = puVar1[2];
  SVar15.unknown = &DAT_10054dd08;
  local_80 = local_128;
  uStack_78 = local_130;
  local_70 = local_138;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_projectedValue(SVar15);
  *(code **)(lVar20 + -0x10) = FUN_10002a200;
  *(undefined8 *)(lVar20 + -8) = 0;
  *(code **)(lVar20 + -0x20) = FUN_10002a200;
  *(undefined8 *)(lVar20 + -0x18) = 0;
  lVar6 = local_120;
  (extension_SwiftUI)::SwiftUI::TextField::_init(LVar14,text);
  SwiftUI::PlainTextFieldStyle::init();
  puVar11 = &DAT_100551538;
  FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
  puVar16 = &DAT_100551540;
  FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
  puVar5 = local_100;
  puVar4 = local_110;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (lVar6,lVar18,local_110,local_100,puVar11,puVar16);
  (**(code **)(local_f8 + 8))(lVar18,puVar5);
  (**(code **)(local_108 + 8))(lVar18 - extraout_x8_03,puVar4);
  (*local_118)(lVar20,1,1,lVar12);
  FVar17 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar20,&DAT_10054a828,&DAT_10041e3c0);
  puVar11 = &DAT_100432f88;
  _swift_getKeyPath();
  CVar13.unknown = &DAT_100551530;
  FUN_100002f94(&DAT_100551530,&DAT_100430f10);
  iVar3 = *(int *)(CVar13.unknown + 0x24);
  *(undefined8 *)(lVar6 + iVar3) = puVar11;
  ((undefined8 *)(lVar6 + iVar3))[1] = FVar17.unknown;
  CVar13 = SwiftUI::Color::get_white(CVar13);
  *(undefined **)(lVar6 + *(int *)(local_f0 + 0x24)) = CVar13.unknown;
  local_a0 = local_128;
  uStack_98 = local_130;
  local_90 = local_138;
  SwiftUI::State::get_wrappedValue(SVar15);
  uVar19 = uStack_78;
  uVar2 = local_80;
  _swift_bridgeObjectRelease(uStack_78);
  lVar10 = local_170;
  uVar2 = uVar2 & 0xffffffffffff;
  if ((uVar19 & 0x2000000000000000) != 0) {
    uVar2 = uVar19 >> 0x38 & 0xf;
  }
  lVar12 = local_d0;
  if (uVar2 != 0) {
    FUN_100029504(local_a8,local_170,FUN_100386f18);
    uVar19 = (ulong)*(byte *)(local_180 + 0x50);
    uVar21 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
    puVar11 = &DAT_10053bf80;
    _swift_allocObject(&DAT_10053bf80,uVar21 + local_178,uVar19 | 7);
    FUN_100007e64(lVar10,puVar11 + uVar21,FUN_100386f18);
    FUN_100002f94(&DAT_10054b280,&DAT_10041c5b0);
    FUN_1000297fc();
    lVar10 = local_168;
    SwiftUI::Button::_init();
    lVar18 = local_150;
    SwiftUI::PlainButtonStyle::init();
    puVar11 = &DAT_10054b4f0;
    FUN_1000087a0(&DAT_10054b4f0,&DAT_10054b348,&DAT_100430ef0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar16 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    lVar12 = local_d0;
    puVar5 = local_140;
    puVar4 = local_158;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_d0,lVar18,local_158,local_140,puVar11,puVar16);
    (**(code **)(local_148 + 8))(lVar18,puVar5);
    (**(code **)(local_160 + 8))(lVar10,puVar4);
  }
  puVar11 = &DAT_10055c218;
  FUN_100002f94(&DAT_10055c218,&DAT_100430f20);
  (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lVar12,uVar2 == 0,1,puVar11);
  lVar10 = local_c0;
  FUN_1000087e4(lVar6,local_c0,&DAT_10055c200,&DAT_100433990);
  lVar18 = local_b8;
  FUN_1000087e4(lVar12,local_b8,&DAT_10055c1f8,&DAT_1004367e0);
  puVar8 = local_b0;
  puVar7 = local_c8;
  puVar5 = local_d8;
  puVar4 = local_e0;
  puVar16 = local_e8;
  *local_b0 = local_c8;
  local_b0[1] = local_e0;
  local_b0[2] = local_d8;
  local_b0[3] = local_e8;
  puVar11 = &DAT_10055e1b0;
  FUN_100002f94(&DAT_10055e1b0,&DAT_1004339a0);
  FUN_1000087e4(lVar10,(long)puVar8 + (long)*(int *)(puVar11 + 0x30),&DAT_10055c200,&DAT_100433990);
  FUN_1000087e4(lVar18,(long)puVar8 + (long)*(int *)(puVar11 + 0x40),&DAT_10055c1f8,&DAT_1004367e0);
  _swift_retain(puVar7);
  _swift_retain(puVar4);
  _swift_retain(puVar5);
  _swift_retain(puVar16);
  FUN_10002a29c(lVar12,&DAT_10055c1f8,&DAT_1004367e0);
  FUN_10002a29c(lVar6,&DAT_10055c200,&DAT_100433990);
  FUN_10002a29c(lVar18,&DAT_10055c1f8,&DAT_1004367e0);
  FUN_10002a29c(lVar10,&DAT_10055c200,&DAT_100433990);
  _swift_release(puVar16);
  _swift_release(puVar5);
  _swift_release(puVar4);
  _swift_release(puVar7);
  return;
}

