// rea decompile_all
// name: FUN_100161264
// address: 0x100161264
// body: available
// range: 0x100161264-0x10016164b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100161264(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  double *pdVar18;
  long lVar19;
  double *pdVar20;
  undefined8 uVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar12 = param_3[1];
  if (0 < lVar12) {
    lVar14 = 0;
    do {
      puVar11 = local_58;
      lVar22 = lVar14 + 1;
      if (lVar22 < lVar12) {
        lVar15 = *param_3;
        dVar25 = *(double *)(lVar15 + lVar22 * 0x18);
        lVar17 = lVar14 * 0x18;
        dVar28 = *(double *)(lVar15 + lVar17);
        pdVar18 = (double *)(lVar15 + lVar17) + 6;
        lVar19 = lVar14 + 2;
        dVar27 = dVar25;
        do {
          lVar22 = lVar19;
          if (lVar12 == lVar22) {
            lVar22 = lVar12;
            if (dVar28 <= dVar25) goto LAB_1001613a4;
            goto LAB_10016132c;
          }
          dVar30 = *pdVar18;
          bVar8 = dVar27 <= dVar30;
          pdVar18 = pdVar18 + 3;
          lVar19 = lVar22 + 1;
          dVar27 = dVar30;
        } while (dVar25 < dVar28 != bVar8);
        if (dVar25 < dVar28) {
LAB_10016132c:
          if (lVar22 < lVar14) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100161620);
            (*pcVar7)();
          }
          if (lVar14 < lVar22) {
            lVar13 = lVar22 * 0x18;
            lVar19 = lVar22;
            lVar12 = lVar14;
            do {
              lVar19 = lVar19 + -1;
              if (lVar12 != lVar19) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100161640);
                  (*pcVar7)();
                }
                puVar1 = (undefined8 *)(lVar15 + lVar17);
                lVar2 = lVar15 + lVar13;
                uVar26 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar21 = *(undefined8 *)(lVar2 + -8);
                uVar29 = *(undefined8 *)(lVar2 + -0x18);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x10);
                *puVar1 = uVar29;
                puVar1[2] = uVar21;
                *(undefined8 *)(lVar2 + -0x18) = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar5;
                *(undefined8 *)(lVar2 + -8) = uVar6;
              }
              lVar12 = lVar12 + 1;
              lVar13 = lVar13 + -0x18;
              lVar17 = lVar17 + 0x18;
            } while (lVar12 < lVar19);
            lVar12 = param_3[1];
          }
        }
      }
LAB_1001613a4:
      lVar17 = lVar22;
      if (lVar22 < lVar12) {
        if (SBORROW8(lVar22,lVar14)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10016161c);
          (*pcVar7)();
        }
        if (lVar22 - lVar14 < param_4) {
          if (SCARRY8(lVar14,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100161624);
            (*pcVar7)();
          }
          lVar19 = lVar14 + param_4;
          if (lVar12 <= lVar14 + param_4) {
            lVar19 = lVar12;
          }
          if (lVar19 < lVar14) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100161628);
            (*pcVar7)();
          }
          if (lVar22 != lVar19) {
            lVar12 = *param_3;
            pdVar18 = (double *)(lVar12 + lVar22 * 0x18 + -0x18);
            lVar15 = lVar14 - lVar22;
            do {
              dVar27 = *(double *)(lVar12 + lVar22 * 0x18);
              lVar17 = lVar15;
              pdVar20 = pdVar18;
              do {
                if (*pdVar20 <= dVar27) break;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10016162c);
                  (*pcVar7)();
                }
                dVar25 = pdVar20[4];
                dVar28 = pdVar20[5];
                pdVar20[4] = pdVar20[1];
                pdVar20[3] = *pdVar20;
                pdVar20[5] = pdVar20[2];
                *pdVar20 = dVar27;
                pdVar20[1] = dVar25;
                pdVar20[2] = dVar28;
                pdVar20 = pdVar20 + -3;
                bVar8 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar8);
              lVar22 = lVar22 + 1;
              pdVar18 = pdVar18 + 3;
              lVar15 = lVar15 + -1;
              lVar17 = lVar19;
            } while (lVar22 != lVar19);
          }
        }
      }
      if (lVar17 < lVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10016160c);
        (*pcVar7)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar24 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar24) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_10026486c(puVar11,uVar24 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar24 + 1;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x20) = lVar14;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x28) = lVar17;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100161644);
        (*pcVar7)();
      }
      FUN_1001616d8(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_1001615e0;
      lVar12 = param_3[1];
      lVar14 = lVar17;
    } while (lVar17 < lVar12);
  }
  puVar11 = local_58;
  lVar12 = *param_1;
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10016164c);
    (*pcVar7)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100265268();
  }
  puVar23 = (ulong *)(puVar11 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100161648);
      (*pcVar7)();
    }
    plVar3 = (long *)(puVar11 + uVar24 * 0x10);
    lVar22 = *plVar3;
    puVar4 = puVar23 + uVar24 * 2;
    uVar16 = puVar4[1];
    FUN_10016194c(lVar14 + lVar22 * 0x18,lVar14 + *puVar4 * 0x18,lVar14 + uVar16 * 0x18,lVar12);
    if (unaff_x21 != 0) break;
    if ((long)uVar16 < lVar22) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100161610);
      (*pcVar7)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100161614);
      (*pcVar7)();
    }
    *plVar3 = lVar22;
    plVar3[1] = uVar16;
    uVar16 = *puVar23;
    lVar14 = uVar16 - uVar24;
    if (uVar16 < uVar24) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100161618);
      (*pcVar7)();
    }
    uVar24 = uVar16 - 1;
    _memmove(puVar4,puVar4 + 2,lVar14 * 0x10);
    *puVar23 = uVar24;
  }
LAB_1001615e0:
  _swift_bridgeObjectRelease(puVar11);
  return;
}

