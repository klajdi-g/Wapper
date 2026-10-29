// rea decompile_all
// name: FUN_10025ab74
// address: 0x10025ab74
// body: available
// range: 0x10025ab74-0x10025ac43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025ab74(long param_1,long param_2)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((((param_1 != 0) &&
       (IVar2 = *(ID *)(param_1 + _TtC7Wallper13WindowManager::mainWindow), IVar2 != 0)) &&
      (IVar3 = objc_stub::isVisible(IVar2), (int)IVar3 != 0)) &&
     (IVar3 = objc_stub::isMiniaturized(IVar2), (IVar3 & 1) == 0)) {
    if (*(ID *)PTR__NSApp_1005212d0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10025ac44);
      (*pcVar1)();
    }
    IVar3 = objc_stub::isActive(*(ID *)PTR__NSApp_1005212d0);
    if (((int)IVar3 == 0) || (IVar2 = objc_stub::isKeyWindow(IVar2), (IVar2 & 1) == 0)) {
      if (SCARRY8(param_2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025ac40);
        (*pcVar1)();
      }
      FUN_10025a80c(param_2 + 1);
    }
  }
  return;
}

