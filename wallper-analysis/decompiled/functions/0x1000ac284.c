// rea decompile_all
// name: FUN_1000ac284
// address: 0x1000ac284
// body: available
// range: 0x1000ac284-0x1000ac533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ac284(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Alignment AVar6;
  Color CVar7;
  Color CVar8;
  Stop SVar9;
  UnitPoint UVar10;
  Gradient gradient;
  UnitPoint location;
  UnitPoint endPoint;
  long lVar11;
  undefined8 uVar12;
  undefined *local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined *local_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  bool local_120;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar11 = *(long *)(param_2.unknown + 0x20);
  if (lVar11 == 0) {
    AVar6 = SwiftUI::Alignment::get_center(param_2);
    FUN_1000ac534(&local_110,param_2.unknown);
    uVar5 = local_f0;
    uVar4 = local_f8;
    uVar3 = local_100;
    uVar2 = uStack_108;
    puVar1 = local_110;
    CVar7.unknown = &DAT_10054f3f0;
    FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
    location.unknown = (undefined *)0x50;
    endPoint.unknown = (undefined *)0x7;
    _swift_allocObject();
    *(undefined8 *)(CVar7.unknown + 0x18) = 6;
    *(undefined8 *)(CVar7.unknown + 0x10) = 3;
    CVar8 = SwiftUI::Color::get_black(CVar7);
    uVar12 = 0;
    SVar9 = SwiftUI::Gradient::Stop::init(CVar8,location.unknown);
    *(undefined **)(CVar7.unknown + 0x20) = SVar9.unknown;
    *(undefined8 *)(CVar7.unknown + 0x28) = uVar12;
    CVar8 = SwiftUI::Color::get_black(SVar9.unknown);
    uVar12 = 0x3fe999999999999a;
    SVar9 = SwiftUI::Gradient::Stop::init(CVar8,location.unknown);
    *(undefined **)(CVar7.unknown + 0x30) = SVar9.unknown;
    *(undefined8 *)(CVar7.unknown + 0x38) = uVar12;
    CVar8 = SwiftUI::Color::get_clear(SVar9.unknown);
    uVar12 = 0x3ff0000000000000;
    SVar9 = SwiftUI::Gradient::Stop::init(CVar8,location.unknown);
    *(undefined **)(CVar7.unknown + 0x40) = SVar9.unknown;
    *(undefined8 *)(CVar7.unknown + 0x48) = uVar12;
    UVar10 = SwiftUI::UnitPoint::get_leading(SVar9.unknown);
    SwiftUI::UnitPoint::get_trailing(UVar10);
    gradient = SwiftUI::Gradient::init();
    SwiftUI::LinearGradient::init(gradient,location,endPoint);
    uStack_240 = uVar2;
    local_248 = puVar1;
    local_238 = uVar3;
    uStack_230 = uVar4;
    local_228 = uVar5;
    uStack_220 = local_a8;
    local_218 = local_a0;
    uStack_210 = uStack_98;
    local_208 = local_90;
    uStack_200 = uStack_88;
    local_1e0 = puVar1;
    local_1d0 = uVar3;
    uStack_1d8 = uVar2;
    uStack_1c8 = uVar4;
    uStack_1c0 = uVar5;
    local_1b8 = local_a8;
    local_1b0 = local_a0;
    uStack_1a8 = uStack_98;
    local_1a0 = local_90;
    uStack_198 = uStack_88;
    local_258 = AVar6.unknown;
    uStack_250 = param_3;
    local_1f0 = AVar6.unknown;
    uStack_1e8 = param_3;
    FUN_1000087e4(&local_258,&local_110,&DAT_100550230,&DAT_100421a98);
    FUN_10002a29c(&local_1f0,&DAT_100550230,&DAT_100421a98);
    uStack_158 = uStack_230;
    local_160 = local_238;
    uStack_148 = uStack_220;
    uStack_150 = local_228;
    uStack_138 = uStack_210;
    local_140 = local_218;
    uStack_128 = uStack_200;
    uStack_130 = local_208;
    uStack_178 = uStack_250;
    local_180 = local_258;
    uStack_168 = uStack_240;
    puStack_170 = local_248;
  }
  else {
    local_180 = (undefined *)SwiftUI::Color::get_clear(param_2.unknown);
  }
  local_120 = lVar11 != 0;
  FUN_100002f94(&DAT_100550230,&DAT_100421a98);
  FUN_1000b2f68();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_180);
  uStack_1a8 = uStack_c8;
  local_1b0 = local_d0;
  uStack_198 = uStack_b8;
  local_1a0 = uStack_c0;
  local_190 = local_b0;
  uStack_1e8 = uStack_108;
  local_1f0 = local_110;
  uStack_1d8 = local_f8;
  local_1e0 = (undefined *)local_100;
  uStack_1c8 = uStack_e8;
  local_1d0 = local_f0;
  local_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = local_f8;
  param_1[2] = local_100;
  *(undefined1 *)(param_1 + 0xc) = local_b0;
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = local_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  uStack_158 = uStack_e8;
  local_160 = local_f0;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  uStack_138 = uStack_c8;
  local_140 = local_d0;
  uStack_128 = uStack_b8;
  uStack_130 = uStack_c0;
  local_120 = (bool)local_b0;
  uStack_178 = uStack_108;
  local_180 = local_110;
  uStack_168 = local_f8;
  puStack_170 = (undefined *)local_100;
  FUN_1000087e4(&local_1f0,&local_258,&DAT_100550250,&DAT_100421ab0);
  FUN_10002a29c(&local_180,&DAT_100550250,&DAT_100421ab0);
  return;
}

