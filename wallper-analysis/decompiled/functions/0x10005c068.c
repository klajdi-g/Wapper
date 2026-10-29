// rea decompile_all
// name: FUN_10005c068
// address: 0x10005c068
// body: available
// range: 0x10005c068-0x10005c493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Alignment param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Set _all;
  Set SVar7;
  Alignment AVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_150 [6];
  undefined8 *apuStack_120 [2];
  long local_110 [3];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar3 = &DAT_10054df58;
  local_110[2] = param_1;
  FUN_100002f94(&DAT_10054df58,&DAT_10041ed88);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = (long)apuStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar9 = (undefined8 *)(lVar10 - extraout_x12);
  puVar4 = &DAT_10054df60;
  FUN_100002f94(&DAT_10054df60,&DAT_10041ed90);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar14 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar14 - extraout_x12_00;
  puVar4 = &DAT_10054df68;
  FUN_100002f94(&DAT_10054df68,&DAT_10041ed98);
  VVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)(lVar11 - extraout_x12_01);
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *puVar13 = VVar5.unknown;
  puVar13[1] = 0x4028000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar6 = &DAT_10054df70;
  FUN_100002f94(&DAT_10054df70,&DAT_10041eda0);
  SVar7.unknown = param_6.unknown;
  FUN_10005e1d0((long)puVar13 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uVar15 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar7.unknown = &DAT_10054df78;
  puVar6 = &DAT_10041eda8;
  uVar17 = param_4;
  uVar18 = param_5;
  FUN_100002f94();
  puVar1 = (undefined1 *)((long)puVar13 + (long)*(int *)(SVar7.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_top(SVar7);
  uVar15 = 0x402c000000000000;
  dVar16 = *(double *)(param_6.unknown + 0x18) + 14.0;
  AVar8.unknown = (undefined *)SwiftUI::EdgeInsets::init(SVar7.unknown);
  puVar1 = (undefined1 *)((long)puVar13 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(double *)(puVar1 + 8) = dVar16;
  *(undefined8 *)(puVar1 + 0x10) = uVar15;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  local_110[0] = lVar12;
  FUN_10005c494(lVar12);
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  *puVar9 = AVar8.unknown;
  puVar9[1] = puVar6;
  puVar4 = &DAT_10054df80;
  puVar6 = &DAT_10041edb0;
  FUN_100002f94();
  FUN_100062798((long)puVar9 + (long)*(int *)(puVar4 + 0x2c));
  AVar8 = SwiftUI::Alignment::get_center(param_6);
  puVar13[-2] = AVar8.unknown;
  puVar13[-1] = puVar6;
  *(undefined1 *)(puVar13 + -3) = 0;
  puVar13[-4] = 0x7ff0000000000000;
  *(undefined1 *)(puVar13 + -5) = 1;
  puVar13[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar2 = (undefined8 *)((long)puVar9 + (long)*(int *)(puVar3 + 0x24));
  puVar2[9] = local_f8[9];
  puVar2[8] = local_f8[8];
  puVar2[0xb] = local_f8[0xb];
  puVar2[10] = local_f8[10];
  puVar2[0xd] = uStack_90;
  puVar2[0xc] = local_98;
  apuStack_120[1] = puVar9;
  puVar2[1] = local_f8[1];
  *puVar2 = local_f8[0];
  puVar2[3] = local_f8[3];
  puVar2[2] = local_f8[2];
  puVar2[5] = local_f8[5];
  puVar2[4] = local_f8[4];
  puVar2[7] = local_f8[7];
  puVar2[6] = local_f8[6];
  local_110[1] = lVar11;
  FUN_1000087e4(puVar13,lVar11,&DAT_10054df68,&DAT_10041ed98);
  FUN_1000087e4(lVar12,lVar14,&DAT_10054df60,&DAT_10041ed90);
  FUN_1000087e4(puVar9,lVar10,&DAT_10054df58,&DAT_10041ed88);
  lVar12 = local_110[2];
  FUN_1000087e4(lVar11,local_110[2],&DAT_10054df68,&DAT_10041ed98);
  puVar3 = &DAT_10054df88;
  FUN_100002f94(&DAT_10054df88,&DAT_10041edb8);
  FUN_1000087e4(lVar14,lVar12 + *(int *)(puVar3 + 0x30),&DAT_10054df60,&DAT_10041ed90);
  FUN_1000087e4(lVar10,lVar12 + *(int *)(puVar3 + 0x40),&DAT_10054df58,&DAT_10041ed88);
  FUN_10002a29c(apuStack_120[1],&DAT_10054df58,&DAT_10041ed88);
  FUN_10002a29c(local_110[0],&DAT_10054df60,&DAT_10041ed90);
  FUN_10002a29c(puVar13,&DAT_10054df68,&DAT_10041ed98);
  FUN_10002a29c(lVar10,&DAT_10054df58,&DAT_10041ed88);
  FUN_10002a29c(lVar14,&DAT_10054df60,&DAT_10041ed90);
  FUN_10002a29c(local_110[1],&DAT_10054df68,&DAT_10041ed98);
  return;
}

