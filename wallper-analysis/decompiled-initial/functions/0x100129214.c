// rea decompile_all
// name: FUN_100129214
// address: 0x100129214
// body: available
// range: 0x100129214-0x1001292fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100129214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (DAT_100557eb0 != -1) {
        _swift_once(&DAT_100557eb0,FUN_10025a3bc);
      }
      if (*(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow) != 0) {
        objc_stub::endSheet_(*(ID *)(DAT_100577d68 + _TtC7Wallper13WindowManager::mainWindow),lVar1)
        ;
        *(undefined8 *)(param_1 + 0x10) = 0;
        _swift_release();
        return;
      }
    }
    _swift_release();
  }
  return;
}

