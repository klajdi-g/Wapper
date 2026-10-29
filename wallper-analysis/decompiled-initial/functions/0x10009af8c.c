// rea decompile_all
// name: FUN_10009af8c
// address: 0x10009af8c
// body: available
// range: 0x10009af8c-0x10009b2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010009b1c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

_ConditionalContent<undefined,undefined>
FUN_10009af8c(undefined8 *param_1,NSImage *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  Interpolation IVar3;
  ResizingMode RVar4;
  OpacityTransition OVar5;
  undefined7 extraout_var;
  long lVar8;
  Color CVar9;
  Image IVar10;
  Image IVar11;
  AnyTransition AVar12;
  _ConditionalContent<undefined,undefined> _Var13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  EdgeInsets capInsets;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  NSImage *local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  NSImage *local_a0;
  NSImage *local_98;
  undefined *local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  long lVar6;
  undefined *puVar7;
  
  local_a8 = param_1;
  OVar5 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_b8 = *(long *)(OVar5.unknown + -8);
  local_b0 = OVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  local_c0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  IVar3 = SwiftUI::Image::Interpolation::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)OVar5.unknown >> 8);
  lVar6 = CONCAT71(extraout_var,IVar3.value);
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  RVar4 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar7 = (undefined *)CONCAT71(extraout_var,RVar4.value);
  lVar14 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  capInsets.unknown = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (param_2 == (NSImage *)0x0) {
    lVar8 = 0;
    FUN_10009a6f8();
    puVar1 = (undefined8 *)(param_3 + *(int *)(lVar8 + 0x20));
    uStack_78 = puVar1[1];
    local_80 = *puVar1;
    CVar9.unknown = &DAT_10054eed8;
    FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
    SwiftUI::State::get_wrappedValue((State)CVar9.unknown);
    param_2 = local_a0;
    if (local_a0 == (NSImage *)0x0) {
      local_a0 = (NSImage *)SwiftUI::Color::get_clear(CVar9);
      local_98 = (NSImage *)0x0;
      local_90 = (undefined *)0x0;
      local_88 = 1;
      FUN_100002f94(&DAT_10054ef18,&DAT_1004203c0);
      FUN_100093cd0();
      _Var13 = (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                         ((Storage)((char)&stack0xfffffffffffffff0 + 0x70));
      goto LAB_10009b230;
    }
  }
  local_c8 = param_2;
  IVar10 = SwiftUI::Image::init(param_2);
  IVar11.unknown = puVar7;
  (**(code **)(lVar14 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
            );
  IVar11 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar10.unknown,IVar11);
  _swift_release(IVar10.unknown);
  (**(code **)(lVar14 + 8))(capInsets.unknown,puVar7);
  (**(code **)(lVar16 + 0x68))
            (lVar17,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_Image_Interpolation_high_SwiftUI_Image_Interpolation_Type___>_SwiftUI_Image_Interpolation_100523300
             ,lVar6);
  IVar10 = SwiftUI::Image::interpolation((Interpolation)(__int8)lVar17,IVar11);
  _swift_release(IVar11.unknown);
  (**(code **)(lVar16 + 8))(lVar17,lVar6);
  SwiftUI::OpacityTransition::init();
  puVar2 = local_b0;
  lVar6 = local_b8;
  (**(code **)(local_b8 + 0x10))(local_c0,lVar15,local_b0);
  puVar7 = &DAT_10054ae80;
  FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
  AVar12 = SwiftUI::AnyTransition::_init(puVar7,puVar2,puVar7);
  (**(code **)(lVar6 + 8))(lVar15,puVar2);
  local_88 = 0;
  local_a0 = (NSImage *)IVar10;
  local_98 = param_2;
  local_90 = AVar12.unknown;
  FUN_100002f94(&DAT_10054ef18,&DAT_1004203c0);
  FUN_100093cd0();
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x70));
  _Var13.unknown = (undefined *)0x0;
LAB_10009b230:
  local_a8[1] = uStack_78;
  *local_a8 = local_80;
  local_a8[2] = local_70;
  *(undefined1 *)(local_a8 + 3) = local_68;
  return (_ConditionalContent<undefined,undefined>)_Var13.unknown;
}

