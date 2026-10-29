// rea decompile_all
// name: FUN_1000a8920
// address: 0x1000a8920
// body: available
// range: 0x1000a8920-0x1000a8e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a8a68 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a8920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  Design DVar4;
  Set SVar5;
  undefined **ppuVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  Text TVar11;
  Color CVar12;
  Color CVar13;
  Text TVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  CGFloat CVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_220 [8];
  undefined *local_218;
  undefined1 *local_210;
  code *local_208;
  long local_200;
  undefined **local_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e4;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined8 *local_1c8;
  undefined1 auStack_1c0 [64];
  undefined *local_180;
  double dStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined *local_140;
  double dStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  double local_128;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined *local_100;
  double local_f8;
  undefined1 local_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined *local_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  puVar20 = &DAT_10054a828;
  local_1c8 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = auStack_220 + -extraout_x8;
  puVar20 = (undefined *)param_6[4];
  SVar5.unknown = (undefined *)0x0;
  FUN_1000b0ffc();
  dVar23 = *(double *)((long)param_6 + (long)*(int *)(SVar5.unknown + 0x14));
  dVar22 = dVar23 * 30.0;
  SVar5 = SwiftUI::Edge::Set::get_bottom(SVar5);
  dVar23 = dVar23 * 1.1;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  local_130 = SUB81(SVar5.unknown,0);
  uStack_118 = (undefined1)param_4;
  uStack_117 = (undefined7)((ulong)param_4 >> 8);
  uStack_110 = (undefined1)param_5;
  uStack_10f = (undefined7)((ulong)param_5 >> 8);
  local_108 = 0;
  local_c8 = 0;
  CVar12.unknown = &DAT_100421bb0;
  local_140 = puVar20;
  dStack_138 = dVar22;
  local_128 = dVar23;
  local_120 = param_3;
  local_100 = puVar20;
  local_f8 = dVar22;
  local_f0 = local_130;
  local_e8 = dVar23;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_1000087e4(&local_140,&local_c0,&DAT_100550320);
  ppuVar6 = &local_100;
  FUN_10002a29c(ppuVar6,&DAT_100550320,&DAT_100421bb0);
  local_c0 = (undefined *)*param_6;
  uVar1 = param_6[1];
  local_1f0 = param_6;
  dStack_b8 = (double)uVar1;
  FUN_100026df4();
  local_1f8 = ppuVar6;
  _swift_bridgeObjectRetain(uVar1);
  puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar7 = SwiftUI::Text::_init(ppuVar6,PTR___type_metadata_for_Swift_String_100523a98,ppuVar6);
  CVar19.unknown = (undefined *)0x3ffb333333333333;
  SwiftUI::Font::Weight::get_semibold((Weight)TVar7.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_200 = CONCAT71((int7)((ulong)TVar7.unknown >> 8),DVar4.value);
  local_208 = *(code **)(*(long *)(local_200 + -8) + 0x38);
  local_210 = puVar21;
  (*local_208)(puVar21,1,1,local_200);
  FVar8 = SwiftUI::Font::_system(CVar19,(Font)0x0);
  FUN_10002a29c(puVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar7;
  puVar15 = puVar20;
  ppuVar16 = ppuVar6;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar20,ppuVar6);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar12);
  CVar12 = CVar10;
  local_c0 = CVar10.unknown;
  FUN_100028d58();
  TVar7 = TVar9;
  puVar20 = TVar14.unknown;
  CVar13.unknown = puVar15;
  local_218 = CVar12.unknown;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  local_1e4 = SUB84(puVar20,0);
  local_1e0 = TVar7.unknown;
  puStack_1d8 = TVar11.unknown;
  local_1d0 = CVar13.unknown;
  FUN_100025b34(TVar9.unknown,TVar14.unknown,puVar15);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(ppuVar16);
  local_c0 = (undefined *)local_1f0[2];
  dStack_b8 = (double)local_1f0[3];
  _swift_bridgeObjectRetain();
  puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
  ppuVar16 = local_1f8;
  TVar7 = SwiftUI::Text::_init
                    (TVar11.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_1f8);
  CVar19.unknown = (undefined *)0x3ff6666666666666;
  SwiftUI::Font::Weight::get_regular((Weight)TVar7.unknown);
  puVar21 = local_210;
  (*local_208)(local_210,1,1,local_200);
  FVar8 = SwiftUI::Font::_system(CVar19,(Font)0x0);
  FUN_10002a29c(puVar21,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar7;
  puVar15 = puVar20;
  ppuVar6 = ppuVar16;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100025b34(TVar7.unknown,puVar20,ppuVar16);
  _swift_bridgeObjectRelease();
  CVar12 = SwiftUI::Color::get_white(CVar13);
  CVar13 = SwiftUI::Color::opacity(0.65,CVar12);
  _swift_release(CVar12.unknown);
  TVar7 = TVar9;
  puVar17 = TVar14.unknown;
  puVar18 = puVar15;
  local_c0 = CVar13.unknown;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar9.unknown,TVar14.unknown,puVar15);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease(ppuVar6);
  puVar3 = local_1d0;
  puVar15 = puStack_1d8;
  puVar20 = local_1e0;
  uVar2 = local_1e4;
  uStack_170 = CONCAT71(uStack_12f,local_130);
  dStack_178 = dStack_138;
  local_180 = local_140;
  dStack_168 = local_128;
  uStack_158 = uStack_118;
  local_160 = local_120;
  uStack_14f = CONCAT17(local_108,uStack_10f);
  uStack_157 = uStack_117;
  uStack_150 = uStack_110;
  dStack_b8 = dStack_138;
  local_c0 = local_140;
  dStack_a8 = local_128;
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_97 = uStack_117;
  uStack_90 = uStack_110;
  local_1c8[1] = dStack_138;
  *local_1c8 = local_140;
  local_1c8[3] = local_128;
  local_1c8[2] = uStack_170;
  local_1c8[5] = CONCAT71(uStack_117,uStack_118);
  local_1c8[4] = local_120;
  *(undefined8 *)((long)local_1c8 + 0x31) = uStack_14f;
  *(ulong *)((long)local_1c8 + 0x29) = CONCAT17(uStack_110,uStack_117);
  local_1c8[8] = puStack_1d8;
  local_1c8[9] = local_1e0;
  *(char *)(local_1c8 + 10) = (char)local_1e4;
  local_1c8[0xb] = local_1d0;
  local_1c8[0xc] = TVar11.unknown;
  local_1c8[0xd] = TVar7.unknown;
  *(char *)(local_1c8 + 0xe) = (char)puVar17;
  local_1c8[0xf] = puVar18;
  uStack_b0 = uStack_170;
  uStack_8f = uStack_14f;
  FUN_1000087e4(&local_c0,auStack_1c0,&DAT_100550320,&DAT_100421bb0);
  FUN_100007b14(puVar15,puVar20,uVar2);
  _swift_bridgeObjectRetain(puVar3);
  FUN_100007b14(TVar11.unknown,TVar7.unknown,puVar17);
  _swift_bridgeObjectRetain(puVar18);
  FUN_100025b34(TVar11.unknown,TVar7.unknown,puVar17);
  _swift_bridgeObjectRelease(puVar18);
  FUN_100025b34(puVar15,puVar20,uVar2);
  _swift_bridgeObjectRelease(puVar3);
  FUN_10002a29c(&local_180,&DAT_100550320,&DAT_100421bb0);
  return;
}

