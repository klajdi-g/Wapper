// rea decompile_all
// name: FUN_1003efe88
// address: 0x1003efe88
// body: available
// range: 0x1003efe88-0x1003f00f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003efe88(ID param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ID self;
  ID IVar7;
  long lVar8;
  ID IVar9;
  NSViewRepresentableContext NVar10;
  long unaff_x20;
  long local_68;
  
  FUN_1003f2f6c();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = objc_stub::init(param_1);
  objc_stub::setWantsLayer_(self,1);
  IVar7 = objc_stub::layer(self);
  if (IVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f00f0);
    (*pcVar6)();
  }
  _swift_dynamicCastObjCClassUnconditional(IVar7,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
  lVar8 = 0;
  FUN_1003f353c();
  objc_stub::setVideoGravity_(IVar7,*(undefined8 *)(unaff_x20 + *(int *)(lVar8 + 0x20)));
  IVar7 = objc_stub::layer(self);
  if (IVar7 != 0) {
    _swift_dynamicCastObjCClassUnconditional(IVar7,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
    IVar9 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    IVar9 = NSColor::CGColor(IVar9);
    objc_stub::setBackgroundColor_(IVar7,IVar9);
    IVar7 = objc_stub::layer(self);
    if (IVar7 != 0) {
      _swift_dynamicCastObjCClassUnconditional(IVar7,&_OBJC_CLASS___AVPlayerLayer,0,0,0);
      objc_stub::setNeedsDisplayOnBoundsChange_(IVar7,1);
      NVar10.unknown = &DAT_100560e90;
      FUN_100002f94(&DAT_100560e90,&DAT_100436b70);
      SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar10);
      puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar8 + 0x28));
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(local_68 + _TtCV7Wallper13VideoLoopView11Coordinator::onFirstFrame);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      FUN_1000939f8();
      FUN_10002f6dc(uVar3,uVar5);
      SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar10);
      FUN_1003f00f8(self);
      SwiftUI::NSViewRepresentableContext::_get_coordinator(NVar10);
      FUN_1003f01e0();
      return self;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f00f8);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f00f4);
  (*pcVar6)();
}

