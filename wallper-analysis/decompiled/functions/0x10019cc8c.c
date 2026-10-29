// rea decompile_all
// name: FUN_10019cc8c
// address: 0x10019cc8c
// body: available
// range: 0x10019cc8c-0x10019cec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019cc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_80 [3];
  undefined1 auStack_68 [24];
  
  lVar2 = _TtC7Wallper17NowPlayingManager::artworkCache;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCache,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_isUniquelyReferenced_nonNull_native(uVar5);
  local_80[0] = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
  FUN_100340cbc(param_1,param_2,param_3,uVar5);
  _swift_bridgeObjectRelease(param_3);
  *(undefined8 *)(unaff_x20 + lVar2) = local_80[0];
  _swift_endAccess(auStack_68);
  FUN_10019cb10(param_2,param_3);
  lVar3 = _TtC7Wallper17NowPlayingManager::artworkCacheOrder;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCacheOrder,auStack_68,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar3);
  uVar8 = *(ulong *)(lVar7 + 0x10);
  while (0x14 < uVar8) {
    _swift_beginAccess(unaff_x20 + lVar3,local_80,0x21,0);
    lVar6 = *(long *)(lVar7 + 0x20);
    uVar1 = *(ulong *)(lVar7 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    lVar9 = lVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(long *)(unaff_x20 + lVar3) = lVar7;
    if (((int)lVar9 == 0) || (*(ulong *)(lVar7 + 0x18) >> 1 < uVar8 - 1)) {
      FUN_1001c432c();
      *(long *)(unaff_x20 + lVar3) = lVar9;
      lVar7 = lVar9;
    }
    FUN_100043c00(lVar7 + 0x20);
    lVar9 = *(long *)(lVar7 + 0x10);
    _memmove((void *)(lVar7 + 0x20),(void *)(lVar7 + 0x30),lVar9 * 0x10 - 0x10);
    *(long *)(lVar7 + 0x10) = lVar9 + -1;
    *(long *)(unaff_x20 + lVar3) = lVar7;
    _swift_endAccess(local_80);
    _swift_beginAccess(unaff_x20 + lVar2,local_80,0x21,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    _swift_bridgeObjectRetain(uVar5);
    uVar8 = uVar1;
    FUN_10000464c();
    _swift_bridgeObjectRelease(uVar5);
    if ((uVar8 & 1) != 0) {
      iVar4 = (int)*(undefined8 *)(unaff_x20 + lVar2);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar7 = *(long *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
      if (iVar4 == 0) {
        FUN_1001cc810();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar7 + 0x30) + lVar6 * 0x10 + 8));
      thunk_FUN_1001d1dc4(lVar6,lVar7);
      *(long *)(unaff_x20 + lVar2) = lVar7;
    }
    _swift_endAccess(local_80);
    _swift_bridgeObjectRelease(uVar1);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    uVar8 = *(ulong *)(lVar7 + 0x10);
  }
  return;
}

