// rea decompile_all
// name: FUN_1001041a4
// address: 0x1001041a4
// body: available
// range: 0x1001041a4-0x100104353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001041a4(long param_1,ButtonStyleConfiguration param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ButtonStyleConfiguration BVar3;
  Label LVar4;
  Alignment AVar5;
  Color CVar6;
  UnitPoint UVar7;
  Animation AVar8;
  Animation AVar9;
  undefined *puVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined7 extraout_var;
  
  uVar11 = param_3;
  BVar3.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_2);
  BVar3.unknown._1_7_ = extraout_var;
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(BVar3);
  AVar5.unknown = (undefined *)SwiftUI::Color::get_white(LVar4.unknown);
  dVar12 = 0.1;
  if ((param_3 & 1) == 0) {
    dVar12 = 0.0;
  }
  dVar14 = 0.18;
  if (!BVar3.unknown._0_1_) {
    dVar14 = dVar12;
  }
  uVar13 = 0x3feb851eb851eb85;
  uVar15 = uVar13;
  if (!BVar3.unknown._0_1_) {
    uVar15 = 0x3ff0000000000000;
  }
  CVar6 = SwiftUI::Color::opacity(dVar14,(Color)AVar5.unknown);
  _swift_release();
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  UVar7.unknown = &DAT_100552b50;
  FUN_100002f94(&DAT_100552b50,&DAT_1004253b0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(UVar7.unknown + 0x24));
  *puVar1 = CVar6.unknown;
  *(undefined2 *)(puVar1 + 1) = 0x100;
  puVar1[2] = AVar5.unknown;
  puVar1[3] = uVar11;
  SwiftUI::UnitPoint::get_center(UVar7);
  AVar9.unknown = &DAT_100552b58;
  FUN_100002f94(&DAT_100552b58,&DAT_1004253b8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar9.unknown + 0x24));
  *puVar1 = uVar15;
  puVar1[1] = uVar15;
  puVar1[2] = dVar14;
  puVar1[3] = uVar13;
  AVar8 = SwiftUI::Animation::spring(0.28,0.6,0.0,AVar9);
  AVar9.unknown = &DAT_100552b60;
  FUN_100002f94(&DAT_100552b60,&DAT_1004253c0);
  iVar2 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar8.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = BVar3.unknown._0_1_;
  AVar9 = SwiftUI::Animation::easeOut(0.15,AVar9);
  puVar10 = &DAT_100552b68;
  FUN_100002f94(&DAT_100552b68,&DAT_1004253c8);
  iVar2 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar9.unknown;
  *(char *)((undefined8 *)(param_1 + iVar2) + 1) = (char)param_3;
  return;
}

