// rea decompile_all
// name: FUN_100105ffc
// address: 0x100105ffc
// body: available
// range: 0x100105ffc-0x1001060b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001060b4 to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100105ffc(long param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  double extraout_d0;
  
  IVar2 = *(ID *)(param_1 + _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::ring);
  objc_stub::alphaComponent(param_3);
  IVar1 = objc_stub::colorWithAlphaComponent_(param_3,extraout_d0 * 0.25);
  IVar1 = objc_stub::CGColor(IVar1);
  objc_stub::setFillColor_(IVar2,IVar1);
  IVar2 = *(ID *)(param_1 + _TtC7WallperP33_A6C7C08A4FF86A0F4CBA7032D63FE6EB14PulsingDotView::dot);
  IVar1 = objc_stub::CGColor(param_3);
  objc_stub::setFillColor_(IVar2,IVar1);
  return 0;
}

