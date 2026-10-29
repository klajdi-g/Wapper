// rea decompile_all
// name: FUN_1002af910
// address: 0x1002af910
// body: available
// range: 0x1002af910-0x1002afe7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002af910(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long unaff_x21;
  long *plVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined1 auStack_d0 [8];
  long *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long *local_78;
  long local_70;
  undefined *local_68;
  undefined *local_58;
  
  puVar7 = &DAT_1005564c8;
  FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
  local_a0 = *(long *)(puVar7 + -8);
  local_68 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  puVar20 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_98 = (long)puVar20 - extraout_x12;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar8 = param_3[1];
  local_a8 = param_3;
  if (0 < lVar8) {
    local_b8 = unaff_x21;
    lVar9 = 0;
    local_c8 = param_1;
    local_b0 = param_4;
    do {
      lVar13 = lVar9 + 1;
      if (lVar13 < lVar8) {
        lVar25 = *param_3;
        lVar22 = *(long *)(local_a0 + 0x48);
        lVar14 = lVar22 * lVar13;
        lVar10 = *(long *)(lVar25 + lVar14);
        lVar12 = *(long *)(lVar25 + lVar22 * lVar9);
        lVar19 = lVar9 + 2;
        lVar21 = lVar25;
        do {
          lVar15 = lVar19;
          lVar13 = lVar8;
          if (lVar8 == lVar15) break;
          plVar18 = (long *)(lVar21 + lVar22 * (lVar9 + 2));
          plVar23 = (long *)(lVar21 + lVar14);
          lVar21 = lVar21 + lVar22;
          lVar19 = lVar15 + 1;
          lVar13 = lVar15;
        } while (lVar10 < lVar12 != *plVar23 <= *plVar18);
        if (lVar10 < lVar12) {
          if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe54);
            (*pcVar3)();
          }
          if (lVar9 < lVar13) {
            lVar10 = 0;
            lVar19 = lVar22 * (lVar13 + -1);
            lVar21 = lVar13 * lVar22;
            lVar8 = lVar9 * lVar22;
            local_c0 = lVar9;
            local_70 = lVar13;
            do {
              if (lVar9 != lVar13 + lVar10 + -1) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe74);
                  (*pcVar3)();
                }
                uVar17 = lVar25 + lVar8;
                FUN_100007e1c(uVar17,local_98,&DAT_1005564c8,&DAT_10042a380);
                if ((lVar8 < lVar19) || ((ulong)(lVar25 + lVar21) <= uVar17)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar17,lVar25 + lVar19,1,local_68);
                }
                else if (lVar22 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar17,lVar25 + lVar19,1,local_68);
                }
                FUN_100007e1c(local_98,lVar25 + lVar19,&DAT_1005564c8,&DAT_10042a380);
                lVar13 = local_70;
              }
              lVar9 = lVar9 + 1;
              lVar10 = lVar10 + -1;
              lVar19 = lVar19 - lVar22;
              lVar21 = lVar21 - lVar22;
              lVar8 = lVar8 + lVar22;
            } while (lVar9 < lVar13 + lVar10);
            lVar8 = local_a8[1];
            param_3 = local_a8;
            param_1 = local_c8;
            lVar9 = local_c0;
          }
        }
      }
      lVar21 = local_b8;
      if (lVar13 < lVar8) {
        if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe50);
          (*pcVar3)();
        }
        if (lVar13 - lVar9 < local_b0) {
          if (SCARRY8(lVar9,local_b0)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe58);
            (*pcVar3)();
          }
          lVar19 = lVar9 + local_b0;
          if (lVar8 <= lVar9 + local_b0) {
            lVar19 = lVar8;
          }
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe5c);
            (*pcVar3)();
          }
          if (lVar13 != lVar19) {
            lVar12 = *param_3;
            local_90 = *(long *)(local_a0 + 0x48);
            plVar18 = (long *)(lVar12 + local_90 * (lVar13 + -1));
            lVar14 = -local_90;
            lVar8 = lVar9 - lVar13;
            plVar23 = (long *)(lVar12 + lVar13 * local_90);
            local_c0 = lVar9;
            lStack_88 = lVar19;
            lVar19 = lVar8;
            plVar2 = plVar18;
            lVar10 = lVar13;
            plVar24 = plVar23;
LAB_1002afbf0:
            do {
              local_70 = lVar10;
              local_78 = plVar2;
              local_80 = lVar19;
              if (*plVar23 < *plVar18) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe60);
                  (*pcVar3)();
                }
                FUN_100007e1c(plVar23,puVar20,&DAT_1005564c8,&DAT_10042a380);
                _swift_arrayInitWithTakeFrontToBack(plVar23,plVar18,1,local_68);
                FUN_100007e1c(puVar20,plVar18,&DAT_1005564c8,&DAT_10042a380);
                plVar18 = (long *)((long)plVar18 + lVar14);
                plVar23 = (long *)((long)plVar23 + lVar14);
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                lVar19 = local_80;
                plVar2 = local_78;
                lVar10 = local_70;
                if (bVar4) goto LAB_1002afbf0;
              }
              plVar18 = (long *)((long)local_78 + local_90);
              lVar8 = local_80 + -1;
              plVar23 = (long *)((long)plVar24 + local_90);
              lVar13 = lStack_88;
              param_3 = local_a8;
              param_1 = local_c8;
              lVar21 = local_b8;
              lVar9 = local_c0;
              lVar19 = lVar8;
              plVar2 = plVar18;
              lVar10 = local_70 + 1;
              plVar24 = plVar23;
            } while (local_70 + 1 != lStack_88);
          }
        }
      }
      puVar7 = local_58;
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe40);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar17 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar17) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10026486c(puVar7,uVar17 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar17 + 1;
      *(long *)(puVar7 + uVar17 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar17 * 0x10 + 0x28) = lVar13;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe78);
        (*pcVar3)();
      }
      FUN_1002b08c8(&local_58,*param_1,param_3);
      puVar7 = local_58;
      if (lVar21 != 0) goto LAB_1002afe10;
      lVar8 = param_3[1];
      local_b8 = lVar21;
      lVar9 = lVar13;
    } while (lVar13 < lVar8);
    unaff_x21 = 0;
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe80);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100265268();
  }
  puVar16 = (ulong *)(puVar7 + 0x10);
  uVar17 = *puVar16;
  while( true ) {
    if (uVar17 < 2) {
      _swift_bridgeObjectRelease(puVar7);
      return;
    }
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe7c);
      (*pcVar3)();
    }
    plVar18 = (long *)(puVar7 + uVar17 * 0x10);
    lVar21 = *plVar18;
    puVar1 = puVar16 + uVar17 * 2;
    uVar11 = puVar1[1];
    lVar13 = *(long *)(local_a0 + 0x48);
    FUN_1002b0dbc(lVar9 + lVar13 * lVar21,lVar9 + lVar13 * *puVar1,lVar9 + lVar13 * uVar11,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe44);
      (*pcVar3)();
    }
    if (*puVar16 <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe48);
      (*pcVar3)();
    }
    *plVar18 = lVar21;
    plVar18[1] = uVar11;
    uVar11 = *puVar16;
    lVar9 = uVar11 - uVar17;
    if (uVar11 < uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002afe4c);
      (*pcVar3)();
    }
    uVar17 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar16 = uVar17;
    param_3 = local_a8;
  }
LAB_1002afe10:
  local_58 = puVar7;
  _swift_bridgeObjectRelease(local_58);
  return;
}

