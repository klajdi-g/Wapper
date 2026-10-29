// rea decompile_all
// name: FUN_100086760
// address: 0x100086760
// body: available
// range: 0x100086760-0x1000869af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100086760(double *param_1,double param_2,GeometryProxy param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  RoundedRectangle RVar5;
  undefined7 extraout_var;
  Color CVar6;
  Color CVar7;
  undefined *puVar8;
  GeometryProxy GVar9;
  CGSize CVar10;
  double dVar11;
  Alignment AVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  SwiftUI::GeometryProxy::get_size(param_3);
  param_2 = param_2 / 1400.0;
  RVar5 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar5.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar6.unknown = (undefined *)((long)param_1 + (long)iVar3);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x68))
            (CVar6.unknown,uVar2,CONCAT71(extraout_var,RVar4.value));
  *param_1 = param_2 * 62.0;
  param_1[1] = param_2 * 62.0;
  CVar6 = SwiftUI::Color::get_black(CVar6);
  CVar7 = SwiftUI::Color::opacity(0.62,CVar6);
  _swift_release(CVar6.unknown);
  AVar12.unknown = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  *(undefined **)((long)param_1 + (long)*(int *)(AVar12.unknown + 0x34)) = CVar7.unknown;
  *(undefined2 *)((long)param_1 + (long)*(int *)(AVar12.unknown + 0x38)) = 0x100;
  dVar11 = 22.0;
  _CGRectGetWidth(0x4036000000000000,0x405c000000000000,0x4092e80000000000,0x4090180000000000);
  _CGRectGetHeight(0x4036000000000000,0x405c000000000000,0x4092e80000000000,0x4090180000000000);
  SwiftUI::Alignment::get_center(AVar12);
  SwiftUI::_FrameLayout::_init((undefined *)(param_2 * dVar11));
  puVar8 = &DAT_10054e988;
  FUN_100002f94(&DAT_10054e988,&DAT_1004204e0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  puVar8 = &DAT_10054ef98;
  FUN_100002f94(&DAT_10054ef98,&DAT_1004204e8);
  iVar3 = *(int *)(puVar8 + 0x24);
  *(double *)((long)param_1 + (long)iVar3) = param_2 * 26.0;
  *(undefined1 *)((double *)((long)param_1 + (long)iVar3) + 1) = 0;
  AVar12.unknown = (undefined *)0x4032000000000000;
  GVar9.unknown = &DAT_10054efa0;
  FUN_100002f94(&DAT_10054efa0,&DAT_1004204f0);
  iVar3 = *(int *)(GVar9.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = 0;
  ((undefined8 *)((long)param_1 + (long)iVar3))[1] = param_2 * 18.0;
  CVar10 = SwiftUI::GeometryProxy::get_size(GVar9);
  CVar10 = SwiftUI::GeometryProxy::get_size(CVar10.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  SwiftUI::_FrameLayout::_init(AVar12);
  puVar8 = &DAT_10054efa8;
  FUN_100002f94(&DAT_10054efa8,&DAT_1004204f8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = local_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = local_60;
  return;
}

