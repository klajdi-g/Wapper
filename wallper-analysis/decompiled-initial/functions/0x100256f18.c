// rea decompile_all
// name: FUN_100256f18
// address: 0x100256f18
// body: available
// range: 0x100256f18-0x10025714f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

double FUN_100256f18(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  _ArrayBuffer _Var6;
  ulong uVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _Var6.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar10 = *(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var1.unknown = _Var6.unknown;
    }
    uVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  }
  PTR___swiftEmptyArrayStorage_100524190 = puVar2;
  if (uVar10 == 0) {
    _swift_bridgeObjectRelease(_Var6.unknown);
    lVar8 = *(long *)(PTR___swiftEmptyArrayStorage_100524190 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    FUN_1001c5c28(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100257150);
      (*pcVar5)();
    }
    uVar11 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(_Var6.unknown + uVar11 * 8 + 0x20);
      }
      else {
        uVar7 = uVar11;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var6);
      }
      objc_stub::backingScaleFactor(uVar7);
      objc_stub::frame(uVar7);
      dVar15 = extraout_d0_00;
      _CGRectGetWidth();
      objc_stub::frame(uVar7);
      dVar14 = extraout_d0_01;
      _CGRectGetHeight();
      uVar7 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
        FUN_1001c5c28(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar7 + 1;
      *(double *)(puVar2 + uVar7 * 0x10 + 0x28) = dVar14 * extraout_d0;
      *(double *)(puVar2 + uVar7 * 0x10 + 0x20) = dVar15 * extraout_d0;
    } while (uVar10 != uVar11);
    _swift_bridgeObjectRelease(_Var6.unknown);
    lVar8 = *(long *)(puVar2 + 0x10);
  }
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease(puVar2);
    dVar15 = 0.0;
  }
  else {
    dVar15 = *(double *)(puVar2 + 0x20);
    dVar14 = *(double *)(puVar2 + 0x28);
    lVar8 = lVar8 + -1;
    if (lVar8 != 0) {
      pdVar9 = (double *)(puVar2 + 0x38);
      dVar12 = dVar15;
      do {
        dVar13 = pdVar9[-1];
        dVar3 = *pdVar9;
        dVar4 = dVar13;
        if (dVar13 * *pdVar9 <= dVar14 * dVar12) {
          dVar13 = dVar12;
          dVar3 = dVar14;
          dVar4 = dVar15;
        }
        dVar15 = dVar4;
        dVar14 = dVar3;
        pdVar9 = pdVar9 + 2;
        lVar8 = lVar8 + -1;
        dVar12 = dVar13;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(puVar2);
  }
  return dVar15;
}

