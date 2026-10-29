// rea decompile_all
// name: FUN_1000b6adc
// address: 0x1000b6adc
// body: available
// range: 0x1000b6adc-0x1000b6eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  Color CVar6;
  Set _all;
  Set SVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_f0 [5];
  undefined1 auStack_c8 [72];
  
  puVar2 = &DAT_10054def0;
  alStack_f0[1] = param_1;
  FUN_100002f94(&DAT_10054def0,&DAT_100422df0);
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar6.unknown = (undefined *)((long)alStack_f0 - extraout_x8);
  puVar3 = &DAT_100550820;
  FUN_100002f94(&DAT_100550820,&DAT_1004221c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar8 = (long)CVar6.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar8 - extraout_x12;
  HVar4.unknown = &DAT_100550828;
  FUN_100002f94(&DAT_100550828,&DAT_1004221d0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar4.unknown + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12_00);
  HVar4 = SwiftUI::HorizontalAlignment::get_center(HVar4);
  *puVar12 = HVar4.unknown;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 0;
  puVar5 = &DAT_100550830;
  FUN_100002f94(&DAT_100550830,&DAT_1004221d8);
  FUN_1000b6eb0((long)puVar12 + (long)*(int *)(puVar5 + 0x2c),param_6);
  puVar5 = &DAT_100529200;
  _swift_allocObject(&DAT_100529200,0x70,7);
  uVar13 = param_6[4];
  uVar17 = param_6[7];
  uVar15 = param_6[6];
  *(undefined8 *)(puVar5 + 0x38) = param_6[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar13;
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(puVar5 + 0x40) = uVar15;
  uVar13 = param_6[8];
  uVar17 = param_6[0xb];
  uVar15 = param_6[10];
  *(undefined8 *)(puVar5 + 0x58) = param_6[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar13;
  *(undefined8 *)(puVar5 + 0x68) = uVar17;
  *(undefined8 *)(puVar5 + 0x60) = uVar15;
  uVar13 = *param_6;
  uVar15 = param_6[3];
  uVar16 = param_6[2];
  *(undefined8 *)(puVar5 + 0x18) = param_6[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  *(undefined8 *)(puVar5 + 0x28) = uVar15;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  FUN_1000bcb94(param_6,alStack_f0 + 2);
  SwiftUI::Button::_init();
  FUN_1000087a0(&DAT_100550838,&DAT_10054def0,&DAT_100422df0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  FUN_100037164();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar10);
  (**(code **)(lVar9 + 8))(CVar6.unknown,puVar2);
  CVar6 = SwiftUI::Color::get_white(CVar6);
  puVar2 = &DAT_100550840;
  FUN_100002f94(&DAT_100550840,&DAT_1004221e0);
  *(undefined **)(lVar10 + *(int *)(puVar2 + 0x24)) = CVar6.unknown;
  SVar7.unknown = &DAT_100550848;
  FUN_100002f94(&DAT_100550848,&DAT_1004221e8);
  *(undefined8 *)(lVar10 + *(int *)(SVar7.unknown + 0x24)) = 0x3fe3333333333333;
  _all = SwiftUI::Edge::Set::get_top(SVar7);
  uVar14 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_100550850;
  uVar13 = uVar16;
  uVar15 = param_4;
  uVar17 = param_5;
  FUN_100002f94(&DAT_100550850,&DAT_1004221f0);
  puVar1 = (undefined1 *)(lVar10 + *(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar14;
  *(undefined8 *)(puVar1 + 0x10) = uVar16;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_trailing(SVar7);
  uVar14 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  puVar1 = (undefined1 *)(lVar10 + *(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar14;
  *(undefined8 *)(puVar1 + 0x10) = uVar13;
  *(undefined8 *)(puVar1 + 0x18) = uVar15;
  *(undefined8 *)(puVar1 + 0x20) = uVar17;
  puVar1[0x28] = 0;
  FUN_1000087e4(puVar12,lVar11,&DAT_100550828,&DAT_1004221d0);
  FUN_1000087e4(lVar10,lVar8,&DAT_100550820,&DAT_1004221c8);
  lVar9 = alStack_f0[1];
  FUN_1000087e4(lVar11,alStack_f0[1],&DAT_100550828,&DAT_1004221d0);
  puVar2 = &DAT_100550858;
  FUN_100002f94(&DAT_100550858,&DAT_1004221f8);
  FUN_1000087e4(lVar8,lVar9 + *(int *)(puVar2 + 0x30),&DAT_100550820,&DAT_1004221c8);
  FUN_10002a29c(lVar10,&DAT_100550820,&DAT_1004221c8);
  FUN_10002a29c(puVar12,&DAT_100550828,&DAT_1004221d0);
  FUN_10002a29c(lVar8,&DAT_100550820,&DAT_1004221c8);
  FUN_10002a29c(lVar11,&DAT_100550828,&DAT_1004221d0);
  return;
}

