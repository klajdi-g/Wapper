// rea decompile_all
// name: FUN_1003da80c
// address: 0x1003da80c
// body: available
// range: 0x1003da80c-0x1003dad67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003da80c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long unaff_x21;
  long lVar23;
  long lVar24;
  long *local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  undefined *local_58;
  
  lVar6 = 0;
  FUN_10040211c();
  local_a0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  lVar15 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_90 = lVar15 - extraout_x12;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar11 = param_3[1];
  local_b0 = param_3;
  if (0 < lVar11) {
    lVar23 = 0;
    local_b8 = unaff_x21;
    local_c0 = param_1;
    local_a8 = param_4;
    do {
      lVar17 = lVar23 + 1;
      local_98 = lVar23;
      if (lVar17 < lVar11) {
        lVar18 = *param_3;
        lVar10 = *(long *)(local_a0 + 0x48);
        lVar16 = lVar10 * lVar17;
        lVar19 = lVar18 + *(int *)(lVar6 + 0x20);
        lVar12 = *(long *)(lVar19 + lVar16);
        lVar14 = *(long *)(lVar19 + lVar10 * lVar23);
        lVar24 = lVar23 + 2;
        do {
          lVar21 = lVar24;
          lVar17 = lVar11;
          if (lVar11 == lVar21) break;
          plVar1 = (long *)(lVar19 + lVar10 * (lVar23 + 2));
          plVar2 = (long *)(lVar19 + lVar16);
          lVar19 = lVar19 + lVar10;
          lVar24 = lVar21 + 1;
          lVar17 = lVar21;
        } while (lVar12 < lVar14 != *plVar2 <= *plVar1);
        if (lVar12 < lVar14) {
          if (lVar17 < lVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad3c);
            (*pcVar4)();
          }
          if (lVar23 < lVar17) {
            lVar19 = 0;
            lVar24 = lVar10 * (lVar17 + -1);
            lVar12 = lVar17 * lVar10;
            lVar11 = lVar23 * lVar10;
            local_70 = lVar10;
            lStack_68 = lVar17;
            do {
              if (lVar23 != lVar17 + lVar19 + -1) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad5c);
                  (*pcVar4)();
                }
                uVar22 = lVar18 + lVar11;
                FUN_100007e64(uVar22,local_90,FUN_10040211c);
                if ((lVar11 < lVar24) || ((ulong)(lVar18 + lVar12) <= uVar22)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar22,lVar18 + lVar24,1,lVar6);
                }
                else if (local_70 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar22,lVar18 + lVar24,1,lVar6);
                }
                FUN_100007e64(local_90,lVar18 + lVar24,FUN_10040211c);
                lVar10 = local_70;
                lVar17 = lStack_68;
              }
              lVar23 = lVar23 + 1;
              lVar19 = lVar19 + -1;
              lVar24 = lVar24 - lVar10;
              lVar12 = lVar12 - lVar10;
              lVar11 = lVar11 + lVar10;
            } while (lVar23 < lVar17 + lVar19);
            lVar11 = local_b0[1];
            param_1 = local_c0;
            param_3 = local_b0;
          }
        }
      }
      lVar23 = lVar17;
      lVar19 = local_b8;
      if (lVar17 < lVar11) {
        if (SBORROW8(lVar17,local_98)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad38);
          (*pcVar4)();
        }
        if (lVar17 - local_98 < local_a8) {
          if (SCARRY8(local_98,local_a8)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad40);
            (*pcVar4)();
          }
          lVar10 = local_98 + local_a8;
          if (lVar11 <= local_98 + local_a8) {
            lVar10 = lVar11;
          }
          if (lVar10 < local_98) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad44);
            (*pcVar4)();
          }
          if (lVar17 != lVar10) {
            lVar18 = *param_3;
            local_88 = *(long *)(local_a0 + 0x48);
            lVar24 = lVar18 + local_88 * (lVar17 + -1);
            lVar21 = -local_88;
            lVar11 = local_98 - lVar17;
            lVar12 = lVar18 + lVar17 * local_88;
            lStack_80 = lVar10;
            lVar10 = lVar11;
            lVar14 = lVar24;
            lVar16 = lVar12;
LAB_1003daad4:
            do {
              lStack_68 = lVar17;
              local_70 = lVar14;
              local_78 = lVar10;
              if (*(long *)(lVar12 + *(int *)(lVar6 + 0x20)) <
                  *(long *)(lVar24 + *(int *)(lVar6 + 0x20))) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad48);
                  (*pcVar4)();
                }
                FUN_100007e64(lVar12,lVar15,FUN_10040211c);
                _swift_arrayInitWithTakeFrontToBack(lVar12,lVar24,1,lVar6);
                FUN_100007e64(lVar15,lVar24,FUN_10040211c);
                lVar24 = lVar24 + lVar21;
                lVar12 = lVar12 + lVar21;
                bVar5 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                lVar10 = local_78;
                lVar14 = local_70;
                lVar17 = lStack_68;
                if (bVar5) goto LAB_1003daad4;
              }
              lVar24 = local_70 + local_88;
              lVar11 = local_78 + -1;
              lVar12 = lVar16 + local_88;
              lVar23 = lStack_80;
              param_1 = local_c0;
              param_3 = local_b0;
              lVar19 = local_b8;
              lVar10 = lVar11;
              lVar14 = lVar24;
              lVar17 = lStack_68 + 1;
              lVar16 = lVar12;
            } while (lStack_68 + 1 != lStack_80);
          }
        }
      }
      puVar9 = local_58;
      if (lVar23 < local_98) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad28);
        (*pcVar4)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar22 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar22) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10026486c(puVar9,uVar22 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
      *(long *)(puVar9 + uVar22 * 0x10 + 0x20) = local_98;
      *(long *)(puVar9 + uVar22 * 0x10 + 0x28) = lVar23;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad60);
        (*pcVar4)();
      }
      FUN_1003e01c4(&local_58,*param_1,param_3,FUN_1003e06b0);
      puVar9 = local_58;
      if (lVar19 != 0) goto LAB_1003dacf8;
      lVar11 = param_3[1];
      local_b8 = lVar19;
    } while (lVar23 < lVar11);
    unaff_x21 = 0;
  }
  puVar9 = local_58;
  lVar6 = *param_1;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad68);
    (*pcVar4)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  puVar20 = (ulong *)(puVar9 + 0x10);
  uVar22 = *puVar20;
  while( true ) {
    if (uVar22 < 2) {
      _swift_bridgeObjectRelease(puVar9);
      return;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad64);
      (*pcVar4)();
    }
    plVar1 = (long *)(puVar9 + uVar22 * 0x10);
    lVar23 = *plVar1;
    puVar3 = puVar20 + uVar22 * 2;
    uVar13 = puVar3[1];
    lVar15 = *(long *)(local_a0 + 0x48);
    FUN_1003e06b0(lVar11 + lVar15 * lVar23,lVar11 + lVar15 * *puVar3,lVar11 + lVar15 * uVar13,lVar6)
    ;
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad2c);
      (*pcVar4)();
    }
    if (*puVar20 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad30);
      (*pcVar4)();
    }
    *plVar1 = lVar23;
    plVar1[1] = uVar13;
    uVar13 = *puVar20;
    lVar11 = uVar13 - uVar22;
    if (uVar13 < uVar22) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003dad34);
      (*pcVar4)();
    }
    uVar22 = uVar13 - 1;
    _memmove(puVar3,puVar3 + 2,lVar11 * 0x10);
    *puVar20 = uVar22;
    param_3 = local_b0;
  }
LAB_1003dacf8:
  local_58 = puVar9;
  _swift_bridgeObjectRelease(local_58);
  return;
}

