// rea decompile_all
// name: FUN_100163774
// address: 0x100163774
// body: available
// range: 0x100163774-0x100163a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100163774(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  char cVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  lVar12 = *(long *)(unaff_x22 + 0x48);
  if (lVar12 != 0) {
    uVar16 = 0;
    uVar17 = *(ulong *)(lVar12 + 0x10);
    do {
      lVar10 = uVar16 << 5;
      do {
        if (uVar17 == uVar16) {
          cVar14 = *(char *)(unaff_x22 + 0x50);
          _swift_bridgeObjectRelease(lVar12);
          if (cVar14 == '\x01') {
            if (*(long *)(puVar6 + 0x10) != 0) {
              lVar12 = *(long *)(puVar6 + 0x30);
              lVar10 = *(long *)(puVar6 + 0x38);
              _swift_bridgeObjectRetain(lVar10);
              _swift_release(puVar6);
              if (lVar10 != 0) goto LAB_1001638bc;
              goto LAB_1001639c8;
            }
          }
          else {
            uVar16 = *(ulong *)(puVar6 + 0x10);
            if (uVar16 != 0) {
              dVar21 = *(double *)(unaff_x22 + 0x30);
              dVar22 = *(double *)(puVar6 + 0x20);
              cVar14 = puVar6[0x28];
              lVar12 = *(long *)(puVar6 + 0x30);
              lVar10 = *(long *)(puVar6 + 0x38);
              _swift_bridgeObjectRetain(lVar10);
              uVar17 = 1;
              goto LAB_100163914;
            }
          }
          _swift_release(puVar6);
          lVar12 = 0;
          goto LAB_1001639cc;
        }
        if (*(ulong *)(lVar12 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100163a00);
          (*pcVar8)();
        }
        lVar1 = lVar10 + 0x20;
        uVar16 = uVar16 + 1;
        lVar13 = *(long *)(lVar12 + lVar10 + 0x38);
        lVar10 = lVar1;
      } while (lVar13 == 0);
      puVar2 = (undefined8 *)(lVar12 + lVar1);
      uVar18 = *puVar2;
      uVar4 = *(undefined1 *)(puVar2 + 1);
      uVar5 = *(undefined1 *)((long)puVar2 + 9);
      uVar15 = puVar2[2];
      _swift_bridgeObjectRetain(lVar13);
      puVar9 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar9 & 1) == 0) {
        FUN_1001c5dcc(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar3 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        FUN_1001c5dcc(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar6 + uVar3 * 0x20 + 0x20) = uVar18;
      puVar6[uVar3 * 0x20 + 0x28] = uVar4;
      puVar6[uVar3 * 0x20 + 0x29] = uVar5;
      *(undefined8 *)(puVar6 + uVar3 * 0x20 + 0x30) = uVar15;
      *(long *)(puVar6 + uVar3 * 0x20 + 0x38) = lVar13;
    } while( true );
  }
LAB_1001639c8:
  lVar12 = 0;
LAB_1001639cc:
                    /* WARNING: Could not recover jumptable at 0x0001001639f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar12);
  return;
LAB_100163914:
  dVar19 = 0.0;
  if (cVar14 != '\x01') {
    dVar19 = dVar22;
  }
  plVar7 = (long *)(puVar6 + uVar17 * 0x20 + 0x18);
  while (plVar11 = plVar7, uVar16 != uVar17) {
    if (*(ulong *)(puVar6 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100163a04);
      (*pcVar8)();
    }
    uVar17 = uVar17 + 1;
    dVar23 = (double)plVar11[1];
    lVar1 = plVar11[2];
    dVar20 = 0.0;
    if ((char)lVar1 != '\x01') {
      dVar20 = dVar23;
    }
    plVar7 = plVar11 + 4;
    if (ABS(dVar20 - dVar21) < ABS(dVar19 - dVar21)) goto code_r0x000100163960;
  }
  _swift_release(puVar6);
  dVar19 = dVar21;
  if (cVar14 != '\x01') {
    dVar19 = dVar22;
  }
  if (5.0 < ABS(dVar19 - dVar21)) {
    _swift_bridgeObjectRelease(lVar10);
    lVar12 = 0;
    goto LAB_1001639cc;
  }
  if (lVar10 == 0) goto LAB_1001639c8;
LAB_1001638bc:
  _swift_bridgeObjectRetain(lVar10);
  FUN_100162308(lVar12,lVar10);
  _swift_bridgeObjectRelease_n(lVar10,2);
  goto LAB_1001639cc;
code_r0x000100163960:
  lVar12 = plVar11[3];
  lVar13 = plVar11[4];
  _swift_bridgeObjectRetain(lVar13);
  _swift_bridgeObjectRelease(lVar10);
  lVar10 = lVar13;
  dVar22 = dVar23;
  cVar14 = (char)lVar1;
  goto LAB_100163914;
}

