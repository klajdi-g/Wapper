// rea decompile_all
// name: FUN_1000887a8
// address: 0x1000887a8
// body: available
// range: 0x1000887a8-0x100088fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000887a8(float param_1,float param_2,float param_3,long *param_4,ulong param_5,
                  long param_6,long *param_7)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  unkuint9 Var3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b0;
  
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fc8);
    (*pcVar4)();
  }
  if (param_5 != 0) {
    uVar6 = 0;
    do {
      uVar10 = 0;
      Var3 = (unkuint9)uVar6;
      lVar9 = uVar6 * param_5;
      auVar2 = SEXT816((long)uVar6);
      uVar6 = uVar6 + 1;
      fVar11 = ((float)(unkint9)Var3 + 0.5) - param_1;
      do {
        fVar15 = ((float)uVar10 + 0.5) - param_1;
        fVar23 = SQRT(fVar11 * fVar11 + fVar15 * fVar15);
        fVar15 = (param_1 - fVar23) / 1.2 + 0.5;
        if ((0.0 <= fVar15) && ((fVar20 = 1.0, 1.0 <= fVar15 || (fVar20 = fVar15, 0.0 < fVar15)))) {
          fVar21 = fVar23 / param_1;
          fVar15 = fVar11;
          _atan2f();
          fVar15 = fVar15 - param_2;
          fVar19 = param_2;
          ___sincosf_stret();
          fVar22 = 0.0;
          local_b0 = 0.0;
          if (fVar21 <= 0.378 || 0.968 <= fVar21) {
            local_b0 = 1.0;
          }
          lVar5 = *(long *)(param_6 + 0x10);
          pfVar7 = (float *)(param_6 + 0x20);
          if (lVar5 != 0) {
            do {
              fVar16 = ABS(fVar21 - *pfVar7) / 0.0045;
              fVar17 = fVar22;
              if ((fVar16 < 1.0) &&
                 (fVar17 = 1.0 - fVar16 * fVar16 * (3.0 - (fVar16 + fVar16)), fVar17 < fVar22)) {
                fVar17 = fVar22;
              }
              fVar22 = fVar17;
              lVar5 = lVar5 + -1;
              pfVar7 = pfVar7 + 1;
            } while (lVar5 != 0);
            if (local_b0 <= fVar22) {
              local_b0 = fVar22;
            }
          }
          fVar17 = (fVar21 * fVar21 * -0.12 + 1.0) * (fVar19 * 0.0025 + 0.0105);
          fVar16 = -(fVar15 * fVar15) / 0.04;
          _expf();
          fVar12 = -(fVar15 * fVar15) / 0.45;
          _expf();
          fVar15 = 1.0;
          if (fVar19 <= 0.0) {
            fVar15 = 0.4;
          }
          fVar12 = fVar15 * (fVar16 + fVar12 * 0.1) * 0.15;
          if (fVar21 <= 0.378 || 0.968 <= fVar21) {
            fVar23 = fVar12 * 0.5;
            if (fVar21 < 0.378) {
              fVar23 = fVar15 * fVar16 * 0.035;
              fVar17 = fVar17 + -0.0015;
            }
          }
          else {
            fVar15 = (float)NEON_fminnm((fVar21 + -0.378) / 0.1,0x3f800000);
            fVar18 = (float)NEON_fminnm((0.968 - fVar21) * 4.0,0x3f800000);
            fVar16 = ((fVar23 + fVar23) * 3.1415925) / param_3;
            _sinf();
            fVar13 = fVar23 / (param_3 * 6.0);
            FUN_1000886fc();
            fVar14 = fVar23 / 260.0;
            FUN_1000886fc();
            fVar14 = fVar23 / (param_3 * 5.0) + fVar14 * 5.0;
            _sinf();
            fVar23 = fVar23 / 90.0;
            FUN_1000886fc();
            fVar23 = fVar12 * fVar15 * (fVar18 * 0.45 + 0.55) *
                              (local_b0 * 1.35 +
                              (1.0 - local_b0) *
                              (fVar16 * (fVar13 * 0.7 + 0.3) * 0.4 + 1.0 +
                              (fVar23 + -0.5) * 0.12 + fVar14 * 0.1));
            fVar17 = fVar17 + fVar22 * 0.0022;
          }
          fVar17 = fVar17 + fVar23;
          if (0.984 < fVar21) {
            fVar15 = ((fVar21 + -0.984) / 0.016) * 3.1415925;
            _sinf();
            if (fVar19 < 0.0) {
              fVar19 = 0.0;
            }
            fVar17 = fVar15 * 0.01 + fVar15 * 0.045 * (fVar19 * 0.65 + 0.35) + fVar17;
            if (0.995 < fVar21) {
              fVar17 = fVar17 * 0.7;
            }
          }
          if (0.352 <= fVar21) {
            if (fVar21 < 0.372) {
              fVar15 = (float)NEON_fminnm((fVar21 + -0.352) / 0.02,0x3f800000);
              fVar17 = (fVar15 * 0.38 + 0.62) * fVar17;
            }
            fVar15 = 0.0;
            if (0.0 <= fVar17) {
              fVar15 = (float)NEON_fminnm(fVar17,0x3f800000);
              fVar15 = fVar15 * 4095.0;
            }
          }
          else {
            fVar15 = 28.665;
          }
          if (0x7f7fffff < (uint)ABS(fVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f7c);
            (*pcVar4)();
          }
          if (fVar15 <= -9.223373e+18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f80);
            (*pcVar4)();
          }
          if (9.223372e+18 <= fVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f84);
            (*pcVar4)();
          }
          uVar8 = (ulong)fVar15;
          if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f88);
            (*pcVar4)();
          }
          if (*(ulong *)(*param_7 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f8c);
            (*pcVar4)();
          }
          if (SUB168(auVar2 * SEXT816((long)param_5),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f90);
            (*pcVar4)();
          }
          if (SCARRY8(lVar9,uVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f94);
            (*pcVar4)();
          }
          if (lVar9 + uVar10 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f98);
            (*pcVar4)();
          }
          fVar15 = (float)NEON_ucvtf((uint)*(byte *)(*param_7 + uVar8 + 0x20));
          fVar15 = fVar15 / 255.0;
          fVar23 = (float)NEON_fminnm(fVar20 * fVar15 * 255.0 + 0.5,0x437f0000);
          if (0x7f7fffff < (uint)ABS(fVar23)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f9c);
            (*pcVar4)();
          }
          if (fVar23 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fa0);
            (*pcVar4)();
          }
          if (256.0 <= fVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fa4);
            (*pcVar4)();
          }
          puVar1 = (undefined1 *)(*param_4 + (lVar9 + uVar10) * 4);
          *puVar1 = (char)(int)fVar23;
          fVar23 = (float)NEON_fminnm(fVar20 * fVar15 * 0.995 * 255.0 + 0.5,0x437f0000);
          if (0x7f7fffff < (uint)ABS(fVar23)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fa8);
            (*pcVar4)();
          }
          if (fVar23 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fac);
            (*pcVar4)();
          }
          if (256.0 <= fVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fb0);
            (*pcVar4)();
          }
          puVar1[1] = (char)(int)fVar23;
          fVar15 = (float)NEON_fminnm(fVar20 * fVar15 * 0.985 * 255.0 + 0.5,0x437f0000);
          if (0x7f7fffff < (uint)ABS(fVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fb4);
            (*pcVar4)();
          }
          if (fVar15 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fb8);
            (*pcVar4)();
          }
          if (256.0 <= fVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fbc);
            (*pcVar4)();
          }
          puVar1[2] = (char)(int)fVar15;
          fVar15 = fVar20 * 255.0 + 0.5;
          if ((fVar15 == INFINITY) || (NAN(fVar15))) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fc0);
            (*pcVar4)();
          }
          if (fVar15 <= -1.0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088fc4);
            (*pcVar4)();
          }
          if (256.0 <= fVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100088f44);
            (*pcVar4)();
          }
          puVar1[3] = (char)(int)fVar15;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_5);
    } while (uVar6 != param_5);
  }
  return;
}

