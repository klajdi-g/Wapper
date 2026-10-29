// rea decompile_all
// name: FUN_100114420
// address: 0x100114420
// body: available
// range: 0x100114420-0x10011461f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

_ConditionalContent<undefined,undefined> FUN_100114420(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  long lVar4;
  State SVar5;
  Image IVar6;
  Image IVar7;
  _ConditionalContent<undefined,undefined> _Var8;
  long extraout_x8;
  EdgeInsets capInsets;
  long lVar9;
  undefined1 auStack_a0 [8];
  NSImage *local_98;
  undefined8 uStack_90;
  ushort local_88;
  undefined1 local_86;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined *puVar3;
  
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  capInsets.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100113f00();
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x24));
  uStack_78 = puVar1[1];
  local_80 = *puVar1;
  SVar5.unknown = &DAT_10054eed8;
  FUN_100002f94(&DAT_10054eed8,&DAT_1004249f0);
  SwiftUI::State::get_wrappedValue(SVar5);
  if (local_98 == (NSImage *)0x0) {
    local_98 = *(NSImage **)(param_2 + *(int *)(lVar4 + 0x20));
    uStack_90 = 0;
    local_88 = 0;
    local_86 = 1;
    _swift_retain();
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    _Var8 = (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                      ((Storage)((char)&stack0xfffffffffffffff0 + 0x78));
  }
  else {
    IVar6 = SwiftUI::Image::init(local_98);
    IVar7.unknown = puVar3;
    (**(code **)(lVar9 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_1005232f0
              );
    IVar7 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar6.unknown,IVar7);
    _swift_release(IVar6.unknown);
    (**(code **)(lVar9 + 8))(capInsets.unknown,puVar3);
    local_88 = (ushort)*(byte *)(param_2 + *(int *)(lVar4 + 0x18)) << 8 | 1;
    uStack_90 = 0;
    local_86 = 0;
    local_98 = (NSImage *)IVar7;
    FUN_100002f94(&DAT_100550170,&DAT_10042e8e0);
    FUN_1000b2e98();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
              ((Storage)((char)&stack0xfffffffffffffff0 + 0x78));
    _Var8.unknown = (undefined *)0x0;
  }
  param_1[1] = uStack_78;
  *param_1 = local_80;
  *(undefined2 *)(param_1 + 2) = local_70;
  *(undefined1 *)((long)param_1 + 0x12) = local_6e;
  return (_ConditionalContent<undefined,undefined>)_Var8.unknown;
}

