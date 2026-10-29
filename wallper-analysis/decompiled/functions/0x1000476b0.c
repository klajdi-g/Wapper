// rea decompile_all
// name: FUN_1000476b0
// address: 0x1000476b0
// body: available
// range: 0x1000476b0-0x1000477ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_1000476b0(void)

{
  ID IVar1;
  ID self;
  ID IVar2;
  NSViewRepresentableContext NVar3;
  undefined8 uVar4;
  undefined8 local_48;
  
  IVar1 = 0;
  FUN_100045498();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  objc_stub::setWantsLayer_(IVar1,1);
  objc_stub::setLayerContentsRedrawPolicy_(IVar1,0);
  self = objc_stub::layer(IVar1);
  if (self != 0) {
    objc_stub::setContentsGravity_(self,*(undefined8 *)PTR__kCAGravityResize_100521a80);
    uVar4 = *(undefined8 *)PTR__kCAFilterLinear_100521a78;
    objc_stub::setMagnificationFilter_(self,uVar4);
    objc_stub::setMinificationFilter_(self,uVar4);
    objc_stub::setOpaque_(self,1);
    IVar2 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
    IVar2 = NSColor::CGColor(IVar2);
    objc_stub::setBackgroundColor_(self,IVar2);
  }
  NVar3.unknown = &DAT_10054d3f8;
  FUN_100002f94(&DAT_10054d3f8,&DAT_10041dc88);
  SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar3);
  FUN_100045258(IVar1);
  _swift_release(local_48);
  return IVar1;
}

