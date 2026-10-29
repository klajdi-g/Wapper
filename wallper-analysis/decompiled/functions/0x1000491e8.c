// rea decompile_all
// name: FUN_1000491e8
// address: 0x1000491e8
// body: available
// range: 0x1000491e8-0x1000492d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000491e8(long param_1,ButtonStyleConfiguration param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Label LVar4;
  UnitPoint UVar5;
  Animation AVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined7 extraout_var;
  
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(param_2);
  UVar5.unknown._0_1_ =
       SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)LVar4.unknown);
  UVar5.unknown._1_7_ = extraout_var;
  uVar8 = 0x3feb851eb851eb85;
  uVar9 = 0x3ff0000000000000;
  uVar10 = uVar8;
  if (!UVar5.unknown._0_1_) {
    uVar10 = 0x3ff0000000000000;
  }
  SwiftUI::UnitPoint::get_center(UVar5);
  AVar6.unknown = &DAT_10054a7b8;
  FUN_100002f94(&DAT_10054a7b8,&DAT_10041dfc0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar6.unknown + 0x24));
  *puVar1 = uVar10;
  puVar1[1] = uVar10;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  AVar6 = SwiftUI::Animation::spring(0.28,0.6,0.0,AVar6);
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)AVar6.unknown);
  puVar7 = &DAT_10054d5c8;
  FUN_100002f94(&DAT_10054d5c8,&DAT_10041dfc8);
  iVar2 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar6.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = bVar3;
  return;
}

