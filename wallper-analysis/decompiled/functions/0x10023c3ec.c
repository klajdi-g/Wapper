// rea decompile_all
// name: FUN_10023c3ec
// address: 0x10023c3ec
// body: available
// range: 0x10023c3ec-0x10023c75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10023c3ec(void)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  Published *pPVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  undefined *puVar10;
  Published *pPVar11;
  undefined *puVar12;
  undefined *puVar13;
  Published *pPVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  Published *local_80;
  undefined1 auStack_78 [24];
  
  lVar20 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_78,0,0);
  lVar7 = _TtC7Wallper21VideoWallpaperManager::holds;
  lVar6 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  lVar20 = *(long *)(unaff_x20 + lVar20);
  puVar21 = (ulong *)(lVar20 + 0x40);
  uVar17 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar24 = 0xffffffffffffffff;
  if (-uVar17 < 0x40) {
    uVar24 = ~(-1L << (-uVar17 & 0x3f));
  }
  uVar24 = uVar24 & *puVar21;
  _swift_bridgeObjectRetain(lVar20);
  _swift_beginAccess(unaff_x20 + lVar6,auStack_98,0,0);
  _swift_beginAccess(unaff_x20 + lVar7,auStack_b0,0,0);
  lVar22 = 0;
  lVar4 = lVar22;
  pPVar5 = (Published *)PTR___swiftEmptyArrayStorage_100524190;
  do {
    while( true ) {
      while (uVar24 == 0) {
        bVar9 = SCARRY8(lVar22,1);
        lVar22 = lVar22 + 1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10023c760);
          (*pcVar8)();
        }
        if ((long)(0x3f - uVar17 >> 6) <= lVar22) {
          FUN_10002f6ec(lVar20,puVar21,~uVar17,lVar4,0);
          pPVar11 = pPVar5;
          FUN_10020c98c();
          _swift_release(pPVar5);
          uVar16 = *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::playback);
          puVar12 = &DAT_10042bfe0;
          _swift_getKeyPath(&DAT_10042bfe0);
          puVar13 = &DAT_10042c008;
          _swift_getKeyPath(&DAT_10042c008);
          Combine::Published::_get_subscript(&local_80,uVar16,puVar12,puVar13);
          _swift_release(puVar12);
          _swift_release(puVar13);
          pPVar5 = local_80;
          pPVar14 = local_80;
          FUN_1003f3dd0(local_80,pPVar11);
          _swift_bridgeObjectRelease(pPVar5);
          if (((ulong)pPVar14 & 1) == 0) {
            puVar12 = &DAT_10042bfe0;
            _swift_getKeyPath(&DAT_10042bfe0);
            puVar13 = &DAT_10042c008;
            _swift_getKeyPath(&DAT_10042c008);
            local_80 = pPVar11;
            _swift_retain(uVar16);
            Combine::Published::_set_subscript(pPVar11,&local_80,uVar16,puVar12,puVar13);
          }
          else {
            _swift_bridgeObjectRelease(pPVar11);
          }
          return;
        }
        uVar24 = puVar21[lVar22];
      }
      uVar3 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar24 - 1 & uVar24;
      plVar1 = (long *)(*(long *)(lVar20 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
                       lVar22 * 0x400);
      puVar12 = (undefined *)*plVar1;
      puVar13 = (undefined *)plVar1[1];
      lVar18 = *(long *)(unaff_x20 + lVar6);
      lVar23 = *(long *)(lVar18 + 0x10);
      _swift_bridgeObjectRetain(puVar13);
      lVar4 = lVar22;
      if (lVar23 == 0) break;
      _swift_bridgeObjectRetain(lVar18);
      puVar19 = puVar12;
      puVar10 = puVar13;
      FUN_10000464c();
      if (((ulong)puVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar18);
        break;
      }
      bVar2 = puVar19[*(long *)(lVar18 + 0x38)];
      _swift_bridgeObjectRelease(lVar18);
      if ((bVar2 & 1) != 0) break;
LAB_10023c58c:
      pPVar11 = pPVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      local_80 = pPVar5;
      if (((ulong)pPVar11 & 1) == 0) {
        FUN_1001c5bc4(0,pPVar5[2].unknown + 1,1);
      }
      puVar19 = local_80[2].unknown;
      if ((undefined *)((ulong)local_80[3].unknown >> 1) <= puVar19) {
        FUN_1001c5bc4((undefined *)0x1 < local_80[3].unknown,puVar19 + 1,1);
      }
      local_80[2].unknown = puVar19 + 1;
      local_80[(long)puVar19 * 2 + 4].unknown = puVar12;
      local_80[(long)puVar19 * 2 + 5].unknown = puVar13;
      pPVar5 = local_80;
    }
    puVar19 = *(undefined **)(unaff_x20 + lVar7);
    if (*(long *)(puVar19 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar19);
      puVar10 = puVar12;
      puVar15 = puVar13;
      FUN_10000464c();
      if (((ulong)puVar15 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar13);
        puVar13 = puVar19;
      }
      else {
        lVar23 = *(long *)(*(long *)(puVar19 + 0x38) + (long)puVar10 * 8);
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRelease(puVar19);
        lVar18 = *(long *)(lVar23 + 0x10);
        _swift_bridgeObjectRelease(lVar23);
        if (lVar18 != 0) goto LAB_10023c58c;
      }
    }
    _swift_bridgeObjectRelease(puVar13);
  } while( true );
}

