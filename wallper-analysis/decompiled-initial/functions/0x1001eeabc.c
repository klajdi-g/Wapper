// rea decompile_all
// name: _TtC7WallperP33_8A1C610580B7CD8A17F7CF76228A646719HighlightBorderView::initWithCoder:
// address: 0x1001eeabc
// body: available
// range: 0x1001eeabc-0x1001eeb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7WallperP33_8A1C610580B7CD8A17F7CF76228A646719HighlightBorderView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  ID self;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + starTimer) = 0;
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  self = _objc_msgSendSuper2(&local_40,"initWithCoder:",param_3);
  if (self != 0) {
    objc_stub::setWantsLayer_(self,1);
  }
  return self;
}

