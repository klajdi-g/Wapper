// rea decompile_all
// name: FUN_100296aa8
// address: 0x100296aa8
// body: available
// range: 0x100296aa8-0x100296b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100296aa8(void)

{
  long lVar1;
  ID self;
  Published *unaff_x20;
  undefined8 local_38;
  
  lVar1 = _TtC7Wallper20NetworkStatusMonitor::countdownTimer;
  self = *(ID *)((long)&unaff_x20->unknown + _TtC7Wallper20NetworkStatusMonitor::countdownTimer);
  if (self != 0) {
    objc_stub::invalidate(self);
  }
  *(undefined8 *)((long)&unaff_x20->unknown + lVar1) = 0;
  _swift_getKeyPath(&DAT_10042db70);
  _swift_getKeyPath(&DAT_10042db98);
  local_38 = 0;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_38);
  return;
}

