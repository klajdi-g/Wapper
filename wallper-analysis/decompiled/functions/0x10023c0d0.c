// rea decompile_all
// name: FUN_10023c0d0
// address: 0x10023c0d0
// body: available
// range: 0x10023c0d0-0x10023c1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10023c0d0(long param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_58,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    lVar3 = param_1;
    uVar2 = param_2;
    FUN_10000464c();
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
    }
    else {
      bVar1 = *(byte *)(*(long *)(lVar4 + 0x38) + lVar3);
      _swift_bridgeObjectRelease(lVar4);
      if ((bVar1 & 1) == 0) {
        return false;
      }
    }
  }
  lVar4 = _TtC7Wallper21VideoWallpaperManager::holds;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_70,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_10000464c();
    if ((param_2 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRelease(lVar4);
      lVar4 = *(long *)(lVar3 + 0x10);
      _swift_bridgeObjectRelease(lVar3);
      return lVar4 == 0;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  return true;
}

