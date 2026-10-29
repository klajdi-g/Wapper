// rea decompile_all
// name: FUN_100253e84
// address: 0x100253e84
// body: available
// range: 0x100253e84-0x1002540c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100253e84(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  Bucket BVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  lVar8 = _TtC7Wallper21VideoWallpaperManager::players;
  puVar4 = local_70;
  if (param_2 == 0) {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_58,0,0);
    lVar8 = *(long *)(unaff_x20 + lVar8);
    _swift_bridgeObjectRetain(*(undefined1 *)(lVar8 + 0x20),lVar8);
    BVar3 = Swift::_HashTable::get_startBucket((undefined *)(lVar8 + 0x40));
    if (BVar3.unknown != (undefined *)(1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f))) {
      FUN_1002563cc(local_70,BVar3.unknown,*(undefined4 *)(lVar8 + 0x24),0,lVar8);
      _swift_bridgeObjectRelease(lVar8);
      lVar8 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::shownPlayers,local_70,0,0)
      ;
      puVar7 = *(undefined **)(unaff_x20 + lVar8);
      if (*(long *)(puVar7 + 0x10) != 0) {
        _swift_bridgeObjectRetain(BVar3.unknown);
        _swift_bridgeObjectRetain(puVar7);
        puVar6 = BVar3.unknown;
        FUN_10000464c();
        if (((ulong)puVar6 & 1) != 0) {
          local_70[0] = *(undefined8 *)(*(long *)(puVar7 + 0x38) + (long)puVar4 * 8);
        }
        _swift_bridgeObjectRelease_n(BVar3.unknown,2);
        BVar3.unknown = puVar7;
      }
      _swift_bridgeObjectRelease(BVar3.unknown);
      return local_70[0];
    }
  }
  else {
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_58,0,0);
    lVar8 = *(long *)(unaff_x20 + lVar8);
    if (*(long *)(lVar8 + 0x10) == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar8);
    lVar1 = param_1;
    uVar5 = param_2;
    FUN_10000464c();
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRelease(lVar8);
      lVar8 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::shownPlayers,local_70,0,0)
      ;
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (*(long *)(lVar8 + 0x10) == 0) {
        return uVar2;
      }
      _swift_bridgeObjectRetain_n(lVar8,2);
      FUN_10000464c();
      if ((param_2 & 1) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + param_1 * 8);
      }
      _swift_bridgeObjectRelease_n(lVar8,2);
      return uVar2;
    }
  }
  _swift_bridgeObjectRelease(lVar8);
  return 0;
}

