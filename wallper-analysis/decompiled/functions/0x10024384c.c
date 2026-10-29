// rea decompile_all
// name: FUN_10024384c
// address: 0x10024384c
// body: available
// range: 0x10024384c-0x100243a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024384c(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_1005539e0;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_98 + (-8 - extraout_x8);
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar6 = _TtC7Wallper21VideoWallpaperManager::players;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::players,auStack_80,0,0);
    lVar6 = *(long *)(param_1 + lVar6);
    if (*(long *)(lVar6 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar6);
      lVar2 = param_2;
      uVar5 = param_3;
      FUN_10000464c();
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar6);
      }
      else {
        IVar3 = *(ID *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
        _swift_bridgeObjectRelease(lVar6);
        IVar3 = objc_stub::timeControlStatus(IVar3);
        lVar6 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount;
        if (IVar3 == 2) {
          _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,
                             auStack_98,0x21,0);
          uVar4 = *(undefined8 *)(param_1 + lVar6);
          _swift_isUniquelyReferenced_nonNull_native(uVar4);
          local_a0 = *(undefined8 *)(param_1 + lVar6);
          *(undefined8 *)(param_1 + lVar6) = 0x8000000000000000;
          FUN_1003402f4(0,param_2,param_3,uVar4);
          *(undefined8 *)(param_1 + lVar6) = local_a0;
          _swift_endAccess(auStack_98);
          _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::failureRebuilds,
                             auStack_98,0x21,0);
          FUN_10027f1a8(puVar7,param_2,param_3);
          _swift_endAccess(auStack_98);
          FUN_10002a29c(puVar7,&DAT_1005539e0,&DAT_100426a78);
          _swift_beginAccess(param_1 + _TtC7Wallper21VideoWallpaperManager::stallRebuilds,auStack_98
                             ,0x21,0);
          FUN_10027f1a8(puVar7,param_2,param_3);
          _swift_endAccess(auStack_98);
          FUN_10002a29c(puVar7,&DAT_1005539e0,&DAT_100426a78);
        }
      }
    }
  }
  return;
}

