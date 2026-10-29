// rea decompile_all
// name: FUN_1002dfdb8
// address: 0x1002dfdb8
// body: available
// range: 0x1002dfdb8-0x1002e0293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002dfe70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002dfdb8(undefined **param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined **ppuVar4;
  NSComparisonResult NVar5;
  NSComparisonResult NVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x21;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *local_58;
  
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar22 = param_3[1];
  if (0 < lVar22) {
    ppuVar4 = param_1;
    lVar16 = 0;
    do {
      lVar20 = lVar16 + 1;
      NVar6.unknown = (undefined *)ppuVar4;
      if (lVar20 < lVar22) {
        lVar17 = lVar16 * 0x28;
        FUN_100026df4();
        NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (ppuVar4,puVar15,puVar15,ppuVar4,ppuVar4);
        NVar6 = NVar5;
        lVar11 = lVar16 + 2;
        do {
          lVar10 = lVar11;
          lVar20 = lVar22;
          if (lVar22 == lVar10) break;
          NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (NVar6.unknown,puVar15,puVar15,ppuVar4,ppuVar4);
          lVar11 = lVar10 + 1;
          lVar20 = lVar10;
        } while ((NVar5.unknown == (undefined *)0xffffffffffffffff) !=
                 (NVar6.unknown != (undefined *)0xffffffffffffffff));
        if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
          if (lVar20 < lVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0270);
            (*pcVar2)();
          }
          if (lVar16 < lVar20) {
            lVar10 = *param_3;
            lVar21 = lVar20 * 0x28;
            lVar11 = lVar20;
            lVar22 = lVar16;
            do {
              lVar11 = lVar11 + -1;
              if (lVar22 != lVar11) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0288);
                  (*pcVar2)();
                }
                puVar18 = (undefined8 *)(lVar10 + lVar17);
                lVar1 = lVar10 + lVar21;
                uVar24 = puVar18[1];
                uVar23 = *puVar18;
                uVar26 = puVar18[3];
                uVar25 = puVar18[2];
                uVar12 = puVar18[4];
                uVar13 = *(undefined8 *)(lVar1 + -8);
                uVar28 = *(undefined8 *)(lVar1 + -0x10);
                uVar27 = *(undefined8 *)(lVar1 + -0x18);
                uVar29 = *(undefined8 *)(lVar1 + -0x28);
                puVar18[1] = *(undefined8 *)(lVar1 + -0x20);
                *puVar18 = uVar29;
                puVar18[3] = uVar28;
                puVar18[2] = uVar27;
                puVar18[4] = uVar13;
                *(undefined8 *)(lVar1 + -0x20) = uVar24;
                *(undefined8 *)(lVar1 + -0x28) = uVar23;
                *(undefined8 *)(lVar1 + -0x10) = uVar26;
                *(undefined8 *)(lVar1 + -0x18) = uVar25;
                *(undefined8 *)(lVar1 + -8) = uVar12;
              }
              lVar22 = lVar22 + 1;
              lVar21 = lVar21 + -0x28;
              lVar17 = lVar17 + 0x28;
            } while (lVar22 < lVar11);
          }
        }
      }
      lVar22 = param_3[1];
      lVar17 = lVar20;
      if (lVar20 < lVar22) {
        if (SBORROW8(lVar20,lVar16)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0264);
          (*pcVar2)();
        }
        if (lVar20 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0268);
            (*pcVar2)();
          }
          lVar11 = lVar16 + param_4;
          if (lVar22 <= lVar16 + param_4) {
            lVar11 = lVar22;
          }
          if (lVar11 < lVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e026c);
            (*pcVar2)();
          }
          if (lVar20 != lVar11) {
            lVar21 = *param_3;
            FUN_100026df4();
            puVar18 = (undefined8 *)(lVar21 + lVar20 * 0x28 + -0x28);
            lVar22 = lVar16 - lVar20;
            NVar5.unknown = NVar6.unknown;
            puVar19 = puVar18;
            lVar10 = lVar22;
LAB_1002dff90:
            do {
              NVar5 = (extension_Foundation)::Swift::StringProtocol::
                      _localizedCaseInsensitiveCompare
                                (NVar5.unknown,puVar15,puVar15,NVar6.unknown,NVar6.unknown);
              if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0274);
                  (*pcVar2)();
                }
                uVar12 = puVar18[6];
                uVar23 = puVar18[7];
                uVar24 = puVar18[5];
                puVar18[6] = puVar18[1];
                puVar18[5] = *puVar18;
                uVar13 = puVar18[8];
                uVar25 = puVar18[9];
                puVar18[8] = puVar18[3];
                puVar18[7] = puVar18[2];
                puVar18[9] = puVar18[4];
                *puVar18 = uVar24;
                puVar18[1] = uVar12;
                puVar18[2] = uVar23;
                puVar18[3] = uVar13;
                puVar18[4] = uVar25;
                puVar18 = puVar18 + -5;
                bVar3 = lVar22 != -1;
                lVar22 = lVar22 + 1;
                if (bVar3) goto LAB_1002dff90;
              }
              lVar20 = lVar20 + 1;
              puVar18 = puVar19 + 5;
              lVar22 = lVar10 + -1;
              lVar17 = lVar11;
              puVar19 = puVar18;
              lVar10 = lVar22;
            } while (lVar20 != lVar11);
          }
        }
      }
      puVar9 = local_58;
      if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0258);
        (*pcVar2)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar14 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10026486c(puVar9,uVar14 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
      *(long *)(puVar9 + uVar14 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar9 + uVar14 * 0x10 + 0x28) = lVar17;
      local_58 = puVar9;
      if (*param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e028c);
        (*pcVar2)();
      }
      ppuVar4 = &local_58;
      FUN_1002e03b0(ppuVar4,*param_1,param_3);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_1002e0228;
      lVar22 = param_3[1];
      lVar16 = lVar17;
    } while (lVar17 < lVar22);
  }
  puVar9 = local_58;
  puVar15 = *param_1;
  if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0294);
    (*pcVar2)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  uVar14 = *(ulong *)(puVar9 + 0x10);
  while (local_58 = puVar9, 1 < uVar14) {
    lVar22 = *param_3;
    if (lVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0290);
      (*pcVar2)();
    }
    lVar20 = uVar14 - 1;
    lVar17 = *(long *)(puVar9 + uVar14 * 0x10);
    lVar16 = *(long *)(puVar9 + lVar20 * 0x10 + 0x28);
    FUN_1002e0620(lVar22 + lVar17 * 0x28,lVar22 + *(long *)(puVar9 + lVar20 * 0x10 + 0x20) * 0x28,
                  lVar22 + lVar16 * 0x28,puVar15);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar17) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e025c);
      (*pcVar2)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0260);
      (*pcVar2)();
    }
    *(long *)(puVar9 + uVar14 * 0x10) = lVar17;
    *(long *)((long)(puVar9 + uVar14 * 0x10) + 8) = lVar16;
    local_58 = puVar9;
    FUN_10026503c(lVar20);
    puVar9 = local_58;
    uVar14 = *(ulong *)(local_58 + 0x10);
  }
LAB_1002e0228:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

