// rea decompile_all
// name: FUN_1003dad68
// address: 0x1003dad68
// body: available
// range: 0x1003dad68-0x1003db41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003dad68(long *param_1,undefined8 param_2,long *param_3,double param_4)

{
  double *pdVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_110 [2];
  long local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90 [2];
  
  lVar5 = 0;
  local_f8 = param_1;
  FUN_10040211c();
  local_f0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  dVar16 = (double)((long)local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (long)dVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_d8 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (lVar17 - extraout_x12_00) - extraout_x12_01;
  local_c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_100 = lVar10 - extraout_x12_02;
  local_90[0] = PTR___swiftEmptyArrayStorage_100524190;
  lVar10 = param_3[1];
  local_e0 = param_3;
  if (0 < lVar10) {
    lVar21 = 0;
    local_e8 = unaff_x21;
    local_110[0] = param_4;
    local_110[1] = dVar16;
    do {
      lVar19 = local_100;
      lVar14 = lVar21 + 1;
      lVar13 = lVar21;
      local_a8 = lVar21;
      if (lVar14 < lVar10) {
        lVar13 = *param_3;
        lVar18 = *(long *)(local_f0 + 0x48);
        lVar15 = lVar13 + lVar18 * lVar14;
        FUN_100029504(lVar13 + lVar18 * lVar21,local_100,FUN_10040211c);
        pdVar1 = (double *)(lVar15 + *(int *)(lVar5 + 0x38));
        dVar22 = 0.0;
        if (*(char *)(pdVar1 + 1) != '\x01') {
          dVar22 = *pdVar1;
        }
        pdVar1 = (double *)(lVar19 + *(int *)(lVar5 + 0x38));
        dVar23 = 0.0;
        if (*(char *)(pdVar1 + 1) != '\x01') {
          dVar23 = *pdVar1;
        }
        FUN_100029548(lVar19,FUN_10040211c);
        lVar11 = lVar10 + -2;
        lVar13 = lVar13 + lVar18 * (lVar21 + 2);
        lVar19 = 1;
        local_a0 = lVar10;
        local_98 = lVar18;
        do {
          lVar10 = local_c0;
          lVar14 = local_a0;
          if (lVar21 == lVar11) goto LAB_1003dafb0;
          FUN_100029504(lVar15,local_c0,FUN_10040211c);
          pdVar1 = (double *)(lVar13 + *(int *)(lVar5 + 0x38));
          dVar16 = 0.0;
          if (*(char *)(pdVar1 + 1) != '\x01') {
            dVar16 = *pdVar1;
          }
          pdVar1 = (double *)(lVar10 + *(int *)(lVar5 + 0x38));
          dVar24 = 0.0;
          if (*(char *)(pdVar1 + 1) != '\x01') {
            dVar24 = *pdVar1;
          }
          FUN_100029548(lVar10,FUN_10040211c);
          lVar11 = lVar11 + -1;
          lVar19 = lVar19 + 1;
          lVar13 = lVar13 + local_98;
          lVar15 = lVar15 + local_98;
          lVar21 = local_a8;
        } while (dVar22 < dVar23 != dVar24 <= dVar16);
        lVar14 = local_a8 + lVar19;
LAB_1003dafb0:
        dVar16 = local_110[1];
        param_3 = local_e0;
        lVar13 = lVar21;
        if (dVar22 < dVar23) {
          if (lVar14 < lVar21) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3f4);
            (*pcVar3)();
          }
          if (lVar21 < lVar14) {
            lVar15 = 0;
            lVar19 = *local_e0;
            lVar11 = local_98 * (lVar14 + -1);
            lVar18 = lVar14 * local_98;
            lVar10 = lVar21 * local_98;
            local_b0 = lVar19;
            local_a0 = lVar14;
            do {
              if (lVar21 != local_a0 + lVar15 + -1) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db414);
                  (*pcVar3)();
                }
                local_b8 = lVar19 + lVar10;
                FUN_100007e64(local_b8,local_d8,FUN_10040211c);
                if ((lVar10 < lVar11) || ((ulong)(local_b0 + lVar18) <= local_b8)) {
                  _swift_arrayInitWithTakeFrontToBack(local_b8,local_b0 + lVar11,1,lVar5);
                }
                else if (local_98 != 0) {
                  _swift_arrayInitWithTakeBackToFront(local_b8,local_b0 + lVar11,1,lVar5);
                }
                FUN_100007e64(local_d8,local_b0 + lVar11,FUN_10040211c);
                lVar19 = local_b0;
              }
              lVar21 = lVar21 + 1;
              lVar15 = lVar15 + -1;
              lVar11 = lVar11 - local_98;
              lVar18 = lVar18 - local_98;
              lVar10 = lVar10 + local_98;
              param_3 = local_e0;
              lVar14 = local_a0;
              lVar13 = local_a8;
            } while (lVar21 < local_a0 + lVar15);
          }
        }
      }
      lVar10 = param_3[1];
      lVar21 = lVar14;
      lVar19 = local_e8;
      if (lVar14 < lVar10) {
        if (SBORROW8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3f0);
          (*pcVar3)();
        }
        if (lVar14 - lVar13 < (long)local_110[0]) {
          if (SCARRY8(lVar13,(long)local_110[0])) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3f8);
            (*pcVar3)();
          }
          lVar15 = lVar13 + (long)local_110[0];
          if (lVar10 <= lVar13 + (long)local_110[0]) {
            lVar15 = lVar10;
          }
          if (lVar15 < lVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3fc);
            (*pcVar3)();
          }
          if (lVar14 != lVar15) {
            lVar12 = *param_3;
            local_d0 = *(long *)(local_f0 + 0x48);
            lVar18 = lVar12 + local_d0 * (lVar14 + -1);
            lVar20 = -local_d0;
            lVar10 = lVar13 - lVar14;
            uVar9 = lVar12 + lVar14 * local_d0;
            local_c8 = lVar15;
            uVar2 = uVar9;
            lVar15 = lVar10;
            lVar11 = lVar18;
LAB_1003db168:
            do {
              local_98 = lVar11;
              local_a0 = lVar14;
              local_b0 = lVar15;
              local_b8 = uVar2;
              FUN_100029504(lVar18,lVar17,FUN_10040211c);
              pdVar1 = (double *)(uVar9 + (long)*(int *)(lVar5 + 0x38));
              dVar22 = 0.0;
              if (*(char *)(pdVar1 + 1) != '\x01') {
                dVar22 = *pdVar1;
              }
              pdVar1 = (double *)(lVar17 + *(int *)(lVar5 + 0x38));
              dVar23 = 0.0;
              if (*(char *)(pdVar1 + 1) != '\x01') {
                dVar23 = *pdVar1;
              }
              FUN_100029548(lVar17,FUN_10040211c);
              if (dVar22 < dVar23) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db400);
                  (*pcVar3)();
                }
                FUN_100007e64(uVar9,dVar16,FUN_10040211c);
                _swift_arrayInitWithTakeFrontToBack(uVar9,lVar18,1,lVar5);
                FUN_100007e64(dVar16,lVar18,FUN_10040211c);
                lVar18 = lVar18 + lVar20;
                uVar9 = uVar9 + lVar20;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                uVar2 = local_b8;
                lVar15 = local_b0;
                lVar14 = local_a0;
                lVar11 = local_98;
                if (bVar4) goto LAB_1003db168;
              }
              lVar18 = local_98 + local_d0;
              lVar10 = local_b0 + -1;
              uVar9 = local_b8 + local_d0;
              lVar21 = local_c8;
              lVar19 = local_e8;
              lVar13 = local_a8;
              uVar2 = uVar9;
              lVar15 = lVar10;
              lVar14 = local_a0 + 1;
              lVar11 = lVar18;
            } while (local_a0 + 1 != local_c8);
          }
        }
      }
      puVar8 = local_90[0];
      if (lVar21 < lVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3e4);
        (*pcVar3)();
      }
      puVar6 = local_90[0];
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar9 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar8,uVar9 + 1,1,puVar7);
      }
      param_3 = local_e0;
      *(ulong *)(puVar8 + 0x10) = uVar9 + 1;
      *(long *)(puVar8 + uVar9 * 0x10 + 0x20) = local_a8;
      *(long *)(puVar8 + uVar9 * 0x10 + 0x28) = lVar21;
      local_90[0] = puVar8;
      if (*local_f8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db418);
        (*pcVar3)();
      }
      FUN_1003e01c4(local_90,*local_f8,local_e0,FUN_1003e09fc);
      puVar8 = local_90[0];
      if (lVar19 != 0) goto LAB_1003db3a8;
      lVar10 = param_3[1];
      local_e8 = lVar19;
    } while (lVar21 < lVar10);
    unaff_x21 = 0;
  }
  puVar8 = local_90[0];
  lVar5 = *local_f8;
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db420);
    (*pcVar3)();
  }
  puVar6 = local_90[0];
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100265268();
  }
  uVar9 = *(ulong *)(puVar8 + 0x10);
  while (local_90[0] = puVar8, 1 < uVar9) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db41c);
      (*pcVar3)();
    }
    lVar14 = uVar9 - 1;
    lVar19 = *(long *)(puVar8 + uVar9 * 0x10);
    lVar17 = *(long *)(puVar8 + lVar14 * 0x10 + 0x28);
    lVar21 = *(long *)(local_f0 + 0x48);
    FUN_1003e09fc(lVar10 + lVar21 * lVar19,
                  lVar10 + lVar21 * *(long *)(puVar8 + lVar14 * 0x10 + 0x20),
                  lVar10 + lVar21 * lVar17,lVar5);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3e8);
      (*pcVar3)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003db3ec);
      (*pcVar3)();
    }
    *(long *)(puVar8 + uVar9 * 0x10) = lVar19;
    *(long *)((long)(puVar8 + uVar9 * 0x10) + 8) = lVar17;
    local_90[0] = puVar8;
    FUN_10026503c(lVar14);
    puVar8 = local_90[0];
    param_3 = local_e0;
    uVar9 = *(ulong *)(local_90[0] + 0x10);
  }
LAB_1003db3a8:
  _swift_bridgeObjectRelease(puVar8);
  return;
}

