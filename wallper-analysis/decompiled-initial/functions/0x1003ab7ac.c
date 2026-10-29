// rea decompile_all
// name: FUN_1003ab7ac
// address: 0x1003ab7ac
// body: available
// range: 0x1003ab7ac-0x1003abac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ab82c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003ab7ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ObservedObject<undefined> OVar2;
  undefined8 uVar3;
  ObservedObject<undefined> OVar4;
  State SVar5;
  State SVar6;
  undefined8 uVar7;
  Alignment width;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_2b8 [88];
  undefined *local_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  double dStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined *local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (DAT_1005539e8 != -1) {
    _swift_once(&DAT_1005539e8,FUN_1001237d4);
  }
  uVar7 = DAT_100577c28;
  uVar1 = 0;
  FUN_100125cc0();
  puVar8 = &DAT_100551cb0;
  FUN_1000036d0(&DAT_100551cb0,FUN_100125cc0,&TargetProtocolConformanceDescriptor_1004268e8);
  _swift_retain(uVar7);
  OVar2 = SwiftUI::ObservedObject::init(puVar8,uVar1,puVar8);
  if (DAT_100559a28 != -1) {
    _swift_once(&DAT_100559a28,FUN_100295b28);
  }
  uVar7 = DAT_100577de8;
  uVar3 = 0;
  FUN_10029711c();
  puVar8 = &DAT_100552df8;
  FUN_1000036d0(&DAT_100552df8,FUN_10029711c,&TargetProtocolConformanceDescriptor_10042dae8);
  _swift_retain(uVar7);
  OVar4 = SwiftUI::ObservedObject::init(puVar8,uVar3,puVar8);
  puVar8 = *(undefined **)(param_2 + 0x50);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  SVar5.unknown = &DAT_10055f878;
  local_160 = puVar8;
  uStack_158 = uVar9;
  local_150 = (undefined *)uVar7;
  FUN_100002f94(&DAT_10055f878,&DAT_100434ff8);
  SwiftUI::State::get_wrappedValue(SVar5);
  if ((double)local_1c0 <= 0.0) {
    width.unknown = (undefined *)0x0;
  }
  else {
    local_160 = puVar8;
    uStack_158 = uVar9;
    local_150 = (undefined *)uVar7;
    SwiftUI::State::get_wrappedValue(SVar5);
    width.unknown = local_1c0;
  }
  SVar6.unknown = SVar5.unknown;
  local_160 = puVar8;
  uStack_158 = uVar9;
  local_150 = (undefined *)uVar7;
  SwiftUI::State::get_wrappedValue(SVar5);
  if (0.0 < dStack_1b8) {
    local_160 = puVar8;
    uStack_158 = uVar9;
    local_150 = (undefined *)uVar7;
    SwiftUI::State::get_wrappedValue(SVar5);
    SVar6.unknown = SVar5.unknown;
  }
  SwiftUI::Alignment::get_topTrailing((Alignment)SVar6.unknown);
  SwiftUI::_FrameLayout::_init(width);
  uStack_238 = uStack_f8;
  local_240 = local_100;
  uStack_228 = uStack_e8;
  local_230 = uStack_f0;
  uStack_218 = uStack_d8;
  uStack_220 = local_e0;
  uStack_a8 = uStack_f8;
  local_b0 = local_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  local_90 = local_e0;
  uStack_1e8 = uStack_f8;
  local_1f0 = local_100;
  uStack_1d8 = uStack_e8;
  uStack_1e0 = uStack_f0;
  uStack_1c8 = uStack_d8;
  local_1d0 = local_e0;
  local_260 = OVar2.unknown;
  uStack_258 = uVar1;
  local_250 = OVar4.unknown;
  uStack_248 = uVar3;
  local_210 = OVar2.unknown;
  uStack_208 = uVar1;
  local_200 = OVar4.unknown;
  uStack_1f8 = uVar3;
  local_d0 = OVar2.unknown;
  uStack_c8 = uVar1;
  puStack_c0 = OVar4.unknown;
  uStack_b8 = uVar3;
  FUN_1000087e4(&local_260,&local_160,&DAT_10055f8f8,&DAT_1004351a0);
  FUN_10002a29c(&local_210,&DAT_10055f8f8,&DAT_1004351a0);
  uStack_198 = uStack_a8;
  local_1a0 = local_b0;
  uStack_188 = uStack_98;
  uStack_190 = uStack_a0;
  uStack_178 = uStack_88;
  local_180 = local_90;
  dStack_1b8 = (double)uStack_c8;
  local_1c0 = local_d0;
  uStack_1a8 = uStack_b8;
  puStack_1b0 = puStack_c0;
  local_170 = 0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  uStack_130 = uStack_a0;
  uStack_118 = uStack_88;
  local_120 = local_90;
  uStack_158 = uStack_c8;
  local_160 = local_d0;
  uStack_148 = uStack_b8;
  local_150 = puStack_c0;
  local_110 = 0;
  FUN_1000087e4(&local_1c0,auStack_2b8,&DAT_10055f900,&DAT_1004351a8);
  FUN_10002a29c(&local_160,&DAT_10055f900,&DAT_1004351a8);
  param_1[5] = uStack_198;
  param_1[4] = local_1a0;
  param_1[7] = uStack_188;
  param_1[6] = uStack_190;
  param_1[9] = uStack_178;
  param_1[8] = local_180;
  *(undefined1 *)(param_1 + 10) = local_170;
  param_1[1] = dStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = puStack_1b0;
  return;
}

