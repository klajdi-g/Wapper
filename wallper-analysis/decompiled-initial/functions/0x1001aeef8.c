// rea decompile_all
// name: FUN_1001aeef8
// address: 0x1001aeef8
// body: available
// range: 0x1001aeef8-0x1001afb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001af2e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1001aeef8(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  double *pdVar4;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  _ArrayBuffer<undefined> _Var12;
  _ArrayBuffer<undefined> _Var13;
  _ArrayBuffer<undefined> _Var14;
  _ArrayBuffer<undefined> _Var15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  double *pdVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong *puVar25;
  long *plVar26;
  double *pdVar27;
  long lVar28;
  byte *pbVar29;
  double *pdVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 uVar33;
  byte *pbVar34;
  undefined8 uVar35;
  ulong uVar36;
  ulong *puVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  byte bVar43;
  byte bVar44;
  undefined8 uVar45;
  double dVar46;
  byte bVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  
  uVar33 = param_1;
  _CGColorSpaceCreateDeviceRGB();
  lVar9 = 0;
  _CGBitmapContextCreate(0,0x80,0x80,8,0x200,uVar33,1);
  puVar18 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar9 != 0) {
    _CGContextSetInterpolationQuality(lVar9,3);
    (extension_in_CoreGraphics):__C.CGContextRef.draw(_:___C.CGImageRef,in:___C.CGRect,byTiling:_Swift.Bool)_->_()
    ::_draw(0,0,0x4060000000000000,0x4060000000000000,param_1,0);
    _CGBitmapContextGetData();
    puVar18 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar9 != 0) {
      uVar10 = 0;
      FUN_1001c4a44(0,0x4000,0,PTR___swiftEmptyArrayStorage_100524190);
      uVar31 = 0;
      pbVar29 = (byte *)(lVar9 + 2);
      local_a0 = uVar10;
      do {
        uVar32 = 0;
        uVar19 = uVar31 >> 3;
        uVar31 = uVar31 + 1;
        uVar21 = uVar10;
        pbVar34 = pbVar29;
        do {
          dVar38 = (double)NEON_ucvtf((ulong)pbVar34[-2]);
          dVar38 = dVar38 / 255.0;
          dVar39 = (double)NEON_ucvtf((ulong)pbVar34[-1]);
          dVar39 = dVar39 / 255.0;
          dVar40 = (double)NEON_ucvtf((ulong)*pbVar34);
          dVar40 = dVar40 / 255.0;
          dVar41 = dVar39;
          if (dVar39 < dVar38) {
            dVar41 = dVar38;
          }
          dVar42 = dVar40;
          if (dVar40 < dVar41) {
            dVar42 = dVar41;
          }
          uVar10 = uVar21;
          if (0.04 < dVar42) {
            uVar36 = *(ulong *)(uVar21 + 0x10);
            if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar36) {
              uVar10 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
              FUN_1001c4a44(uVar10,uVar36 + 1,1,uVar21);
            }
            *(ulong *)(uVar10 + 0x10) = uVar36 + 1;
            lVar20 = uVar10 + uVar36 * 0x20;
            *(double *)(lVar20 + 0x20) = dVar38;
            *(double *)(lVar20 + 0x28) = dVar39;
            *(double *)(lVar20 + 0x30) = dVar40;
            *(ulong *)(lVar20 + 0x38) = (uVar19 & 0xc) + (uVar32 >> 5);
            local_a0 = uVar10;
          }
          uVar32 = uVar32 + 1;
          pbVar34 = pbVar34 + 4;
          uVar21 = uVar10;
        } while (uVar32 != 0x80);
        pbVar29 = pbVar29 + 0x200;
      } while (uVar31 != 0x80);
      uVar31 = *(ulong *)(uVar10 + 0x10);
      if (uVar31 < 200) {
        uVar31 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((int)uVar31 == 0) {
          uVar31 = 0;
          FUN_1001c59f0(0,*(ulong *)(uVar10 + 0x18) >> 1);
          _swift_bridgeObjectRelease(uVar10);
          uVar10 = uVar31;
        }
        else {
          uVar33 = *(undefined8 *)(uVar10 + 0x10);
          uVar31 = uVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar32 = uVar10;
          if ((uVar31 & 1) == 0) {
            uVar32 = 0;
            FUN_1001c4a44(0,uVar33,1,uVar10);
            local_a0 = uVar32;
          }
          FUN_10028861c(0,uVar33,0);
          uVar10 = uVar32;
        }
        pbVar29 = (byte *)(lVar9 + 2);
        uVar32 = 0;
        do {
          uVar31 = uVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar21 = uVar10;
          if ((uVar31 & 1) == 0) {
            uVar21 = 0;
            FUN_1001c4a44(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
          }
          uVar36 = 0;
          uVar19 = uVar32 + 1;
          pbVar34 = pbVar29;
          do {
            bVar47 = pbVar34[-2];
            bVar44 = pbVar34[-1];
            bVar43 = *pbVar34;
            uVar24 = *(ulong *)(uVar21 + 0x10);
            uVar31 = uVar24 + 1;
            uVar10 = uVar21;
            if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar24) {
              uVar10 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
              FUN_1001c4a44(uVar10,uVar31,1,uVar21);
            }
            uVar21 = uVar36 >> 5;
            uVar36 = uVar36 + 1;
            dVar41 = (double)NEON_ucvtf((ulong)bVar47);
            dVar38 = (double)NEON_ucvtf((ulong)bVar44);
            dVar39 = (double)NEON_ucvtf((ulong)bVar43);
            pbVar34 = pbVar34 + 4;
            *(ulong *)(uVar10 + 0x10) = uVar31;
            lVar9 = uVar10 + uVar24 * 0x20;
            *(double *)(lVar9 + 0x20) = dVar41 / 255.0;
            *(double *)(lVar9 + 0x28) = dVar38 / 255.0;
            *(double *)(lVar9 + 0x30) = dVar39 / 255.0;
            *(ulong *)(lVar9 + 0x38) = (uVar32 >> 3 & 0xc) + uVar21;
            uVar21 = uVar10;
          } while (uVar36 != 0x80);
          pbVar29 = pbVar29 + 0x200;
          uVar32 = uVar19;
        } while (uVar19 != 0x80);
      }
      pdVar30 = (double *)(uVar10 + 0x20);
      dVar41 = *pdVar30;
      uVar33 = *(undefined8 *)(uVar10 + 0x28);
      uVar45 = *(undefined8 *)(uVar10 + 0x30);
      local_a8 = *(undefined8 *)(uVar10 + 0x38);
      lVar9 = uVar31 - 1;
      local_c0 = dVar41;
      uStack_b8 = uVar33;
      local_b0 = uVar45;
      if (lVar9 != 0) {
        puVar23 = (undefined8 *)(uVar10 + 0x58);
        do {
          dVar38 = (double)puVar23[-3];
          uVar48 = puVar23[-2];
          uVar49 = puVar23[-1];
          uVar35 = *puVar23;
          pdVar22 = &local_c0;
          local_e0 = dVar38;
          uStack_d8 = uVar48;
          local_d0 = uVar49;
          local_c8 = uVar35;
          FUN_10019dab4(pdVar22,&local_e0);
          if (((ulong)pdVar22 & 1) != 0) {
            dVar41 = dVar38;
            uVar33 = uVar48;
            uVar45 = uVar49;
            local_c0 = dVar38;
            uStack_b8 = uVar48;
            local_b0 = uVar49;
            local_a8 = uVar35;
          }
          puVar23 = puVar23 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      _swift_bridgeObjectRetain(uVar10);
      puVar11 = (undefined *)0x0;
      FUN_1001c44d4(0,1,1,PTR___swiftEmptyArrayStorage_100524190);
      uVar31 = *(ulong *)(puVar11 + 0x10);
      puVar18 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar31) {
        puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_1001c44d4(puVar18,uVar31 + 1,1,puVar11);
      }
      *(ulong *)(puVar18 + 0x10) = uVar31 + 1;
      *(double *)(puVar18 + uVar31 * 0x18 + 0x20) = dVar41;
      *(undefined8 *)(puVar18 + uVar31 * 0x18 + 0x28) = uVar33;
      *(undefined8 *)(puVar18 + uVar31 * 0x18 + 0x30) = uVar45;
      uVar31 = *(ulong *)(uVar10 + 0x10);
      _swift_bridgeObjectRelease(uVar10);
      _Var12.unknown = PTR___swiftEmptyArrayStorage_100524190;
      _Var13.unknown = puVar18;
      if (uVar31 != 0) {
        _Var12 = Swift::Array<undefined>::_allocateBufferUninitialized
                           (puVar18,PTR___type_metadata_for_Swift_Double_100523b90);
        uVar32 = 0;
        *(ulong *)(_Var12.unknown + 0x10) = uVar31;
        do {
          *(undefined8 *)(_Var12.unknown + uVar32 * 8 + 0x20) = 0x7fefffffffffffff;
          uVar32 = uVar32 + 1;
          _Var13 = _Var12;
        } while (uVar32 < uVar31);
      }
      lVar9 = 1;
      do {
        lVar20 = *(long *)(puVar18 + 0x10);
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb3c);
          (*pcVar2)();
        }
        uVar31 = *(ulong *)(uVar10 + 0x10);
        if (uVar31 == 0) goto LAB_1001afb90;
        dVar41 = *(double *)(puVar18 + lVar20 * 0x18 + 8);
        dVar38 = *(double *)(puVar18 + lVar20 * 0x18 + 0x10);
        dVar39 = *(double *)(puVar18 + lVar20 * 0x18 + 0x18);
        _swift_bridgeObjectRetain(uVar10);
        uVar21 = *(ulong *)(_Var12.unknown + 0x10);
        uVar19 = uVar31 - 1;
        uVar32 = uVar21;
        if (uVar19 <= uVar21) {
          uVar32 = uVar19;
        }
        if (uVar32 < 2) {
LAB_1001af460:
          uVar32 = 0;
        }
        else {
          uVar36 = uVar21;
          if (uVar19 <= uVar21) {
            uVar36 = uVar19;
          }
          if (_Var12.unknown + 0x20 < (double *)(uVar10 + 0x38 + uVar36 * 0x20) &&
              pdVar30 < _Var12.unknown + uVar36 * 8 + 0x28) goto LAB_1001af460;
          uVar32 = uVar32 & 0x7ffffffffffffffe;
          pdVar22 = pdVar30;
          pdVar27 = (double *)(_Var12.unknown + 0x20);
          uVar19 = uVar32;
          do {
            dVar40 = *pdVar22;
            pdVar4 = pdVar22 + 1;
            pdVar5 = pdVar22 + 2;
            pdVar6 = pdVar22 + 4;
            pdVar7 = pdVar22 + 5;
            pdVar8 = pdVar22 + 6;
            pdVar22 = pdVar22 + 8;
            dVar40 = (*pdVar5 - dVar39) * (*pdVar5 - dVar39) +
                     (*pdVar4 - dVar38) * (*pdVar4 - dVar38) + (dVar40 - dVar41) * (dVar40 - dVar41)
            ;
            dVar42 = (*pdVar8 - dVar39) * (*pdVar8 - dVar39) +
                     (*pdVar7 - dVar38) * (*pdVar7 - dVar38) +
                     (*pdVar6 - dVar41) * (*pdVar6 - dVar41);
            pdVar27[1] = (double)((ulong)dVar42 ^
                                 ((ulong)dVar42 ^ (ulong)pdVar27[1]) &
                                 ~-(ulong)(dVar42 < pdVar27[1]));
            *pdVar27 = (double)((ulong)dVar40 ^
                               ((ulong)dVar40 ^ (ulong)*pdVar27) & ~-(ulong)(dVar40 < *pdVar27));
            uVar19 = uVar19 - 2;
            pdVar27 = pdVar27 + 2;
          } while (uVar19 != 0);
        }
        lVar9 = lVar9 + 1;
        pdVar22 = (double *)(uVar10 + 0x30 + uVar32 * 0x20);
        do {
          if (uVar21 <= uVar32) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001af5ac);
            (*pcVar2)();
          }
          uVar19 = uVar32 + 1;
          dVar40 = (*pdVar22 - dVar39) * (*pdVar22 - dVar39) +
                   (pdVar22[-1] - dVar38) * (pdVar22[-1] - dVar38) +
                   (pdVar22[-2] - dVar41) * (pdVar22[-2] - dVar41);
          if (*(double *)(_Var12.unknown + uVar32 * 8 + 0x20) <= dVar40) {
            dVar40 = *(double *)(_Var12.unknown + uVar32 * 8 + 0x20);
          }
          *(double *)(_Var12.unknown + uVar32 * 8 + 0x20) = dVar40;
          pdVar22 = pdVar22 + 4;
          uVar32 = uVar19;
        } while (uVar31 != uVar19);
        _swift_bridgeObjectRelease(uVar10);
        if (*(ulong *)(_Var12.unknown + 0x10) < uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb40);
          (*pcVar2)();
        }
        uVar21 = 0;
        uVar32 = 0;
        dVar41 = 0.0;
        do {
          dVar38 = *(double *)(_Var12.unknown + uVar32 * 8 + 0x20);
          uVar19 = uVar32;
          if (*(double *)(_Var12.unknown + uVar32 * 8 + 0x20) <= dVar41) {
            dVar38 = dVar41;
            uVar19 = uVar21;
          }
          uVar21 = uVar19;
          uVar32 = uVar32 + 1;
          dVar41 = dVar38;
        } while (uVar31 != uVar32);
        if (*(ulong *)(uVar10 + 0x10) <= uVar21) {
LAB_1001afb90:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb94);
          (*pcVar2)();
        }
        pdVar22 = pdVar30 + uVar21 * 4;
        dVar41 = *pdVar22;
        dVar38 = pdVar22[1];
        dVar39 = pdVar22[2];
        uVar31 = *(ulong *)(puVar18 + 0x10);
        puVar11 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar31) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
          FUN_1001c44d4(puVar11,uVar31 + 1,1,puVar18);
          _Var13.unknown = puVar11;
        }
        *(ulong *)(puVar11 + 0x10) = uVar31 + 1;
        pdVar22 = (double *)(puVar11 + uVar31 * 0x18 + 0x20);
        *pdVar22 = dVar41;
        pdVar22[1] = dVar38;
        pdVar22[2] = dVar39;
        puVar18 = puVar11;
      } while (lVar9 != 0x10);
      lVar9 = *(long *)(uVar10 + 0x10);
      if (lVar9 == 0) {
        uVar31 = 0;
        _Var13.unknown = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        _Var13 = Swift::Array<undefined>::_allocateBufferUninitialized
                           (_Var13.unknown,PTR___type_metadata_for_Swift_Int_100523bd8);
        *(long *)(_Var13.unknown + 0x10) = lVar9;
        _bzero(_Var13.unknown + 0x20,lVar9 << 3);
        uVar31 = *(ulong *)(uVar10 + 0x10);
      }
      lVar9 = 0;
      puVar37 = (ulong *)(_Var13.unknown + 0x20);
      do {
        if (uVar31 == 0) {
          _swift_bridgeObjectRetain(uVar10);
        }
        else {
          uVar32 = *(ulong *)(uVar10 + 0x10);
          uVar21 = *(ulong *)(puVar11 + 0x10);
          _swift_bridgeObjectRetain(uVar10);
          if (uVar21 < 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb48);
            (*pcVar2)();
          }
          uVar21 = 0;
          do {
            if (uVar21 == uVar32) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb24);
              (*pcVar2)();
            }
            uVar24 = 0;
            uVar36 = 0;
            uVar19 = uVar21 + 1;
            pdVar27 = pdVar30 + uVar21 * 4;
            pdVar22 = (double *)(puVar11 + 0x30);
            dVar41 = 1.7976931348623157e+308;
            do {
              dVar38 = (*pdVar27 - pdVar22[-2]) * (*pdVar27 - pdVar22[-2]) +
                       (pdVar27[1] - pdVar22[-1]) * (pdVar27[1] - pdVar22[-1]) +
                       (pdVar27[2] - *pdVar22) * (pdVar27[2] - *pdVar22);
              uVar1 = uVar36;
              if (dVar41 <= dVar38) {
                dVar38 = dVar41;
                uVar1 = uVar24;
              }
              uVar24 = uVar1;
              uVar36 = uVar36 + 1;
              pdVar22 = pdVar22 + 3;
              dVar41 = dVar38;
            } while (uVar36 != 0x10);
            if (*(ulong *)(_Var13.unknown + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb28);
              (*pcVar2)();
            }
            puVar37[uVar21] = uVar24;
            uVar21 = uVar19;
          } while (uVar19 != uVar31);
        }
        puVar18 = &DAT_100555e48;
        FUN_100002f94(&DAT_100555e48,&DAT_100429af0);
        _Var14 = Swift::Array<undefined>::_allocateBufferUninitialized(puVar18,puVar18);
        *(undefined8 *)(_Var14.unknown + 0x10) = 0x10;
        *(undefined8 *)(_Var14.unknown + 0x28) = 0;
        *(undefined8 *)(_Var14.unknown + 0x20) = 0;
        *(undefined8 *)(_Var14.unknown + 0x38) = 0;
        *(undefined8 *)(_Var14.unknown + 0x30) = 0;
        *(undefined8 *)(_Var14.unknown + 0x48) = 0;
        *(undefined8 *)(_Var14.unknown + 0x40) = 0;
        *(undefined8 *)(_Var14.unknown + 0x58) = 0;
        *(undefined8 *)(_Var14.unknown + 0x50) = 0;
        *(undefined8 *)(_Var14.unknown + 0x68) = 0;
        *(undefined8 *)(_Var14.unknown + 0x60) = 0;
        *(undefined8 *)(_Var14.unknown + 0x78) = 0;
        *(undefined8 *)(_Var14.unknown + 0x70) = 0;
        *(undefined8 *)(_Var14.unknown + 0x88) = 0;
        *(undefined8 *)(_Var14.unknown + 0x80) = 0;
        *(undefined8 *)(_Var14.unknown + 0x98) = 0;
        *(undefined8 *)(_Var14.unknown + 0x90) = 0;
        *(undefined8 *)(_Var14.unknown + 0xa8) = 0;
        *(undefined8 *)(_Var14.unknown + 0xa0) = 0;
        *(undefined8 *)(_Var14.unknown + 0xb8) = 0;
        *(undefined8 *)(_Var14.unknown + 0xb0) = 0;
        *(undefined8 *)(_Var14.unknown + 200) = 0;
        *(undefined8 *)(_Var14.unknown + 0xc0) = 0;
        *(undefined8 *)(_Var14.unknown + 0xd8) = 0;
        *(undefined8 *)(_Var14.unknown + 0xd0) = 0;
        *(undefined8 *)(_Var14.unknown + 0xe8) = 0;
        *(undefined8 *)(_Var14.unknown + 0xe0) = 0;
        *(undefined8 *)(_Var14.unknown + 0xf8) = 0;
        *(undefined8 *)(_Var14.unknown + 0xf0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x108) = 0;
        *(undefined8 *)(_Var14.unknown + 0x100) = 0;
        *(undefined8 *)(_Var14.unknown + 0x118) = 0;
        *(undefined8 *)(_Var14.unknown + 0x110) = 0;
        *(undefined8 *)(_Var14.unknown + 0x128) = 0;
        *(undefined8 *)(_Var14.unknown + 0x120) = 0;
        *(undefined8 *)(_Var14.unknown + 0x138) = 0;
        *(undefined8 *)(_Var14.unknown + 0x130) = 0;
        *(undefined8 *)(_Var14.unknown + 0x148) = 0;
        *(undefined8 *)(_Var14.unknown + 0x140) = 0;
        *(undefined8 *)(_Var14.unknown + 0x158) = 0;
        *(undefined8 *)(_Var14.unknown + 0x150) = 0;
        *(undefined8 *)(_Var14.unknown + 0x168) = 0;
        *(undefined8 *)(_Var14.unknown + 0x160) = 0;
        *(undefined8 *)(_Var14.unknown + 0x178) = 0;
        *(undefined8 *)(_Var14.unknown + 0x170) = 0;
        *(undefined8 *)(_Var14.unknown + 0x188) = 0;
        *(undefined8 *)(_Var14.unknown + 0x180) = 0;
        *(undefined8 *)(_Var14.unknown + 0x198) = 0;
        *(undefined8 *)(_Var14.unknown + 400) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1a8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1a0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1b8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1b0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1c8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1c0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1d8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1d0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1e8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1e0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1f8) = 0;
        *(undefined8 *)(_Var14.unknown + 0x1f0) = 0;
        *(undefined8 *)(_Var14.unknown + 0x208) = 0;
        *(undefined8 *)(_Var14.unknown + 0x200) = 0;
        *(undefined8 *)(_Var14.unknown + 0x218) = 0;
        *(undefined8 *)(_Var14.unknown + 0x210) = 0;
        _swift_bridgeObjectRelease(uVar10);
        if (uVar31 == 0) {
          uVar32 = *(ulong *)(_Var14.unknown + 0x10);
        }
        else {
          if (*(ulong *)(_Var13.unknown + 0x10) < uVar31) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb4c);
            (*pcVar2)();
          }
          if (*(ulong *)(uVar10 + 0x10) < uVar31) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb50);
            (*pcVar2)();
          }
          pdVar22 = (double *)(uVar10 + 0x30);
          puVar25 = puVar37;
          uVar21 = uVar31;
          do {
            uVar19 = *puVar25;
            if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb2c);
              (*pcVar2)();
            }
            uVar32 = *(ulong *)(_Var14.unknown + 0x10);
            if (uVar32 <= uVar19) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb30);
              (*pcVar2)();
            }
            pdVar27 = (double *)((long)(_Var14.unknown + 0x20) + uVar19 * 4 * 8);
            *pdVar27 = pdVar22[-2] + *pdVar27;
            pdVar27[1] = pdVar22[-1] + pdVar27[1];
            pdVar27[2] = *pdVar22 + pdVar27[2];
            if (SCARRY8((long)pdVar27[3],1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb34);
              (*pcVar2)();
            }
            pdVar27[3] = (double)((long)pdVar27[3] + 1);
            uVar21 = uVar21 - 1;
            pdVar22 = pdVar22 + 4;
            puVar25 = puVar25 + 1;
          } while (uVar21 != 0);
        }
        lVar20 = 0;
        uVar21 = 0;
        lVar9 = lVar9 + 1;
        pdVar22 = (double *)(puVar11 + 0x30);
        do {
          if (uVar32 == uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001af958);
            (*pcVar2)();
          }
          if (0 < (long)*(ulong *)(_Var14.unknown + lVar20 + 0x38)) {
            if (*(ulong *)(puVar11 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001af810);
              (*pcVar2)();
            }
            dVar41 = *(double *)(_Var14.unknown + lVar20 + 0x30);
            dVar38 = (double)*(ulong *)(_Var14.unknown + lVar20 + 0x38);
            dVar39 = *(double *)(_Var14.unknown + lVar20 + 0x20);
            pdVar22[-1] = *(double *)(_Var14.unknown + lVar20 + 0x28) / dVar38;
            pdVar22[-2] = dVar39 / dVar38;
            *pdVar22 = dVar41 / dVar38;
          }
          lVar20 = lVar20 + 0x20;
          pdVar22 = pdVar22 + 3;
          uVar21 = uVar21 + 1;
        } while (lVar20 != 0x200);
        _swift_bridgeObjectRelease(_Var14.unknown);
      } while (lVar9 != 0xf);
      _Var14 = Swift::Array<undefined>::_allocateBufferUninitialized
                         (_Var14.unknown,PTR___type_metadata_for_Swift_Int_100523bd8);
      *(undefined8 *)(_Var14.unknown + 0x10) = 0x10;
      *(undefined8 *)(_Var14.unknown + 0x28) = 0;
      *(undefined8 *)(_Var14.unknown + 0x20) = 0;
      *(undefined8 *)(_Var14.unknown + 0x38) = 0;
      *(undefined8 *)(_Var14.unknown + 0x30) = 0;
      *(undefined8 *)(_Var14.unknown + 0x48) = 0;
      *(undefined8 *)(_Var14.unknown + 0x40) = 0;
      *(undefined8 *)(_Var14.unknown + 0x58) = 0;
      *(undefined8 *)(_Var14.unknown + 0x50) = 0;
      *(undefined8 *)(_Var14.unknown + 0x68) = 0;
      *(undefined8 *)(_Var14.unknown + 0x60) = 0;
      *(undefined8 *)(_Var14.unknown + 0x78) = 0;
      *(undefined8 *)(_Var14.unknown + 0x70) = 0;
      *(undefined8 *)(_Var14.unknown + 0x88) = 0;
      *(undefined8 *)(_Var14.unknown + 0x80) = 0;
      *(undefined8 *)(_Var14.unknown + 0x98) = 0;
      *(undefined8 *)(_Var14.unknown + 0x90) = 0;
      puVar18 = &DAT_100553098;
      FUN_100002f94(&DAT_100553098,&DAT_100425d60);
      _Var15 = Swift::Array<undefined>::_allocateBufferUninitialized(puVar18,puVar18);
      *(undefined8 *)(_Var15.unknown + 0x10) = 0x10;
      puVar23 = (undefined8 *)(_Var15.unknown + 0x20);
      *puVar23 = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x28) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x30) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x38) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x40) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x48) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x50) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x58) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x60) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x68) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x70) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x78) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x80) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x88) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x90) = _Var14.unknown;
      *(undefined **)(_Var15.unknown + 0x98) = _Var14.unknown;
      uVar31 = *(ulong *)(uVar10 + 0x10);
      _swift_bridgeObjectRetain_n(_Var14.unknown,0xb);
      if (uVar31 == 0) {
        _swift_bridgeObjectRetain_n(_Var14.unknown,4);
      }
      else {
        if (*(ulong *)(_Var13.unknown + 0x10) < uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb90);
          (*pcVar2)();
        }
        _swift_bridgeObjectRetain_n(_Var14.unknown,4);
        puVar25 = (ulong *)(uVar10 + 0x38);
        do {
          uVar32 = *puVar25;
          if ((long)uVar32 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb54);
            (*pcVar2)();
          }
          if (*(ulong *)(_Var15.unknown + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb58);
            (*pcVar2)();
          }
          uVar36 = *puVar37;
          uVar21 = puVar23[uVar32];
          uVar19 = uVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar23[uVar32] = uVar21;
          if ((uVar19 & 1) == 0) {
            FUN_1002872d8();
            puVar23[uVar32] = uVar21;
          }
          if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001af954);
            (*pcVar2)();
          }
          if (*(ulong *)(uVar21 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb5c);
            (*pcVar2)();
          }
          lVar9 = *(long *)(uVar21 + 0x20 + uVar36 * 8);
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb60);
            (*pcVar2)();
          }
          *(long *)(uVar21 + 0x20 + uVar36 * 8) = lVar9 + 1;
          uVar31 = uVar31 - 1;
          puVar37 = puVar37 + 1;
          puVar25 = puVar25 + 4;
        } while (uVar31 != 0);
      }
      uVar31 = 0;
      puVar18 = PTR___swiftEmptyArrayStorage_100524190;
      do {
        if (*(ulong *)(_Var15.unknown + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb44);
          (*pcVar2)();
        }
        lVar9 = puVar23[uVar31];
        uVar32 = *(ulong *)(lVar9 + 0x10);
        if (uVar32 == 0) {
LAB_1001af9cc:
          lVar9 = *(long *)(puVar11 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb64);
            (*pcVar2)();
          }
          pdVar30 = (double *)(puVar11 + 0x48);
          dVar41 = *(double *)(puVar11 + 0x20);
          dVar38 = *(double *)(puVar11 + 0x28);
          dVar39 = *(double *)(puVar11 + 0x30);
          while (dVar46 = dVar39, dVar42 = dVar38, dVar40 = dVar41, lVar9 = lVar9 + -1, lVar9 != 0)
          {
            pdVar22 = pdVar30 + -2;
            pdVar27 = pdVar30 + -1;
            pdVar4 = pdVar30 + 3;
            dVar39 = *pdVar30;
            pdVar30 = pdVar4;
            dVar41 = *pdVar22;
            dVar38 = *pdVar27;
            if (dVar40 + dVar42 + dVar46 <= *pdVar22 + *pdVar27 + dVar39) {
              dVar41 = dVar40;
              dVar38 = dVar42;
              dVar39 = dVar46;
            }
          }
        }
        else {
          uVar21 = 0;
          lVar20 = 0;
          do {
            lVar28 = *(long *)(lVar9 + 0x20 + uVar21 * 8);
            bVar3 = SCARRY8(lVar20,lVar28);
            lVar20 = lVar20 + lVar28;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb38);
              (*pcVar2)();
            }
            uVar21 = uVar21 + 1;
          } while (uVar32 != uVar21);
          if (lVar20 < 1) goto LAB_1001af9cc;
          if (uVar32 == 1) {
            uVar36 = 0;
          }
          else {
            lVar20 = *(long *)(lVar9 + 0x20);
            uVar21 = 1;
            uVar19 = 0;
            plVar26 = (long *)(lVar9 + 0x28);
            do {
              lVar9 = *plVar26;
              uVar36 = uVar21;
              if (lVar9 <= lVar20) {
                uVar36 = uVar19;
              }
              if (lVar20 <= lVar9) {
                lVar20 = lVar9;
              }
              uVar21 = uVar21 + 1;
              uVar19 = uVar36;
              plVar26 = plVar26 + 1;
            } while (uVar32 != uVar21);
            if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb68);
              (*pcVar2)();
            }
          }
          if (*(ulong *)(puVar11 + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001afb6c);
            (*pcVar2)();
          }
          pdVar30 = (double *)(puVar11 + uVar36 * 0x18 + 0x20);
          dVar40 = *pdVar30;
          dVar42 = pdVar30[1];
          dVar46 = pdVar30[2];
        }
        puVar16 = puVar18;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar17 = puVar18;
        if (((ulong)puVar16 & 1) == 0) {
          puVar17 = (undefined *)0x0;
          FUN_1001c44d4(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
        }
        uVar32 = *(ulong *)(puVar17 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar32) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
          FUN_1001c44d4(puVar18,uVar32 + 1,1,puVar17);
        }
        uVar31 = uVar31 + 1;
        *(ulong *)(puVar18 + 0x10) = uVar32 + 1;
        *(double *)(puVar18 + uVar32 * 0x18 + 0x20) = dVar40;
        *(double *)(puVar18 + uVar32 * 0x18 + 0x28) = dVar42;
        *(double *)(puVar18 + uVar32 * 0x18 + 0x30) = dVar46;
      } while (uVar31 != 0x10);
      _swift_bridgeObjectRelease(uVar10);
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(_Var12.unknown);
      _swift_bridgeObjectRelease(_Var13.unknown);
      _swift_bridgeObjectRelease(_Var15.unknown);
    }
  }
  return puVar18;
}

