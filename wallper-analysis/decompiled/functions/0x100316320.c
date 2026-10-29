// rea decompile_all
// name: FUN_100316320
// address: 0x100316320
// body: available
// range: 0x100316320-0x100316e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100316320(undefined8 *param_1,long param_2,undefined8 param_3,StringInterpolation param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  Design DVar10;
  StringInterpolation SVar11;
  State SVar12;
  LocalizedStringKey LVar13;
  Text TVar14;
  undefined7 extraout_var;
  Font FVar15;
  Text TVar16;
  Color CVar17;
  Color CVar18;
  undefined *puVar19;
  undefined8 uVar20;
  Text TVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar27;
  code *pcVar28;
  code *pcVar29;
  StringInterpolation stringInterpolation;
  CGFloat size;
  String SVar30;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_1d0;
  undefined2 auStack_1c8 [4];
  undefined1 auStack_1c0 [8];
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined4 local_19c;
  undefined *local_198;
  undefined *local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  code *local_140;
  undefined *local_138;
  undefined1 *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  undefined *puStack_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  code *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_90;
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar27 = &DAT_10055bef8;
  local_e0 = param_1;
  FUN_100002f94(&DAT_10055bef8,&DAT_100430c98);
  local_100 = *(long *)(puVar27 + -8);
  local_118 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar27 = &DAT_10055bf00;
  local_130 = auStack_1c0 + -extraout_x8;
  FUN_100002f94(&DAT_10055bf00,&DAT_100430ca0);
  local_110 = *(long *)(puVar27 + -8);
  puStack_108 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar26 = (long)(auStack_1c0 + -extraout_x8) - extraout_x8_00;
  puVar27 = &DAT_10055bf08;
  local_128 = lVar26;
  FUN_100002f94(&DAT_10055bf08,&DAT_100430ca8);
  local_f0 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_01;
  puVar27 = &DAT_10055bf10;
  local_120 = lVar26;
  FUN_100002f94(&DAT_10055bf10,&DAT_100430cb0);
  local_a8 = *(long *)(puVar27 + -8);
  local_e8 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  lVar26 = lVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar26 - extraout_x12;
  local_b0 = lVar26;
  local_150 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_140 = *(code **)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_140 + 0x40));
  lVar26 = lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar27 = &DAT_10055bf18;
  local_d0 = (code *)lVar26;
  FUN_100002f94(&DAT_10055bf18,&DAT_100430cb8);
  local_158 = *(long *)(puVar27 + -8);
  local_170 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar26 = lVar26 - extraout_x8_04;
  puVar27 = &DAT_10055bf20;
  local_188 = lVar26;
  FUN_100002f94(&DAT_10055bf20,&DAT_100430cc0);
  local_168 = *(long *)(puVar27 + -8);
  local_160 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar26 = lVar26 - extraout_x8_05;
  puVar27 = &DAT_10055bf28;
  local_180 = lVar26;
  FUN_100002f94(&DAT_10055bf28,&DAT_100430cc8);
  local_148 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_06;
  puVar27 = &DAT_10055bf30;
  local_178 = lVar26;
  FUN_100002f94(&DAT_10055bf30,&DAT_100430cd0);
  local_b8 = *(long *)(puVar27 + -8);
  local_138 = puVar27;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar26 = lVar26 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar26 - extraout_x12_00;
  puVar27 = &DAT_10054a828;
  local_c8 = lVar26;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_08;
  SVar11 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar11.unknown + -8) + 0x40));
  stringInterpolation.unknown = (undefined *)(lVar26 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0))
  ;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0xb,1);
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),param_4);
  uStack_78 = *(undefined8 *)(param_2 + 0xb0);
  size.unknown = *(undefined **)(param_2 + 0xa8);
  SVar12.unknown = &DAT_10055bd50;
  local_80 = size.unknown;
  FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
  SwiftUI::State::get_wrappedValue(SVar12);
  puVar27 = *(undefined **)(local_a0 + 0x10);
  _swift_bridgeObjectRelease();
  SVar11.unknown = (undefined *)0xe400000000000000;
  CVar17.unknown = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_80 = puVar27;
  SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
            (&local_80,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
            );
  uVar20 = 0xeb00000000737265;
  SVar30.bridgeObject = (void *)0xeb00000000737265;
  SVar30.str = (char *)0x7061706c6c617720;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar30,SVar11);
  uVar23 = (uint)SVar11.unknown;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(stringInterpolation.unknown + -8) = 0x100;
  *(undefined8 *)(stringInterpolation.unknown + -0x10) = 0;
  uVar24 = (ulong)(uVar23 & 1);
  TVar14 = SwiftUI::Text::_init(LVar13);
  SwiftUI::Font::Weight::get_medium((Weight)TVar14.unknown);
  DVar10 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar10.value) + -8) + 0x38))
            (lVar26,1,1,CONCAT71(extraout_var,DVar10.value));
  FVar15 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
  TVar21 = TVar14;
  uVar22 = uVar20;
  uVar25 = uVar24;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  _swift_release(FVar15.unknown);
  FUN_100025b34(TVar14.unknown,uVar20,uVar24);
  _swift_bridgeObjectRelease();
  CVar17 = SwiftUI::Color::get_white(CVar17);
  CVar18 = SwiftUI::Color::opacity(0.45,CVar17);
  _swift_release(CVar17.unknown);
  local_80 = CVar18.unknown;
  FUN_100028d58();
  TVar14 = TVar16;
  puVar27 = TVar21.unknown;
  uVar20 = uVar22;
  local_190 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_19c = SUB84(puVar27,0);
  local_198 = TVar14.unknown;
  local_d8 = uVar20;
  FUN_100025b34(TVar16.unknown,TVar21.unknown,uVar22);
  _swift_release(CVar18.unknown);
  _swift_bridgeObjectRelease(uVar25);
  puVar27 = &DAT_10054e3d0;
  local_90 = param_2;
  local_70 = param_2;
  FUN_100002f94(&DAT_10054e3d0,&DAT_10041f380);
  puVar19 = &DAT_10055bf38;
  local_1a8 = puVar27;
  FUN_100002f94(&DAT_10055bf38,&DAT_100430cd8);
  FUN_10006ba48();
  local_1b0 = puVar19;
  FUN_10031c200(&DAT_10055bf40,&DAT_10055bf38,&DAT_100430cd8);
  lVar26 = local_188;
  SwiftUI::Menu::_init();
  pcVar28 = local_d0;
  SwiftUI::PlainButtonStyle::init();
  puVar27 = &DAT_10055bf58;
  FUN_1000087a0(&DAT_10055bf58,&DAT_10055bf18,&DAT_100430cb8,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
  puVar19 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  puVar4 = local_150;
  puVar2 = local_170;
  lVar3 = local_180;
  local_1b8 = puVar19;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_180,pcVar28,local_170,local_150,puVar27,puVar19);
  local_140 = *(code **)((long)local_140 + 8);
  (*local_140)(pcVar28,puVar4);
  (**(code **)(local_158 + 8))(lVar26,puVar2);
  lVar26 = local_178;
  FUN_100354d7c(local_178);
  (**(code **)(local_168 + 8))(lVar3,local_160);
  uVar22 = 0x80000001004e5fe0;
  stringLiteral.bridgeObject = (void *)0x80000001004e5fe0;
  stringLiteral.str = (char *)0xd000000000000020;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  FUN_1000372f4(&DAT_10055bf60,&DAT_10055bf28,&DAT_100430cc8,FUN_10031c27c);
  lVar8 = local_c8;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar13);
  _swift_bridgeObjectRelease(puVar27);
  _swift_bridgeObjectRelease(uVar22);
  FUN_10002a29c(lVar26,&DAT_10055bf28,&DAT_100430cc8);
  local_90 = param_2;
  local_70 = param_2;
  FUN_100002f94(&DAT_10055bfa8,&DAT_100430d30);
  FUN_10031c200(&DAT_10055bfb0,&DAT_10055bfa8,&DAT_100430d30);
  puVar5 = local_130;
  SwiftUI::Menu::_init();
  pcVar28 = local_d0;
  SwiftUI::PlainButtonStyle::init();
  puVar27 = &DAT_10055bfb8;
  FUN_1000087a0(&DAT_10055bfb8,&DAT_10055bef8,&DAT_100430c98,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88);
  puVar19 = local_118;
  lVar26 = local_128;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_128,pcVar28,local_118,puVar4,puVar27,local_1b8);
  (*local_140)(pcVar28,puVar4);
  (**(code **)(local_100 + 8))(puVar5,puVar19);
  lVar3 = local_120;
  FUN_1003554b4(local_120);
  (**(code **)(local_110 + 8))(lVar26,puStack_108);
  uVar22 = 0x80000001004e6010;
  stringLiteral_00.bridgeObject = (void *)0x80000001004e6010;
  stringLiteral_00.str = (char *)0xd00000000000002d;
  LVar13 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  FUN_1000372f4(&DAT_10055bfc0,&DAT_10055bf08,&DAT_100430ca8,FUN_10031c598);
  lVar9 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar13);
  _swift_bridgeObjectRelease(puVar27);
  _swift_bridgeObjectRelease(uVar22);
  FUN_10002a29c(lVar3,&DAT_10055bf08,&DAT_100430ca8);
  lVar3 = local_c0;
  puVar4 = local_138;
  pcVar28 = *(code **)(local_b8 + 0x10);
  (*pcVar28)(local_c0,lVar8,local_138);
  puVar6 = local_e8;
  lVar26 = local_f8;
  local_d0 = *(code **)(local_a8 + 0x10);
  (*local_d0)(local_f8,lVar9,local_e8);
  puVar7 = local_e0;
  puVar2 = local_190;
  puVar19 = local_198;
  uVar1 = local_19c;
  *local_e0 = local_190;
  local_e0[1] = local_198;
  *(char *)(local_e0 + 2) = (char)local_19c;
  local_e0[3] = local_d8;
  local_e0[4] = 0;
  *(undefined1 *)(local_e0 + 5) = 1;
  puVar27 = &DAT_10055c008;
  FUN_100002f94(&DAT_10055c008,&DAT_100430d58);
  (*pcVar28)((long)puVar7 + (long)*(int *)(puVar27 + 0x40),lVar3,puVar4);
  (*local_d0)((long)puVar7 + (long)*(int *)(puVar27 + 0x50),lVar26,puVar6);
  FUN_100007b14(puVar2,puVar19,uVar1);
  uVar22 = local_d8;
  pcVar28 = *(code **)(local_a8 + 8);
  _swift_bridgeObjectRetain(local_d8);
  (*pcVar28)(local_b0,puVar6);
  pcVar29 = *(code **)(local_b8 + 8);
  (*pcVar29)(local_c8,puVar4);
  (*pcVar28)(lVar26,puVar6);
  (*pcVar29)(local_c0,puVar4);
  FUN_100025b34(puVar2,puVar19,uVar1);
  _swift_bridgeObjectRelease(uVar22);
  return;
}

