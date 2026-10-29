// rea decompile_all
// name: FUN_10019ca48
// address: 0x10019ca48
// body: available
// range: 0x10019ca48-0x10019cb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10019ca48(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = _TtC7Wallper17NowPlayingManager::artworkCache;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCache,auStack_58,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    lVar1 = param_1;
    uVar2 = param_2;
    FUN_10000464c();
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(lVar3);
      FUN_10019cb10(param_1,param_2);
      return uVar4;
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_endAccess(auStack_58);
  return 0;
}

