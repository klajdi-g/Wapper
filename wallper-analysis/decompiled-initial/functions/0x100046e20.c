// rea decompile_all
// name: FUN_100046e20
// address: 0x100046e20
// body: available
// range: 0x100046e20-0x10004702b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100046e20(double param_1)

{
  ulong *puVar1;
  double *pdVar2;
  double *pdVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(unaff_x20 + 0x40);
  if (lVar10 == 0) {
    _swift_beginAccess(unaff_x20 + 0x58,auStack_78,0,0);
  }
  else {
    _swift_bridgeObjectRetain(lVar10);
    _CFAbsoluteTimeGetCurrent();
    dVar17 = (param_1 - *(double *)(unaff_x20 + 0x48)) / 0.7;
    if (1.0 <= dVar17) {
      _swift_bridgeObjectRelease(lVar10);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      _swift_bridgeObjectRelease(uVar6);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
      _swift_beginAccess(unaff_x20 + 0x58,auStack_78,1,0);
      lVar10 = *(long *)(unaff_x20 + 0x58);
      *(undefined8 *)(unaff_x20 + 0x58) = uVar6;
      _swift_bridgeObjectRetain(uVar6);
    }
    else {
      lVar8 = *(long *)(unaff_x20 + 0x30);
      puVar1 = (ulong *)(unaff_x20 + 0x58);
      _swift_beginAccess(puVar1,auStack_78,0,0);
      uVar9 = *(ulong *)(unaff_x20 + 0x58);
      uVar7 = *(ulong *)(uVar9 + 0x10);
      if (uVar7 != 0) {
        if (*(ulong *)(lVar10 + 0x10) < uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100047028);
          (*pcVar4)();
        }
        if (*(ulong *)(lVar8 + 0x10) < uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10004702c);
          (*pcVar4)();
        }
        dVar17 = dVar17 * dVar17 * (3.0 - (dVar17 + dVar17));
        _swift_beginAccess(puVar1,auStack_90,0x21,0);
        _swift_bridgeObjectRetain(lVar8);
        uVar11 = 0;
        lVar12 = 0x20;
        do {
          pdVar2 = (double *)(lVar10 + lVar12);
          pdVar3 = (double *)(lVar8 + lVar12);
          dVar16 = pdVar2[1];
          dVar15 = *pdVar2;
          dVar14 = pdVar3[1];
          dVar13 = *pdVar3;
          dVar18 = pdVar2[2];
          dVar19 = pdVar3[2];
          uVar5 = uVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          *puVar1 = uVar9;
          if ((uVar5 & 1) == 0) {
            FUN_100287288();
          }
          if (*(ulong *)(uVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100047024);
            (*pcVar4)();
          }
          uVar11 = uVar11 + 1;
          pdVar2 = (double *)(uVar9 + lVar12);
          pdVar2[1] = dVar16 + (dVar14 - dVar16) * dVar17;
          *pdVar2 = dVar15 + (dVar13 - dVar15) * dVar17;
          pdVar2[2] = dVar18 + dVar17 * (dVar19 - dVar18);
          *puVar1 = uVar9;
          lVar12 = lVar12 + 0x18;
        } while (uVar7 != uVar11);
        _swift_endAccess(auStack_90);
        _swift_bridgeObjectRelease(lVar8);
      }
    }
    _swift_bridgeObjectRelease(lVar10);
  }
  return *(undefined8 *)(unaff_x20 + 0x58);
}

