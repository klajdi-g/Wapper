// rea decompile_all
// name: FUN_10012d680
// address: 0x10012d680
// body: available
// range: 0x10012d680-0x10012d7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012d78c to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012d680(void)

{
  bool bVar1;
  NSObject *self;
  ID self_00;
  NSObject *pNVar2;
  long unaff_x20;
  
  self = *(NSObject **)(unaff_x20 + 0x10);
  if (self == (NSObject *)0x0) {
    return 0;
  }
  if (DAT_100557eb0 != -1) {
    _swift_once(&DAT_100557eb0,FUN_10025a3bc);
  }
  self_00 = *(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow);
  if ((self_00 != 0) &&
     (pNVar2 = (NSObject *)objc_stub::attachedSheet(self_00), pNVar2 != (NSObject *)0x0)) {
    FUN_100128244(0);
    bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar2,self);
    if (bVar1) {
      objc_stub::endSheet_(self_00,self);
    }
  }
  objc_stub::orderOut_((ID)self,0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return 0;
}

