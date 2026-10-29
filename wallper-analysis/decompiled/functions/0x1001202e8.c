// rea decompile_all
// name: FUN_1001202e8
// address: 0x1001202e8
// body: available
// range: 0x1001202e8-0x1001206a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001202e8(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  Color param_9)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  Design DVar5;
  undefined *puVar6;
  Text TVar7;
  undefined7 extraout_var;
  Font FVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  Set SVar12;
  EdgeInsets EVar13;
  Set _all;
  State SVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  long extraout_x8;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 local_260;
  uint local_25c;
  undefined *local_258;
  undefined *puStack_250;
  undefined *local_248;
  uint local_23c;
  undefined8 *local_238;
  long local_230;
  byte local_221;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  ulong local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 local_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined1 local_170;
  ulong local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  
  puVar6 = &DAT_10054a828;
  local_230 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_130 = (undefined *)*param_6;
  uVar22 = param_6[1];
  puStack_128 = (undefined *)uVar22;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar22);
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar7.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            ((long)&local_260 - extraout_x8,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c((long)&local_260 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  TVar11 = TVar7;
  puVar16 = puVar15;
  puVar17 = puVar6;
  puStack_250 = (undefined *)SwiftUI::Text::_font(FVar8.unknown);
  local_25c = (uint)puVar16;
  local_258 = TVar11.unknown;
  local_248 = puVar17;
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar15,puVar6);
  _swift_bridgeObjectRelease();
  bVar1 = *(byte *)(param_6 + 2);
  local_238 = param_6;
  CVar9 = SwiftUI::Color::get_white(param_9);
  local_23c = (uint)bVar1;
  CVar10 = CVar9;
  if ((bVar1 & 1) == 0) {
    CVar10 = SwiftUI::Color::opacity(0.85,CVar9);
    _swift_release(CVar9.unknown);
  }
  local_130 = CVar10.unknown;
  FUN_100028d58();
  SVar12.unknown = local_248;
  puVar15 = puStack_250;
  puVar6 = local_258;
  uVar19 = (ulong)local_25c;
  puVar16 = puStack_250;
  puVar17 = local_258;
  uVar18 = uVar19;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  local_260 = SUB84(puVar17,0);
  FUN_100025b34(puVar15,puVar6,uVar19);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease();
  SVar12 = SwiftUI::Edge::Set::get_horizontal(SVar12);
  uVar20 = 0x4028000000000000;
  EVar13 = SwiftUI::EdgeInsets::init(SVar12.unknown);
  uVar22 = param_3;
  uVar23 = param_4;
  uVar24 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar13.unknown);
  uVar2 = (undefined1)local_260;
  uStack_198 = (undefined1)param_4;
  uStack_197 = (undefined7)((ulong)param_4 >> 8);
  local_190 = (undefined1)param_5;
  uStack_18f = (undefined7)((ulong)param_5 >> 8);
  local_188 = 0;
  uVar21 = 0x4018000000000000;
  local_1d0 = TVar11.unknown;
  puStack_1c8 = puVar16;
  local_1c0 = uVar2;
  local_1b8 = uVar18;
  local_1b0 = (char)SVar12.unknown;
  uStack_1a8 = uVar20;
  local_1a0 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_110 = CONCAT71(uStack_1af,local_1b0);
  uStack_108 = uStack_1a8;
  uStack_f8 = uStack_198;
  uStack_100 = local_1a0;
  uStack_ef = CONCAT17(local_188,uStack_18f);
  local_f7 = uStack_197;
  uStack_f0 = local_190;
  uStack_120 = CONCAT71(uStack_1bf,local_1c0);
  puStack_128 = puStack_1c8;
  local_130 = local_1d0;
  uStack_118 = local_1b8;
  local_138 = 0;
  local_180 = TVar11.unknown;
  puStack_178 = puVar16;
  local_170 = uVar2;
  local_168 = uVar18;
  local_160 = (char)SVar12.unknown;
  local_158 = uVar20;
  uStack_150 = param_3;
  local_148 = param_4;
  uStack_140 = param_5;
  FUN_1000087e4(&local_1d0,&local_220,&DAT_10054a838,&DAT_10041ba50);
  CVar10.unknown = (undefined *)&local_180;
  FUN_10002a29c(CVar10.unknown,&DAT_10054a838,&DAT_10041ba50);
  uVar3 = local_23c;
  local_e0 = SUB81(_all.unknown,0);
  local_b8 = 0;
  local_d8 = uVar21;
  uStack_d0 = uVar22;
  local_c8 = uVar23;
  uStack_c0 = uVar24;
  if ((local_23c & 1) == 0) {
    CVar10.unknown = (undefined *)0x0;
  }
  else {
    CVar10 = SwiftUI::Color::get_accentColor(CVar10);
  }
  lVar4 = local_230;
  FUN_100359a74(local_230,CVar10.unknown);
  _swift_release(CVar10.unknown);
  FUN_10002a29c(&local_130,&DAT_10054a840,&DAT_100422300);
  uStack_218 = local_238[6];
  local_220 = local_238[5];
  SVar14.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar14);
  uVar22 = 0x3ff0000000000000;
  if (((uVar3 | local_221 ^ 0xffffffff) & 1) == 0) {
    uVar22 = 0x3feb333333333333;
  }
  puVar6 = &DAT_100553740;
  FUN_100002f94(&DAT_100553740,&DAT_1004267b8);
  *(undefined8 *)(lVar4 + *(int *)(puVar6 + 0x24)) = uVar22;
  return;
}

