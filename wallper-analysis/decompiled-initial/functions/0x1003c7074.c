// rea decompile_all
// name: FUN_1003c7074
// address: 0x1003c7074
// body: available
// range: 0x1003c7074-0x1003c72bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c7074(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  VerticalAlignment VVar7;
  undefined *puVar8;
  Set _all;
  Set SVar9;
  undefined7 extraout_var;
  Color CVar10;
  Color CVar11;
  State SVar12;
  Alignment AVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char local_71;
  
  VVar7 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar7.unknown;
  param_1[1] = 0x4018000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar8 = &DAT_100560c00;
  FUN_100002f94(&DAT_100560c00,&DAT_100436890);
  VVar7.unknown = param_6.unknown;
  FUN_1003c72c0((long)param_1 + (long)*(int *)(puVar8 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(VVar7.unknown);
  uVar15 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar9.unknown = &DAT_100560bd8;
  uVar17 = param_3;
  uVar18 = param_4;
  uVar19 = param_5;
  FUN_100002f94(&DAT_100560bd8,&DAT_100436870);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar9.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar9 = SwiftUI::Edge::Set::get_vertical(SVar9);
  uVar15 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  puVar8 = &DAT_100560bc8;
  FUN_100002f94(&DAT_100560bc8,&DAT_100436868);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  *puVar1 = (char)SVar9.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = uVar17;
  *(undefined8 *)(puVar1 + 0x18) = uVar18;
  *(undefined8 *)(puVar1 + 0x20) = uVar19;
  puVar1[0x28] = 0;
  puVar8 = &DAT_100560bb0;
  FUN_100002f94(&DAT_100560bb0,&DAT_100436860);
  lVar2 = (long)param_1 + (long)*(int *)(puVar8 + 0x24);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x68))
            (lVar2,uVar3,CONCAT71(extraout_var,RVar6.value));
  CVar10.unknown = (undefined *)0x0;
  FUN_1003e5970();
  bVar4 = param_6.unknown[*(int *)(CVar10.unknown + 0x18)];
  CVar11 = SwiftUI::Color::get_white(CVar10);
  CVar10 = CVar11;
  if ((bVar4 & 1) == 0) {
    SVar12.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar12);
    dVar16 = 0.15;
    if (local_71 == '\0') {
      dVar16 = 0.08;
    }
    CVar10 = SwiftUI::Color::opacity(dVar16,CVar11);
    _swift_release(CVar11.unknown);
  }
  AVar13.unknown = &DAT_10054b118;
  puVar8 = &DAT_10041f7b0;
  FUN_100002f94();
  *(undefined **)(lVar2 + *(int *)(AVar13.unknown + 0x34)) = CVar10.unknown;
  *(undefined2 *)(lVar2 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar14 = &DAT_10054e1b0;
  FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
  iVar5 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(lVar2 + iVar5) = AVar13.unknown;
  ((undefined8 *)(lVar2 + iVar5))[1] = puVar8;
  return;
}

