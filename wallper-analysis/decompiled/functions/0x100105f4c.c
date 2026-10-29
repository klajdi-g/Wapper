// rea decompile_all
// name: FUN_100105f4c
// address: 0x100105f4c
// body: available
// range: 0x100105f4c-0x100105ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100105f4c(undefined8 *param_1)

{
  NSColor *this;
  Alignment AVar1;
  undefined8 *unaff_x20;
  Color CVar2;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  CVar2.unknown = (undefined *)*unaff_x20;
  this = (NSColor *)0x0;
  FUN_100044230(0,&DAT_100552aa8,&PTR__OBJC_CLASS___NSColor_10053f9d0);
  _swift_retain();
  AVar1.unknown = (extension_SwiftUI)::__C::NSColor::__allocating_init(this,CVar2);
  SwiftUI::Alignment::get_center(AVar1);
  SwiftUI::_FrameLayout::_init((Alignment)0x4028000000000000);
  *param_1 = AVar1.unknown;
  param_1[1] = local_60;
  *(undefined1 *)(param_1 + 2) = local_58;
  param_1[3] = local_50;
  *(undefined1 *)(param_1 + 4) = local_48;
  param_1[6] = uStack_38;
  param_1[5] = local_40;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

