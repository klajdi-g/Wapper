// rea decompile_all
// name: FUN_100090ac0
// address: 0x100090ac0
// body: available
// range: 0x100090ac0-0x100090f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100090b64 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100090ac0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined8 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  Text TVar8;
  undefined *puVar9;
  Color CVar10;
  Text TVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  CGFloat CVar16;
  long lVar17;
  long local_230;
  code *local_228;
  long local_220;
  undefined *local_218;
  undefined *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined1 auStack_1f8 [72];
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined *local_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined1 local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  
  puVar3 = &DAT_10054a828;
  local_200 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&local_230 - extraout_x8;
  local_d0 = (undefined *)*param_2;
  uVar1 = param_2[1];
  local_208 = param_2;
  puStack_c8 = (undefined *)uVar1;
  FUN_100026df4();
  local_210 = puVar3;
  _swift_bridgeObjectRetain(uVar1);
  puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar4 = SwiftUI::Text::_init(puVar3,PTR___type_metadata_for_Swift_String_100523a98,puVar3);
  CVar16.unknown = (undefined *)0x400999999999999a;
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_220 = CONCAT71((int7)((ulong)TVar4.unknown >> 8),DVar2.value);
  local_228 = *(code **)(*(long *)(local_220 + -8) + 0x38);
  local_230 = lVar17;
  (*local_228)(lVar17,1,1,local_220);
  FVar5 = SwiftUI::Font::_system(CVar16,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar11 = TVar4;
  puVar12 = puVar9;
  puVar14 = puVar3;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar9,puVar3);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_5);
  CVar10 = CVar7;
  local_d0 = CVar7.unknown;
  FUN_100028d58();
  TVar4 = TVar6;
  puVar13 = TVar11.unknown;
  puVar15 = puVar12;
  local_218 = CVar10.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar11.unknown,puVar12);
  _swift_release(CVar7.unknown);
  _swift_bridgeObjectRelease(puVar14);
  puVar3 = &DAT_100420788;
  _swift_getKeyPath();
  puVar9 = &DAT_100420868;
  _swift_getKeyPath();
  local_150 = SUB81(puVar13,0);
  uStack_138 = 2;
  local_130 = 0;
  local_120 = 0x3fe6666666666666;
  local_f0 = 2;
  local_e8 = 0;
  uStack_d8 = 0x3fe6666666666666;
  CVar10.unknown = &DAT_100420898;
  local_160 = TVar8.unknown;
  puStack_158 = TVar4.unknown;
  local_148 = puVar15;
  local_140 = puVar3;
  local_128 = puVar9;
  local_118 = TVar8.unknown;
  puStack_110 = TVar4.unknown;
  local_108 = local_150;
  local_100 = puVar15;
  puStack_f8 = puVar3;
  local_e0 = puVar9;
  FUN_1000087e4(&local_160,&local_d0,&DAT_10054f358);
  FUN_10002a29c(&local_118,&DAT_10054f358,&DAT_100420898);
  local_d0 = (undefined *)local_208[2];
  puStack_c8 = (undefined *)local_208[3];
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar12 = local_210;
  TVar4 = SwiftUI::Text::_init(puVar9,PTR___type_metadata_for_Swift_String_100523a98,local_210);
  CVar16.unknown = (undefined *)0x400199999999999a;
  SwiftUI::Font::Weight::get_regular((Weight)TVar4.unknown);
  lVar17 = local_230;
  (*local_228)(local_230,1,1,local_220);
  FVar5 = SwiftUI::Font::_system(CVar16,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar11 = TVar4;
  puVar9 = puVar3;
  puVar13 = puVar12;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,puVar12);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_white(CVar10);
  CVar7 = SwiftUI::Color::opacity(0.7,CVar10);
  _swift_release(CVar10.unknown);
  TVar4 = TVar6;
  puVar12 = TVar11.unknown;
  puVar14 = puVar9;
  local_d0 = CVar7.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar11.unknown,puVar9);
  _swift_release(CVar7.unknown);
  _swift_bridgeObjectRelease(puVar13);
  puVar3 = &DAT_100420788;
  _swift_getKeyPath();
  uStack_180 = CONCAT71(uStack_12f,local_130);
  uStack_188 = uStack_138;
  local_190 = local_140;
  puStack_178 = local_128;
  local_170 = local_120;
  uStack_1a0 = CONCAT71(uStack_14f,local_150);
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  puStack_198 = local_148;
  uStack_a8 = uStack_138;
  local_b0 = local_140;
  puStack_98 = local_128;
  local_90 = local_120;
  puStack_c8 = puStack_158;
  local_d0 = local_160;
  puStack_b8 = local_148;
  local_200[5] = uStack_138;
  local_200[4] = local_140;
  local_200[7] = local_128;
  local_200[6] = uStack_180;
  local_200[1] = puStack_158;
  *local_200 = local_160;
  local_200[3] = local_148;
  local_200[2] = uStack_1a0;
  local_200[8] = local_120;
  local_200[9] = TVar8.unknown;
  local_200[10] = TVar4.unknown;
  *(char *)(local_200 + 0xb) = (char)puVar12;
  local_200[0xc] = puVar14;
  local_200[0xd] = puVar3;
  local_200[0xe] = 1;
  *(undefined1 *)(local_200 + 0xf) = 0;
  uStack_c0 = uStack_1a0;
  uStack_a0 = uStack_180;
  FUN_1000087e4(&local_d0,auStack_1f8,&DAT_10054f358,&DAT_100420898);
  FUN_100007b14(TVar8.unknown,TVar4.unknown,puVar12);
  _swift_bridgeObjectRetain(puVar14);
  _swift_retain(puVar3);
  FUN_100025b34(TVar8.unknown,TVar4.unknown,puVar12);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(puVar14);
  FUN_10002a29c(&local_1b0,&DAT_10054f358,&DAT_100420898);
  return;
}

