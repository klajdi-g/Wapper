// rea decompile_all
// name: FUN_10001b4e4
// address: 0x10001b4e4
// body: available
// range: 0x10001b4e4-0x10001bbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001b7e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001b4e4(undefined8 *param_1,CGFloat param_2,char *param_3,void *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  Design DVar5;
  ControlSize CVar6;
  undefined *puVar7;
  Image IVar8;
  Font FVar10;
  Alignment AVar11;
  Color CVar12;
  undefined **ppuVar13;
  Text TVar14;
  Text TVar15;
  Color CVar16;
  Color CVar17;
  Text TVar18;
  LocalizedStringKey LVar19;
  undefined **ppuVar20;
  Text TVar21;
  Binding<bool> isOn;
  undefined *puVar22;
  undefined *puVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  code *pcVar25;
  ulong uVar26;
  CGFloat size;
  String systemName;
  undefined *local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  undefined *local_270;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined *local_250;
  undefined *local_248;
  undefined4 local_23c;
  long local_238;
  long local_230;
  long local_228;
  undefined *local_220;
  long local_218;
  undefined8 *local_210;
  long local_208;
  undefined1 auStack_200 [80];
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar9;
  
  local_290 = param_5;
  local_288 = (undefined *)param_6;
  local_268 = param_7;
  local_258 = param_8;
  local_23c = param_9;
  local_210 = param_1;
  local_220 = (undefined *)SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  local_218 = *(long *)(local_220 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_218 + 0x40));
  lVar24 = (long)&local_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054b1e0;
  local_238 = lVar24;
  FUN_100002f94(&DAT_10054b1e0,&DAT_10041c400);
  local_260 = *(long *)(puVar7 + -8);
  local_270 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_260 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar24 = lVar24 - extraout_x8_00;
  puVar7 = &DAT_10054b1e8;
  local_280 = lVar24;
  FUN_100002f94(&DAT_10054b1e8,&DAT_10042e650);
  local_230 = *(long *)(puVar7 + -8);
  local_250 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_230 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar24 = lVar24 - extraout_x8_01;
  puVar7 = &DAT_10054b1f0;
  local_278 = lVar24;
  FUN_100002f94(&DAT_10054b1f0,&DAT_10041c410);
  local_248 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12;
  puVar7 = &DAT_10054a828;
  local_208 = lVar24;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_03;
  _swift_bridgeObjectRetain(param_4);
  systemName.bridgeObject = param_4;
  systemName.str = param_3;
  IVar8 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)IVar8.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar9 = CONCAT71((int7)((ulong)IVar8.unknown >> 8),DVar5.value);
  pcVar25 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  (*pcVar25)(lVar24,1,1,lVar9);
  FVar10 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar24,&DAT_10054a828,&DAT_10041e3c0);
  CVar17.unknown = &DAT_10041bb78;
  _swift_getKeyPath();
  AVar11.unknown = (undefined *)SwiftUI::Color::get_white(CVar17);
  CVar12 = SwiftUI::Color::opacity(0.85,(Color)AVar11.unknown);
  _swift_release();
  SwiftUI::Alignment::get_center(AVar11);
  SwiftUI::_FrameLayout::_init((Alignment)0x4032000000000000);
  uStack_138 = puStack_1a8;
  local_140 = local_1b0;
  uStack_128 = puStack_198;
  uStack_130 = puStack_1a0;
  uStack_118 = uStack_188;
  local_120 = local_190;
  uStack_d8 = puStack_198;
  local_e0 = puStack_1a0;
  uStack_c8 = uStack_188;
  uStack_d0 = local_190;
  uStack_e8 = puStack_1a8;
  local_f0 = local_1b0;
  CVar16.unknown = &DAT_1004226d0;
  local_160 = IVar8.unknown;
  puStack_158 = CVar17.unknown;
  local_150 = FVar10.unknown;
  puStack_148 = CVar12.unknown;
  local_110 = IVar8.unknown;
  puStack_108 = CVar17.unknown;
  local_100 = FVar10.unknown;
  puStack_f8 = CVar12.unknown;
  FUN_1000087e4(&local_160,&local_c0,&DAT_10054b1f8);
  ppuVar13 = &local_110;
  FUN_10002a29c(ppuVar13,&DAT_10054b1f8,&DAT_1004226d0);
  puVar7 = local_288;
  local_c0 = local_290;
  puStack_b8 = local_288;
  FUN_100026df4();
  _swift_bridgeObjectRetain(puVar7);
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar14 = SwiftUI::Text::_init(ppuVar13,PTR___type_metadata_for_Swift_String_100523a98,ppuVar13);
  size.unknown = local_1b0;
  SwiftUI::Font::Weight::get_medium((Weight)TVar14.unknown);
  (*pcVar25)(lVar24,1,1,lVar9);
  FVar10 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar24,&DAT_10054a828,&DAT_10041e3c0);
  TVar21 = TVar14;
  puVar22 = puVar7;
  ppuVar20 = ppuVar13;
  TVar15 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100025b34(TVar14.unknown,puVar7,ppuVar13);
  _swift_bridgeObjectRelease();
  CVar17 = SwiftUI::Color::get_white(CVar16);
  local_c0 = CVar17.unknown;
  FUN_100028d58();
  TVar14 = TVar15;
  puVar7 = TVar21.unknown;
  puVar23 = puVar22;
  TVar18 = SwiftUI::Text::_foregroundStyle();
  local_290 = (undefined *)CONCAT44(local_290._4_4_,(int)puVar7);
  local_288 = puVar23;
  FUN_100025b34(TVar15.unknown,TVar21.unknown,puVar22);
  _swift_release(CVar17.unknown);
  _swift_bridgeObjectRelease(ppuVar20);
  isOn.unknown = (undefined *)0xe000000000000000;
  LVar19 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_retain(local_268);
  _swift_retain(local_258);
  lVar9 = local_280;
  (extension_SwiftUI)::SwiftUI::Toggle::_init(LVar19,isOn);
  puVar7 = &DAT_10054b200;
  FUN_1000087a0(&DAT_10054b200,&DAT_10054b1e0,&DAT_10041c400,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_1005234a0);
  puVar22 = local_270;
  lVar24 = local_278;
  (extension_SwiftUI)::SwiftUI::View::_labelsHidden();
  (**(code **)(local_260 + 8))(lVar9,puVar22);
  lVar9 = local_238;
  SwiftUI::SwitchToggleStyle::init();
  local_c0 = puVar22;
  ppuVar20 = &local_c0;
  puStack_b8 = puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar20,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_labelsHidden()__>_some>>_100522f20
             ,1);
  puVar7 = &DAT_10054b208;
  FUN_1000036d0(&DAT_10054b208,PTR_typeMetadataAccessor_1005225f8,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_1005225e8);
  lVar4 = local_208;
  puVar23 = local_220;
  puVar22 = local_250;
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (local_208,lVar9,local_250,local_220,ppuVar20,puVar7);
  (**(code **)(local_218 + 8))(lVar9,puVar23);
  (**(code **)(local_230 + 8))(lVar24,puVar22);
  puVar1 = (undefined8 *)(lVar4 + *(int *)(local_248 + 0x24));
  puVar7 = &DAT_10054b210;
  FUN_100002f94(&DAT_10054b210,&DAT_10041c420);
  iVar3 = *(int *)(puVar7 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100521cb0
  ;
  CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar9 = CONCAT71((int7)((ulong)puVar7 >> 8),CVar6.value);
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  puVar7 = &DAT_10041c428;
  _swift_getKeyPath();
  lVar9 = local_228;
  *puVar1 = puVar7;
  uStack_188 = uStack_138;
  local_190 = local_140;
  uStack_178 = uStack_128;
  uStack_180 = uStack_130;
  uStack_168 = uStack_118;
  local_170 = local_120;
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  puStack_198 = puStack_148;
  puStack_1a0 = local_150;
  FUN_1000087e4(lVar4,local_228,&DAT_10054b1f0,&DAT_10041c410);
  puVar1 = local_210;
  puVar22 = local_288;
  uStack_98 = uStack_188;
  local_a0 = local_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_78 = uStack_168;
  local_80 = local_170;
  puStack_b8 = puStack_1a8;
  local_c0 = local_1b0;
  puStack_a8 = puStack_198;
  puStack_b0 = puStack_1a0;
  local_210[5] = uStack_188;
  local_210[4] = local_190;
  local_210[7] = uStack_178;
  local_210[6] = uStack_180;
  local_210[9] = uStack_168;
  local_210[8] = local_170;
  local_210[1] = puStack_1a8;
  *local_210 = local_1b0;
  local_210[3] = puStack_198;
  local_210[2] = puStack_1a0;
  local_210[10] = TVar18.unknown;
  local_210[0xb] = TVar14.unknown;
  uVar26 = (ulong)local_290 & 0xffffffff;
  *(char *)(local_210 + 0xc) = (char)local_290;
  local_210[0xd] = local_288;
  local_210[0xe] = 0;
  *(undefined1 *)(local_210 + 0xf) = 1;
  puVar7 = &DAT_10054b218;
  FUN_100002f94(&DAT_10054b218,&DAT_10041c458);
  FUN_1000087e4(lVar9,(long)puVar1 + (long)*(int *)(puVar7 + 0x50),&DAT_10054b1f0,&DAT_10041c410);
  FUN_1000087e4(&local_c0,auStack_200,&DAT_10054b1f8,&DAT_1004226d0);
  FUN_100007b14(TVar18.unknown,TVar14.unknown,uVar26);
  _swift_bridgeObjectRetain(puVar22);
  FUN_10002a29c(local_208,&DAT_10054b1f0,&DAT_10041c410);
  FUN_10002a29c(lVar9,&DAT_10054b1f0,&DAT_10041c410);
  FUN_100025b34(TVar18.unknown,TVar14.unknown,uVar26);
  _swift_bridgeObjectRelease(puVar22);
  FUN_10002a29c(&local_1b0,&DAT_10054b1f8,&DAT_1004226d0);
  return;
}

