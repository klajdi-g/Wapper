// rea decompile_all
// name: FUN_1003b5bfc
// address: 0x1003b5bfc
// body: available
// range: 0x1003b5bfc-0x1003b5faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b5d28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b5bfc(ulong param_1,undefined8 param_2,undefined8 param_3,Set param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  Color CVar8;
  Color CVar9;
  Color CVar10;
  UnitPoint UVar11;
  Gradient gradient;
  LinearGradient LVar12;
  Set SVar13;
  HorizontalAlignment HVar14;
  Set _all;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong local_b0 [5];
  ulong uStack_88;
  
  puVar4 = &DAT_10055fdf0;
  local_b0[0] = param_1;
  FUN_100002f94(&DAT_10055fdf0,&DAT_1004358c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = (long)local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar15 - extraout_x12);
  puVar5 = &DAT_10055fdf8;
  FUN_100002f94(&DAT_10055fdf8,&DAT_1004358c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_00;
  FUN_1003b2d70(lVar18);
  lVar6 = 0;
  FUN_1003ba110();
  iVar3 = *(int *)(lVar6 + 0x14);
  local_b0[1] = 0;
  puVar7 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  SwiftUI::State::init(lVar18 + iVar3,puVar7,puVar7);
  local_b0[1] = local_b0[1] & 0xffffffffffffff00;
  SwiftUI::State::init
            (lVar18 + *(int *)(lVar6 + 0x18),puVar7,PTR___type_metadata_for_Swift_Bool_100523b70);
  CVar8.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x30;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar8.unknown + 0x18) = 4;
  *(undefined8 *)(CVar8.unknown + 0x10) = 2;
  CVar9 = SwiftUI::Color::get_black(CVar8);
  CVar10 = SwiftUI::Color::opacity(0.25,CVar9);
  _swift_release();
  *(undefined **)(CVar8.unknown + 0x20) = CVar10.unknown;
  UVar11.unknown = (undefined *)SwiftUI::Color::get_black(CVar9);
  uVar19 = 0x3fe8000000000000;
  CVar10 = SwiftUI::Color::opacity(0.75,(Color)UVar11.unknown);
  _swift_release();
  *(undefined **)(CVar8.unknown + 0x28) = CVar10.unknown;
  UVar11 = SwiftUI::UnitPoint::get_top(UVar11);
  SwiftUI::UnitPoint::get_bottom(UVar11);
  gradient = SwiftUI::Gradient::init();
  LVar12 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  uVar21 = local_b0[1];
  SVar13 = SwiftUI::Edge::Set::get_all(LVar12.unknown);
  puVar1 = (ulong *)(lVar18 + *(int *)(puVar5 + 0x24));
  *puVar1 = uVar21;
  puVar1[4] = uStack_88;
  puVar1[3] = local_b0[4];
  puVar1[2] = local_b0[3];
  puVar1[1] = local_b0[2];
  *(char *)(puVar1 + 5) = (char)SVar13.unknown;
  uVar21 = local_b0[4];
  HVar14 = SwiftUI::HorizontalAlignment::get_leading(SVar13.unknown);
  *puVar16 = HVar14.unknown;
  puVar16[1] = 0x4010000000000000;
  *(undefined1 *)(puVar16 + 2) = 0;
  puVar5 = &DAT_10055fe00;
  FUN_100002f94(&DAT_10055fe00,&DAT_1004358d8);
  FUN_1003b5fb0((long)puVar16 + (long)*(int *)(puVar5 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(param_4);
  uVar20 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar13.unknown = &DAT_10055fe08;
  uVar22 = uVar21;
  uVar23 = uVar19;
  uVar24 = param_3;
  FUN_100002f94(&DAT_10055fe08,&DAT_1004358e0);
  puVar2 = (undefined1 *)((long)puVar16 + (long)*(int *)(SVar13.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar20;
  *(ulong *)(puVar2 + 0x10) = uVar21;
  *(undefined8 *)(puVar2 + 0x18) = uVar19;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = 0;
  SVar13 = SwiftUI::Edge::Set::get_bottom(SVar13);
  uVar19 = 0x4032000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  puVar2 = (undefined1 *)((long)puVar16 + (long)*(int *)(puVar4 + 0x24));
  *puVar2 = (char)SVar13.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar19;
  *(ulong *)(puVar2 + 0x10) = uVar22;
  *(undefined8 *)(puVar2 + 0x18) = uVar23;
  *(undefined8 *)(puVar2 + 0x20) = uVar24;
  puVar2[0x28] = 0;
  FUN_1000087e4(lVar18,lVar17,&DAT_10055fdf8,&DAT_1004358c8);
  FUN_1000087e4(puVar16,lVar15,&DAT_10055fdf0,&DAT_1004358c0);
  uVar21 = local_b0[0];
  FUN_1000087e4(lVar17,local_b0[0],&DAT_10055fdf8,&DAT_1004358c8);
  puVar4 = &DAT_10055fe10;
  FUN_100002f94(&DAT_10055fe10,&DAT_1004358e8);
  FUN_1000087e4(lVar15,uVar21 + (long)*(int *)(puVar4 + 0x30),&DAT_10055fdf0,&DAT_1004358c0);
  FUN_10002a29c(puVar16,&DAT_10055fdf0,&DAT_1004358c0);
  FUN_10002a29c(lVar18,&DAT_10055fdf8,&DAT_1004358c8);
  FUN_10002a29c(lVar15,&DAT_10055fdf0,&DAT_1004358c0);
  FUN_10002a29c(lVar17,&DAT_10055fdf8,&DAT_1004358c8);
  return;
}

