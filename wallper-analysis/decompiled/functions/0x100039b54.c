// rea decompile_all
// name: FUN_100039b54
// address: 0x100039b54
// body: available
// range: 0x100039b54-0x10003a153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100039e80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100039b54(undefined8 *param_1)

{
  byte bVar1;
  Locations LVar2;
  Colors CVar3;
  RGBColorSpace RVar4;
  undefined8 uVar5;
  ColorSpace CVar6;
  undefined7 extraout_var;
  undefined *puVar7;
  Color CVar8;
  UnitPoint UVar9;
  Gradient gradient;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  UnitPoint startPoint;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  ColorSpace CVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long alStack_160 [2];
  Color local_150;
  long local_148;
  undefined8 local_140;
  ulong local_138;
  long local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined8 *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  UnitPoint endPoint;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  local_118 = param_1;
  if ((bVar1 & 1) == 0) {
    puVar7 = &DAT_10054af98;
    FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    lVar14 = *(long *)(unaff_x20 + 0x20);
    uVar10 = *(ulong *)(lVar14 + 0x10);
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10003a14c);
      (*pcVar16)();
    }
    dVar20 = *(double *)(lVar14 + 0x20);
    dVar21 = *(double *)(lVar14 + 0x28);
    dVar22 = *(double *)(lVar14 + 0x30);
    RVar4 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
    endPoint.unknown = (undefined *)CONCAT71((int7)((ulong)puVar7 >> 8),RVar4.value);
    lVar12 = *(long *)(*(long *)(endPoint.unknown + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar11 = lVar12 + 0xfU & 0xfffffffffffffff0;
    lVar17 = (long)alStack_160 - uVar11;
    startPoint.unknown =
         (undefined *)
         (ulong)*(uint *)
                 PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231e0
    ;
    pcVar16 = *(code **)(extraout_x8_01 + 0x68);
    (*pcVar16)(lVar17,startPoint.unknown,endPoint.unknown);
    CVar8 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar17,dVar20,dVar21,dVar22,1.0);
    *(undefined **)(puVar7 + 0x20) = CVar8.unknown;
    if (uVar10 < 6) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10003a150);
      (*pcVar16)();
    }
    dVar20 = *(double *)(lVar14 + 0x98);
    dVar21 = *(double *)(lVar14 + 0xa0);
    dVar22 = *(double *)(lVar14 + 0xa8);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar17 = (long)alStack_160 - uVar11;
    (*pcVar16)(lVar17,startPoint.unknown,endPoint.unknown);
    CVar8 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar17,dVar20,dVar21,dVar22,1.0);
    *(undefined **)(puVar7 + 0x28) = CVar8.unknown;
    if (uVar10 < 0x10) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10003a154);
      (*pcVar16)();
    }
    dVar20 = *(double *)(lVar14 + 0x188);
    dVar21 = *(double *)(lVar14 + 400);
    dVar22 = *(double *)(lVar14 + 0x198);
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar14 = (long)alStack_160 - (lVar12 + 0xfU & 0xfffffffffffffff0);
    (*pcVar16)(lVar14);
    CVar8 = SwiftUI::Color::init((RGBColorSpace)(__int8)lVar14,dVar20,dVar21,dVar22,1.0);
    *(undefined **)(puVar7 + 0x30) = CVar8.unknown;
    UVar9 = SwiftUI::UnitPoint::get_topLeading(CVar8.unknown);
    SwiftUI::UnitPoint::get_bottomTrailing(UVar9);
    gradient = SwiftUI::Gradient::init();
    SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
    local_110 = (undefined *)local_b0;
    uStack_100 = uStack_a0;
    local_108 = local_a8;
    uStack_f0 = uStack_90;
    local_f8 = local_98;
    local_e8 = 1;
    FUN_10002ac94();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)(__int8)&stack0xfffffffffffffff0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_100043114();
    local_128 = (undefined *)SwiftUI::MeshGradient::typeMetadataAccessor();
    local_130 = *(long *)(local_128 + -8);
    local_140 = *(undefined8 *)(local_130 + 0x40);
    local_120 = (undefined1 *)alStack_160;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_138 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar12 = (long)alStack_160 - local_138;
    CVar8.unknown = &DAT_10054be50;
    FUN_100002f94(&DAT_10054be50,&DAT_10041d910);
    _swift_allocObject();
    *(undefined8 *)(CVar8.unknown + 0x18) = 0x12;
    *(undefined8 *)(CVar8.unknown + 0x10) = 9;
    *(undefined8 *)(CVar8.unknown + 0x20) = 0;
    *(undefined8 *)(CVar8.unknown + 0x28) = 0x3f000000;
    *(undefined8 *)(CVar8.unknown + 0x30) = 0x3f800000;
    *(undefined8 *)(CVar8.unknown + 0x38) = 0x3f00000000000000;
    *(undefined8 *)(CVar8.unknown + 0x40) = 0x3f0000003f000000;
    *(undefined8 *)(CVar8.unknown + 0x48) = 0x3f0000003f800000;
    *(undefined8 *)(CVar8.unknown + 0x50) = 0x3f80000000000000;
    uVar19 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(CVar8.unknown + 0x58) = 0x3f8000003f000000;
    *(undefined8 *)(CVar8.unknown + 0x60) = uVar19;
    local_150 = SwiftUI::Color::get_clear(CVar8);
    CVar6 = SwiftUI::Gradient::ColorSpace::typeMetadataAccessor();
    lVar14 = *(long *)(CVar6.unknown + -8);
    lVar17 = *(long *)(lVar14 + 0x40);
    CVar18 = CVar6;
    local_148 = lVar12;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar10 = lVar17 + 0xfU & 0xfffffffffffffff0;
    lVar17 = lVar12 - uVar10;
    SwiftUI::Gradient::ColorSpace::get_device(CVar18);
    LVar2 = SwiftUI::MeshGradient::Locations::typeMetadataAccessor();
    extraout_var = (undefined7)((ulong)CVar18.unknown >> 8);
    alStack_160[1] = lVar17;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,LVar2.value) + -8) + 0x40));
    puVar13 = (undefined8 *)(lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    *puVar13 = CVar8.unknown;
    (**(code **)(extraout_x12_00 + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___enum_case_for_SwiftUI_MeshGradient_Locations_points_SwiftUI_MeshGradient_Locations_Type___>___Swift_SIMD2<Swift_Float>____>_SwiftUI_MeshGradient_Locations_100521d98
              );
    CVar3 = SwiftUI::MeshGradient::Colors::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,CVar3.value) + -8) + 0x40));
    puVar15 = (undefined8 *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    *puVar15 = uVar5;
    (**(code **)(extraout_x12_01 + 0x68))
              (puVar15,*(undefined4 *)
                        PTR___enum_case_for_SwiftUI_MeshGradient_Colors_colors_SwiftUI_MeshGradient_Colors_Type___>___SwiftUI_Color____>_SwiftUI_MeshGradient_Colors_100521d88
              );
    (*(code *)PTR____chkstk_darwin_100521118)();
    CVar18.unknown = (undefined *)((long)puVar15 - uVar10);
    (**(code **)(lVar14 + 0x10))(CVar18.unknown,lVar17,CVar6.unknown);
    SwiftUI::MeshGradient::init
              (3,3,(Locations)(__int8)puVar13,(Colors)(__int8)puVar15,local_150,true,CVar18);
    (**(code **)(lVar14 + 8))(lVar17,CVar6.unknown);
    lVar14 = local_148;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar7 = local_128;
    lVar17 = local_130;
    lVar14 = lVar14 - local_138;
    (**(code **)(local_130 + 0x10))(lVar14,lVar12,local_128);
    FUN_10003a190();
    local_110 = (undefined *)SwiftUI::AnyView::_init(lVar14,puVar7,lVar14);
    FUN_10002ac94();
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    local_e8 = 0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)(__int8)&stack0xfffffffffffffff0);
    (**(code **)(lVar17 + 8))(lVar12,puVar7);
  }
  local_118[1] = uStack_d8;
  *local_118 = local_e0;
  local_118[3] = uStack_c8;
  local_118[2] = uStack_d0;
  local_118[4] = local_c0;
  *(undefined1 *)(local_118 + 5) = local_b8;
  return;
}

