// rea decompile_all
// name: FUN_10034632c
// address: 0x10034632c
// body: available
// range: 0x10034632c-0x10034652f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034632c(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Color CVar4;
  Color CVar5;
  Color CVar6;
  UnitPoint UVar7;
  Gradient gradient;
  LinearGradient LVar8;
  Set SVar9;
  UnitPoint startPoint;
  UnitPoint endPoint;
  Alignment unaff_x20;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10055d488;
  FUN_100002f94();
  FUN_100346e18((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SwiftUI::Alignment::get_topLeading(unaff_x20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_10055d490;
  FUN_100002f94(&DAT_10055d490,&DAT_100432b38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = local_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = local_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = local_98;
  puVar1[1] = uStack_f0;
  *puVar1 = local_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = local_e8;
  puVar1[5] = uStack_d0;
  puVar1[4] = local_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = local_c8;
  CVar4.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar4.unknown + 0x18) = 4;
  *(undefined8 *)(CVar4.unknown + 0x10) = 2;
  CVar5 = SwiftUI::Color::get_white(CVar4);
  CVar6 = SwiftUI::Color::opacity(0.18,CVar5);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x20) = CVar6.unknown;
  UVar7.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
  CVar6 = SwiftUI::Color::opacity(0.05,(Color)UVar7.unknown);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x28) = CVar6.unknown;
  UVar7 = SwiftUI::UnitPoint::get_topLeading(UVar7);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar7);
  gradient = SwiftUI::Gradient::init();
  LVar8 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SVar9 = SwiftUI::Edge::Set::get_all(LVar8.unknown);
  puVar3 = &DAT_10055d478;
  FUN_100002f94(&DAT_10055d478,&DAT_100432b20);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *param_1 = local_88;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  param_1[1] = local_80;
  *(char *)(param_1 + 5) = (char)SVar9.unknown;
  return;
}

