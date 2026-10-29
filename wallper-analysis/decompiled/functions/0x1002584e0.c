// rea decompile_all
// name: FUN_1002584e0
// address: 0x1002584e0
// body: available
// range: 0x1002584e0-0x1002586bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002584e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long local_90;
  undefined1 auStack_78 [24];
  
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_3 + 0x40);
  puVar1 = (undefined8 *)(param_4 + _TtC7Wallper21VideoWallpaperManager::transitions);
  _swift_beginAccess(puVar1,auStack_78,0,0);
  local_90 = 0;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002586c0);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          FUN_1001a9664(param_1,param_2,local_90,param_3);
          return;
        }
        uVar14 = ((ulong *)(param_3 + 0x40))[lVar12];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar12 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6);
    uVar10 = uVar6 | lVar12 << 6;
    lVar11 = puVar1[1];
    lVar7 = lVar12;
    if (*(long *)(lVar11 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_3 + 0x30) + uVar10 * 0x10);
      lVar8 = *(long *)(*(long *)(param_3 + 0x38) + uVar10 * 8);
      uVar15 = *puVar1;
      lVar13 = *plVar2;
      uVar10 = plVar2[1];
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(lVar11);
      uVar5 = uVar10;
      FUN_10000464c();
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(lVar11);
        _swift_bridgeObjectRelease(uVar15);
      }
      else {
        lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + lVar13 * 8);
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(lVar11);
        _swift_bridgeObjectRelease(uVar15);
        if (lVar13 == lVar8) {
          uVar10 = (uVar6 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
          *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) | 1L << (uVar6 & 0x3f);
          bVar4 = SCARRY8(local_90,1);
          local_90 = local_90 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100258688);
            (*pcVar3)();
          }
        }
      }
    }
  } while( true );
}

