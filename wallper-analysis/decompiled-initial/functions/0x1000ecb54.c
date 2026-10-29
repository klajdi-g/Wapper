// rea decompile_all
// name: FUN_1000ecb54
// address: 0x1000ecb54
// body: available
// range: 0x1000ecb54-0x1000ecd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ecb54(undefined8 *param_1)

{
  Color CVar1;
  Color CVar2;
  Color CVar3;
  Stop SVar4;
  UnitPoint UVar5;
  Gradient gradient;
  UnitPoint location;
  UnitPoint endPoint;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  CVar1.unknown = &DAT_10054f3f0;
  FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
  location.unknown = (undefined *)0x60;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar1.unknown + 0x18) = 8;
  *(undefined8 *)(CVar1.unknown + 0x10) = 4;
  CVar2 = SwiftUI::Color::get_black(CVar1);
  CVar3 = SwiftUI::Color::opacity(0.18,CVar2);
  _swift_release(CVar2.unknown);
  uVar6 = 0;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,location.unknown);
  *(undefined **)(CVar1.unknown + 0x20) = SVar4.unknown;
  *(undefined8 *)(CVar1.unknown + 0x28) = uVar6;
  CVar2 = SwiftUI::Color::get_black(SVar4.unknown);
  CVar3 = SwiftUI::Color::opacity(0.12,CVar2);
  _swift_release(CVar2.unknown);
  uVar6 = 0x3fd6666666666666;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,location.unknown);
  *(undefined **)(CVar1.unknown + 0x30) = SVar4.unknown;
  *(undefined8 *)(CVar1.unknown + 0x38) = uVar6;
  CVar2 = SwiftUI::Color::get_black(SVar4.unknown);
  CVar3 = SwiftUI::Color::opacity(0.06,CVar2);
  _swift_release(CVar2.unknown);
  uVar6 = 0x3fe6666666666666;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,location.unknown);
  *(undefined **)(CVar1.unknown + 0x40) = SVar4.unknown;
  *(undefined8 *)(CVar1.unknown + 0x48) = uVar6;
  CVar2 = SwiftUI::Color::get_black(SVar4.unknown);
  CVar3 = SwiftUI::Color::opacity(0.03,CVar2);
  _swift_release(CVar2.unknown);
  uVar6 = 0x3ff0000000000000;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,location.unknown);
  *(undefined **)(CVar1.unknown + 0x50) = SVar4.unknown;
  *(undefined8 *)(CVar1.unknown + 0x58) = uVar6;
  UVar5 = SwiftUI::UnitPoint::get_leading(SVar4.unknown);
  SwiftUI::UnitPoint::get_trailing(UVar5);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,location,endPoint);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[4] = local_58;
  return;
}

