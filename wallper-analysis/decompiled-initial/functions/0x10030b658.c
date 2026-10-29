// rea decompile_all
// name: FUN_10030b658
// address: 0x10030b658
// body: available
// range: 0x10030b658-0x10030bb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030b658(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ID *pIVar13;
  long unaff_x21;
  ID IVar14;
  ID IVar15;
  ID *pIVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double extraout_d0;
  double dVar20;
  double extraout_d0_00;
  double dVar21;
  double extraout_d0_01;
  double dVar22;
  double extraout_d0_02;
  double dVar23;
  double extraout_d0_03;
  double extraout_d0_04;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar7 = 0;
    do {
      lVar17 = lVar7 + 1;
      if (lVar17 < lVar18) {
        pIVar13 = (ID *)(*param_3 + lVar7 * 8);
        pIVar16 = pIVar13 + 2;
        IVar14 = *pIVar13;
        objc_stub::frame(*(ID *)(*param_3 + lVar17 * 8));
        dVar20 = extraout_d0;
        _CGRectGetMinX();
        objc_stub::frame(IVar14);
        dVar21 = extraout_d0_00;
        _CGRectGetMinX();
        lVar10 = lVar7 + 2;
        do {
          lVar6 = lVar10;
          lVar17 = lVar18;
          if (lVar18 == lVar6) break;
          IVar14 = pIVar16[-1];
          objc_stub::frame(*pIVar16);
          dVar22 = extraout_d0_01;
          _CGRectGetMinX();
          objc_stub::frame(IVar14);
          dVar23 = extraout_d0_02;
          _CGRectGetMinX();
          pIVar16 = pIVar16 + 1;
          lVar10 = lVar6 + 1;
          lVar17 = lVar6;
        } while (dVar20 < dVar21 != dVar23 <= dVar22);
        if (dVar20 < dVar21) {
          if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bad8);
            (*pcVar1)();
          }
          if (lVar7 < lVar17) {
            lVar6 = *param_3;
            puVar8 = (undefined8 *)(lVar6 + lVar17 * 8);
            puVar9 = (undefined8 *)(lVar6 + lVar7 * 8);
            lVar10 = lVar17;
            lVar18 = lVar7;
            do {
              puVar8 = puVar8 + -1;
              lVar10 = lVar10 + -1;
              if (lVar18 != lVar10) {
                if (lVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10030baf8);
                  (*pcVar1)();
                }
                uVar11 = *puVar9;
                *puVar9 = *puVar8;
                *puVar8 = uVar11;
              }
              lVar18 = lVar18 + 1;
              puVar9 = puVar9 + 1;
            } while (lVar18 < lVar10);
          }
        }
      }
      lVar18 = param_3[1];
      lVar10 = lVar17;
      if (lVar17 < lVar18) {
        if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bad4);
          (*pcVar1)();
        }
        if (lVar17 - lVar7 < param_4) {
          if (SCARRY8(lVar7,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10030badc);
            (*pcVar1)();
          }
          lVar6 = lVar7 + param_4;
          if (lVar18 <= lVar7 + param_4) {
            lVar6 = lVar18;
          }
          if (lVar6 < lVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bae0);
            (*pcVar1)();
          }
          if (lVar17 != lVar6) {
            lVar19 = *param_3;
            pIVar16 = (ID *)(lVar19 + lVar17 * 8 + -8);
            lVar18 = lVar7 - lVar17;
            do {
              IVar14 = *(ID *)(lVar19 + lVar17 * 8);
              pIVar13 = pIVar16;
              lVar10 = lVar18;
              do {
                IVar15 = *pIVar13;
                objc_stub::frame(IVar14);
                dVar20 = extraout_d0_03;
                _CGRectGetMinX();
                objc_stub::frame(IVar15);
                dVar21 = extraout_d0_04;
                _CGRectGetMinX();
                if (dVar21 <= dVar20) break;
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bae4);
                  (*pcVar1)();
                }
                IVar15 = *pIVar13;
                IVar14 = pIVar13[1];
                *pIVar13 = IVar14;
                pIVar13[1] = IVar15;
                bVar2 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                pIVar13 = pIVar13 + -1;
              } while (bVar2);
              lVar17 = lVar17 + 1;
              pIVar16 = pIVar16 + 1;
              lVar18 = lVar18 + -1;
              lVar10 = lVar6;
            } while (lVar17 != lVar6);
          }
        }
      }
      puVar5 = local_58;
      if (lVar10 < lVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bac8);
        (*pcVar1)();
      }
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar12 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_10026486c(puVar5,uVar12 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar12 + 1;
      *(long *)(puVar5 + uVar12 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar5 + uVar12 * 0x10 + 0x28) = lVar10;
      local_58 = puVar5;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bafc);
        (*pcVar1)();
      }
      FUN_10030bbf4(&local_58,*param_1,param_3);
      puVar5 = local_58;
      if (unaff_x21 != 0) goto LAB_10030ba90;
      lVar18 = param_3[1];
      lVar7 = lVar10;
    } while (lVar10 < lVar18);
  }
  puVar5 = local_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bb04);
    (*pcVar1)();
  }
  puVar3 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar3 & 1) == 0) {
    FUN_100265268();
  }
  uVar12 = *(ulong *)(puVar5 + 0x10);
  while (local_58 = puVar5, 1 < uVar12) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bb00);
      (*pcVar1)();
    }
    lVar6 = uVar12 - 1;
    lVar10 = *(long *)(puVar5 + uVar12 * 0x10);
    lVar17 = *(long *)(puVar5 + lVar6 * 0x10 + 0x28);
    FUN_10030be5c(lVar7 + lVar10 * 8,lVar7 + *(long *)(puVar5 + lVar6 * 0x10 + 0x20) * 8,
                  lVar7 + lVar17 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bacc);
      (*pcVar1)();
    }
    puVar3 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar5 + 0x10) <= uVar12 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bad0);
      (*pcVar1)();
    }
    *(long *)(puVar5 + uVar12 * 0x10) = lVar10;
    *(long *)((long)(puVar5 + uVar12 * 0x10) + 8) = lVar17;
    local_58 = puVar5;
    FUN_10026503c(lVar6);
    puVar5 = local_58;
    uVar12 = *(ulong *)(local_58 + 0x10);
  }
LAB_10030ba90:
  _swift_bridgeObjectRelease(puVar5);
  return;
}

