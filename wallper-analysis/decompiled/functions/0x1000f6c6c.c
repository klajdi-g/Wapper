// rea decompile_all
// name: FUN_1000f6c6c
// address: 0x1000f6c6c
// body: available
// range: 0x1000f6c6c-0x1000f6ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6c6c(double *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  Color CVar3;
  Color CVar4;
  Color CVar5;
  UnitPoint UVar6;
  Gradient gradient;
  LinearGradient LVar7;
  SafeAreaRegions SVar8;
  Set SVar9;
  UnitPoint startPoint;
  UnitPoint endPoint;
  double dVar10;
  undefined1 auStack_130 [56];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined *puStack_d0;
  ushort local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined *local_98;
  byte local_90;
  undefined1 local_8f;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  
  puVar1 = &DAT_100423c50;
  _swift_getKeyPath(&DAT_100423c50);
  puVar2 = &DAT_100423c78;
  _swift_getKeyPath(&DAT_100423c78);
  Combine::Published::_get_subscript(&local_c0,param_3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  dVar10 = (double)NEON_fminnm(local_c0 / 700.0,0x3ff0000000000000);
  if (local_c0 / 700.0 < 0.0) {
    dVar10 = 0.0;
  }
  CVar3.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar3.unknown + 0x18) = 6;
  *(undefined8 *)(CVar3.unknown + 0x10) = 3;
  CVar4 = SwiftUI::Color::get_black(CVar3);
  CVar5 = SwiftUI::Color::opacity(dVar10 * 0.35 + 0.35,CVar4);
  _swift_release();
  *(undefined **)(CVar3.unknown + 0x20) = CVar5.unknown;
  CVar4 = SwiftUI::Color::get_black(CVar4);
  CVar5 = SwiftUI::Color::opacity(dVar10 * 0.25 + 0.15,CVar4);
  _swift_release();
  *(undefined **)(CVar3.unknown + 0x28) = CVar5.unknown;
  UVar6.unknown = (undefined *)SwiftUI::Color::get_black(CVar4);
  CVar5 = SwiftUI::Color::opacity(dVar10 * 0.3 + 0.6,(Color)UVar6.unknown);
  _swift_release();
  *(undefined **)(CVar3.unknown + 0x30) = CVar5.unknown;
  UVar6 = SwiftUI::UnitPoint::get_top(UVar6);
  SwiftUI::UnitPoint::get_bottom(UVar6);
  gradient = SwiftUI::Gradient::init();
  LVar7 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SVar8 = SwiftUI::SafeAreaRegions::get_all(LVar7.unknown);
  SVar9 = SwiftUI::Edge::Set::get_all(SVar8.unknown);
  local_f8 = local_88;
  dStack_f0 = local_80;
  local_e8 = dStack_78;
  dStack_e0 = local_70;
  local_d8 = dStack_68;
  local_90 = (byte)SVar9.unknown;
  local_c8 = (ushort)local_90;
  local_c0 = local_88;
  local_b8 = local_80;
  dStack_b0 = dStack_78;
  local_a8 = local_70;
  dStack_a0 = dStack_68;
  local_8f = 0;
  puStack_d0 = SVar8.unknown;
  local_98 = SVar8.unknown;
  FUN_1000087e4(&local_f8,auStack_130,&DAT_10054bce8,&DAT_10041d418);
  FUN_10002a29c(&local_c0,&DAT_10054bce8,&DAT_10041d418);
  param_1[1] = dStack_f0;
  *param_1 = local_f8;
  param_1[3] = dStack_e0;
  param_1[2] = local_e8;
  param_1[5] = (double)puStack_d0;
  param_1[4] = local_d8;
  *(ushort *)(param_1 + 6) = local_c8;
  return;
}

