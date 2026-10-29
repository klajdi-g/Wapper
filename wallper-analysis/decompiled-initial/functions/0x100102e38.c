// rea decompile_all
// name: FUN_100102e38
// address: 0x100102e38
// body: available
// range: 0x100102e38-0x100102f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100102e38(ID *param_1)

{
  Alignment width;
  NSColor *pNVar1;
  Color CVar2;
  ID IVar3;
  undefined8 *unaff_x20;
  ID IVar4;
  undefined1 auStack_158 [72];
  ID local_110;
  undefined1 local_108;
  ID local_100;
  undefined1 local_f8;
  ID local_f0;
  ID IStack_e8;
  ID local_e0;
  ID IStack_d8;
  ID local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  ID local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ID local_b0;
  ID IStack_a8;
  undefined1 local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  undefined1 local_80;
  ID local_78;
  undefined1 local_70;
  ID local_68;
  ID IStack_60;
  undefined1 local_58;
  
  CVar2.unknown = (undefined *)*unaff_x20;
  width.unknown = (undefined *)unaff_x20[1];
  IVar4 = unaff_x20[2];
  pNVar1 = (NSColor *)0x0;
  FUN_10010377c();
  _swift_retain();
  pNVar1 = (extension_SwiftUI)::__C::NSColor::__allocating_init(pNVar1,CVar2);
  IVar3 = objc_stub::colorWithAlphaComponent_((ID)pNVar1,0x3fe999999999999a);
  SwiftUI::Alignment::get_center((Alignment)0x0);
  SwiftUI::_FrameLayout::_init(width);
  local_d0 = local_110;
  uStack_c8 = local_108;
  local_c0 = local_100;
  local_b8 = local_f8;
  local_b0 = local_f0;
  IStack_a8 = IStack_e8;
  local_a0 = 0;
  local_88 = local_110;
  local_80 = local_108;
  local_78 = local_100;
  local_70 = local_f8;
  local_68 = local_f0;
  IStack_60 = IStack_e8;
  local_58 = 0;
  local_e0 = IVar3;
  IStack_d8 = IVar4;
  local_98 = IVar3;
  local_90 = IVar4;
  FUN_1001037c0(&local_e0,auStack_158);
  FUN_100103810(&local_98);
  param_1[5] = CONCAT71(uStack_b7,local_b8);
  param_1[4] = local_c0;
  param_1[7] = IStack_a8;
  param_1[6] = local_b0;
  *(undefined1 *)(param_1 + 8) = local_a0;
  param_1[1] = IStack_d8;
  *param_1 = local_e0;
  param_1[3] = CONCAT71(uStack_c7,uStack_c8);
  param_1[2] = local_d0;
  return;
}

