// rea decompile_all
// name: FUN_100017f5c
// address: 0x100017f5c
// body: available
// range: 0x100017f5c-0x1000182cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100017f5c(undefined8 *param_1,CGFloat param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  Design DVar3;
  undefined *puVar4;
  Text TVar5;
  undefined7 extraout_var;
  Font FVar7;
  Text TVar8;
  Color CVar9;
  Color CVar10;
  Text TVar11;
  Alignment AVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 auStack_2c0 [2];
  long local_2b0;
  undefined8 *local_2a8;
  undefined1 auStack_2a0 [144];
  undefined *local_210;
  undefined *puStack_208;
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined1 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long lVar6;
  
  puVar4 = &DAT_10054a828;
  puVar13 = &DAT_10041e3c0;
  local_2b0 = param_3;
  local_2a8 = param_1;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar17 = (long)&local_2b0 + lVar2;
  FUN_10000a1c8();
  local_180 = puVar4;
  puStack_178 = puVar13;
  FUN_100026df4();
  puVar13 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar5 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_semibold((Weight)TVar5.unknown);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Font_Design_rounded_SwiftUI_Font_Design_Type___>_SwiftUI_Font_Design_100522cd8
  ;
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,DVar3.value);
  lVar16 = *(long *)(lVar6 + -8);
  (**(code **)(lVar16 + 0x68))(lVar17,uVar1,lVar6);
  (**(code **)(lVar16 + 0x38))(lVar17,0,1,lVar6);
  FVar7 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar17,&DAT_10054a828,&DAT_10041e3c0);
  TVar14 = TVar5;
  puVar15 = puVar13;
  AVar12.unknown = puVar4;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100025b34(TVar5.unknown,puVar13,puVar4);
  _swift_bridgeObjectRelease(param_6);
  puStack_178 = *(undefined **)(local_2b0 + 0xe8);
  local_180 = *(undefined **)(local_2b0 + 0xe0);
  CVar10.unknown = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::get_wrappedValue((State)CVar10.unknown);
  CVar9 = SwiftUI::Color::get_white(CVar10);
  CVar10 = CVar9;
  if ((double)local_210 == 1.0) {
    CVar10 = SwiftUI::Color::opacity(0.8,CVar9);
    _swift_release(CVar9.unknown);
  }
  local_180 = CVar10.unknown;
  FUN_100028d58();
  TVar5 = TVar8;
  puVar4 = TVar14.unknown;
  puVar13 = puVar15;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar8.unknown,TVar14.unknown,puVar15);
  _swift_release(CVar10.unknown);
  _swift_bridgeObjectRelease();
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  *(undefined **)((long)auStack_2c0 + lVar2) = AVar12.unknown;
  *(undefined **)((long)auStack_2c0 + lVar2 + 8) = TVar14.unknown;
  auStack_2c8[lVar2] = 1;
  *(undefined8 *)((long)&uStack_2d0 + lVar2) = 0;
  auStack_2d8[lVar2] = 1;
  *(undefined8 *)((long)&uStack_2e0 + lVar2) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4041800000000000);
  uStack_1a8 = uStack_a0;
  local_1b0 = local_a8;
  uStack_198 = uStack_90;
  uStack_1a0 = local_98;
  uStack_188 = uStack_80;
  local_190 = local_88;
  uStack_1e8 = uStack_e0;
  local_1f0 = local_e8;
  uStack_1d8 = uStack_d0;
  uStack_1e0 = local_d8;
  uStack_1c8 = uStack_c0;
  local_1d0 = local_c8;
  uStack_1b8 = uStack_b0;
  uStack_1c0 = local_b8;
  uStack_118 = uStack_a0;
  local_120 = local_a8;
  uStack_108 = uStack_90;
  uStack_110 = local_98;
  uStack_f8 = uStack_80;
  local_100 = local_88;
  uStack_158 = uStack_e0;
  local_160 = local_e8;
  uStack_148 = uStack_d0;
  uStack_150 = local_d8;
  local_200 = SUB81(puVar4,0);
  uStack_138 = uStack_c0;
  local_140 = local_c8;
  uStack_128 = uStack_b0;
  uStack_130 = local_b8;
  local_210 = TVar11.unknown;
  puStack_208 = TVar5.unknown;
  local_1f8 = puVar13;
  local_180 = TVar11.unknown;
  puStack_178 = TVar5.unknown;
  local_170 = local_200;
  local_168 = puVar13;
  FUN_1000087e4(&local_210,auStack_2a0,&DAT_10054b4c0,&DAT_10041f7d0);
  FUN_10002a29c(&local_180,&DAT_10054b4c0,&DAT_10041f7d0);
  local_2a8[0xd] = uStack_1a8;
  local_2a8[0xc] = local_1b0;
  local_2a8[0xf] = uStack_198;
  local_2a8[0xe] = uStack_1a0;
  local_2a8[0x11] = uStack_188;
  local_2a8[0x10] = local_190;
  local_2a8[5] = uStack_1e8;
  local_2a8[4] = local_1f0;
  local_2a8[7] = uStack_1d8;
  local_2a8[6] = uStack_1e0;
  local_2a8[9] = uStack_1c8;
  local_2a8[8] = local_1d0;
  local_2a8[0xb] = uStack_1b8;
  local_2a8[10] = uStack_1c0;
  local_2a8[1] = puStack_208;
  *local_2a8 = local_210;
  local_2a8[3] = local_1f8;
  local_2a8[2] = CONCAT71(uStack_1ff,local_200);
  return;
}

