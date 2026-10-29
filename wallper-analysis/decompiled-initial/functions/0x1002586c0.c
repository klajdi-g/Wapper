// rea decompile_all
// name: FUN_1002586c0
// address: 0x1002586c0
// body: available
// range: 0x1002586c0-0x100258937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002586c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ID IVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long local_b8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = _TtC7Wallper21VideoWallpaperManager::holds;
  lVar3 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(param_3 + 0x40);
  _swift_beginAccess(param_4 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_78,0,0);
  _swift_beginAccess(param_4 + lVar4,auStack_90,0,0);
  local_b8 = 0;
  lVar9 = 0;
  do {
    while( true ) {
      if (uVar16 == 0) {
        do {
          lVar17 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100258938);
            (*pcVar5)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar17) {
            FUN_1001a9d44(param_1,param_2,local_b8,param_3);
            return;
          }
          uVar16 = ((ulong *)(param_3 + 0x40))[lVar17];
          lVar9 = lVar9 + 1;
        } while (uVar16 == 0);
        uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar16 = uVar16 - 1 & uVar16;
      }
      else {
        uVar7 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar16 = uVar16 - 1 & uVar16;
        lVar17 = lVar9;
      }
      uVar8 = LZCOUNT(uVar7);
      uVar10 = uVar8 | lVar17 << 6;
      plVar1 = (long *)(*(long *)(param_3 + 0x30) + uVar10 * 0x10);
      lVar12 = *plVar1;
      uVar7 = plVar1[1];
      IVar14 = *(ID *)(*(long *)(param_3 + 0x38) + uVar10 * 8);
      lVar13 = *(long *)(param_4 + lVar3);
      lVar15 = *(long *)(lVar13 + 0x10);
      _swift_bridgeObjectRetain(uVar7);
      lVar9 = lVar17;
      if (lVar15 == 0) break;
      _swift_bridgeObjectRetain(lVar13);
      lVar15 = lVar12;
      uVar10 = uVar7;
      FUN_10000464c();
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar13);
        break;
      }
      bVar2 = *(byte *)(*(long *)(lVar13 + 0x38) + lVar15);
      _swift_bridgeObjectRelease(lVar13);
      if ((bVar2 & 1) != 0) break;
LAB_1002588b4:
      _swift_bridgeObjectRelease(uVar7);
    }
    lVar13 = *(long *)(param_4 + lVar4);
    if (*(long *)(lVar13 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar13);
      uVar10 = uVar7;
      FUN_10000464c();
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar13);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + lVar12 * 8);
        _swift_bridgeObjectRetain(lVar12);
        _swift_bridgeObjectRelease(lVar13);
        lVar13 = *(long *)(lVar12 + 0x10);
        _swift_bridgeObjectRelease(lVar12);
        if (lVar13 != 0) goto LAB_1002588b4;
      }
    }
    IVar14 = objc_stub::timeControlStatus(IVar14);
    _swift_bridgeObjectRelease(uVar7);
    if (IVar14 != 2) {
      uVar7 = (uVar8 & 0xffffffffffffffc0 | lVar17 << 6) >> 3;
      *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar8 & 0x3f);
      bVar6 = SCARRY8(local_b8,1);
      local_b8 = local_b8 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100258900);
        (*pcVar5)();
      }
    }
  } while( true );
}

