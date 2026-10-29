// rea decompile_all
// name: FUN_1000af410
// address: 0x1000af410
// body: available
// range: 0x1000af410-0x1000af677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000af410(undefined8 *param_1,double param_2,Alignment param_3,undefined1 param_4,
                  undefined8 param_5)

{
  State SVar1;
  State SVar2;
  Animation AVar3;
  Animation AVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_200 [104];
  undefined8 local_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined8 local_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined *local_140;
  char local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  uVar5 = 0x3ff6666666666666;
  lVar7 = *(long *)param_3.unknown;
  SwiftUI::Alignment::get_center(param_3);
  SwiftUI::_FrameLayout::_init((undefined *)(param_2 * 1.4));
  SVar1.unknown = &DAT_10054ab50;
  local_128 = param_5;
  local_130._0_1_ = param_4;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SVar2.unknown = SVar1.unknown;
  SwiftUI::State::get_wrappedValue(SVar1);
  uVar6 = 0x3fe6666666666666;
  uVar8 = 0x3ff0000000000000;
  if ((char)local_198 == '\0') {
    uVar8 = uVar6;
  }
  SwiftUI::UnitPoint::get_center((UnitPoint)SVar2.unknown);
  SVar2.unknown = SVar1.unknown;
  local_128 = param_5;
  local_130._0_1_ = param_4;
  SwiftUI::State::get_wrappedValue(SVar1);
  local_148 = 0x3ff0000000000000;
  if ((char)local_198 == '\0') {
    local_148 = 0x3fe199999999999a;
  }
  AVar3 = SwiftUI::Animation::easeInOut(0.9,SVar2.unknown);
  AVar4 = SwiftUI::Animation::repeatForever(true,AVar3);
  _swift_release(AVar3.unknown);
  AVar3 = SwiftUI::Animation::delay((double)lVar7 * 0.25,AVar4);
  _swift_release(AVar4.unknown);
  local_130 = CONCAT71(local_130._1_7_,param_4);
  local_128 = param_5;
  SwiftUI::State::get_wrappedValue(SVar1);
  local_138 = (char)local_198;
  local_198 = local_c8;
  uStack_190 = local_c0;
  local_188 = local_b8;
  uStack_180 = local_b0;
  local_178 = local_a8;
  uStack_170 = uStack_a0;
  local_130 = local_c8;
  local_128 = CONCAT71(local_128._1_7_,local_c0);
  local_120 = local_b8;
  local_118 = local_b0;
  local_110 = local_a8;
  uStack_108 = uStack_a0;
  local_d0 = local_138;
  local_168 = uVar8;
  uStack_160 = uVar8;
  local_158 = uVar6;
  uStack_150 = uVar5;
  local_140 = AVar3.unknown;
  local_100 = uVar8;
  uStack_f8 = uVar8;
  local_f0 = uVar6;
  uStack_e8 = uVar5;
  local_e0 = local_148;
  local_d8 = AVar3.unknown;
  FUN_1000087e4(&local_198,auStack_200,&DAT_100550690,&DAT_100422050);
  FUN_10002a29c(&local_130,&DAT_100550690,&DAT_100422050);
  param_1[9] = uStack_150;
  param_1[8] = local_158;
  param_1[0xb] = local_140;
  param_1[10] = local_148;
  *(char *)(param_1 + 0xc) = local_138;
  param_1[1] = CONCAT71(uStack_18f,uStack_190);
  *param_1 = local_198;
  param_1[3] = CONCAT71(uStack_17f,uStack_180);
  param_1[2] = local_188;
  param_1[5] = uStack_170;
  param_1[4] = local_178;
  param_1[7] = uStack_160;
  param_1[6] = local_168;
  return;
}

