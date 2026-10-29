// rea decompile_all
// name: FUN_1003f19d4
// address: 0x1003f19d4
// body: available
// range: 0x1003f19d4-0x1003f1a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f1a70 to 0x100416cc0 objc_stub::play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f19d4(undefined8 param_1,uint param_2)

{
  ID IVar1;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::player);
  if ((param_2 & 1) == 0) {
    objc_stub::insertItem_afterItem_(self,param_1,0);
  }
  else {
    IVar1 = AVPlayerLooper::playerLooperWithPlayer_templateItem_
                      ((ID)&_OBJC_CLASS___AVPlayerLooper,self,param_1);
    *(ID *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::looper) = IVar1;
  }
  FUN_1003f1a84(param_1);
  if (*(char *)(unaff_x20 + _TtCV7Wallper13VideoLoopView11Coordinator::autoplay) == '\x01') {
    objc_stub::play(self);
    return;
  }
  return;
}

