// rea decompile_all
// name: FUN_1003b54bc
// address: 0x1003b54bc
// body: available
// range: 0x1003b54bc-0x1003b56ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b54bc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  Color CVar2;
  Color CVar3;
  Color CVar4;
  UnitPoint UVar5;
  Gradient gradient;
  LinearGradient LVar6;
  HorizontalAlignment HVar7;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 *puVar9;
  undefined8 auStack_b0 [6];
  
  puVar1 = &DAT_10055fcf8;
  FUN_100002f94(&DAT_10055fcf8,&DAT_100435778);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar8 = (long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = (undefined8 *)(lVar8 - extraout_x12);
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
  HVar7 = SwiftUI::HorizontalAlignment::get_center(LVar6.unknown);
  *puVar9 = HVar7.unknown;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar1 = &DAT_10055fd00;
  FUN_100002f94(&DAT_10055fd00,&DAT_100435788);
  FUN_1003b56f0((long)puVar9 + (long)*(int *)(puVar1 + 0x2c),param_2);
  FUN_1000087e4(puVar9,lVar8,&DAT_10055fcf8,&DAT_100435778);
  *param_1 = auStack_b0[1];
  param_1[4] = auStack_b0[5];
  param_1[3] = auStack_b0[4];
  param_1[2] = auStack_b0[3];
  param_1[1] = auStack_b0[2];
  puVar1 = &DAT_10055fd08;
  FUN_100002f94(&DAT_10055fd08,&DAT_100435790);
  FUN_1000087e4(lVar8,(long)param_1 + (long)*(int *)(puVar1 + 0x30),&DAT_10055fcf8,&DAT_100435778);
  _swift_bridgeObjectRetain(auStack_b0[1]);
  FUN_10002a29c(puVar9,&DAT_10055fcf8,&DAT_100435778);
  FUN_10002a29c(lVar8,&DAT_10055fcf8,&DAT_100435778);
  _swift_bridgeObjectRelease(auStack_b0[1]);
  return;
}

