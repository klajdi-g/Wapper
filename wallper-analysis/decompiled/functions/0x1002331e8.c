// rea decompile_all
// name: FUN_1002331e8
// address: 0x1002331e8
// body: available
// range: 0x1002331e8-0x100233413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1002331e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_68,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1002332e8:
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    _swift_bridgeObjectRetain_n(lVar4,2);
    lVar1 = param_1;
    uVar3 = param_2;
    FUN_10000464c();
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lVar4,2);
      goto LAB_1002332e8;
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
    _swift_bridgeObjectRelease_n(lVar4,2);
    lVar4 = _TtC7Wallper21VideoWallpaperManager::players;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_98,0,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_100233380:
      uVar5 = 0;
    }
    else {
      _swift_bridgeObjectRetain_n(lVar4,2);
      lVar1 = param_1;
      uVar3 = param_2;
      FUN_10000464c();
      if ((uVar3 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar4,2);
        goto LAB_100233380;
      }
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRelease_n(lVar4,2);
    }
    lVar4 = _TtC7Wallper21VideoWallpaperManager::loopers;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_b0,0,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (*(long *)(lVar4 + 0x10) != 0) {
      _swift_bridgeObjectRetain_n(lVar4,2);
      lVar1 = param_1;
      uVar3 = param_2;
      FUN_10000464c();
      if ((uVar3 & 1) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
        _swift_bridgeObjectRelease_n(lVar4,2);
        goto LAB_1002332f4;
      }
      _swift_bridgeObjectRelease_n(lVar4,2);
    }
  }
  uVar6 = 0;
LAB_1002332f4:
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::transitions,auStack_80,0x21,0)
  ;
  FUN_100233414(param_1,param_2,uVar2,uVar5,uVar6);
  _swift_endAccess(auStack_80);
  FUN_100259eec(uVar2,uVar5,uVar6);
  return param_1;
}

