// rea decompile_all
// name: FUN_100031aa8
// address: 0x100031aa8
// body: available
// range: 0x100031aa8-0x100031cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100031aa8(undefined8 *param_1,double param_2)

{
  Color CVar1;
  Color CVar2;
  Color CVar3;
  UnitPoint UVar4;
  Gradient gradient;
  LinearGradient LVar5;
  SafeAreaRegions SVar6;
  Set SVar7;
  UnitPoint startPoint;
  UnitPoint endPoint;
  double dVar8;
  undefined1 auStack_130 [56];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  ushort local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  byte local_90;
  undefined1 local_8f;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  CVar1.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar1.unknown + 0x18) = 6;
  *(undefined8 *)(CVar1.unknown + 0x10) = 3;
  CVar2 = SwiftUI::Color::get_black(CVar1);
  dVar8 = (double)NEON_fminnm(param_2 / 500.0,0x3ff0000000000000);
  if (param_2 / 500.0 < 0.0) {
    dVar8 = 0.0;
  }
  CVar3 = SwiftUI::Color::opacity(dVar8 * 0.35 + 0.2,CVar2);
  _swift_release();
  *(undefined **)(CVar1.unknown + 0x20) = CVar3.unknown;
  CVar3 = SwiftUI::Color::get_black(CVar2);
  CVar2 = SwiftUI::Color::opacity(dVar8 * 0.25 + 0.05,CVar3);
  _swift_release();
  *(undefined **)(CVar1.unknown + 0x28) = CVar2.unknown;
  UVar4.unknown = (undefined *)SwiftUI::Color::get_black(CVar3);
  CVar2 = SwiftUI::Color::opacity(dVar8 * 0.35 + 0.4,(Color)UVar4.unknown);
  _swift_release();
  *(undefined **)(CVar1.unknown + 0x30) = CVar2.unknown;
  UVar4 = SwiftUI::UnitPoint::get_top(UVar4);
  SwiftUI::UnitPoint::get_bottom(UVar4);
  gradient = SwiftUI::Gradient::init();
  LVar5 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SVar6 = SwiftUI::SafeAreaRegions::get_all(LVar5.unknown);
  SVar7 = SwiftUI::Edge::Set::get_all(SVar6.unknown);
  local_f8 = local_88;
  uStack_f0 = local_80;
  local_e8 = uStack_78;
  uStack_e0 = local_70;
  local_d8 = uStack_68;
  local_90 = (byte)SVar7.unknown;
  local_c8 = (ushort)local_90;
  local_c0 = local_88;
  local_b8 = local_80;
  uStack_b0 = uStack_78;
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_8f = 0;
  puStack_d0 = SVar6.unknown;
  local_98 = SVar6.unknown;
  FUN_1000087e4(&local_f8,auStack_130,&DAT_10054bce8,&DAT_10041d418);
  FUN_10002a29c(&local_c0,&DAT_10054bce8,&DAT_10041d418);
  param_1[1] = uStack_f0;
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  param_1[5] = puStack_d0;
  param_1[4] = local_d8;
  *(ushort *)(param_1 + 6) = local_c8;
  return;
}

