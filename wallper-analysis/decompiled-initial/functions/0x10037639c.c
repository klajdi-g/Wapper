// rea decompile_all
// name: FUN_10037639c
// address: 0x10037639c
// body: available
// range: 0x10037639c-0x100376547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037639c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Set SVar7;
  Set SVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  VVar5 = SwiftUI::VerticalAlignment::get_center(param_6.unknown);
  *param_1 = VVar5.unknown;
  param_1[1] = 0x4018000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar6 = &DAT_10055d8c0;
  FUN_100002f94(&DAT_10055d8c0,&DAT_100432f80);
  FUN_100376548((long)param_1 + (long)*(int *)(puVar6 + 0x2c));
  SVar7 = SwiftUI::Edge::Set::get_leading(param_6);
  uVar9 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  SVar8.unknown = &DAT_10055d7f0;
  uVar11 = param_3;
  uVar12 = param_4;
  uVar14 = param_5;
  FUN_100002f94(&DAT_10055d7f0,&DAT_100432ee8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar8.unknown + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar7 = SwiftUI::Edge::Set::get_trailing(SVar8);
  uVar10 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  SVar8.unknown = &DAT_10055d7e0;
  uVar9 = uVar11;
  uVar13 = uVar12;
  uVar15 = uVar14;
  FUN_100002f94(&DAT_10055d7e0,&DAT_100432ee0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar8.unknown + 0x24));
  *puVar1 = (char)SVar7.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = uVar11;
  *(undefined8 *)(puVar1 + 0x18) = uVar12;
  *(undefined8 *)(puVar1 + 0x20) = uVar14;
  puVar1[0x28] = 0;
  SVar8 = SwiftUI::Edge::Set::get_vertical(SVar8);
  uVar11 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  puVar6 = &DAT_10055d7d0;
  FUN_100002f94(&DAT_10055d7d0,&DAT_100432ed8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar13;
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  puVar1[0x28] = 0;
  puVar6 = &DAT_10055d7b8;
  FUN_100002f94(&DAT_10055d7b8,&DAT_100432ed0);
  iVar3 = *(int *)(puVar6 + 0x24);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar3,uVar2,CONCAT71(extraout_var,RVar4.value));
  puVar6 = &DAT_10054a650;
  FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
  *(undefined1 *)((long)param_1 + (long)iVar3 + (long)*(int *)(puVar6 + 0x24)) = 0;
  return;
}

