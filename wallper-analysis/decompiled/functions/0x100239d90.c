// rea decompile_all
// name: FUN_100239d90
// address: 0x100239d90
// body: available
// range: 0x100239d90-0x100239edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100239d90(double param_1,double param_2,uint param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_68 [24];
  
  FUN_10025736c();
  bVar7 = (param_3 & 0xff) != 1;
  dVar12 = 0.0;
  if (bVar7) {
    dVar12 = param_1;
  }
  dVar13 = 0.0;
  if (bVar7) {
    dVar13 = param_2;
  }
  pdVar1 = (double *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedMaxResolution);
  bVar7 = false;
  if ((dVar12 == *pdVar1) && (bVar7 = false, !NAN(dVar13) && !NAN(pdVar1[1]))) {
    bVar7 = dVar13 == pdVar1[1];
  }
  if (!bVar7) {
    *pdVar1 = dVar12;
    pdVar1[1] = dVar13;
    lVar9 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       auStack_68,0,0);
    lVar9 = *(long *)(unaff_x20 + lVar9);
    uVar8 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar9 + 0x40);
    _swift_bridgeObjectRetain(lVar9);
    lVar11 = 0;
    while( true ) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        puVar2 = (undefined8 *)
                 (*(long *)(lVar9 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
                 lVar11 * 0x400);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        _swift_bridgeObjectRetain(uVar4);
        FUN_100239edc(uVar3,uVar4);
        _swift_bridgeObjectRelease(uVar4);
      }
      bVar7 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100239edc);
        (*pcVar6)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar11) break;
      uVar10 = ((ulong *)(lVar9 + 0x40))[lVar11];
    }
    _swift_release(lVar9);
  }
  return;
}

