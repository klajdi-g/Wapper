// rea decompile_all
// name: FUN_10034acec
// address: 0x10034acec
// body: available
// range: 0x10034acec-0x10034b133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010034aec0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10034acec(undefined8 *param_1,CGFloat param_2,undefined *param_3,uint param_4,uint param_5,
                  Color param_6)

{
  undefined4 uVar1;
  Design DVar2;
  undefined *puVar3;
  Text TVar4;
  Font FVar5;
  Text TVar6;
  Color CVar7;
  undefined *puVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  double dVar17;
  undefined *local_1f0;
  code *local_1e8;
  long lStack_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  undefined8 *local_1a0;
  undefined1 auStack_198 [56];
  undefined *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined *local_148;
  undefined2 local_140;
  undefined6 uStack_13e;
  undefined *puStack_138;
  undefined1 local_130;
  undefined *local_128;
  undefined *puStack_120;
  undefined1 local_118;
  undefined *local_110;
  undefined2 local_108;
  undefined *local_100;
  undefined1 local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined1 local_c0;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined1 local_80;
  
  local_1c8 = (uint)param_3;
  puVar3 = &DAT_10054a828;
  puVar12 = &DAT_10041e3c0;
  local_1a8 = param_4;
  uStack_1a4 = param_5;
  local_1a0 = param_1;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_1f0 - extraout_x8;
  FUN_10025eed8();
  local_b0 = param_3;
  puStack_a8 = puVar12;
  FUN_100026df4();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  local_1d0 = param_3;
  TVar4 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_1e0 = CONCAT71((int7)((ulong)TVar4.unknown >> 8),DVar2.value);
  local_1e8 = *(code **)(*(long *)(lStack_1e0 + -8) + 0x38);
  (*local_1e8)(lVar16,1,1,lStack_1e0);
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar4;
  puVar12 = puVar3;
  puVar8 = param_3;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  local_1f0 = puVar8;
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,param_3);
  _swift_bridgeObjectRelease();
  CVar7 = SwiftUI::Color::get_white(param_6);
  CVar9 = CVar7;
  local_b0 = CVar7.unknown;
  FUN_100028d58();
  puVar3 = local_1f0;
  TVar4 = TVar6;
  puVar8 = TVar13.unknown;
  CVar10.unknown = puVar12;
  local_1d8 = CVar9.unknown;
  puStack_1b0 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_1c4 = SUB84(puVar8,0);
  local_1c0 = TVar4.unknown;
  local_1b8 = CVar10.unknown;
  FUN_100025b34(TVar6.unknown,TVar13.unknown,puVar12);
  _swift_release(CVar7.unknown);
  _swift_bridgeObjectRelease(puVar3);
  puVar8 = (undefined *)(ulong)local_1c8;
  FUN_10025fe08();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar12 = local_1d0;
  local_b0 = puVar8;
  puStack_a8 = TVar13.unknown;
  TVar4 = SwiftUI::Text::_init(puVar8,PTR___type_metadata_for_Swift_String_100523a98,local_1d0);
  (*local_1e8)(lVar16,1,1,lStack_1e0);
  FVar5 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar13 = TVar4;
  puVar8 = puVar3;
  puVar14 = puVar12;
  TVar6 = SwiftUI::Text::_font(FVar5.unknown);
  _swift_release(FVar5.unknown);
  FUN_100025b34(TVar4.unknown,puVar3,puVar12);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_white(CVar10);
  dVar17 = 0.75;
  if (((local_1a8 | uStack_1a4) & 1) == 0) {
    dVar17 = 0.6;
  }
  CVar10 = SwiftUI::Color::opacity(dVar17,CVar9);
  _swift_release(CVar9.unknown);
  TVar4 = TVar6;
  puVar12 = TVar13.unknown;
  puVar15 = puVar8;
  local_b0 = CVar10.unknown;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar6.unknown,TVar13.unknown,puVar8);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease(puVar14);
  puVar3 = &DAT_100432cb8;
  _swift_getKeyPath();
  local_150 = SUB81(puVar12,0);
  local_140 = 0x100;
  local_130 = 0;
  local_108 = 0x100;
  local_f8 = 0;
  local_160 = TVar11.unknown;
  puStack_158 = TVar4.unknown;
  local_148 = puVar15;
  puStack_138 = puVar3;
  local_128 = TVar11.unknown;
  puStack_120 = TVar4.unknown;
  local_118 = local_150;
  local_110 = puVar15;
  local_100 = puVar3;
  FUN_1000087e4(&local_160,&local_b0,&DAT_10055b5e0,&DAT_100430008);
  FUN_10002a29c(&local_128,&DAT_10055b5e0,&DAT_100430008);
  puVar8 = puStack_1b0;
  puVar12 = local_1b8;
  puVar3 = local_1c0;
  uVar1 = local_1c4;
  uStack_e0 = CONCAT71(uStack_14f,local_150);
  puStack_a8 = puStack_158;
  local_b0 = local_160;
  puStack_98 = local_148;
  puStack_e8 = puStack_158;
  local_f0 = local_160;
  puStack_d8 = local_148;
  local_d0 = CONCAT62(uStack_13e,local_140);
  puStack_88 = puStack_138;
  puStack_c8 = puStack_138;
  local_80 = local_130;
  local_c0 = local_130;
  *local_1a0 = puStack_1b0;
  local_1a0[1] = local_1c0;
  *(char *)(local_1a0 + 2) = (char)local_1c4;
  local_1a0[3] = local_1b8;
  local_1a0[5] = puStack_158;
  local_1a0[4] = local_160;
  local_1a0[7] = local_148;
  local_1a0[6] = CONCAT71(uStack_14f,local_150);
  local_1a0[9] = puStack_138;
  local_1a0[8] = CONCAT62(uStack_13e,local_140);
  *(undefined1 *)(local_1a0 + 10) = local_130;
  uStack_a0 = uStack_e0;
  local_90 = local_d0;
  FUN_100007b14(puStack_1b0,local_1c0,local_1c4);
  _swift_bridgeObjectRetain(puVar12);
  FUN_1000087e4(&local_f0,auStack_198,&DAT_10055b5e0,&DAT_100430008);
  FUN_10002a29c(&local_b0,&DAT_10055b5e0,&DAT_100430008);
  FUN_100025b34(puVar8,puVar3,uVar1);
  _swift_bridgeObjectRelease(puVar12);
  return;
}

