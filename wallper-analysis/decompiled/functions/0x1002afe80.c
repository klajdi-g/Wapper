// rea decompile_all
// name: FUN_1002afe80
// address: 0x1002afe80
// body: available
// range: 0x1002afe80-0x1002b053f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002afe80(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_78;
  
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  lVar17 = param_3[1];
  if (0 < lVar17) {
    lVar11 = 0;
    do {
      lVar15 = lVar11 + 1;
      if (lVar15 < lVar17) {
        lVar18 = *param_3;
        puVar5 = (undefined8 *)(lVar18 + lVar15 * 0x10);
        local_98 = *puVar5;
        uVar1 = puVar5[1];
        pdVar6 = (double *)(lVar18 + lVar11 * 0x10);
        local_a8 = *pdVar6;
        dVar23 = pdVar6[1];
        dStack_a0 = dVar23;
        uStack_90 = uVar1;
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRetain(dVar23);
        puVar5 = &local_98;
        FUN_1002af7c4(puVar5,&local_a8);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(dVar23);
        if (unaff_x21 != 0) goto LAB_1002b04d0;
        lVar12 = lVar11 * 0x10;
        plVar19 = (long *)(lVar18 + lVar12 + 0x28);
        lVar18 = lVar11 + 2;
        do {
          lVar10 = lVar18;
          lVar15 = lVar17;
          if (lVar17 == lVar10) break;
          lVar18 = *plVar19;
          lVar20 = plVar19[-2];
          lVar15 = *(long *)(lVar18 + 0x10);
          _swift_bridgeObjectRetain(lVar18);
          _swift_bridgeObjectRetain(lVar20);
          dVar23 = 0.0;
          if (lVar15 != 0) {
            lVar15 = 0x416465696c707061;
            uVar14 = 0;
            FUN_10000464c(0x416465696c707061);
            if ((uVar14 & 1) != 0) {
              FUN_1000280d4(*(long *)(lVar18 + 0x38) + lVar15 * 0x20,&local_98);
              pdVar6 = &local_a8;
              _swift_dynamicCast(pdVar6,&local_98,PTR___type_metadata_for_Any_100524178 + 8,
                                 PTR___type_metadata_for_Swift_Double_100523b90,6);
              dVar23 = local_a8;
              if ((int)pdVar6 == 0) {
                dVar23 = 0.0;
              }
            }
          }
          if (*(long *)(lVar20 + 0x10) == 0) {
LAB_1002aff5c:
            _swift_bridgeObjectRelease(lVar18);
            _swift_bridgeObjectRelease(lVar20);
LAB_1002aff6c:
            dVar24 = 0.0;
          }
          else {
            _swift_bridgeObjectRetain(lVar20);
            lVar15 = 0x416465696c707061;
            uVar14 = 0;
            FUN_10000464c(0x416465696c707061);
            if ((uVar14 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar18);
              _swift_bridgeObjectRelease_n(lVar20,2);
              goto LAB_1002aff6c;
            }
            FUN_1000280d4(*(long *)(lVar20 + 0x38) + lVar15 * 0x20,&local_98);
            _swift_bridgeObjectRelease(lVar20);
            pdVar6 = &local_a8;
            _swift_dynamicCast(pdVar6,&local_98,PTR___type_metadata_for_Any_100524178 + 8,
                               PTR___type_metadata_for_Swift_Double_100523b90,6);
            dVar24 = local_a8;
            if (((ulong)pdVar6 & 1) == 0) goto LAB_1002aff5c;
            _swift_bridgeObjectRelease(lVar18);
            _swift_bridgeObjectRelease(lVar20);
          }
          plVar19 = plVar19 + 2;
          lVar18 = lVar10 + 1;
          lVar15 = lVar10;
        } while ((((uint)puVar5 ^ (uint)(dVar24 <= dVar23)) & 1) != 0);
        if (((ulong)puVar5 & 1) != 0) {
          if (lVar15 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b051c);
            (*pcVar3)();
          }
          if (lVar11 < lVar15) {
            lVar10 = *param_3;
            lVar20 = lVar15 << 4;
            lVar18 = lVar15;
            lVar17 = lVar11;
            do {
              lVar18 = lVar18 + -1;
              if (lVar17 != lVar18) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0534);
                  (*pcVar3)();
                }
                puVar5 = (undefined8 *)(lVar10 + lVar12);
                lVar16 = lVar10 + lVar20;
                uVar1 = *puVar5;
                uVar2 = puVar5[1];
                uVar22 = *(undefined8 *)(lVar16 + -0x10);
                puVar5[1] = *(undefined8 *)(lVar16 + -8);
                *puVar5 = uVar22;
                *(undefined8 *)(lVar16 + -0x10) = uVar1;
                *(undefined8 *)(lVar16 + -8) = uVar2;
              }
              lVar17 = lVar17 + 1;
              lVar20 = lVar20 + -0x10;
              lVar12 = lVar12 + 0x10;
            } while (lVar17 < lVar18);
          }
        }
      }
      lVar17 = param_3[1];
      lVar18 = lVar15;
      if (lVar15 < lVar17) {
        if (SBORROW8(lVar15,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0510);
          (*pcVar3)();
        }
        if (lVar15 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0514);
            (*pcVar3)();
          }
          lVar12 = lVar11 + param_4;
          if (lVar17 <= lVar11 + param_4) {
            lVar12 = lVar17;
          }
          if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0518);
            (*pcVar3)();
          }
          if (lVar15 != lVar12) {
            lVar17 = *param_3;
            puVar5 = (undefined8 *)(lVar17 + lVar15 * 0x10);
            lVar10 = lVar11 - lVar15;
            do {
              lVar20 = *(long *)(lVar17 + lVar15 * 0x10 + 8);
              puVar13 = puVar5;
              lVar18 = lVar10;
              do {
                lVar21 = puVar13[-1];
                lVar16 = *(long *)(lVar20 + 0x10);
                _swift_bridgeObjectRetain(lVar20);
                _swift_bridgeObjectRetain(lVar21);
                dVar23 = 0.0;
                if (lVar16 != 0) {
                  lVar16 = 0x416465696c707061;
                  uVar14 = 0;
                  FUN_10000464c(0x416465696c707061);
                  if ((uVar14 & 1) != 0) {
                    FUN_1000280d4(*(long *)(lVar20 + 0x38) + lVar16 * 0x20,&local_98);
                    pdVar6 = &local_a8;
                    _swift_dynamicCast(pdVar6,&local_98,PTR___type_metadata_for_Any_100524178 + 8,
                                       PTR___type_metadata_for_Swift_Double_100523b90,6);
                    dVar23 = local_a8;
                    if ((int)pdVar6 == 0) {
                      dVar23 = 0.0;
                    }
                  }
                }
                if (*(long *)(lVar21 + 0x10) == 0) {
LAB_1002b02d8:
                  _swift_bridgeObjectRelease(lVar20);
                  _swift_bridgeObjectRelease(lVar21);
joined_r0x0001002b030c:
                  if (0.0 <= dVar23) break;
                }
                else {
                  _swift_bridgeObjectRetain(lVar21);
                  lVar16 = 0x416465696c707061;
                  uVar14 = 0;
                  FUN_10000464c(0x416465696c707061);
                  if ((uVar14 & 1) == 0) {
                    _swift_bridgeObjectRelease(lVar20);
                    _swift_bridgeObjectRelease_n(lVar21,2);
                    goto joined_r0x0001002b030c;
                  }
                  FUN_1000280d4(*(long *)(lVar21 + 0x38) + lVar16 * 0x20,&local_98);
                  _swift_bridgeObjectRelease(lVar21);
                  pdVar6 = &local_a8;
                  _swift_dynamicCast(pdVar6,&local_98,PTR___type_metadata_for_Any_100524178 + 8,
                                     PTR___type_metadata_for_Swift_Double_100523b90,6);
                  dVar24 = local_a8;
                  if (((ulong)pdVar6 & 1) == 0) goto LAB_1002b02d8;
                  _swift_bridgeObjectRelease(lVar20);
                  _swift_bridgeObjectRelease(lVar21);
                  if (dVar24 <= dVar23) break;
                }
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0520);
                  (*pcVar3)();
                }
                uVar1 = *puVar13;
                lVar20 = puVar13[1];
                puVar13[1] = puVar13[-1];
                *puVar13 = puVar13[-2];
                puVar13[-1] = lVar20;
                puVar13 = puVar13 + -2;
                *puVar13 = uVar1;
                bVar4 = lVar18 != -1;
                lVar18 = lVar18 + 1;
              } while (bVar4);
              lVar15 = lVar15 + 1;
              puVar5 = puVar5 + 2;
              lVar10 = lVar10 + -1;
              lVar18 = lVar12;
            } while (lVar15 != lVar12);
          }
        }
      }
      puVar9 = local_78;
      if (lVar18 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0504);
        (*pcVar3)();
      }
      puVar7 = local_78;
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
      *(long *)(puVar9 + uVar14 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar14 * 0x10 + 0x28) = lVar18;
      local_78 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0538);
        (*pcVar3)();
      }
      FUN_1002b0b54(&local_78,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1002b04d0;
      lVar17 = param_3[1];
      lVar11 = lVar18;
    } while (lVar18 < lVar17);
  }
  puVar9 = local_78;
  lVar17 = *param_1;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0540);
    (*pcVar3)();
  }
  puVar7 = local_78;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  uVar14 = *(ulong *)(puVar9 + 0x10);
  while (local_78 = puVar9, 1 < uVar14) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b053c);
      (*pcVar3)();
    }
    lVar12 = uVar14 - 1;
    lVar18 = *(long *)(puVar9 + uVar14 * 0x10);
    lVar15 = *(long *)(puVar9 + lVar12 * 0x10 + 0x28);
    FUN_1002b1108(lVar11 + lVar18 * 0x10,lVar11 + *(long *)(puVar9 + lVar12 * 0x10 + 0x20) * 0x10,
                  lVar11 + lVar15 * 0x10,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b0508);
      (*pcVar3)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar14 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b050c);
      (*pcVar3)();
    }
    *(long *)(puVar9 + uVar14 * 0x10) = lVar18;
    *(long *)((long)(puVar9 + uVar14 * 0x10) + 8) = lVar15;
    local_78 = puVar9;
    FUN_10026503c(lVar12);
    puVar9 = local_78;
    uVar14 = *(ulong *)(local_78 + 0x10);
  }
LAB_1002b04d0:
  _swift_bridgeObjectRelease(local_78);
  return;
}

