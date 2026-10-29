// rea decompile_all
// name: FUN_1000869c0
// address: 0x1000869c0
// body: available
// range: 0x1000869c0-0x100086c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000869c0(undefined8 *param_1,Alignment param_2)

{
  Interpolation IVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  GeometryProxy GVar5;
  Image IVar6;
  Image IVar7;
  Alignment AVar8;
  _FrameLayout _Var9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  EdgeInsets capInsets;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined auStack_1b0 [8];
  NSImage *local_1a8;
  undefined1 auStack_1a0 [80];
  undefined *local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *local_118;
  double local_110;
  undefined1 local_108;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  double local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long lVar3;
  undefined *puVar4;
  
  IVar1 = SwiftUI::Image::Interpolation::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,IVar1.value);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  AVar8.unknown = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var_00,RVar2.value);
  lVar10 = *(long *)(puVar4 + -8);
  GVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  capInsets.unknown = AVar8.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SwiftUI::GeometryProxy::get_size(GVar5);
  if (DAT_10054ef88 != -1) {
    _swift_once(&DAT_10054ef88,FUN_100078738);
  }
  if (DAT_100577be8 == (NSImage *)0x0) {
    local_110 = 0.0;
    local_108 = 0;
    local_150 = (undefined *)0x0;
    uStack_148 = 0;
    uVar12 = 0;
    local_138 = 0;
    uVar13 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    local_118 = (undefined *)0x0;
  }
  else {
    local_1a8 = DAT_100577be8;
    IVar6 = SwiftUI::Image::init(DAT_100577be8);
    IVar7.unknown = puVar4;
    (**(code **)(lVar10 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar7 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar6.unknown,IVar7);
    _swift_release(IVar6.unknown);
    (**(code **)(lVar10 + 8))(capInsets.unknown,puVar4);
    (**(code **)(lVar11 + 0x68))
              (AVar8.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_Interpolation_high_SwiftUI_Image_Interpolation_Type___>_SwiftUI_Image_Interpolation_100523300
               ,lVar3);
    IVar6 = SwiftUI::Image::interpolation((Interpolation)(__int8)AVar8.unknown,IVar7);
    _swift_release(IVar7.unknown);
    (**(code **)(lVar11 + 8))(AVar8.unknown,lVar3);
    SwiftUI::Alignment::get_center(AVar8);
    _Var9 = SwiftUI::_FrameLayout::_init(param_2);
    local_118 = (undefined *)SwiftUI::Color::get_black(_Var9.unknown);
    local_110 = (double)param_2.unknown * 0.012;
    uStack_148 = local_a8;
    local_140 = local_a0;
    local_138 = local_98;
    local_130 = local_90;
    uStack_128 = local_88;
    uStack_120 = uStack_80;
    local_108 = 0;
    uStack_f0 = local_a8;
    local_e8 = local_a0;
    local_e0 = local_98;
    local_d8 = local_90;
    local_d0 = local_88;
    uStack_c8 = uStack_80;
    local_b0 = 0;
    local_150 = IVar6.unknown;
    local_f8 = IVar6.unknown;
    local_c0 = local_118;
    local_b8 = local_110;
    FUN_1000087e4(&local_150,auStack_1a0,&DAT_10054ef90,&DAT_1004204d0);
    FUN_10002a29c(&local_f8,&DAT_10054ef90,&DAT_1004204d0);
    uVar12 = CONCAT71(uStack_13f,local_140);
    uVar13 = CONCAT71(uStack_12f,local_130);
  }
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[3] = local_138;
  param_1[2] = uVar12;
  param_1[5] = uStack_128;
  param_1[4] = uVar13;
  param_1[7] = local_118;
  param_1[6] = uStack_120;
  param_1[8] = local_110;
  *(undefined1 *)(param_1 + 9) = local_108;
  return;
}

