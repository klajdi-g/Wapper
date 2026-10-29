// rea decompile_all
// name: FUN_1001179b8
// address: 0x1001179b8
// body: available
// range: 0x1001179b8-0x100117d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1001179b8(Data param_1)

{
  long lVar1;
  NSData *pNVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  NSData *pNVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  NSData *pNVar10;
  NSData *pNVar11;
  NSData *pNVar12;
  NSData *pNVar13;
  NSData *pNVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  pNVar6 = Foundation::Data::_bridgeToObjectiveC(param_1);
  _CGImageSourceCreateWithData(pNVar6,0);
  if (pNVar6 == (NSData *)0x0) {
    return 0;
  }
  puVar7 = &DAT_1005532f8;
  FUN_100002f94(&DAT_1005532f8,&DAT_100426308);
  _swift_initStackObject();
  puVar8 = PTR__kCGImageSourceShouldCache_1005219f8;
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)puVar8;
  puVar7[0x28] = 0;
  puVar8 = puVar7;
  FUN_100006b30(puVar7);
  _swift_setDeallocating(puVar7);
  FUN_10002a29c(puVar7 + 0x20,&DAT_100553300,&DAT_100426310);
  FUN_100007e08(0);
  FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar8);
  _CGImageSourceCreateImageAtIndex(pNVar6,0,pNVar9);
  if (pNVar6 == (NSData *)0x0) {
    return 0;
  }
  pNVar10 = pNVar6;
  _CGImageGetAlphaInfo();
  uVar5 = (uint)pNVar10;
  if (((uVar5 < 7) && ((1 << (ulong)(uVar5 & 0x1f) & 0x61U) != 0)) ||
     (pNVar10 = pNVar6, _CGImageGetDataProvider(), pNVar10 == (NSData *)0x0)) {
    return 0;
  }
  _CGDataProviderCopyData();
  if (pNVar10 == (NSData *)0x0) {
    return 0;
  }
  pNVar11 = pNVar10;
  _CFDataGetBytePtr();
  if (pNVar11 == (NSData *)0x0) {
    return 0;
  }
  pNVar12 = pNVar6;
  _CGImageGetWidth();
  pNVar13 = pNVar6;
  _CGImageGetHeight();
  pNVar14 = pNVar6;
  _CGImageGetBytesPerRow();
  _CGImageGetBitsPerPixel();
  pNVar2 = pNVar6 + 7;
  if (-1 < (long)pNVar6) {
    pNVar2 = pNVar6;
  }
  if ((((long)pNVar6 < 0x20) || ((long)pNVar12 < 1)) || ((long)pNVar13 < 1)) {
LAB_100117ce0:
    uVar19 = 0;
  }
  else {
    lVar21 = 0;
    lVar22 = (long)pNVar2 >> 3;
    pNVar6 = pNVar13;
    if (pNVar12 <= pNVar13) {
      pNVar6 = pNVar12;
    }
    if (pNVar6 < (NSData *)0x21) {
      pNVar6 = (NSData *)0x20;
    }
    if ((int)uVar5 < 3) {
      if (uVar5 == 1) {
LAB_100117c30:
        lVar21 = lVar22 + -1;
      }
      else if (uVar5 != 2) goto LAB_100117ce0;
    }
    else if (uVar5 != 4) {
      if (uVar5 == 3) goto LAB_100117c30;
      goto LAB_100117ce0;
    }
    lVar16 = 0;
    uVar17 = (ulong)pNVar6 >> 5;
    do {
      lVar18 = lVar16 * (long)pNVar14;
      if (SUB168(SEXT816(lVar16) * SEXT816((long)pNVar14),8) != lVar18 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d18);
        (*pcVar3)();
      }
      lVar20 = 0;
      do {
        lVar15 = lVar20 * lVar22;
        if (SUB168(SEXT816(lVar20) * SEXT816(lVar22),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d08);
          (*pcVar3)();
        }
        if (SCARRY8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d0c);
          (*pcVar3)();
        }
        lVar1 = lVar18 + lVar15 + lVar21;
        if (SCARRY8(lVar18 + lVar15,lVar21)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d10);
          (*pcVar3)();
        }
        if (((-1 < lVar1) && (pNVar6 = pNVar10, _CFDataGetLength(), lVar1 < (long)pNVar6)) &&
           (pNVar11[lVar1] != (NSData)0x0)) {
          return 0;
        }
        lVar15 = lVar20 + uVar17;
        if (SCARRY8(lVar20,uVar17)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d14);
          (*pcVar3)();
        }
        lVar20 = lVar20 + uVar17;
      } while (lVar15 < (long)pNVar12);
      bVar4 = SCARRY8(lVar16,uVar17);
      lVar16 = lVar16 + uVar17;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100117d1c);
        (*pcVar3)();
      }
      uVar19 = 1;
    } while (lVar16 < (long)pNVar13);
  }
  return uVar19;
}

