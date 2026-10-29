// rea decompile_all
// name: FUN_1002fe9bc
// address: 0x1002fe9bc
// body: available
// range: 0x1002fe9bc-0x1002fee1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002feb98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002fe9bc(undefined8 *param_1,CGFloat param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,Color param_6,uint param_7)

{
  undefined4 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  undefined *puVar11;
  Text TVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined1 *puVar16;
  double dVar17;
  undefined1 auStack_230 [8];
  undefined *local_228;
  code *local_220;
  long lStack_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined4 local_1ec;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  uint local_1cc;
  undefined8 *local_1c8;
  undefined1 auStack_1c0 [56];
  undefined6 uStack_188;
  undefined2 local_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined6 uStack_178;
  undefined2 local_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 local_162;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined6 uStack_158;
  undefined1 uStack_152;
  undefined *local_150;
  undefined *puStack_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined *local_138;
  undefined2 local_130;
  undefined6 uStack_12e;
  undefined *puStack_128;
  undefined1 local_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined1 local_108;
  undefined *local_100;
  undefined2 local_f8;
  undefined *local_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined1 local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined1 local_70;
  
  puVar3 = &DAT_10054a828;
  local_200 = param_5;
  puStack_1f8 = param_6.unknown;
  local_1cc = param_7;
  local_1c8 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_230 + -extraout_x8;
  local_a0 = param_3;
  puStack_98 = (undefined *)param_4;
  FUN_100026df4();
  local_208 = puVar3;
  _swift_bridgeObjectRetain(param_4);
  puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar4 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_218 = CONCAT71((int7)((ulong)TVar4.unknown >> 8),DVar2.value);
  local_220 = *(code **)(*(long *)(lStack_218 + -8) + 0x38);
  (*local_220)(puVar16,1,1,lStack_218);
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(puVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  puVar13 = puVar11;
  puVar14 = puVar3;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  local_228 = puVar14;
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar11,puVar3);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_6);
  CVar9 = CVar7;
  local_a0 = CVar7.unknown;
  FUN_100028d58();
  puVar3 = local_228;
  TVar4 = TVar6;
  puVar11 = TVar12.unknown;
  CVar10.unknown = puVar13;
  local_210 = CVar9.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  local_1ec = SUB84(puVar11,0);
  local_1e8 = TVar4.unknown;
  local_1e0 = CVar10.unknown;
  puStack_1d8 = TVar8.unknown;
  FUN_100025b34(TVar6.unknown,TVar12.unknown,puVar13);
  _swift_release(CVar7.unknown);
  _swift_bridgeObjectRelease(puVar3);
  local_a0 = local_200;
  puStack_98 = puStack_1f8;
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar11 = local_208;
  TVar4 = SwiftUI::Text::_init
                    (TVar8.unknown,PTR___type_metadata_for_Swift_String_100523a98,local_208);
  (*local_220)(puVar16,1,1,lStack_218);
  FVar5 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(puVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar12 = TVar4;
  puVar13 = puVar3;
  puVar14 = puVar11;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,puVar11);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(CVar10);
  dVar17 = 0.75;
  if ((local_1cc & 1) == 0) {
    dVar17 = 0.6;
  }
  CVar10 = SwiftUI::Color::opacity(dVar17,CVar9);
  _swift_release(CVar9.unknown);
  TVar4 = TVar6;
  puVar11 = TVar12.unknown;
  puVar15 = puVar13;
  local_a0 = CVar10.unknown;
  TVar8 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar12.unknown,puVar13);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(puVar14);
  puVar3 = &DAT_10042ffd8;
  _swift_getKeyPath();
  local_140 = SUB81(puVar11,0);
  local_130 = 0x100;
  local_120 = 0;
  local_f8 = 0x100;
  local_e8 = 0;
  local_150 = TVar8.unknown;
  puStack_148 = TVar4.unknown;
  local_138 = puVar15;
  puStack_128 = puVar3;
  local_118 = TVar8.unknown;
  puStack_110 = TVar4.unknown;
  local_108 = local_140;
  local_100 = puVar15;
  local_f0 = puVar3;
  FUN_1000087e4(&local_150,&local_a0,&DAT_10055b5e0,&DAT_100430008);
  FUN_10002a29c(&local_118,&DAT_10055b5e0,&DAT_100430008);
  puVar13 = puStack_1d8;
  puVar11 = local_1e0;
  puVar3 = local_1e8;
  uVar1 = local_1ec;
  uStack_d0 = CONCAT71(uStack_13f,local_140);
  puStack_98 = puStack_148;
  local_a0 = local_150;
  puStack_88 = local_138;
  local_c0 = CONCAT62(uStack_12e,local_130);
  puStack_78 = puStack_128;
  local_70 = local_120;
  puStack_d8 = puStack_148;
  local_e0 = local_150;
  puStack_c8 = local_138;
  puStack_b8 = puStack_128;
  local_b0 = local_120;
  uStack_17a = SUB82(puStack_148,0);
  uStack_178 = (undefined6)((ulong)puStack_148 >> 0x10);
  local_182 = SUB82(local_150,0);
  uStack_180 = (undefined6)((ulong)local_150 >> 0x10);
  uStack_16a = SUB82(local_138,0);
  uStack_168 = (undefined6)((ulong)local_138 >> 0x10);
  local_172 = (undefined2)uStack_d0;
  uStack_170 = (undefined6)((uint7)uStack_13f >> 8);
  uStack_15a = SUB81(puStack_128,0);
  uStack_159 = (undefined1)((ulong)puStack_128 >> 8);
  uStack_158 = (undefined6)((ulong)puStack_128 >> 0x10);
  local_162 = local_130;
  uStack_152 = local_120;
  *local_1c8 = puStack_1d8;
  local_1c8[1] = local_1e8;
  *(char *)(local_1c8 + 2) = (char)local_1ec;
  local_1c8[3] = local_1e0;
  *(undefined2 *)(local_1c8 + 4) = 0x100;
  *(ulong *)((long)local_1c8 + 0x2a) = CONCAT26(uStack_17a,uStack_180);
  *(ulong *)((long)local_1c8 + 0x22) = CONCAT26(local_182,uStack_188);
  *(ulong *)((long)local_1c8 + 0x3a) = CONCAT26(uStack_16a,uStack_170);
  *(ulong *)((long)local_1c8 + 0x32) = CONCAT26(local_172,uStack_178);
  *(ulong *)((long)local_1c8 + 0x4a) = CONCAT17(uStack_159,CONCAT16(uStack_15a,uStack_12e));
  *(ulong *)((long)local_1c8 + 0x42) = CONCAT26(local_130,uStack_168);
  *(ulong *)((long)local_1c8 + 0x51) = CONCAT17(local_120,(int7)((ulong)puStack_128 >> 8));
  uStack_90 = uStack_d0;
  local_80 = local_c0;
  FUN_100007b14(puStack_1d8,local_1e8,local_1ec);
  _swift_bridgeObjectRetain(puVar11);
  FUN_1000087e4(&local_e0,auStack_1c0,&DAT_10055b5e0,&DAT_100430008);
  FUN_10002a29c(&local_a0,&DAT_10055b5e0,&DAT_100430008);
  FUN_100025b34(puVar13,puVar3,uVar1);
  _swift_bridgeObjectRelease(puVar11);
  return;
}

