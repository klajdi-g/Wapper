// rea decompile_all
// name: FUN_1000f73ec
// address: 0x1000f73ec
// body: available
// range: 0x1000f73ec-0x1000f75c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f73ec(undefined8 *param_1)

{
  Color CVar1;
  Color CVar2;
  Color CVar3;
  UnitPoint UVar4;
  Gradient gradient;
  LinearGradient LVar5;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined1 auStack_208 [88];
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
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  CVar1.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x40;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar1.unknown + 0x18) = 8;
  *(undefined8 *)(CVar1.unknown + 0x10) = 4;
  CVar2 = SwiftUI::Color::get_white(CVar1);
  *(undefined **)(CVar1.unknown + 0x20) = CVar2.unknown;
  CVar2 = SwiftUI::Color::get_white(CVar2);
  *(undefined **)(CVar1.unknown + 0x28) = CVar2.unknown;
  CVar3 = SwiftUI::Color::get_white(CVar2);
  CVar2 = SwiftUI::Color::opacity(0.6,CVar3);
  _swift_release();
  *(undefined **)(CVar1.unknown + 0x30) = CVar2.unknown;
  CVar2 = SwiftUI::Color::get_clear(CVar3);
  *(undefined **)(CVar1.unknown + 0x38) = CVar2.unknown;
  UVar4 = SwiftUI::UnitPoint::get_bottom(CVar2.unknown);
  SwiftUI::UnitPoint::get_top(UVar4);
  gradient = SwiftUI::Gradient::init();
  LVar5 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SwiftUI::Alignment::get_center((Alignment)LVar5.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  local_190 = local_138;
  uStack_1a8 = uStack_150;
  local_1b0 = local_158;
  uStack_198 = uStack_140;
  uStack_1a0 = local_148;
  uStack_f8 = uStack_178;
  local_100 = local_180;
  uStack_e8 = uStack_168;
  local_f0 = uStack_170;
  local_e0 = local_160;
  uStack_128 = uStack_150;
  local_130 = local_158;
  uStack_118 = uStack_140;
  uStack_120 = local_148;
  uStack_108 = uStack_188;
  local_110 = local_138;
  local_80 = local_160;
  uStack_98 = uStack_178;
  local_a0 = local_180;
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  uStack_c8 = uStack_150;
  local_d0 = local_158;
  uStack_b8 = uStack_140;
  uStack_c0 = local_148;
  uStack_a8 = uStack_188;
  local_b0 = local_138;
  FUN_1000087e4(&local_130,auStack_208,&DAT_10054dbb0,&DAT_100420a20);
  FUN_10002a29c(&local_d0,&DAT_10054dbb0,&DAT_100420a20);
  param_1[5] = uStack_108;
  param_1[4] = local_110;
  param_1[7] = uStack_f8;
  param_1[6] = local_100;
  param_1[9] = uStack_e8;
  param_1[8] = local_f0;
  param_1[10] = local_e0;
  param_1[1] = uStack_128;
  *param_1 = local_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  return;
}

