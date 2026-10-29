// rea decompile_all
// name: FUN_1000f0038
// address: 0x1000f0038
// body: available
// range: 0x1000f0038-0x1000f0267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f0038(undefined8 *param_1)

{
  undefined *puVar1;
  Color CVar2;
  Color CVar3;
  Color CVar4;
  UnitPoint UVar5;
  Gradient gradient;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = &DAT_100552560;
  FUN_100002f94(&DAT_100552560,&DAT_1004249f8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar7 = (long)puVar6 - extraout_x12;
  CVar2.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar2.unknown + 0x18) = 6;
  *(undefined8 *)(CVar2.unknown + 0x10) = 3;
  CVar3 = SwiftUI::Color::get_black(CVar2);
  CVar4 = SwiftUI::Color::opacity(0.35,CVar3);
  _swift_release();
  *(undefined **)(CVar2.unknown + 0x20) = CVar4.unknown;
  CVar3 = SwiftUI::Color::get_black(CVar3);
  CVar4 = SwiftUI::Color::opacity(0.18,CVar3);
  _swift_release();
  *(undefined **)(CVar2.unknown + 0x28) = CVar4.unknown;
  UVar5.unknown = (undefined *)SwiftUI::Color::get_black(CVar3);
  CVar4 = SwiftUI::Color::opacity(0.3,(Color)UVar5.unknown);
  _swift_release();
  *(undefined **)(CVar2.unknown + 0x30) = CVar4.unknown;
  UVar5 = SwiftUI::UnitPoint::get_topLeading(UVar5);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar5);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  FUN_1000f0268(lVar7);
  FUN_1000087e4(lVar7,puVar6,&DAT_100552560,&DAT_1004249f8);
  *param_1 = local_a8;
  param_1[4] = uStack_88;
  param_1[3] = uStack_90;
  param_1[2] = uStack_98;
  param_1[1] = local_a0;
  puVar1 = &DAT_100552568;
  FUN_100002f94(&DAT_100552568,&DAT_100424a00);
  FUN_1000087e4(puVar6,(long)param_1 + (long)*(int *)(puVar1 + 0x30),&DAT_100552560,&DAT_1004249f8);
  _swift_bridgeObjectRetain(local_a8);
  FUN_10002a29c(lVar7,&DAT_100552560,&DAT_1004249f8);
  FUN_10002a29c(puVar6,&DAT_100552560,&DAT_1004249f8);
  _swift_bridgeObjectRelease(local_a8);
  return;
}

