// rea decompile_all
// name: FUN_1002aa3d4
// address: 0x1002aa3d4
// body: available
// range: 0x1002aa3d4-0x1002aa903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002aa3d4(long *param_1,undefined8 param_2,long *param_3,long param_4)

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
  long extraout_x12;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 auStack_c0 [8];
  long *local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined *local_58;
  
  lVar6 = 0;
  FUN_10040211c();
  local_a0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  puVar23 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_88 = (long)puVar23 - extraout_x12;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar11 = param_3[1];
  local_a8 = param_3;
  if (0 < lVar11) {
    lVar15 = 0;
    local_b0 = unaff_x21;
    local_b8 = param_1;
    local_98 = param_4;
    do {
      lVar24 = lVar15 + 1;
      local_90 = lVar15;
      if (lVar24 < lVar11) {
        lVar17 = *param_3;
        lVar10 = *(long *)(local_a0 + 0x48);
        lVar16 = lVar10 * lVar24;
        lVar18 = lVar17 + *(int *)(lVar6 + 0x20);
        lVar12 = *(long *)(lVar18 + lVar16);
        lVar14 = *(long *)(lVar18 + lVar10 * lVar15);
        lVar22 = lVar15 + 2;
        do {
          lVar20 = lVar22;
          lVar24 = lVar11;
          if (lVar11 == lVar20) break;
          plVar1 = (long *)(lVar18 + lVar10 * (lVar15 + 2));
          plVar2 = (long *)(lVar18 + lVar16);
          lVar18 = lVar18 + lVar10;
          lVar22 = lVar20 + 1;
          lVar24 = lVar20;
        } while (lVar14 < lVar12 != *plVar1 <= *plVar2);
        if (lVar12 <= lVar14) goto joined_r0x0001002aa5f8;
        if (lVar24 < lVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8d8);
          (*pcVar4)();
        }
        if (lVar24 <= lVar15) goto joined_r0x0001002aa5f8;
        lVar12 = 0;
        lVar18 = lVar10 * (lVar24 + -1);
        lVar22 = lVar24 * lVar10;
        lVar11 = lVar15 * lVar10;
        local_70 = lVar10;
        lStack_68 = lVar24;
        do {
          if (lVar15 != lVar24 + lVar12 + -1) {
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8f8);
              (*pcVar4)();
            }
            uVar21 = lVar17 + lVar11;
            FUN_10002f198(uVar21,local_88);
            if ((lVar11 < lVar18) || ((ulong)(lVar17 + lVar22) <= uVar21)) {
              _swift_arrayInitWithTakeFrontToBack(uVar21,lVar17 + lVar18,1,lVar6);
            }
            else if (local_70 != 0) {
              _swift_arrayInitWithTakeBackToFront(uVar21,lVar17 + lVar18,1,lVar6);
            }
            FUN_10002f198(local_88,lVar17 + lVar18);
            lVar10 = local_70;
            lVar24 = lStack_68;
          }
          lVar15 = lVar15 + 1;
          lVar12 = lVar12 + -1;
          lVar18 = lVar18 - lVar10;
          lVar22 = lVar22 - lVar10;
          lVar11 = lVar11 + lVar10;
        } while (lVar15 < lVar24 + lVar12);
        lVar11 = local_a8[1];
        param_1 = local_b8;
        param_3 = local_a8;
        lVar18 = local_b0;
        if (lVar24 < lVar11) goto LAB_1002aa5fc;
      }
      else {
joined_r0x0001002aa5f8:
        lVar18 = local_b0;
        if (lVar24 < lVar11) {
LAB_1002aa5fc:
          if (SBORROW8(lVar24,local_90)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8d4);
            (*pcVar4)();
          }
          lVar18 = local_b0;
          if (lVar24 - local_90 < local_98) {
            if (SCARRY8(local_90,local_98)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8dc);
              (*pcVar4)();
            }
            lVar15 = local_90 + local_98;
            if (lVar11 <= local_90 + local_98) {
              lVar15 = lVar11;
            }
            if (lVar15 < local_90) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8e0);
              (*pcVar4)();
            }
            if (lVar24 != lVar15) {
              lVar17 = *param_3;
              local_80 = *(long *)(local_a0 + 0x48);
              lVar10 = lVar17 + local_80 * (lVar24 + -1);
              lVar20 = -local_80;
              lVar11 = local_90 - lVar24;
              lVar22 = lVar17 + lVar24 * local_80;
              lStack_78 = lVar15;
              lVar15 = lVar10;
              lVar12 = lVar24;
              lVar14 = lVar11;
              lVar16 = lVar22;
LAB_1002aa684:
              do {
                lStack_68 = lVar12;
                local_70 = lVar15;
                if (*(long *)(lVar10 + *(int *)(lVar6 + 0x20)) <
                    *(long *)(lVar22 + *(int *)(lVar6 + 0x20))) {
                  if (lVar17 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8e4);
                    (*pcVar4)();
                  }
                  FUN_10002f198(lVar22,puVar23);
                  _swift_arrayInitWithTakeFrontToBack(lVar22,lVar10,1,lVar6);
                  FUN_10002f198(puVar23,lVar10);
                  lVar10 = lVar10 + lVar20;
                  lVar22 = lVar22 + lVar20;
                  bVar5 = lVar11 != -1;
                  lVar11 = lVar11 + 1;
                  lVar15 = local_70;
                  lVar12 = lStack_68;
                  if (bVar5) goto LAB_1002aa684;
                }
                lVar10 = local_70 + local_80;
                lVar11 = lVar14 + -1;
                lVar22 = lVar16 + local_80;
                lVar24 = lStack_78;
                param_1 = local_b8;
                param_3 = local_a8;
                lVar18 = local_b0;
                lVar15 = lVar10;
                lVar12 = lStack_68 + 1;
                lVar14 = lVar11;
                lVar16 = lVar22;
              } while (lStack_68 + 1 != lStack_78);
            }
          }
        }
      }
      puVar9 = local_58;
      if (lVar24 < local_90) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8c4);
        (*pcVar4)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar21 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10026486c(puVar9,uVar21 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = local_90;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar24;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8fc);
        (*pcVar4)();
      }
      FUN_1002aaa54(&local_58,*param_1,param_3);
      puVar9 = local_58;
      puVar7 = local_58;
      if (lVar18 != 0) goto LAB_1002aa894;
      lVar11 = param_3[1];
      lVar15 = lVar24;
      local_b0 = lVar18;
    } while (lVar24 < lVar11);
    unaff_x21 = 0;
  }
  puVar9 = local_58;
  lVar6 = *param_1;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa904);
    (*pcVar4)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  puVar19 = (ulong *)(puVar9 + 0x10);
  uVar21 = *puVar19;
  while (puVar7 = local_58, 1 < uVar21) {
    lVar11 = *local_a8;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa900);
      (*pcVar4)();
    }
    plVar1 = (long *)(puVar9 + uVar21 * 0x10);
    lVar24 = *plVar1;
    puVar3 = puVar19 + uVar21 * 2;
    uVar13 = puVar3[1];
    lVar15 = *(long *)(local_a0 + 0x48);
    FUN_1002aacd4(lVar11 + lVar15 * lVar24,lVar11 + lVar15 * *puVar3,lVar11 + lVar15 * uVar13,lVar6)
    ;
    puVar7 = puVar9;
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8c8);
      (*pcVar4)();
    }
    if (*puVar19 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8cc);
      (*pcVar4)();
    }
    *plVar1 = lVar24;
    plVar1[1] = uVar13;
    uVar13 = *puVar19;
    lVar11 = uVar13 - uVar21;
    if (uVar13 < uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002aa8d0);
      (*pcVar4)();
    }
    uVar21 = uVar13 - 1;
    _memmove(puVar3,puVar3 + 2,lVar11 * 0x10);
    *puVar19 = uVar21;
  }
LAB_1002aa894:
  local_58 = puVar7;
  _swift_bridgeObjectRelease(puVar9);
  return;
}

