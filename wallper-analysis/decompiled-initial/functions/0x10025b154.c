// rea decompile_all
// name: FUN_10025b154
// address: 0x10025b154
// body: available
// range: 0x10025b154-0x10025b1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025b154(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auStack_38 [24];
  
  bVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    *(byte *)(param_2 + _TtC7Wallper13WindowManager::isBanned) = bVar1;
    *(byte *)(param_2 + _TtC7Wallper13WindowManager::canOpenUI) =
         *(byte *)(param_2 + _TtC7Wallper13WindowManager::canOpenUI) & (bVar1 ^ 0xff) & 1;
  }
  return;
}

