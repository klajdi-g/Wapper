// rea decompile_all
// name: FUN_100307d5c
// address: 0x100307d5c
// body: available
// range: 0x100307d5c-0x1003080ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100307d5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  Design DVar5;
  Alignment AVar6;
  undefined *puVar7;
  Image IVar8;
  undefined7 extraout_var;
  Font FVar9;
  Color CVar10;
  Set SVar11;
  Color CVar12;
  EdgeInsets EVar13;
  State SVar14;
  undefined *puVar15;
  long extraout_x8;
  CGFloat size;
  void *pvVar16;
  undefined8 uVar17;
  String systemName;
  undefined8 local_290;
  undefined8 uStack_288;
  char local_271;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined *local_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 local_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 local_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar15 = &DAT_10054a828;
  puVar7 = &DAT_10041e3c0;
  AVar6.unknown = puVar15;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(AVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *param_1 = AVar6.unknown;
  param_1[1] = puVar7;
  puVar7 = &DAT_10055bc40;
  FUN_100002f94(&DAT_10055bc40,&DAT_100430840);
  AVar6.unknown = param_6;
  FUN_100308100((long)param_1 + (long)*(int *)(puVar7 + 0x2c));
  SwiftUI::Alignment::get_center(AVar6);
  SwiftUI::_FrameLayout::_init((Alignment)0x406e000000000000);
  puVar7 = &DAT_10055bc00;
  FUN_100002f94(&DAT_10055bc00,&DAT_1004307f8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  pvVar16 = (void *)0x80000001004dd7a0;
  bVar4 = (param_6[0x10] & 1) == 0;
  size.unknown = (undefined *)0x3fe199999999999a;
  puVar7 = (undefined *)0x3ff0000000000000;
  if (bVar4) {
    puVar7 = size.unknown;
  }
  pcVar3 = (char *)0xd000000000000015;
  if (bVar4) {
    pvVar16 = (void *)0xe600000000000000;
    pcVar3 = (char *)0x656c63726963;
  }
  systemName.bridgeObject = pvVar16;
  systemName.str = pcVar3;
  IVar8 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar8.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            ((long)&local_290 - extraout_x8,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar9 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c((long)&local_290 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar10.unknown = &DAT_100430848;
  _swift_getKeyPath();
  SVar11.unknown = (undefined *)SwiftUI::Color::get_white(CVar10);
  CVar12 = SwiftUI::Color::opacity(puVar7,(Color)SVar11.unknown);
  _swift_release();
  SVar11 = SwiftUI::Edge::Set::get_all(SVar11);
  uVar17 = 0x4024000000000000;
  EVar13 = SwiftUI::EdgeInsets::init(SVar11.unknown);
  local_e0 = SUB81(SVar11.unknown,0);
  local_c8 = (undefined1)param_4;
  uStack_c7 = (undefined7)((ulong)param_4 >> 8);
  uStack_c0 = (undefined1)param_5;
  uStack_bf = (undefined7)((ulong)param_5 >> 8);
  uStack_b8 = 0;
  local_100 = IVar8.unknown;
  puStack_f8 = CVar10.unknown;
  local_f0 = FVar9.unknown;
  puStack_e8 = CVar12.unknown;
  uStack_d8 = uVar17;
  uStack_d0 = uStack_a0;
  AVar6 = SwiftUI::Alignment::get_topTrailing(EVar13.unknown);
  local_1f0 = CONCAT71(uStack_df,local_e0);
  uStack_1e8 = uStack_d8;
  uStack_1d8 = local_c8;
  uStack_1e0 = uStack_d0;
  uStack_1cf = CONCAT17(uStack_b8,uStack_bf);
  local_1d7 = uStack_c7;
  uStack_1d0 = uStack_c0;
  puStack_208 = puStack_f8;
  local_210 = local_100;
  puStack_1f8 = puStack_e8;
  puStack_200 = local_f0;
  uStack_138 = uStack_d8;
  uStack_128 = local_c8;
  uStack_130 = uStack_d0;
  local_127 = uStack_c7;
  uStack_120 = uStack_c0;
  puStack_158 = puStack_f8;
  local_160 = local_100;
  puStack_148 = puStack_e8;
  puStack_150 = local_f0;
  uStack_17f = uStack_bf;
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_198 = uStack_d8;
  uStack_188 = local_c8;
  local_187 = uStack_c7;
  uStack_190 = uStack_d0;
  puStack_1b8 = puStack_f8;
  local_1c0 = local_100;
  puStack_1a8 = puStack_e8;
  puStack_1b0 = local_f0;
  puVar7 = &DAT_10055bbf0;
  local_1a0 = local_1f0;
  local_170 = AVar6.unknown;
  puStack_168 = puVar15;
  local_140 = local_1f0;
  uStack_11f = uStack_1cf;
  FUN_100002f94(&DAT_10055bbf0,&DAT_1004307f0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  puVar1[5] = uStack_198;
  puVar1[4] = local_1a0;
  puVar1[7] = CONCAT71(local_187,uStack_188);
  puVar1[6] = uStack_190;
  puVar1[9] = CONCAT71(uStack_177,uStack_178);
  puVar1[8] = CONCAT71(uStack_17f,uStack_180);
  puVar1[0xb] = puStack_168;
  puVar1[10] = local_170;
  puVar1[1] = puStack_1b8;
  *puVar1 = local_1c0;
  puVar1[3] = puStack_1a8;
  puVar1[2] = puStack_1b0;
  local_110 = AVar6.unknown;
  puStack_108 = puVar15;
  FUN_1000087e4(&local_210,&local_270,&DAT_10054b268,&DAT_10041c5a8);
  FUN_1000087e4(&local_1c0,&local_270,&DAT_10055bc20,&DAT_100430808);
  FUN_10002a29c(&local_160,&DAT_10055bc20,&DAT_100430808);
  FUN_10002a29c(&local_100,&DAT_10054b268,&DAT_10041c5a8);
  uStack_288 = *(undefined8 *)(param_6 + 0x30);
  local_290 = *(undefined8 *)(param_6 + 0x28);
  uStack_268 = *(undefined8 *)(param_6 + 0x30);
  local_270 = *(undefined8 *)(param_6 + 0x28);
  SVar14.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar14);
  uVar17 = 0x3ff0000000000000;
  if (local_271 == '\0') {
    uVar17 = 0;
  }
  puVar15 = &DAT_10055bbe0;
  FUN_100002f94(&DAT_10055bbe0,&DAT_1004307e8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar15 + 0x24)) = uVar17;
  SwiftUI::State::get_wrappedValue(SVar14);
  uVar17 = 0;
  if ((char)local_270 == '\0') {
    uVar17 = 0x4024000000000000;
  }
  puVar15 = &DAT_10055bbc8;
  FUN_100002f94(&DAT_10055bbc8,&DAT_1004307e0);
  iVar2 = *(int *)(puVar15 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = uVar17;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 0;
  return;
}

