// rea decompile_all
// name: FUN_1000add88
// address: 0x1000add88
// body: available
// range: 0x1000add88-0x1000adfab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000add88(undefined8 *param_1,Alignment param_2,Alignment param_3)

{
  double *pdVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  RoundedCornerStyle RVar5;
  RoundedRectangle RVar6;
  undefined7 extraout_var;
  Alignment AVar7;
  undefined *puVar8;
  Color CVar9;
  Color CVar10;
  long extraout_x8;
  double *pdVar11;
  ulong uVar12;
  double local_80 [5];
  double dStack_58;
  
  RVar6 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_1005223a8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar6.unknown + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pdVar11 = (double *)((long)local_80 + lVar3);
  iVar2 = *(int *)(RVar6.unknown + 0x14);
  uVar12 = (ulong)*(uint *)
                   PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  AVar7.unknown = (undefined *)((long)pdVar11 + (long)iVar2);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar5.value) + -8) + 0x68))
            (AVar7.unknown,uVar12,CONCAT71(extraout_var,RVar5.value));
  *pdVar11 = (double)param_2.unknown * 0.025;
  *(double *)((long)local_80 + lVar3 + 8) = (double)param_2.unknown * 0.025;
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  *param_1 = AVar7.unknown;
  param_1[1] = uVar12;
  puVar8 = &DAT_100550588;
  FUN_100002f94(&DAT_100550588,&DAT_100421dd8);
  FUN_1000adfac((long)param_1 + (long)*(int *)(puVar8 + 0x2c),param_2.unknown,param_3.unknown,
                pdVar11);
  SwiftUI::Alignment::get_center(param_3);
  SwiftUI::_FrameLayout::_init(param_2);
  puVar8 = &DAT_100550590;
  FUN_100002f94(&DAT_100550590,&DAT_100421de0);
  pdVar1 = (double *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  pdVar1[1] = local_80[1];
  *pdVar1 = local_80[0];
  pdVar1[3] = local_80[3];
  pdVar1[2] = local_80[2];
  pdVar1[5] = dStack_58;
  pdVar1[4] = local_80[4];
  puVar8 = &DAT_100550598;
  FUN_100002f94(&DAT_100550598,&DAT_100421de8);
  iVar2 = *(int *)(puVar8 + 0x24);
  FUN_100029504(pdVar11,(long)param_1 + (long)iVar2,puVar4);
  CVar9.unknown = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)param_1 + (long)iVar2 + (long)*(int *)(CVar9.unknown + 0x24)) = 0x100;
  CVar9 = SwiftUI::Color::get_black(CVar9);
  CVar10 = SwiftUI::Color::opacity(0.4,CVar9);
  _swift_release(CVar9.unknown);
  puVar8 = &DAT_1005505a0;
  FUN_100002f94(&DAT_1005505a0,&DAT_100421df8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  *param_1 = CVar10.unknown;
  param_1[1] = (double)param_2.unknown * 0.1;
  param_1[2] = 0;
  param_1[3] = (double)param_2.unknown * 0.05;
  FUN_100029548(pdVar11,puVar4);
  return;
}

