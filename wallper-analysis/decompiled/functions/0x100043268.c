// rea decompile_all
// name: FUN_100043268
// address: 0x100043268
// body: available
// range: 0x100043268-0x10004384b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100043268(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  dVar9 = *(double *)(param_2 + 0x10);
  if (dVar9 != 0.0) {
    FUN_1001c5d70(0,dVar9,0);
    pdVar12 = (double *)(param_2 + 0x30);
    dVar10 = dVar9;
    uVar6 = *(ulong *)(puVar5 + 0x10);
    do {
      dVar24 = pdVar12[-2];
      dVar7 = pdVar12[-1];
      dVar21 = *pdVar12;
      uVar1 = uVar6 + 1;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar6) {
        FUN_1001c5d70(1 < *(ulong *)(puVar5 + 0x18),uVar1,1);
      }
      pdVar12 = pdVar12 + 3;
      *(ulong *)(puVar5 + 0x10) = uVar1;
      *(ulong *)(puVar5 + uVar6 * 0x10 + 0x28) = (ulong)(uint)(float)dVar21;
      *(ulong *)(puVar5 + uVar6 * 0x10 + 0x20) = CONCAT44((float)dVar7,(float)dVar24);
      dVar10 = (double)((long)dVar10 - 1);
      uVar6 = uVar1;
    } while (dVar10 != 0.0);
  }
  puVar3 = &DAT_10054c038;
  FUN_100002f94(&DAT_10054c038,&DAT_10041d7a0);
  uVar6 = 0;
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 8;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  *(undefined8 *)(puVar3 + 0x28) = 6;
  *(undefined8 *)(puVar3 + 0x20) = 5;
  *(undefined8 *)(puVar3 + 0x38) = 6;
  *(undefined8 *)(puVar3 + 0x30) = 9;
  *(undefined8 *)(puVar3 + 0x48) = 10;
  *(undefined8 *)(puVar3 + 0x40) = 5;
  *(undefined8 *)(puVar3 + 0x58) = 10;
  *(undefined8 *)(puVar3 + 0x50) = 9;
  *(undefined8 *)(puVar3 + 0x68) = 10;
  *(undefined8 *)(puVar3 + 0x60) = 5;
  *(undefined8 *)(puVar3 + 0x78) = 6;
  *(undefined8 *)(puVar3 + 0x70) = 9;
  puVar4 = puVar3;
  FUN_1000065d0();
  _swift_setDeallocating(puVar3);
  lVar11 = *(long *)(param_3 + 0x10);
  if (lVar11 != 0) {
    param_2 = param_2 + 0x20;
    pdVar12 = (double *)(param_3 + 0x28);
    auVar17 = NEON_fmov(0x3ff0000000000000,8);
    do {
      dVar10 = pdVar12[-1];
      dVar24 = *pdVar12;
      if ((*(long *)(puVar4 + 0x10) == 0) || (dVar7 = dVar10, FUN_1000046b0(), (uVar6 & 1) == 0)) {
        if ((ulong)dVar9 <= (ulong)dVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100043838);
          (*pcVar2)();
        }
        dVar24 = (double)_sin(param_1 * 0.3 + dVar24);
        pdVar8 = (double *)(param_2 + (long)dVar10 * 0x18);
        dVar24 = (dVar24 * 0.5 + 0.5) * 0.06;
        dVar7 = *pdVar8;
        dVar21 = pdVar8[1];
        dVar13 = dVar24 * 0.6 + pdVar8[2];
        puVar3 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        dVar15 = 1.0;
        if (dVar13 <= 1.0) {
          dVar15 = dVar13;
        }
        if (((ulong)puVar3 & 1) == 0) {
          FUN_10028724c();
        }
        if (*(long *)(puVar5 + 0x10) <= (long)dVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10004383c);
          (*pcVar2)();
        }
        dVar7 = dVar24 + dVar7;
        dVar21 = dVar24 * 0.8 + dVar21;
        uVar16 = CONCAT44((float)(double)((ulong)dVar21 ^
                                         ((ulong)dVar21 ^ (ulong)auVar17._8_8_) &
                                         -(ulong)(auVar17._8_8_ < dVar21)),
                          (float)(double)((ulong)dVar7 ^
                                         ((ulong)dVar7 ^ (ulong)auVar17._0_8_) &
                                         -(ulong)(auVar17._0_8_ < dVar7)));
      }
      else {
        if ((ulong)dVar9 <= (ulong)dVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100043840);
          (*pcVar2)();
        }
        pdVar8 = (double *)(*(long *)(puVar4 + 0x38) + (long)dVar7 * 0x10);
        dVar7 = *pdVar8;
        if ((ulong)dVar9 <= (ulong)dVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100043844);
          (*pcVar2)();
        }
        dVar21 = pdVar8[1];
        if ((ulong)dVar9 <= (ulong)dVar21) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100043848);
          (*pcVar2)();
        }
        pdVar8 = (double *)(param_2 + (long)dVar10 * 0x18);
        dVar25 = *pdVar8;
        dVar26 = pdVar8[1];
        dVar27 = pdVar8[2];
        pdVar8 = (double *)(param_2 + (long)dVar7 * 0x18);
        dVar15 = pdVar8[1];
        dVar7 = pdVar8[2];
        dVar23 = *pdVar8;
        pdVar8 = (double *)(param_2 + (long)dVar21 * 0x18);
        dVar22 = *pdVar8;
        dVar13 = pdVar8[1];
        dVar14 = pdVar8[2];
        dVar21 = (double)_sin(param_1 * 0.3 + dVar24);
        dVar20 = dVar21 * 0.5 + 0.5;
        dVar24 = (double)_cos(param_1 * 0.2 + dVar24 + 1.0);
        dVar21 = dVar24 * 0.5 + 0.5;
        dVar24 = dVar25 + dVar20 * (dVar23 - dVar25) * 0.18 + dVar21 * (dVar22 - dVar25) * 0.18;
        dVar15 = dVar26 + dVar20 * (dVar15 - dVar26) * 0.18 + dVar21 * (dVar13 - dVar26) * 0.18;
        dVar7 = dVar27 + dVar20 * (dVar7 - dVar27) * 0.18 + dVar21 * (dVar14 - dVar27) * 0.18;
        if (dVar24 <= 0.0) {
          if (dVar15 <= 0.0) {
            dVar15 = 0.0;
            if ((0.0 < dVar7) && (dVar15 = 1.0, dVar7 <= 1.0)) {
              dVar15 = dVar7;
            }
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          else if (dVar15 <= 1.0) {
            fVar19 = 0.0;
joined_r0x000100043700:
            fVar18 = (float)dVar15;
            if (0.0 < dVar7) goto LAB_100043720;
            dVar15 = 0.0;
          }
          else {
            if (0.0 < dVar7) {
              fVar19 = 0.0;
              goto LAB_1000436a4;
            }
            fVar19 = 0.0;
LAB_100043760:
            fVar18 = 1.0;
LAB_100043788:
            dVar15 = 0.0;
          }
LAB_10004378c:
          puVar3 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar3 & 1) == 0) {
LAB_1000437e0:
            FUN_10028724c();
          }
        }
        else {
          if (dVar24 <= 1.0) {
            fVar19 = (float)dVar24;
            if (dVar15 <= 0.0) {
              if (dVar7 <= 0.0) goto LAB_100043784;
              goto LAB_100043718;
            }
            if (dVar15 <= 1.0) {
              fVar18 = (float)dVar15;
              dVar15 = 0.0;
              if (dVar7 <= 0.0) goto LAB_10004378c;
            }
            else {
              if (dVar7 <= 0.0) goto LAB_100043760;
LAB_1000436a4:
              fVar18 = 1.0;
            }
LAB_100043720:
            dVar15 = 1.0;
            if (dVar7 <= 1.0) {
              dVar15 = dVar7;
            }
            goto LAB_10004378c;
          }
          if (dVar15 <= 0.0) {
            if (dVar7 <= 0.0) {
              fVar19 = 1.0;
LAB_100043784:
              fVar18 = 0.0;
              goto LAB_100043788;
            }
            fVar19 = 1.0;
LAB_100043718:
            fVar18 = 0.0;
            goto LAB_100043720;
          }
          if (dVar15 <= 1.0) {
            fVar19 = 1.0;
            goto joined_r0x000100043700;
          }
          if (dVar7 <= 0.0) {
            fVar18 = 1.0;
            fVar19 = 1.0;
            dVar15 = 0.0;
            goto LAB_10004378c;
          }
          puVar3 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          dVar15 = 1.0;
          if (dVar7 <= 1.0) {
            dVar15 = dVar7;
          }
          fVar18 = 1.0;
          fVar19 = 1.0;
          if (((ulong)puVar3 & 1) == 0) goto LAB_1000437e0;
          fVar19 = 1.0;
        }
        if (*(long *)(puVar5 + 0x10) <= (long)dVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10004384c);
          (*pcVar2)();
        }
        uVar16 = CONCAT44(fVar18,fVar19);
      }
      pdVar12 = pdVar12 + 2;
      *(ulong *)(puVar5 + (long)dVar10 * 0x10 + 0x28) = (ulong)(uint)(float)dVar15;
      *(undefined8 *)(puVar5 + (long)dVar10 * 0x10 + 0x20) = uVar16;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRelease(puVar4);
  return puVar5;
}

