// rea decompile_all
// name: FUN_100301f68
// address: 0x100301f68
// body: available
// range: 0x100301f68-0x1003021b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100301f68(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  Color CVar2;
  Color CVar3;
  Color CVar4;
  UnitPoint UVar5;
  Gradient gradient;
  LinearGradient LVar6;
  SafeAreaRegions SVar7;
  Set SVar8;
  HorizontalAlignment HVar9;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  undefined8 *puVar11;
  undefined8 auStack_b0 [6];
  
  puVar1 = &DAT_10055b8a0;
  FUN_100002f94(&DAT_10055b8a0,&DAT_100430378);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar10 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12);
  CVar2.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar2.unknown + 0x18) = 4;
  *(undefined8 *)(CVar2.unknown + 0x10) = 2;
  CVar3 = SwiftUI::Color::get_white(CVar2);
  CVar4 = SwiftUI::Color::opacity(0.18,CVar3);
  _swift_release();
  *(undefined **)(CVar2.unknown + 0x20) = CVar4.unknown;
  UVar5.unknown = (undefined *)SwiftUI::Color::get_white(CVar3);
  CVar4 = SwiftUI::Color::opacity(0.05,(Color)UVar5.unknown);
  _swift_release();
  *(undefined **)(CVar2.unknown + 0x28) = CVar4.unknown;
  UVar5 = SwiftUI::UnitPoint::get_topLeading(UVar5);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar5);
  gradient = SwiftUI::Gradient::init();
  LVar6 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SVar7 = SwiftUI::SafeAreaRegions::get_all(LVar6.unknown);
  SVar8 = SwiftUI::Edge::Set::get_all(SVar7.unknown);
  HVar9 = SwiftUI::HorizontalAlignment::get_center(SVar8.unknown);
  *puVar11 = HVar9.unknown;
  puVar11[1] = 0;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar1 = &DAT_10055b8a8;
  FUN_100002f94(&DAT_10055b8a8,&DAT_100430388);
  FUN_1003021b4((long)puVar11 + (long)*(int *)(puVar1 + 0x2c),param_2);
  FUN_1000087e4(puVar11,lVar10,&DAT_10055b8a0,&DAT_100430378);
  *param_1 = auStack_b0[1];
  param_1[4] = auStack_b0[5];
  param_1[3] = auStack_b0[4];
  param_1[2] = auStack_b0[3];
  param_1[1] = auStack_b0[2];
  param_1[5] = SVar7.unknown;
  *(char *)(param_1 + 6) = (char)SVar8.unknown;
  puVar1 = &DAT_10055b8b0;
  FUN_100002f94(&DAT_10055b8b0,&DAT_100430390);
  FUN_1000087e4(lVar10,(long)param_1 + (long)*(int *)(puVar1 + 0x30),&DAT_10055b8a0,&DAT_100430378);
  _swift_bridgeObjectRetain(auStack_b0[1]);
  FUN_10002a29c(puVar11,&DAT_10055b8a0,&DAT_100430378);
  FUN_10002a29c(lVar10,&DAT_10055b8a0,&DAT_100430378);
  _swift_bridgeObjectRelease(auStack_b0[1]);
  return;
}

