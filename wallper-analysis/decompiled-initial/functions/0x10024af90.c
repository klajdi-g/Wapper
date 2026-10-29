// rea decompile_all
// name: FUN_10024af90
// address: 0x10024af90
// body: available
// range: 0x10024af90-0x10024b13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10024af90(long param_1,ulong param_2)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = _TtC7Wallper21VideoWallpaperManager::players;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar1 = param_1;
    uVar4 = param_2;
    FUN_10000464c();
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      IVar2 = *(ID *)(*(long *)(lVar5 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRelease(lVar5);
      IVar3 = objc_stub::error(IVar2);
      if ((IVar3 == 0) &&
         ((IVar2 = objc_stub::currentItem(IVar2), IVar2 == 0 ||
          (IVar2 = objc_stub::status(IVar2), IVar2 != 2)))) {
        lVar5 = _TtC7Wallper21VideoWallpaperManager::loopers;
        _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_70,0,0);
        lVar5 = *(long *)(unaff_x20 + lVar5);
        if (*(long *)(lVar5 + 0x10) != 0) {
          _swift_bridgeObjectRetain(lVar5);
          FUN_10000464c();
          if ((param_2 & 1) != 0) {
            IVar2 = *(ID *)(*(long *)(lVar5 + 0x38) + param_1 * 8);
            _swift_bridgeObjectRelease(lVar5);
            IVar2 = objc_stub::status(IVar2);
            return IVar2 != 2;
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        return true;
      }
    }
  }
  return false;
}

