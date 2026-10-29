// rea decompile_all
// name: FUN_10001ebb0
// address: 0x10001ebb0
// body: available
// range: 0x10001ebb0-0x10001ed53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001ebb0(long param_1,undefined8 param_2,undefined8 param_3,
                  ButtonStyleConfiguration param_4,byte param_5)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  ButtonStyleConfiguration BVar4;
  Label LVar5;
  Color CVar6;
  Color CVar7;
  Animation AVar8;
  Animation AVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined7 extraout_var;
  
  BVar4.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(param_4);
  BVar4.unknown._1_7_ = extraout_var;
  LVar5 = SwiftUI::ButtonStyleConfiguration::get_label(BVar4);
  SwiftUI::UnitPoint::get_center((UnitPoint)LVar5.unknown);
  CVar6.unknown = &DAT_10054a7b8;
  FUN_100002f94(&DAT_10054a7b8,&DAT_10041dfc0);
  bVar3 = (param_5 & 1) == 0;
  dVar13 = 0.5;
  if (bVar3) {
    dVar13 = 0.0;
  }
  uVar12 = 0x4028000000000000;
  if (bVar3) {
    uVar12 = 0;
  }
  uVar11 = 0x3feb851eb851eb85;
  if (!BVar4.unknown._0_1_) {
    uVar11 = 0x3ff0000000000000;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(CVar6.unknown + 0x24));
  *puVar1 = uVar11;
  puVar1[1] = uVar11;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  dVar14 = 0.9;
  if (!BVar4.unknown._0_1_) {
    dVar14 = dVar13;
  }
  uVar11 = 0x4032000000000000;
  if (!BVar4.unknown._0_1_) {
    uVar11 = uVar12;
  }
  CVar6 = SwiftUI::Color::get_white(CVar6);
  CVar7 = SwiftUI::Color::opacity(dVar14,CVar6);
  _swift_release(CVar6.unknown);
  AVar9.unknown = &DAT_10054a7c0;
  FUN_100002f94(&DAT_10054a7c0,&DAT_10041b9e0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar9.unknown + 0x24));
  *puVar1 = CVar7.unknown;
  puVar1[1] = uVar11;
  puVar1[2] = 0;
  puVar1[3] = 0;
  AVar8 = SwiftUI::Animation::spring(0.28,0.6,0.0,AVar9);
  AVar9.unknown = &DAT_10054a7c8;
  FUN_100002f94(&DAT_10054a7c8,&BYTE_100435b90);
  iVar2 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar8.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = BVar4.unknown._0_1_;
  AVar9 = SwiftUI::Animation::easeOut(0.18,AVar9);
  puVar10 = &DAT_10054a7d0;
  FUN_100002f94(&DAT_10054a7d0,&DAT_10041b9f0);
  iVar2 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar9.unknown;
  *(byte *)((undefined8 *)(param_1 + iVar2) + 1) = param_5;
  return;
}

