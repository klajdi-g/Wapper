// rea decompile_all
// name: FUN_1000480b0
// address: 0x1000480b0
// body: available
// range: 0x1000480b0-0x100048e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100048324 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1000480b0(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 (*pauVar2) [16];
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  _ArrayBuffer<undefined> _Var15;
  _ArrayBuffer _Var16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long unaff_x20;
  long lVar24;
  void *pvVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float extraout_var;
  undefined1 auVar34 [16];
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  ulong local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if (*(long *)(param_1 + 0x10) != 0x10) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x10) != 0x10 || (long)param_3 < 1) || (long)param_4 < 1) {
    return 0;
  }
  if ((param_3 == *(ulong *)(unaff_x20 + 0x20)) && (param_4 == *(ulong *)(unaff_x20 + 0x28))) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_128,0,0);
    puVar17 = *(undefined **)(unaff_x20 + 0x10);
    if ((ulong)puVar17 >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar17) {
        _Var3.unknown = puVar17;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (lVar12 == 2) {
      uVar23 = *(ulong *)(unaff_x20 + 0x18);
      goto LAB_10004829c;
    }
  }
  *(ulong *)(unaff_x20 + 0x20) = param_3;
  *(ulong *)(unaff_x20 + 0x28) = param_4;
  puVar17 = &DAT_10054d5c0;
  FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
  _swift_allocObject();
  *(undefined8 *)(puVar17 + 0x18) = 5;
  *(undefined8 *)(puVar17 + 0x10) = 2;
  uVar23 = param_3 * param_4;
  if (SUB168(SEXT816((long)param_3) * SEXT816((long)param_4),8) != (long)uVar23 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100048df0);
    (*pcVar11)();
  }
  if (uVar23 + 0xe000000000000000 >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100048df4);
    (*pcVar11)();
  }
  pvVar25 = (void *)(uVar23 * 4);
  lVar18 = 0;
  FUN_100049074();
  lVar12 = lVar18;
  _swift_allocObject();
  *(void **)(lVar12 + 0x18) = pvVar25;
  pvVar13 = pvVar25;
  _swift_slowAlloc(pvVar25,0xffffffffffffffff);
  *(void **)(lVar12 + 0x10) = pvVar13;
  if ((uVar23 & 0x3fffffffffffffff) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100048df8);
    (*pcVar11)();
  }
  if (pvVar25 != (void *)0x0) {
    _bzero(pvVar13,(size_t)pvVar25);
  }
  *(long *)(puVar17 + 0x20) = lVar12;
  _swift_allocObject(lVar18,0x20,7);
  *(void **)(lVar18 + 0x18) = pvVar25;
  pvVar13 = pvVar25;
  _swift_slowAlloc(pvVar25,0xffffffffffffffff);
  *(void **)(lVar18 + 0x10) = pvVar13;
  if (pvVar25 != (void *)0x0) {
    _bzero(pvVar13,(size_t)pvVar25);
  }
  *(long *)(puVar17 + 0x28) = lVar18;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_140,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = puVar17;
  _swift_bridgeObjectRelease(uVar14);
  uVar23 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
LAB_10004829c:
  _swift_beginAccess(unaff_x20 + 0x10,&local_e0,0x20,0);
  _Var16.unknown = *(undefined **)(unaff_x20 + 0x10);
  if (((ulong)_Var16.unknown & 0xc000000000000001) == 0) {
    if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048de4);
      (*pcVar11)();
    }
    if (*(ulong *)(((ulong)_Var16.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dec);
      (*pcVar11)();
    }
    uVar23 = *(ulong *)(_Var16.unknown + uVar23 * 8 + 0x20);
    _swift_retain(uVar23);
  }
  else {
    Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var16);
  }
  _swift_endAccess(&local_e0);
  if (SBORROW8(1,*(long *)(unaff_x20 + 0x18))) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100048de8);
    (*pcVar11)();
  }
  *(long *)(unaff_x20 + 0x18) = 1 - *(long *)(unaff_x20 + 0x18);
  puVar17 = &DAT_10054d5b8;
  FUN_100002f94(&DAT_10054d5b8,&DAT_10041de90);
  _Var15 = Swift::Array<undefined>::_allocateBufferUninitialized(puVar17,puVar17);
  *(undefined8 *)(_Var15.unknown + 0x10) = 0x10;
  *(undefined8 *)(_Var15.unknown + 0x28) = 0;
  *(undefined8 *)(_Var15.unknown + 0x20) = 0;
  *(undefined8 *)(_Var15.unknown + 0x38) = 0;
  *(undefined8 *)(_Var15.unknown + 0x30) = 0;
  *(undefined8 *)(_Var15.unknown + 0x48) = 0;
  *(undefined8 *)(_Var15.unknown + 0x40) = 0;
  *(undefined8 *)(_Var15.unknown + 0x58) = 0;
  *(undefined8 *)(_Var15.unknown + 0x50) = 0;
  *(undefined8 *)(_Var15.unknown + 0x68) = 0;
  *(undefined8 *)(_Var15.unknown + 0x60) = 0;
  *(undefined8 *)(_Var15.unknown + 0x78) = 0;
  *(undefined8 *)(_Var15.unknown + 0x70) = 0;
  *(undefined8 *)(_Var15.unknown + 0x88) = 0;
  *(undefined8 *)(_Var15.unknown + 0x80) = 0;
  *(undefined8 *)(_Var15.unknown + 0x98) = 0;
  *(undefined8 *)(_Var15.unknown + 0x90) = 0;
  *(undefined8 *)(_Var15.unknown + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(_Var15.unknown + 0x28) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x28) + -0.33333334);
  *(ulong *)(_Var15.unknown + 0x30) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x30) + -0.6666667);
  *(ulong *)(_Var15.unknown + 0x38) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x38) + -1.0);
  *(ulong *)(_Var15.unknown + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + -0.33333334,
                (int)*(undefined8 *)(param_1 + 0x40));
  *(ulong *)(_Var15.unknown + 0x48) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) + -0.33333334,
                (float)*(undefined8 *)(param_1 + 0x48) + -0.33333334);
  *(ulong *)(_Var15.unknown + 0x50) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) + -0.33333334,
                (float)*(undefined8 *)(param_1 + 0x50) + -0.6666667);
  *(ulong *)(_Var15.unknown + 0x58) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + -0.33333334,
                (float)*(undefined8 *)(param_1 + 0x58) + -1.0);
  *(ulong *)(_Var15.unknown + 0x60) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) + -0.6666667,
                (int)*(undefined8 *)(param_1 + 0x60));
  *(ulong *)(_Var15.unknown + 0x68) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + -0.6666667,
                (float)*(undefined8 *)(param_1 + 0x68) + -0.33333334);
  *(ulong *)(_Var15.unknown + 0x70) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) + -0.6666667,
                (float)*(undefined8 *)(param_1 + 0x70) + -0.6666667);
  *(ulong *)(_Var15.unknown + 0x78) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) + -0.6666667,
                (float)*(undefined8 *)(param_1 + 0x78) + -1.0);
  *(ulong *)(_Var15.unknown + 0x80) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) + -1.0,
                (int)*(undefined8 *)(param_1 + 0x80));
  *(ulong *)(_Var15.unknown + 0x88) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) + -1.0,
                (float)*(undefined8 *)(param_1 + 0x88) + -0.33333334);
  *(ulong *)(_Var15.unknown + 0x90) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + -1.0,
                (float)*(undefined8 *)(param_1 + 0x90) + -0.6666667);
  uVar14 = NEON_fmov(0xbf800000,4);
  *(ulong *)(_Var15.unknown + 0x98) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                (float)((ulong)uVar14 >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x98) + (float)uVar14);
  puVar17 = PTR___swiftEmptyArrayStorage_100524190;
  local_e0 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5d94(0,param_3,0);
  uVar26 = 0;
  do {
    fVar28 = ((float)(long)uVar26 + 0.5) / (float)param_3;
    fVar36 = 1.0;
    if (fVar28 <= 1.0) {
      fVar36 = fVar28;
    }
    fVar29 = 0.0;
    if (0.0 < fVar28) {
      fVar29 = fVar36 * 3.0;
    }
    if (0x7f7fffff < (uint)ABS(fVar29)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048da8);
      (*pcVar11)();
    }
    if (fVar29 <= -9.223373e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dac);
      (*pcVar11)();
    }
    if (9.223372e+18 <= fVar29) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048db0);
      (*pcVar11)();
    }
    lVar18 = (long)fVar29;
    lVar12 = lVar18;
    if (1 < lVar18) {
      lVar12 = 2;
    }
    if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048db4);
      (*pcVar11)();
    }
    if (0 < lVar18) {
      lVar18 = 1;
    }
    uVar4 = *(ulong *)(local_e0 + 0x10);
    if (*(ulong *)(local_e0 + 0x18) >> 1 <= uVar4) {
      FUN_1001c5d94(1 < *(ulong *)(local_e0 + 0x18),uVar4 + 1,1);
    }
    puVar10 = local_e0;
    fVar29 = fVar29 - (float)lVar12;
    fVar36 = fVar29 * fVar29;
    fVar37 = fVar29 * fVar36 * 0.5;
    fVar28 = fVar29 * fVar36 * 1.5;
    *(ulong *)(local_e0 + 0x10) = uVar4 + 1;
    *(ulong *)(local_e0 + uVar4 * 0x30 + 0x20) =
         lVar12 - 1U & ((long)(lVar12 - 1U) >> 0x3f ^ 0xffffffffffffffffU);
    *(long *)(local_e0 + uVar4 * 0x30 + 0x28) = lVar12;
    uVar26 = uVar26 + 1;
    *(long *)(local_e0 + uVar4 * 0x30 + 0x30) = lVar12 + 1;
    *(long *)(local_e0 + uVar4 * 0x30 + 0x38) = lVar18 + 2;
    *(ulong *)(local_e0 + uVar4 * 0x30 + 0x48) =
         CONCAT44(fVar37 - fVar36 * 0.5,fVar29 * 0.5 + ((fVar36 + fVar36) - fVar28));
    *(ulong *)(local_e0 + uVar4 * 0x30 + 0x40) =
         CONCAT44(fVar28 + fVar36 * -2.5 + 1.0,(fVar36 - fVar37) - fVar29 * 0.5);
  } while (param_3 != uVar26);
  local_e0 = puVar17;
  FUN_1001c5d94(0,param_4,0);
  uVar26 = 0;
  do {
    fVar28 = ((float)(long)uVar26 + 0.5) / (float)param_4;
    fVar36 = 1.0;
    if (fVar28 <= 1.0) {
      fVar36 = fVar28;
    }
    fVar29 = 0.0;
    if (0.0 < fVar28) {
      fVar29 = fVar36 * 3.0;
    }
    if (0x7f7fffff < (uint)ABS(fVar29)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048db8);
      (*pcVar11)();
    }
    if (fVar29 <= -9.223373e+18) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dbc);
      (*pcVar11)();
    }
    if (9.223372e+18 <= fVar29) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dc0);
      (*pcVar11)();
    }
    uVar19 = (ulong)fVar29;
    uVar4 = uVar19;
    if (1 < (long)uVar19) {
      uVar4 = 2;
    }
    if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dc4);
      (*pcVar11)();
    }
    if (0 < (long)uVar19) {
      uVar19 = 1;
    }
    uVar5 = *(ulong *)(local_e0 + 0x10);
    uVar1 = uVar5 + 1;
    if (*(ulong *)(local_e0 + 0x18) >> 1 <= uVar5) {
      FUN_1001c5d94(1 < *(ulong *)(local_e0 + 0x18),uVar1,1);
    }
    puVar17 = local_e0;
    fVar29 = fVar29 - (float)(long)uVar4;
    fVar36 = fVar29 * fVar29;
    fVar37 = fVar29 * fVar36 * 0.5;
    fVar28 = fVar29 * fVar36 * 1.5;
    *(ulong *)(local_e0 + 0x10) = uVar1;
    puVar22 = (ulong *)(local_e0 + uVar5 * 0x30 + 0x20);
    *puVar22 = uVar4 - 1 & ((long)(uVar4 - 1) >> 0x3f ^ 0xffffffffffffffffU);
    puVar22[1] = uVar4;
    uVar26 = uVar26 + 1;
    puVar22[2] = uVar4 + 1;
    puVar22[3] = uVar19 + 2;
    puVar22[5] = CONCAT44(fVar37 - fVar36 * 0.5,fVar29 * 0.5 + ((fVar36 + fVar36) - fVar28));
    puVar22[4] = CONCAT44(fVar28 + fVar36 * -2.5 + 1.0,(fVar36 - fVar37) - fVar29 * 0.5);
  } while (param_4 != uVar26);
  lVar12 = 0;
  lVar18 = *(long *)(uVar23 + 0x10);
  auVar34 = NEON_fmov(0x3f800000,4);
  uVar26 = 0;
  do {
    if (uVar26 == param_4) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dc8);
      (*pcVar11)();
    }
    if (uVar26 == uVar1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dcc);
      (*pcVar11)();
    }
    if (*(long *)(puVar10 + 0x10) < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100048dd0);
      (*pcVar11)();
    }
    uVar19 = 0;
    uVar4 = uVar26 + 1;
    puVar20 = (undefined8 *)(puVar17 + uVar26 * 0x30 + 0x20);
    uVar14 = *puVar20;
    uVar7 = puVar20[1];
    uVar6 = puVar20[2];
    uVar8 = puVar20[3];
    auVar9 = *(undefined1 (*) [16])(puVar20 + 4);
    lVar24 = 0x20;
    lVar27 = lVar12;
    do {
      pauVar2 = (undefined1 (*) [16])(puVar10 + lVar24);
      uStack_c8 = *(undefined8 *)(pauVar2[1] + 8);
      local_d0 = *(undefined8 *)pauVar2[1];
      uStack_b8 = *(undefined8 *)(pauVar2[2] + 8);
      uStack_c0 = *(undefined8 *)pauVar2[2];
      uStack_d8 = SUB168(*pauVar2,8);
      local_e0 = SUB168(*pauVar2,0);
      uVar30 = FUN_100048e48(uVar14,_Var15.unknown,&local_e0);
      uVar31 = FUN_100048e48(uVar7,_Var15.unknown,&local_e0);
      uVar32 = FUN_100048e48(uVar6,_Var15.unknown,&local_e0);
      uVar33 = FUN_100048e48(uVar8,_Var15.unknown,&local_e0);
      fVar28 = ((float)uVar19 + 0.5) / (float)param_3 -
               (auVar9._0_4_ * (float)uVar30 + auVar9._4_4_ * (float)uVar31 +
                auVar9._8_4_ * (float)uVar32 + auVar9._12_4_ * (float)uVar33);
      fVar36 = 1.0;
      if (fVar28 <= 1.0) {
        fVar36 = fVar28;
      }
      fVar29 = 0.0;
      if (0.0 < fVar28) {
        fVar29 = fVar36 * 3.0;
      }
      if (0x7f7fffff < (uint)ABS(fVar29)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d20);
        (*pcVar11)();
      }
      if (fVar29 <= -9.223373e+18) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d24);
        (*pcVar11)();
      }
      if (9.223372e+18 <= fVar29) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d28);
        (*pcVar11)();
      }
      lVar21 = (long)fVar29;
      lVar12 = lVar21;
      if (1 < lVar21) {
        lVar12 = 2;
      }
      if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d2c);
        (*pcVar11)();
      }
      fVar29 = fVar29 - (float)lVar12;
      fVar36 = fVar29 * fVar29;
      fVar37 = fVar29 * fVar36 * 0.5;
      fVar28 = fVar29 * fVar36 * 1.5;
      local_100 = lVar12 + 1;
      local_110 = lVar12 - 1U & ((long)(lVar12 - 1U) >> 0x3f ^ 0xffffffffffffffffU);
      if (0 < lVar21) {
        lVar21 = 1;
      }
      lStack_f8 = lVar21 + 2;
      uStack_e8 = CONCAT44(fVar37 - fVar36 * 0.5,fVar29 * 0.5 + ((fVar36 + fVar36) - fVar28));
      local_f0 = CONCAT44(fVar28 + fVar36 * -2.5 + 1.0,(fVar36 - fVar37) - fVar29 * 0.5);
      fVar28 = ((float)uVar26 + 0.5) / (float)param_4 -
               (auVar9._0_4_ * (float)((ulong)uVar30 >> 0x20) +
                auVar9._4_4_ * (float)((ulong)uVar31 >> 0x20) +
                auVar9._8_4_ * (float)((ulong)uVar32 >> 0x20) +
               auVar9._12_4_ * (float)((ulong)uVar33 >> 0x20));
      fVar36 = 1.0;
      if (fVar28 <= 1.0) {
        fVar36 = fVar28;
      }
      fVar29 = 0.0;
      if (0.0 < fVar28) {
        fVar29 = fVar36 * 3.0;
      }
      lStack_108 = lVar12;
      if (0x7f7fffff < (uint)ABS(fVar29)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d30);
        (*pcVar11)();
      }
      if (fVar29 <= -9.223373e+18) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d34);
        (*pcVar11)();
      }
      if (9.223372e+18 <= fVar29) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d38);
        (*pcVar11)();
      }
      lVar21 = (long)fVar29;
      lVar12 = lVar21;
      if (1 < lVar21) {
        lVar12 = 2;
      }
      if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d3c);
        (*pcVar11)();
      }
      fVar29 = fVar29 - (float)lVar12;
      fVar36 = fVar29 * fVar29;
      fVar37 = fVar29 * fVar36 * 0.5;
      fVar38 = fVar37 - fVar36 * 0.5;
      fVar28 = fVar29 * fVar36 * 1.5;
      fVar39 = fVar29 * 0.5 + ((fVar36 + fVar36) - fVar28);
      fVar28 = fVar28 + fVar36 * -2.5 + 1.0;
      fVar36 = (fVar36 - fVar37) - fVar29 * 0.5;
      if (0 < lVar21) {
        lVar21 = 1;
      }
      uVar30 = FUN_100048f18(lVar12 - 1U & ((long)(lVar12 - 1U) >> 0x3f ^ 0xffffffffffffffffU),
                             param_2,&local_110);
      uVar31 = FUN_100048f18(fVar36,(float)uVar30,lVar12,param_2,&local_110);
      uVar32 = FUN_100048f18(fVar28 * extraout_var_00,(float)uVar31,lVar12 + 1,param_2,&local_110);
      uVar33 = FUN_100048f18(fVar39 * extraout_var_01,(float)uVar32,lVar21 + 2,param_2,&local_110);
      auVar35._0_4_ =
           (float)uVar30 * fVar36 + (float)uVar31 * fVar28 + (float)uVar32 * fVar39 +
           (float)uVar33 * fVar38;
      auVar35._4_4_ =
           (float)((ulong)uVar30 >> 0x20) * fVar36 + (float)((ulong)uVar31 >> 0x20) * fVar28 +
           (float)((ulong)uVar32 >> 0x20) * fVar39 + (float)((ulong)uVar33 >> 0x20) * fVar38;
      auVar35._8_4_ =
           fVar36 * extraout_var + fVar28 * extraout_var_00 + fVar39 * extraout_var_01 +
           fVar38 * extraout_var_02;
      auVar35._12_4_ = 0;
      auVar35 = NEON_fmaxnm(auVar35,ZEXT816(0),4);
      auVar35 = NEON_fminnm(auVar35,auVar34,4);
      fVar36 = auVar35._0_4_ * 255.0 + 0.5;
      if (0x7f7fffff < (uint)ABS(fVar36)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d40);
        (*pcVar11)();
      }
      if (fVar36 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d44);
        (*pcVar11)();
      }
      if (256.0 <= fVar36) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d48);
        (*pcVar11)();
      }
      *(char *)(lVar18 + lVar27) = (char)(int)fVar36;
      if (SCARRY8(lVar27,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d4c);
        (*pcVar11)();
      }
      fVar36 = auVar35._4_4_ * 255.0 + 0.5;
      if (0x7f7fffff < (uint)ABS(fVar36)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d50);
        (*pcVar11)();
      }
      if (fVar36 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d54);
        (*pcVar11)();
      }
      if (256.0 <= fVar36) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d58);
        (*pcVar11)();
      }
      *(char *)(lVar18 + lVar27 + 1) = (char)(int)fVar36;
      if (SCARRY8(lVar27,2)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d5c);
        (*pcVar11)();
      }
      fVar36 = auVar35._8_4_ * 255.0 + 0.5;
      if (0x7f7fffff < (uint)ABS(fVar36)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d60);
        (*pcVar11)();
      }
      if (fVar36 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d64);
        (*pcVar11)();
      }
      if (256.0 <= fVar36) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d68);
        (*pcVar11)();
      }
      *(char *)(lVar18 + lVar27 + 2) = (char)(int)fVar36;
      if (SCARRY8(lVar27,3)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d6c);
        (*pcVar11)();
      }
      *(undefined1 *)(lVar18 + lVar27 + 3) = 0xff;
      lVar12 = lVar27 + 4;
      if (SCARRY8(lVar27,4)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100048d70);
        (*pcVar11)();
      }
      uVar19 = uVar19 + 1;
      lVar27 = lVar27 + 4;
      lVar24 = lVar24 + 0x30;
    } while (param_3 != uVar19);
    uVar26 = uVar4;
    if (uVar4 == param_4) {
      _swift_bridgeObjectRelease(puVar10);
      _swift_release(puVar17);
      lVar12 = *(long *)(unaff_x20 + 0x30);
      if (lVar12 == 0) {
        _swift_bridgeObjectRelease(_Var15.unknown);
        _swift_release(uVar23);
      }
      else {
        uVar14 = *(undefined8 *)(uVar23 + 0x10);
        uVar6 = *(undefined8 *)(uVar23 + 0x18);
        _swift_retain(uVar23);
        uVar26 = uVar23;
        _CGDataProviderCreateWithData(uVar23,uVar14,uVar6,FUN_100048e3c);
        if (uVar26 != 0) {
          if (param_3 >> 0x3d != 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100048e10);
            (*pcVar11)();
          }
          _CGImageCreate(param_3,param_4,8,0x20,param_3 << 2,lVar12,0x4005,uVar26);
          _swift_bridgeObjectRelease(_Var15.unknown);
          _swift_release(uVar23);
          return param_3;
        }
        _swift_bridgeObjectRelease(_Var15.unknown);
        _swift_release_n(uVar23,2);
      }
      return 0;
    }
  } while( true );
}

