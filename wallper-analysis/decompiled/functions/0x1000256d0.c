// rea decompile_all
// name: FUN_1000256d0
// address: 0x1000256d0
// body: available
// range: 0x1000256d0-0x100025a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000256d0(undefined8 *param_1,CGFloat param_2,char *param_3,void *param_4,
                  undefined *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  Design DVar2;
  undefined *puVar3;
  Image IVar4;
  undefined7 extraout_var;
  Font FVar6;
  Alignment AVar7;
  Text TVar8;
  Text TVar9;
  Text TVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x8;
  code *pcVar15;
  long lVar16;
  String systemName;
  undefined8 uStack_210;
  undefined2 auStack_208 [4];
  undefined8 local_200;
  LocalizedStringKey local_1f8;
  ulong local_1f0;
  undefined1 auStack_1e8 [72];
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *local_f0;
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
  long lVar5;
  
  local_1f0 = CONCAT44(local_1f0._4_4_,param_7);
  puVar3 = &DAT_10054a828;
  local_200 = param_8;
  local_1f8.unknown = param_5;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar16 = (long)&local_200 + lVar1;
  _swift_bridgeObjectRetain(param_4);
  systemName.bridgeObject = param_4;
  systemName.str = param_3;
  IVar4 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)IVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,DVar2.value);
  pcVar15 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar15)(lVar16,1,1,lVar5);
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  AVar7.unknown = &DAT_10041bb78;
  _swift_getKeyPath();
  SwiftUI::Alignment::get_center(AVar7);
  SwiftUI::_FrameLayout::_init((Alignment)0x4030000000000000);
  uStack_130 = puStack_198;
  local_138 = local_1a0;
  uStack_120 = puStack_188;
  local_128 = puStack_190;
  uStack_110 = uStack_178;
  local_118 = local_180;
  uStack_e8 = puStack_198;
  local_f0 = local_1a0;
  uStack_d8 = puStack_188;
  uStack_e0 = puStack_190;
  uStack_c8 = uStack_178;
  local_d0 = local_180;
  local_150 = IVar4.unknown;
  puStack_148 = AVar7.unknown;
  local_140 = FVar6.unknown;
  local_108 = IVar4.unknown;
  puStack_100 = AVar7.unknown;
  local_f8 = FVar6.unknown;
  FUN_1000087e4(&local_150,&local_c0,&DAT_10054a938,&DAT_10041bba8);
  FUN_10002a29c(&local_108,&DAT_10054a938,&DAT_10041bba8);
  _swift_bridgeObjectRetain(param_6);
  uVar13 = local_200;
  _swift_bridgeObjectRetain(local_200);
  *(undefined2 *)((long)auStack_208 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_210 + lVar1) = 0;
  uVar11 = local_1f0 & 0xffffffff;
  TVar8 = SwiftUI::Text::_init(local_1f8);
  (*pcVar15)(lVar16,1,1,lVar5);
  FVar6 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  TVar10 = TVar8;
  uVar12 = param_6;
  uVar14 = uVar11;
  TVar9 = SwiftUI::Text::_font(FVar6.unknown);
  local_1f0 = uVar14;
  _swift_release(FVar6.unknown);
  FUN_100025b34(TVar8.unknown,param_6,uVar11);
  _swift_bridgeObjectRelease(uVar13);
  uVar14 = local_1f0;
  uStack_178 = local_128;
  local_180 = uStack_130;
  uStack_168 = local_118;
  uStack_170 = uStack_120;
  local_160 = uStack_110;
  puStack_198 = puStack_148;
  local_1a0 = local_150;
  puStack_188 = local_138;
  puStack_190 = local_140;
  uStack_98 = local_128;
  local_a0 = uStack_130;
  uStack_88 = local_118;
  uStack_90 = uStack_120;
  local_80 = uStack_110;
  puStack_b8 = puStack_148;
  local_c0 = local_150;
  puStack_a8 = local_138;
  puStack_b0 = local_140;
  param_1[5] = local_128;
  param_1[4] = uStack_130;
  param_1[7] = local_118;
  param_1[6] = uStack_120;
  param_1[1] = puStack_148;
  *param_1 = local_150;
  param_1[3] = local_138;
  param_1[2] = local_140;
  param_1[8] = uStack_110;
  param_1[9] = TVar9.unknown;
  param_1[10] = TVar10.unknown;
  *(char *)(param_1 + 0xb) = (char)uVar12;
  param_1[0xc] = local_1f0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_1000087e4(&local_c0,auStack_1e8,&DAT_10054a938,&DAT_10041bba8);
  FUN_100007b14(TVar9.unknown,TVar10.unknown,uVar12);
  _swift_bridgeObjectRetain(uVar14);
  FUN_100025b34(TVar9.unknown,TVar10.unknown,uVar12);
  _swift_bridgeObjectRelease(uVar14);
  FUN_10002a29c(&local_1a0,&DAT_10054a938,&DAT_10041bba8);
  return;
}

