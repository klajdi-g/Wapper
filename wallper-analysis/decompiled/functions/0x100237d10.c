// rea decompile_all
// name: FUN_100237d10
// address: 0x100237d10
// body: available
// range: 0x100237d10-0x100237f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100237d10(void)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ID self;
  ID IVar5;
  NSString *pNVar6;
  Dictionary<undefined,undefined> DVar7;
  Dictionary<undefined,undefined> DVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_88 [24];
  
  lVar13 = _TtC7Wallper21VideoWallpaperManager::players;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_88,0,0);
  lVar13 = *(long *)(unaff_x20 + lVar13);
  uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar13 + 0x40);
  _swift_bridgeObjectRetain(lVar13);
  lVar12 = 0;
  do {
    while (uVar14 == 0) {
      bVar4 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100237f8c);
        (*pcVar3)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar12) {
        _swift_release(lVar13);
        return;
      }
      uVar14 = ((ulong *)(lVar13 + 0x40))[lVar12];
    }
    uVar2 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar10 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar12 << 6;
    plVar1 = (long *)(*(long *)(lVar13 + 0x30) + uVar10 * 0x10);
    lVar9 = *plVar1;
    uVar2 = plVar1[1];
    self = *(ID *)(*(long *)(lVar13 + 0x38) + uVar10 * 8);
    _swift_bridgeObjectRetain(uVar2);
    IVar5 = objc_stub::timeControlStatus(self);
    if (IVar5 == 2) {
      IVar5 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar5 = NSUserDefaults::dictionaryForKey_(IVar5,pNVar6);
      puVar15 = PTR___swiftEmptyDictionarySingleton_100524198;
      if (IVar5 != 0) {
        DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        DVar8 = DVar7;
        FUN_10017dc34();
        _swift_bridgeObjectRelease(DVar7.unknown);
        puVar15 = PTR___swiftEmptyDictionarySingleton_100524198;
        if (DVar8.unknown != (undefined *)0x0) {
          puVar15 = DVar8.unknown;
        }
      }
      if ((*(long *)(puVar15 + 0x10) == 0) || (uVar10 = uVar2, FUN_10000464c(), (uVar10 & 1) == 0))
      {
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(puVar15);
        dVar17 = 1.0;
LAB_100237f4c:
        fVar16 = (float)dVar17;
      }
      else {
        dVar17 = *(double *)(*(long *)(puVar15 + 0x38) + lVar9 * 8);
        _swift_bridgeObjectRelease(puVar15);
        _swift_bridgeObjectRelease(uVar2);
        fVar16 = 1.0;
        if (0.0 < dVar17) goto LAB_100237f4c;
      }
      objc_stub::setRate_(self,fVar16);
    }
    else {
      _swift_bridgeObjectRelease(uVar2);
    }
    uVar14 = uVar14 - 1 & uVar14;
  } while( true );
}

