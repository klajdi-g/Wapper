// rea decompile_all
// name: FUN_1000426f4
// address: 0x1000426f4
// body: available
// range: 0x1000426f4-0x100042903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000426f4(long param_1)

{
  Alignment width;
  Locations LVar1;
  Colors CVar2;
  ColorSpace CVar3;
  ColorSpace CVar4;
  Color CVar5;
  Color background;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  ColorSpace colorSpace;
  Alignment AVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  double dVar11;
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  
  CVar3 = SwiftUI::Gradient::ColorSpace::typeMetadataAccessor();
  lVar10 = *(long *)(CVar3.unknown + -8);
  CVar4 = CVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  colorSpace.unknown = (undefined *)((long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  AVar7.unknown = colorSpace.unknown + -extraout_x12;
  dVar11 = *(double *)(unaff_x20 + 0x30);
  FUN_100042904((float)dVar11);
  CVar5.unknown = CVar4.unknown;
  FUN_100042b4c(dVar11);
  background = SwiftUI::Color::get_clear(CVar5);
  SwiftUI::Gradient::ColorSpace::get_device((ColorSpace)background.unknown);
  LVar1 = SwiftUI::MeshGradient::Locations::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,LVar1.value) + -8) + 0x40));
  puVar9 = (undefined8 *)(AVar7.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  *puVar9 = CVar4.unknown;
  (**(code **)(extraout_x12_00 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_MeshGradient_Locations_points_SwiftUI_MeshGradient_Locations_Type___>___Swift_SIMD2<Swift_Float>____>_SwiftUI_MeshGradient_Locations_100521d98
            );
  CVar2 = SwiftUI::MeshGradient::Colors::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var_00,CVar2.value) + -8) + 0x40));
  puVar8 = (undefined8 *)((long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  *puVar8 = CVar5.unknown;
  (**(code **)(extraout_x12_01 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_MeshGradient_Colors_colors_SwiftUI_MeshGradient_Colors_Type___>___SwiftUI_Color____>_SwiftUI_MeshGradient_Colors_100521d88
            );
  (**(code **)(lVar10 + 0x10))(colorSpace.unknown,AVar7.unknown,CVar3.unknown);
  SwiftUI::MeshGradient::init
            (4,4,(Locations)(__int8)puVar9,(Colors)(__int8)puVar8,background,true,colorSpace);
  (**(code **)(lVar10 + 8))(AVar7.unknown,CVar3.unknown);
  width.unknown = *(undefined **)(unaff_x20 + 0x38);
  SwiftUI::Alignment::get_center(AVar7);
  SwiftUI::_FrameLayout::_init(width);
  puVar6 = &DAT_10054d060;
  FUN_100002f94(&DAT_10054d060,&DAT_10041d908);
  puVar8 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x24));
  puVar8[1] = local_a0[1];
  *puVar8 = local_a0[0];
  puVar8[3] = local_a0[3];
  puVar8[2] = local_a0[2];
  puVar8[5] = uStack_78;
  puVar8[4] = local_80;
  return;
}

