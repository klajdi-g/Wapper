// rea decompile_all
// name: FUN_10004eb6c
// address: 0x10004eb6c
// body: available
// range: 0x10004eb6c-0x10004f413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004eb6c(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,void *param_6,undefined8 param_7,uint param_8,Color param_9)

{
  undefined1 *puVar1;
  char *pcVar2;
  String SVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  Design DVar8;
  StringInterpolation SVar9;
  LocalizedStringKey LVar10;
  Text TVar11;
  undefined7 extraout_var;
  Font FVar12;
  Text TVar13;
  Color CVar14;
  Color CVar15;
  State SVar16;
  Color CVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  Set SVar21;
  undefined *puVar22;
  Text TVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  StringInterpolation SVar27;
  undefined *puVar28;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar30;
  char *pcVar31;
  long extraout_x12;
  ulong uVar32;
  undefined8 uVar33;
  CGFloat size;
  String stringLiteral;
  String SVar34;
  String stringLiteral_00;
  undefined8 uStack_2a0;
  undefined2 auStack_298 [4];
  StringInterpolation local_290;
  ulong local_288;
  undefined *local_280;
  code *local_278;
  undefined4 local_26c;
  undefined *local_268;
  long local_260;
  undefined *local_258;
  undefined *local_250;
  long local_248;
  undefined *local_240;
  undefined *local_238;
  long local_230;
  long local_228;
  undefined8 *local_220;
  void *local_218;
  long local_210;
  undefined *local_208;
  undefined *local_200;
  long local_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  char *local_90;
  void *pvStack_88;
  void *local_80;
  
  puVar22 = &DAT_10054dcf0;
  local_220 = param_1;
  local_218 = param_6;
  FUN_100002f94(&DAT_10054dcf0,&DAT_10041ea38);
  local_248 = *(long *)(puVar22 + -8);
  local_250 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_248 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar22 = &DAT_10054dcf8;
  local_260 = (long)&local_290 - extraout_x8;
  FUN_100002f94(&DAT_10054dcf8,&DAT_10041ea40);
  local_230 = *(long *)(puVar22 + -8);
  local_240 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar29 = (undefined *)(((long)&local_290 - extraout_x8) - extraout_x8_00);
  puVar22 = &DAT_10054dd00;
  local_258 = puVar29;
  FUN_100002f94(&DAT_10054dd00,&DAT_10041ea48);
  local_238 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar30 = (long)puVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar30;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar30 = lVar30 - extraout_x12;
  local_1f8 = lVar30;
  SVar9 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar9.unknown + -8) + 0x40));
  puVar29 = (undefined *)(lVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar22 = &DAT_10054a828;
  local_290.unknown = puVar29;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)puVar29 - extraout_x8_03;
  puVar22 = (undefined *)0xeb00000000676e69;
  stringLiteral.bridgeObject = (void *)0xeb00000000676e69;
  stringLiteral.str = (char *)0x79616c5020776f4e;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar30 + -8) = 0x100;
  *(undefined8 *)(lVar30 + -0x10) = 0;
  uVar26 = (ulong)(param_8 & 1);
  TVar11 = SwiftUI::Text::_init(LVar10);
  SwiftUI::Font::Weight::get_medium((Weight)TVar11.unknown);
  DVar8 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_210 = CONCAT71(extraout_var,DVar8.value);
  local_278 = *(code **)(*(long *)(local_210 + -8) + 0x38);
  local_288 = lVar30;
  (*local_278)(lVar30,1,1,local_210);
  FVar12 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar30,&DAT_10054a828,&DAT_10041e3c0);
  TVar23 = TVar11;
  SVar27.unknown = puVar22;
  uVar32 = uVar26;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100025b34(TVar11.unknown,puVar22,uVar26);
  _swift_bridgeObjectRelease();
  CVar14 = SwiftUI::Color::get_white(param_9);
  CVar15 = SwiftUI::Color::opacity(0.6,CVar14);
  _swift_release();
  local_1f0 = CVar15.unknown;
  FUN_100028d58();
  TVar11 = TVar13;
  puVar22 = TVar23.unknown;
  CVar17.unknown = SVar27.unknown;
  local_280 = CVar14.unknown;
  local_200 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_26c = SUB84(puVar22,0);
  local_268 = TVar11.unknown;
  local_208 = CVar17.unknown;
  FUN_100025b34(TVar13.unknown,TVar23.unknown);
  _swift_release(CVar15.unknown);
  _swift_bridgeObjectRelease(uVar32);
  SVar9.unknown = local_290.unknown;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(1,1);
  SVar34.bridgeObject = (void *)0xe100000000000000;
  SVar34.str = (char *)0x76;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar34,SVar27);
  puStack_1e8 = *(undefined **)((long)local_218 + 0x148);
  size.unknown = *(undefined **)((long)local_218 + 0x140);
  local_1e0 = *(undefined **)((long)local_218 + 0x150);
  SVar16.unknown = &DAT_10054dd08;
  local_1f0 = size.unknown;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar16);
  SVar3.bridgeObject = pvStack_88;
  SVar3.str = local_90;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar3,SVar27);
  _swift_bridgeObjectRelease(pvStack_88);
  uVar24 = 0xe000000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar27);
  uVar25 = (uint)SVar27.unknown;
  LVar10 = SwiftUI::LocalizedStringKey::init(SVar9);
  *(undefined2 *)(lVar30 + -8) = 0x100;
  *(undefined8 *)(lVar30 + -0x10) = 0;
  uVar26 = (ulong)(uVar25 & 1);
  TVar11 = SwiftUI::Text::_init(LVar10);
  SwiftUI::Font::Weight::get_regular((Weight)TVar11.unknown);
  uVar32 = local_288;
  (*local_278)(local_288,1,1,local_210);
  FVar12 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(uVar32,&DAT_10054a828,&DAT_10041e3c0);
  TVar23 = TVar11;
  uVar33 = uVar24;
  uVar32 = uVar26;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100025b34(TVar11.unknown,uVar24,uVar26);
  _swift_bridgeObjectRelease();
  CVar17 = SwiftUI::Color::get_white(CVar17);
  CVar15 = SwiftUI::Color::opacity(0.6,CVar17);
  _swift_release(CVar17.unknown);
  TVar11 = TVar13;
  puVar22 = TVar23.unknown;
  uVar24 = uVar33;
  local_1f0 = CVar15.unknown;
  local_278 = (code *)SwiftUI::Text::_foregroundStyle();
  local_288 = CONCAT44(local_288._4_4_,(int)puVar22);
  local_280 = TVar11.unknown;
  local_210 = uVar24;
  FUN_100025b34(TVar13.unknown,TVar23.unknown,uVar33);
  _swift_release(CVar15.unknown);
  _swift_bridgeObjectRelease(uVar32);
  puVar22 = &DAT_100526ff8;
  _swift_allocObject(&DAT_100526ff8,0x168,7);
  stringLiteral_00.bridgeObject = local_218;
  _memcpy(puVar22 + 0x10,local_218,0x158);
  local_80 = stringLiteral_00.bridgeObject;
  FUN_100058a6c(stringLiteral_00.bridgeObject,&local_1f0);
  FUN_100002f94(&DAT_10054dd10,&DAT_10041ea58);
  FUN_10005b334();
  lVar30 = local_260;
  SwiftUI::Button::_init();
  uVar33 = *(undefined8 *)((long)stringLiteral_00.bridgeObject + 0xb8);
  puVar22 = &DAT_10041e260;
  puVar18 = puVar22;
  _swift_getKeyPath(&DAT_10041e260);
  puVar29 = &DAT_10041e288;
  puVar19 = puVar29;
  _swift_getKeyPath(&DAT_10041e288);
  Combine::Published::_get_subscript(&local_1f0,uVar33,puVar18,puVar19);
  _swift_release(puVar18);
  _swift_release(puVar19);
  puVar18 = &DAT_10054dd30;
  FUN_1000087a0(&DAT_10054dd30,&DAT_10054dcf0,&DAT_10041ea38,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar20 = puVar18;
  FUN_100003038();
  puVar19 = local_250;
  SVar21.unknown = local_258;
  puVar28 = puVar18;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_258,&local_1f0,local_250,&DAT_100525378,puVar18,puVar20);
  (**(code **)(local_248 + 8))(lVar30,puVar19);
  _swift_getKeyPath(&DAT_10041e260);
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_1f0,uVar33,puVar22,puVar29);
  _swift_release(puVar22);
  _swift_release(puVar29);
  pcVar2 = "he music that\'s playing.";
  if ((char)local_1f0 == '\0') {
    pcVar2 = "Update available";
  }
  pcVar31 = (char *)0xd00000000000004d;
  if ((char)local_1f0 == '\0') {
    pcVar31 = (char *)0xd000000000000048;
  }
  stringLiteral_00.bridgeObject = (void *)((ulong)pcVar2 | 0x8000000000000000);
  stringLiteral_00.str = pcVar31;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  local_1f0 = puVar19;
  puStack_1e8 = &DAT_100525378;
  local_1e0 = puVar18;
  local_1d8 = puVar20;
  _swift_getOpaqueTypeConformance2
            (&local_1f0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  lVar7 = local_1f8;
  puVar22 = local_240;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar10);
  _swift_bridgeObjectRelease(puVar28);
  _swift_bridgeObjectRelease(stringLiteral_00.bridgeObject);
  (**(code **)(local_230 + 8))(SVar21.unknown,puVar22);
  SVar21 = SwiftUI::Edge::Set::get_top(SVar21);
  uVar33 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar21.unknown);
  lVar30 = local_228;
  puVar1 = (undefined1 *)(lVar7 + *(int *)(local_238 + 0x24));
  *puVar1 = (char)SVar21.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar33;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1000087e4(lVar7,local_228,&DAT_10054dd00,&DAT_10041ea48);
  puVar20 = local_200;
  puVar19 = local_208;
  puVar6 = local_220;
  puVar18 = local_268;
  uVar5 = local_26c;
  pcVar4 = local_278;
  puVar29 = local_280;
  *local_220 = local_200;
  local_220[1] = local_268;
  *(char *)(local_220 + 2) = (char)local_26c;
  local_220[3] = local_208;
  local_220[4] = local_278;
  local_220[5] = local_280;
  uVar32 = local_288 & 0xffffffff;
  *(char *)(local_220 + 6) = (char)local_288;
  local_220[7] = local_210;
  puVar22 = &DAT_10054dd38;
  FUN_100002f94(&DAT_10054dd38,&DAT_10041ea68);
  FUN_1000087e4(lVar30,(long)puVar6 + (long)*(int *)(puVar22 + 0x40),&DAT_10054dd00,&DAT_10041ea48);
  FUN_100007b14(puVar20,puVar18,uVar5);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100007b14(pcVar4,puVar29,uVar32);
  lVar7 = local_210;
  _swift_bridgeObjectRetain(local_210);
  FUN_10002a29c(local_1f8,&DAT_10054dd00,&DAT_10041ea48);
  FUN_10002a29c(lVar30,&DAT_10054dd00,&DAT_10041ea48);
  FUN_100025b34(pcVar4,puVar29,uVar32);
  _swift_bridgeObjectRelease(lVar7);
  FUN_100025b34(local_200,puVar18,uVar5);
  _swift_bridgeObjectRelease(local_208);
  return;
}

