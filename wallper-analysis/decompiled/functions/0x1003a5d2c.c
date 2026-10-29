// rea decompile_all
// name: FUN_1003a5d2c
// address: 0x1003a5d2c
// body: available
// range: 0x1003a5d2c-0x1003a60b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a5fd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a5d2c(undefined8 *param_1,CGFloat param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  Design DVar5;
  undefined *puVar6;
  long lVar7;
  Image IVar8;
  Font FVar9;
  Color CVar10;
  Color CVar11;
  ReplaceSymbolEffect RVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  String systemName;
  undefined1 auStack_2d0 [8];
  undefined *local_2c8;
  long local_2c0;
  long local_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [88];
  undefined *local_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined *puStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined *local_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puStack_2b0 = (undefined *)Symbols::SymbolEffectOptions::typeMetadataAccessor();
  local_2b8 = *(long *)(puStack_2b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2b8 + 0x40));
  puVar14 = auStack_2d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_2c8 = (undefined *)Symbols::ReplaceSymbolEffect::typeMetadataAccessor();
  local_2c0 = *(long *)(local_2c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2c0 + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar15 - extraout_x8_01;
  lVar7 = 0;
  FUN_1003a67f8();
  pcVar1 = (char *)0x6c69662e706f7473;
  if (*(char *)(param_3 + *(int *)(lVar7 + 0x18)) == '\0') {
    pcVar1 = (char *)0x6c69662e79616c70;
  }
  systemName.bridgeObject = (void *)0xe90000000000006c;
  systemName.str = pcVar1;
  IVar8 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar8.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)IVar8.unknown >> 8),DVar5.value);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar13,1,1,lVar7);
  FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar13,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_100434c08;
  _swift_getKeyPath();
  CVar11 = SwiftUI::Color::get_white(CVar10);
  SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4041000000000000);
  uStack_228 = uStack_e8;
  local_230 = local_f0;
  uStack_218 = uStack_d8;
  local_220 = uStack_e0;
  uStack_208 = uStack_c8;
  uStack_210 = local_d0;
  uStack_98 = uStack_e8;
  local_a0 = local_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  uStack_1d8 = uStack_e8;
  local_1e0 = local_f0;
  uStack_1c8 = uStack_d8;
  uStack_1d0 = uStack_e0;
  uStack_1b8 = uStack_c8;
  local_1c0 = local_d0;
  local_250 = IVar8.unknown;
  puStack_248 = CVar10.unknown;
  local_240 = FVar9.unknown;
  puStack_238 = CVar11.unknown;
  local_200 = IVar8.unknown;
  puStack_1f8 = CVar10.unknown;
  local_1f0 = FVar9.unknown;
  puStack_1e8 = CVar11.unknown;
  local_c0 = IVar8.unknown;
  puStack_b8 = CVar10.unknown;
  puStack_b0 = FVar9.unknown;
  puStack_a8 = CVar11.unknown;
  FUN_1000087e4(&local_250,&local_150,&DAT_10054b1f8,&DAT_1004226d0);
  FUN_10002a29c(&local_200,&DAT_10054b1f8,&DAT_1004226d0);
  RVar12 = Symbols::ReplaceSymbolEffect::init();
  Symbols::SymbolEffectOptions::get_default((SymbolEffectOptions)RVar12.unknown);
  puVar6 = &DAT_10055f660;
  FUN_100002f94(&DAT_10055f660,&DAT_100434e30);
  iVar2 = *(int *)(puVar6 + 0x24);
  puVar6 = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  iVar3 = *(int *)(puVar6 + 0x1c);
  puVar6 = &DAT_10054b510;
  FUN_1000036d0(&DAT_10054b510,PTR_typeMetadataAccessor_100523830,
                PTR_Symbols__Symbols__ReplaceSymbolEffect_>Symbols__SymbolEffect_100523820);
  puVar4 = local_2c8;
  SwiftUI::ContentTransition::_symbolEffect
            ((long)param_1 + (long)iVar2 + (long)iVar3,puVar6,puVar14,local_2c8,puVar6);
  (**(code **)(local_2b8 + 8))(puVar14,puStack_2b0);
  (**(code **)(local_2c0 + 8))(lVar15,puVar4);
  uStack_188 = uStack_98;
  local_190 = local_a0;
  uStack_178 = uStack_88;
  local_180 = uStack_90;
  uStack_168 = uStack_78;
  local_170 = local_80;
  puStack_1a8 = puStack_b8;
  local_1b0 = local_c0;
  puStack_198 = puStack_a8;
  puStack_1a0 = puStack_b0;
  local_160 = 0;
  puVar6 = &DAT_100434e50;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar2) = puVar6;
  param_1[1] = puStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = puStack_198;
  param_1[2] = puStack_1a0;
  *(undefined1 *)(param_1 + 10) = local_160;
  param_1[7] = uStack_178;
  param_1[6] = local_180;
  param_1[9] = uStack_168;
  param_1[8] = local_170;
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  uStack_118 = uStack_88;
  uStack_120 = uStack_90;
  uStack_108 = uStack_78;
  local_110 = local_80;
  puStack_148 = puStack_b8;
  local_150 = local_c0;
  puStack_138 = puStack_a8;
  puStack_140 = puStack_b0;
  local_100 = 0;
  FUN_1000087e4(&local_1b0,auStack_2a8,&DAT_10054d8e0,&DAT_10041f1b0);
  FUN_10002a29c(&local_150,&DAT_10054d8e0,&DAT_10041f1b0);
  return;
}

