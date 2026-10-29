// rea decompile_all
// name: FUN_100078dd0
// address: 0x100078dd0
// body: available
// range: 0x100078dd0-0x100079103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100078fc8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

_ConditionalContent<undefined,undefined> FUN_100078dd0(long *param_1,long *param_2)

{
  Interpolation IVar1;
  ResizingMode RVar2;
  OpacityTransition OVar3;
  undefined7 extraout_var;
  NSImage *pNVar6;
  Image IVar7;
  Image IVar8;
  AnyTransition AVar9;
  State SVar10;
  _ConditionalContent<undefined,undefined> _Var11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  EdgeInsets capInsets;
  undefined1 auStack_d0 [8];
  NSImage *local_c8;
  NSImage *local_c0;
  long *local_b8;
  undefined1 *local_b0;
  long local_a8;
  NSImage *local_a0;
  NSImage *local_98;
  undefined *local_90;
  undefined1 local_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined1 local_68;
  long lVar4;
  undefined *puVar5;
  
  OVar3 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_a8 = *(long *)(OVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  local_b0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  IVar1 = SwiftUI::Image::Interpolation::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)OVar3.unknown >> 8);
  lVar4 = CONCAT71(extraout_var,IVar1.value);
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar5 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar15 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  capInsets.unknown = (undefined *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pNVar6 = (NSImage *)*param_2;
  FUN_100091638(pNVar6,param_2[1]);
  local_c8 = pNVar6;
  if (pNVar6 == (NSImage *)0x0) {
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      lStack_78 = param_2[6];
      local_80 = param_2[5];
      SVar10.unknown = &DAT_10054eed8;
      FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
      SwiftUI::State::get_wrappedValue(SVar10);
      local_c8 = local_a0;
      if (local_a0 != (NSImage *)0x0) goto LAB_100078ed0;
    }
    local_a0 = (NSImage *)SwiftUI::Color::get_clear((Color)0x0);
    local_98 = (NSImage *)0x0;
    local_90 = (undefined *)0x0;
    local_88 = 1;
    FUN_100002f94(&DAT_10054ef18,&DAT_1004203c0);
    FUN_100093cd0();
    _Var11 = (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                       ((Storage)((char)&stack0xfffffffffffffff0 + 0x70));
  }
  else {
LAB_100078ed0:
    local_c0 = local_c8;
    IVar7 = SwiftUI::Image::init(local_c8);
    IVar8.unknown = puVar5;
    local_b8 = param_1;
    (**(code **)(lVar15 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar8 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar7.unknown,IVar8);
    _swift_release(IVar7.unknown);
    (**(code **)(lVar15 + 8))(capInsets.unknown,puVar5);
    (**(code **)(lVar13 + 0x68))
              (lVar14,*(undefined4 *)
                       PTR___enum_case_for_SwiftUI_Image_Interpolation_high_SwiftUI_Image_Interpolation_Type___>_SwiftUI_Image_Interpolation_100523300
               ,lVar4);
    IVar7 = SwiftUI::Image::interpolation((Interpolation)(__int8)lVar14,IVar8);
    _swift_release(IVar8.unknown);
    (**(code **)(lVar13 + 8))(lVar14,lVar4);
    SwiftUI::OpacityTransition::init();
    lVar4 = local_a8;
    (**(code **)(local_a8 + 0x10))(local_b0,lVar12,OVar3.unknown);
    puVar5 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    AVar9 = SwiftUI::AnyTransition::_init(puVar5,OVar3.unknown,puVar5);
    (**(code **)(lVar4 + 8))(lVar12,OVar3.unknown);
    local_98 = local_c8;
    local_88 = 0;
    local_a0 = (NSImage *)IVar7;
    local_90 = AVar9.unknown;
    FUN_100002f94(&DAT_10054ef18,&DAT_1004203c0);
    FUN_100093cd0();
    param_1 = local_b8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)((char)&stack0xfffffffffffffff0 + 0x70));
    _Var11.unknown = (undefined *)0x0;
  }
  param_1[1] = lStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  *(undefined1 *)(param_1 + 3) = local_68;
  return (_ConditionalContent<undefined,undefined>)_Var11.unknown;
}

