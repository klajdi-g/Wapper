// rea decompile_all
// name: FUN_100085968
// address: 0x100085968
// body: available
// range: 0x100085968-0x100085bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100085968(undefined8 *param_1,long param_2)

{
  Color CVar1;
  Color CVar2;
  Color color;
  Stop SVar3;
  UnitPoint UVar4;
  Gradient gradient;
  Alignment AVar5;
  UnitPoint location;
  UnitPoint endPoint;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_2f8 [104];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  
  CVar1.unknown = &DAT_10054f3f0;
  FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
  location.unknown = (undefined *)0x40;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar1.unknown + 0x18) = 4;
  *(undefined8 *)(CVar1.unknown + 0x10) = 2;
  CVar2 = SwiftUI::Color::get_black(CVar1);
  color = SwiftUI::Color::opacity(0.4,CVar2);
  _swift_release(CVar2.unknown);
  uVar6 = 0;
  SVar3 = SwiftUI::Gradient::Stop::init(color,location.unknown);
  *(undefined **)(CVar1.unknown + 0x20) = SVar3.unknown;
  *(undefined8 *)(CVar1.unknown + 0x28) = uVar6;
  CVar2 = SwiftUI::Color::get_clear(SVar3.unknown);
  uVar6 = 0x3ff0000000000000;
  SVar3 = SwiftUI::Gradient::Stop::init(CVar2,location.unknown);
  *(undefined **)(CVar1.unknown + 0x30) = SVar3.unknown;
  *(undefined8 *)(CVar1.unknown + 0x38) = uVar6;
  UVar4 = SwiftUI::UnitPoint::get_top(SVar3.unknown);
  SwiftUI::UnitPoint::get_bottom(UVar4);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,location,endPoint);
  AVar5.unknown = (undefined *)0x0;
  FUN_100095ec0();
  dVar7 = *(double *)(param_2 + *(int *)(AVar5.unknown + 0x14));
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_288 = uStack_230;
  local_290 = local_238;
  uStack_278 = uStack_220;
  uStack_280 = local_228;
  local_270 = local_218;
  if (DAT_10054f470 != -1) {
    _swift_once(&DAT_10054f470,FUN_10007bf94);
  }
  dVar7 = dVar7 * DAT_10054f478;
  uStack_1e8 = uStack_268;
  local_1f0 = local_270;
  uStack_1d8 = uStack_258;
  uStack_1e0 = uStack_260;
  uStack_1c8 = uStack_248;
  local_1d0 = local_250;
  local_1c0 = local_240;
  uStack_208 = uStack_288;
  local_210 = local_290;
  uStack_1f8 = uStack_278;
  uStack_200 = uStack_280;
  uStack_1a8 = uStack_288;
  local_1b0 = local_290;
  uStack_198 = uStack_278;
  uStack_1a0 = uStack_280;
  uStack_178 = uStack_258;
  local_180 = uStack_260;
  uStack_168 = uStack_248;
  uStack_170 = local_250;
  uStack_188 = uStack_268;
  local_190 = local_270;
  local_160 = local_240;
  FUN_1000087e4(&local_210,&local_e0,&DAT_10054dbb0,&DAT_100420a20);
  FUN_10002a29c(&local_1b0,&DAT_10054dbb0,&DAT_100420a20);
  uStack_128 = uStack_268;
  local_130 = local_270;
  uStack_118 = uStack_258;
  uStack_120 = uStack_260;
  uStack_108 = uStack_248;
  local_110 = local_250;
  uStack_148 = uStack_288;
  local_150 = local_290;
  uStack_138 = uStack_278;
  uStack_140 = uStack_280;
  local_100 = local_240;
  local_f8 = 0;
  uStack_d8 = uStack_288;
  local_e0 = local_290;
  uStack_c8 = uStack_278;
  uStack_d0 = uStack_280;
  uStack_b8 = uStack_268;
  local_c0 = local_270;
  uStack_a8 = uStack_258;
  uStack_b0 = uStack_260;
  uStack_98 = uStack_248;
  local_a0 = local_250;
  local_90 = local_240;
  uStack_88 = 0;
  local_f0 = dVar7;
  local_80 = dVar7;
  FUN_1000087e4(&local_150,auStack_2f8,&DAT_10054f4d0,&DAT_100420a28);
  FUN_10002a29c(&local_e0,&DAT_10054f4d0,&DAT_100420a28);
  param_1[9] = uStack_108;
  param_1[8] = local_110;
  param_1[0xb] = local_f8;
  param_1[10] = local_100;
  param_1[0xc] = local_f0;
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[3] = uStack_138;
  param_1[2] = uStack_140;
  param_1[5] = uStack_128;
  param_1[4] = local_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  return;
}

