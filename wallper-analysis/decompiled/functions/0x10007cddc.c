// rea decompile_all
// name: FUN_10007cddc
// address: 0x10007cddc
// body: available
// range: 0x10007cddc-0x10007cfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007cddc(undefined8 *param_1,double param_2,double param_3,GeometryProxy param_4,
                  Alignment param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  Alignment AVar3;
  undefined *puVar4;
  UnitPoint UVar5;
  GeometryProxy GVar6;
  CGSize CVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar4 = param_5.unknown;
  SwiftUI::GeometryProxy::get_size(param_4);
  AVar3.unknown = (undefined *)0x0;
  FUN_100095ec0();
  dVar10 = *(double *)(param_5.unknown + *(int *)(AVar3.unknown + 0x14));
  param_2 = param_2 / (dVar10 * 160.0);
  param_3 = param_3 / (dVar10 * 92.0);
  dVar9 = param_3;
  if (param_2 <= param_3) {
    dVar9 = param_2;
  }
  dVar8 = (double)NEON_fminnm(param_3,0x3fee147ae147ae14);
  if (0.94 <= param_2) {
    dVar9 = dVar8;
  }
  AVar3 = SwiftUI::Alignment::get_topLeading(AVar3);
  *param_1 = AVar3.unknown;
  param_1[1] = puVar4;
  puVar4 = &DAT_10054f408;
  FUN_100002f94(&DAT_10054f408,&DAT_100420990);
  FUN_10007cfb0((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SwiftUI::Alignment::get_topLeading(param_5);
  SwiftUI::_FrameLayout::_init((undefined *)(dVar10 * 152.0));
  UVar5.unknown = &DAT_10054f410;
  FUN_100002f94(&DAT_10054f410,&DAT_100420998);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(UVar5.unknown + 0x24));
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = dStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  SwiftUI::UnitPoint::get_center(UVar5);
  GVar6.unknown = &DAT_10054f418;
  AVar3.unknown = local_90;
  FUN_100002f94(&DAT_10054f418,&DAT_1004209a0);
  pdVar2 = (double *)((long)param_1 + (long)*(int *)(GVar6.unknown + 0x24));
  *pdVar2 = dVar9;
  pdVar2[1] = dVar9;
  pdVar2[2] = (double)local_90;
  pdVar2[3] = dStack_a0;
  CVar7 = SwiftUI::GeometryProxy::get_size(GVar6);
  CVar7 = SwiftUI::GeometryProxy::get_size(CVar7.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar7.unknown);
  SwiftUI::_FrameLayout::_init(AVar3);
  puVar4 = &DAT_10054f420;
  FUN_100002f94(&DAT_10054f420,&DAT_1004209a8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  return;
}

