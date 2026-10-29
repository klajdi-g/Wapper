// rea decompile_all
// name: FUN_1003f3b14
// address: 0x1003f3b14
// body: available
// range: 0x1003f3b14-0x1003f3dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f3bbc to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003f3b14(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  NSHostingView *pNVar5;
  undefined1 *self;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar3 = &DAT_1005610a0;
  FUN_100002f94(&DAT_1005610a0,&DAT_100436df0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper13WindowManager::mainWindow;
  self = &stack0xffffffffffffffa0 + -extraout_x8;
  IVar2 = *(ID *)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow);
  if (IVar2 != 0) {
    FUN_10025a508();
    objc_stub::makeKeyAndOrderFront_(IVar2,0);
    return 0;
  }
  puVar3 = &_OBJC_CLASS___NSWindow;
  _objc_allocWithZone();
  IVar2 = objc_stub::initWithContentRect_styleMask_backing_defer_
                    ((ID)puVar3,0,0,0x4094500000000000,0x4088000000000000,0x800f,2,0);
  objc_stub::setReleasedWhenClosed_(IVar2,0);
  objc_stub::setOpaque_(IVar2,0);
  uVar6 = *(undefined8 *)PTR__NSAppearanceNameDarkAqua_1005212d8;
  IVar4 = NSAppearance::appearanceNamed_((ID)&_OBJC_CLASS___NSAppearance,uVar6);
  objc_stub::setAppearance_(IVar2,IVar4);
  objc_stub::setTitlebarAppearsTransparent_(IVar2,1);
  IVar4 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setBackgroundColor_(IVar2,IVar4);
  objc_stub::setContentMinSize_(IVar2,0x4094500000000000,0x4088000000000000);
  FUN_1000087e4(param_1,self,&DAT_1005610a0,&DAT_100436df0);
  pNVar5 = (NSHostingView *)&DAT_1005610a8;
  FUN_100002f94(&DAT_1005610a8,&DAT_100436e28);
  _objc_allocWithZone();
  SwiftUI::NSHostingView::_init(pNVar5);
  IVar4 = NSAppearance::appearanceNamed_((ID)&_OBJC_CLASS___NSAppearance,uVar6);
  objc_stub::setAppearance_((ID)self,IVar4);
  objc_stub::setContentView_(IVar2,self);
  objc_stub::center(IVar2);
  objc_stub::setDelegate_(IVar2);
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  FUN_10025ac44(IVar2);
  FUN_10025a508();
  objc_stub::makeKeyAndOrderFront_(IVar2,0);
  return 0;
}

