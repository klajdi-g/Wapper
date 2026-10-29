// rea decompile_all
// name: FUN_1003c8fe4
// address: 0x1003c8fe4
// body: available
// range: 0x1003c8fe4-0x1003c9197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c8fe4(long param_1,ButtonStyleConfiguration param_2,byte param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ButtonStyleConfiguration BVar3;
  Label LVar4;
  Color CVar5;
  Color CVar6;
  Animation AVar7;
  Animation AVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined7 extraout_var;
  
  BVar3.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_2);
  BVar3.unknown._1_7_ = extraout_var;
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(BVar3);
  uVar10 = 0x3fea3d70a3d70a3d;
  uVar13 = 0x3ff0000000000000;
  uVar14 = uVar10;
  if (!BVar3.unknown._0_1_) {
    uVar14 = 0x3ff0000000000000;
  }
  SwiftUI::UnitPoint::get_center((UnitPoint)LVar4.unknown);
  CVar5.unknown = &DAT_10054a7b8;
  FUN_100002f94(&DAT_10054a7b8,&DAT_10041dfc0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(CVar5.unknown + 0x24));
  *puVar1 = uVar14;
  puVar1[1] = uVar14;
  puVar1[2] = uVar10;
  puVar1[3] = uVar13;
  if ((param_3 & 1) == 0) {
    uVar14 = 0;
    CVar5 = SwiftUI::Color::get_white(CVar5);
    dVar11 = 0.0;
  }
  else {
    uVar14 = 0x4024000000000000;
    dVar11 = 0.55;
    CVar5 = SwiftUI::Color::get_red(CVar5);
  }
  dVar12 = 0.9;
  if (!BVar3.unknown._0_1_) {
    dVar12 = dVar11;
  }
  uVar10 = 0x402c000000000000;
  if (!BVar3.unknown._0_1_) {
    uVar10 = uVar14;
  }
  CVar6 = SwiftUI::Color::opacity(dVar12,CVar5);
  _swift_release(CVar5.unknown);
  AVar8.unknown = &DAT_10054a7c0;
  FUN_100002f94(&DAT_10054a7c0,&DAT_10041b9e0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar8.unknown + 0x24));
  *puVar1 = CVar6.unknown;
  puVar1[1] = uVar10;
  puVar1[2] = 0;
  puVar1[3] = 0;
  AVar7 = SwiftUI::Animation::spring(0.25,0.6,0.0,AVar8);
  AVar8.unknown = &DAT_10054a7c8;
  FUN_100002f94(&DAT_10054a7c8,&BYTE_100435b90);
  iVar2 = *(int *)(AVar8.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar7.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = BVar3.unknown._0_1_;
  AVar8 = SwiftUI::Animation::easeOut(0.2,AVar8);
  puVar9 = &DAT_10054a7d0;
  FUN_100002f94(&DAT_10054a7d0,&DAT_10041b9f0);
  iVar2 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar8.unknown;
  *(byte *)((undefined8 *)(param_1 + iVar2) + 1) = param_3 & 1;
  return;
}

