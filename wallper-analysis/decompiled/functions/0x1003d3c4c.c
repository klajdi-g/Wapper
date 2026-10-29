// rea decompile_all
// name: FUN_1003d3c4c
// address: 0x1003d3c4c
// body: available
// range: 0x1003d3c4c-0x1003d3f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d3c4c(undefined8 *param_1,CGFloat param_2)

{
  char *pcVar1;
  bool bVar2;
  Design DVar3;
  undefined *puVar4;
  Image IVar5;
  undefined7 extraout_var;
  Font FVar6;
  Color CVar7;
  Color CVar8;
  Alignment AVar9;
  long extraout_x8;
  void *pvVar10;
  String systemName;
  undefined1 auStack_2c0 [96];
  undefined *local_260;
  undefined *puStack_258;
  undefined *local_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined1 local_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8;
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
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar4 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1003d020c();
  bVar2 = ((ulong)puVar4 & 1) == 0;
  pcVar1 = (char *)0x69662e7472616568;
  if (bVar2) {
    pcVar1 = (char *)0x7472616568;
  }
  pvVar10 = (void *)0xea00000000006c6c;
  if (bVar2) {
    pvVar10 = (void *)0xe500000000000000;
  }
  systemName.bridgeObject = pvVar10;
  systemName.str = pcVar1;
  IVar5 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)IVar5.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar3.value) + -8) + 0x38))
            (auStack_2c0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar3.value));
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_2c0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  puVar4 = &DAT_100435fb0;
  _swift_getKeyPath();
  CVar7.unknown = puVar4;
  FUN_1003d020c();
  if (((ulong)CVar7.unknown & 1) == 0) {
    CVar8 = SwiftUI::Color::get_white(CVar7);
    CVar7 = SwiftUI::Color::opacity(0.5,CVar8);
    _swift_release(CVar8.unknown);
  }
  else {
    CVar7 = SwiftUI::Color::get_red(CVar7);
  }
  AVar9.unknown = &DAT_100435fe0;
  _swift_getKeyPath();
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4044000000000000);
  uStack_230 = uStack_e8;
  uStack_238 = local_f0;
  uStack_220 = uStack_d8;
  local_228 = uStack_e0;
  uStack_210 = uStack_c8;
  local_218 = local_d0;
  uStack_98 = local_f0;
  uStack_88 = uStack_e0;
  uStack_90 = uStack_e8;
  uStack_78 = local_d0;
  local_80 = uStack_d8;
  local_70 = uStack_c8;
  uStack_1c8 = uStack_d8;
  local_1d0 = uStack_e0;
  uStack_1b8 = uStack_c8;
  uStack_1c0 = local_d0;
  uStack_1d8 = uStack_e8;
  local_1e0 = local_f0;
  local_260 = IVar5.unknown;
  puStack_258 = puVar4;
  local_250 = FVar6.unknown;
  puStack_248 = AVar9.unknown;
  local_240 = CVar7.unknown;
  local_208 = IVar5.unknown;
  puStack_200 = puVar4;
  local_1f8 = FVar6.unknown;
  puStack_1f0 = AVar9.unknown;
  local_1e8 = CVar7.unknown;
  local_c0 = IVar5.unknown;
  puStack_b8 = puVar4;
  puStack_b0 = FVar6.unknown;
  puStack_a8 = AVar9.unknown;
  local_a0 = CVar7.unknown;
  FUN_1000087e4(&local_260,&local_150,&DAT_100559a60,&DAT_10042dcd0);
  FUN_10002a29c(&local_208,&DAT_100559a60,&DAT_10042dcd0);
  uStack_188 = uStack_98;
  local_190 = local_a0;
  uStack_178 = uStack_88;
  uStack_180 = uStack_90;
  uStack_168 = (undefined1)uStack_78;
  uStack_167 = (undefined7)((ulong)uStack_78 >> 8);
  local_170 = local_80;
  local_160 = (undefined1)local_70;
  uStack_15f = (undefined7)((ulong)local_70 >> 8);
  puStack_1a8 = puStack_b8;
  local_1b0 = local_c0;
  puStack_198 = puStack_a8;
  puStack_1a0 = puStack_b0;
  local_158 = 0;
  puStack_148 = puStack_b8;
  local_150 = local_c0;
  puStack_138 = puStack_a8;
  puStack_140 = puStack_b0;
  uStack_118 = uStack_88;
  local_120 = uStack_90;
  uStack_108 = uStack_78;
  uStack_110 = local_80;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_100 = local_70;
  local_f8 = 0;
  FUN_1000087e4(&local_1b0,auStack_2c0,&DAT_100560a78,&DAT_1004366a0);
  FUN_10002a29c(&local_150,&DAT_100560a78,&DAT_1004366a0);
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = CONCAT71(uStack_167,uStack_168);
  param_1[8] = local_170;
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(local_158,uStack_15f);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(local_160,uStack_167);
  param_1[1] = puStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = puStack_198;
  param_1[2] = puStack_1a0;
  return;
}

