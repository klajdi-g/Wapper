// rea decompile_all
// name: FUN_1000179bc
// address: 0x1000179bc
// body: available
// range: 0x1000179bc-0x100017d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100017c00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000179bc(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  Design DVar6;
  ReplaceSymbolEffect RVar7;
  undefined *puVar8;
  Image IVar9;
  Font FVar11;
  Color CVar12;
  Color CVar13;
  Set _all;
  ReplaceSymbolEffect RVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  void *pvVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  String systemName;
  undefined1 auStack_1a0 [8];
  undefined *local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  undefined1 auStack_178 [80];
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  long lVar10;
  
  local_180 = (undefined *)Symbols::SymbolEffectOptions::typeMetadataAccessor();
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  puVar16 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar7 = Symbols::ReplaceSymbolEffect::typeMetadataAccessor();
  local_190 = *(long *)(RVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_190 + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar17 - extraout_x8_01;
  FUN_10000cb9c();
  bVar5 = ((ulong)puVar8 & 1) == 0;
  pcVar1 = (char *)0x69662e6573756170;
  if (bVar5) {
    pcVar1 = (char *)0x6c69662e79616c70;
  }
  pvVar15 = (void *)0xea00000000006c6c;
  if (bVar5) {
    pvVar15 = (void *)0xe90000000000006c;
  }
  systemName.bridgeObject = pvVar15;
  systemName.str = pcVar1;
  IVar9 = SwiftUI::Image::init(systemName);
  local_198 = IVar9.unknown;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar9.unknown);
  DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)IVar9.unknown >> 8),DVar6.value);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar18,1,1,lVar10);
  FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar18,&DAT_10054a828,&DAT_10041e3c0);
  CVar12.unknown = &DAT_10041bb78;
  _swift_getKeyPath();
  CVar13 = SwiftUI::Color::get_white(CVar12);
  _all = SwiftUI::Edge::Set::get_horizontal(CVar13.unknown);
  uVar19 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  RVar14 = Symbols::ReplaceSymbolEffect::init();
  Symbols::SymbolEffectOptions::get_default((SymbolEffectOptions)RVar14.unknown);
  puVar8 = &DAT_10054b478;
  FUN_100002f94(&DAT_10054b478,&DAT_10041c7d8);
  iVar2 = *(int *)(puVar8 + 0x24);
  puVar8 = &DAT_10054b490;
  FUN_100002f94(&DAT_10054b490,&DAT_10041c7e0);
  iVar3 = *(int *)(puVar8 + 0x1c);
  puVar8 = &DAT_10054b510;
  FUN_1000036d0(&DAT_10054b510,PTR_typeMetadataAccessor_100523830,
                PTR_Symbols__Symbols__ReplaceSymbolEffect_>Symbols__SymbolEffect_100523820);
  SwiftUI::ContentTransition::_symbolEffect
            ((long)param_1 + (long)iVar2 + (long)iVar3,puVar8,puVar16,RVar7.unknown,puVar8);
  (**(code **)(local_188 + 8))(puVar16,local_180);
  (**(code **)(local_190 + 8))(lVar17,RVar7.unknown);
  puVar4 = local_198;
  local_128 = local_198;
  uStack_f0 = (undefined1)param_4;
  uStack_ef = (undefined7)((ulong)param_4 >> 8);
  uStack_e8 = (undefined1)param_5;
  uStack_e7 = (undefined7)((ulong)param_5 >> 8);
  uStack_e0 = 0;
  puVar8 = &DAT_10041c8a8;
  puStack_120 = CVar12.unknown;
  local_118 = FVar11.unknown;
  puStack_110 = CVar13.unknown;
  local_108 = (char)_all.unknown;
  uStack_100 = uVar19;
  local_f8 = param_3;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar2) = puVar8;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_e0,uStack_e7);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_e8,uStack_ef);
  param_1[5] = uStack_100;
  param_1[4] = CONCAT71(uStack_107,local_108);
  param_1[7] = CONCAT71(uStack_ef,uStack_f0);
  param_1[6] = local_f8;
  param_1[1] = puStack_120;
  *param_1 = local_128;
  param_1[3] = puStack_110;
  param_1[2] = local_118;
  local_d8 = puVar4;
  local_90 = 0;
  puStack_d0 = CVar12.unknown;
  local_c8 = FVar11.unknown;
  puStack_c0 = CVar13.unknown;
  local_b8 = (char)_all.unknown;
  local_b0 = uVar19;
  uStack_a8 = param_3;
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_1000087e4(&local_128,auStack_178,&DAT_10054b268,&DAT_10041c5a8);
  FUN_10002a29c(&local_d8,&DAT_10054b268,&DAT_10041c5a8);
  return;
}

