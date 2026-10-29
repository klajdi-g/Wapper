// rea decompile_all
// name: FUN_10036e500
// address: 0x10036e500
// body: available
// range: 0x10036e500-0x10036f0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036e500(void)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UUID UVar5;
  undefined *puVar6;
  long lVar7;
  State SVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  UUID UVar13;
  long lVar14;
  long extraout_x8;
  UUID UVar15;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  long extraout_x8_02;
  long lVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  UUID UVar23;
  UUID UVar24;
  UUID UVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  ulong uVar32;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long unaff_x20;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  code *pcVar40;
  long lVar41;
  long local_1a0;
  long local_198;
  undefined *local_190;
  ulong local_188;
  long local_180;
  ulong local_178;
  long local_170;
  long local_88;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  UVar23.unknown = (undefined *)((long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar24.unknown = UVar23.unknown + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar25.unknown = UVar24.unknown + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar15.unknown = UVar25.unknown + -extraout_x12_01;
  puVar6 = &DAT_100556c20;
  FUN_100002f94(&DAT_100556c20,&DAT_10042ada0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar26 = (long)UVar15.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar26 - extraout_x12_02;
  lVar7 = 0;
  FUN_1001d59ac();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar27 = lVar41 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar36 = lVar27 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar36 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1a0 = lVar37 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = (lVar37 - extraout_x12_05) - extraout_x12_06;
  lVar7 = 0;
  local_198 = lVar17;
  FUN_1001d537c();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  pcVar28 = (char *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = (long)pcVar28 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar29 = (char *)(lVar38 - extraout_x12_08);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = (long)pcVar29 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar30 = (char *)(lVar34 - extraout_x12_10);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar33 = (long)pcVar30 - extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar31 = (char *)(lVar33 - extraout_x12_12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = (long)pcVar31 - extraout_x12_13;
  lVar17 = 0;
  FUN_100387eec();
  SVar8.unknown = &DAT_10055e748;
  FUN_100002f94(&DAT_10055e748,&DAT_100433f90);
  SwiftUI::State::get_wrappedValue(SVar8);
  if (local_88 == 0) {
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar17 + 0x14)));
  }
  else {
    local_178 = *(ulong *)(local_88 + 0x10);
    local_170 = lVar17;
    if (local_178 == 0) {
      local_190 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      uVar32 = 0;
      lVar17 = *(long *)(unaff_x20 + *(int *)(lVar17 + 0x14));
      uVar20 = *(ulong *)(lVar17 + 0x10);
      local_180 = local_88 +
                  ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
      local_190 = PTR___swiftEmptyArrayStorage_100524190;
      do {
        if (*(ulong *)(local_88 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
          pcVar40 = (code *)SoftwareBreakpoint(1,0x10036f0e0);
          (*pcVar40)();
        }
        FUN_100029504(local_180 + *(long *)(lVar18 + 0x48) * uVar32,lVar19,FUN_1001d537c);
        if (uVar20 != 0) {
          uVar39 = 0;
          local_188 = (ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff);
          lVar11 = lVar17 + local_188;
          do {
            if (*(ulong *)(lVar17 + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
              pcVar40 = (code *)SoftwareBreakpoint(1,0x10036f0d8);
              (*pcVar40)();
            }
            lVar21 = *(long *)(lVar16 + 0x48);
            FUN_100029504(lVar11 + lVar21 * uVar39,lVar37,FUN_1001d59ac);
            FUN_100007e64(lVar37,lVar36,FUN_1001d59ac);
            lVar35 = (long)*(int *)(puVar6 + 0x30);
            FUN_100029504(lVar36,lVar41,FUN_1001d537c);
            FUN_100029504(lVar19,lVar41 + lVar35,FUN_1001d537c);
            lVar9 = lVar41;
            _swift_getEnumCaseMultiPayload(lVar41,lVar7);
            iVar4 = (int)lVar9;
            if (iVar4 < 2) {
              if (iVar4 == 0) {
                FUN_100029504(lVar41,pcVar31,FUN_1001d537c);
                lVar9 = lVar41 + lVar35;
                _swift_getEnumCaseMultiPayload(lVar9,lVar7);
                pcVar22 = pcVar31;
                if ((int)lVar9 != 0) goto LAB_10036e9c8;
LAB_10036eaec:
                if (*pcVar22 == *(char *)(lVar41 + lVar35)) goto LAB_10036ebd8;
              }
              else {
                FUN_100029504(lVar41,lVar33,FUN_1001d537c);
                lVar9 = lVar41 + lVar35;
                _swift_getEnumCaseMultiPayload(lVar9,lVar7);
                if ((int)lVar9 != 1) {
                  (**(code **)(lVar14 + 8))(lVar33,UVar5.unknown);
                  goto LAB_10036e9c8;
                }
                pcVar40 = *(code **)(lVar14 + 0x20);
                (*pcVar40)(UVar15.unknown,lVar33,UVar5.unknown);
                UVar13 = UVar5;
                (*pcVar40)(UVar25.unknown,lVar41 + lVar35);
                bVar3 = Foundation::UUID::___infix(UVar15,UVar25,UVar13);
                pcVar40 = *(code **)(lVar14 + 8);
                (*pcVar40)(UVar25.unknown,UVar5.unknown);
                (*pcVar40)(UVar15.unknown,UVar5.unknown);
                if (bVar3) goto LAB_10036ebd8;
              }
              FUN_100029548(lVar41,FUN_1001d537c);
            }
            else {
              if (iVar4 == 2) {
                FUN_100029504(lVar41,pcVar30,FUN_1001d537c);
                lVar9 = lVar41 + lVar35;
                _swift_getEnumCaseMultiPayload(lVar9,lVar7);
                pcVar22 = pcVar30;
                if ((int)lVar9 == 2) goto LAB_10036eaec;
              }
              else {
                lVar35 = lVar41 + lVar35;
                _swift_getEnumCaseMultiPayload(lVar35,lVar7);
                if ((int)lVar35 == 3) {
LAB_10036ebd8:
                  FUN_100029548(lVar41,FUN_1001d537c);
                  FUN_100029548(lVar19,FUN_1001d537c);
                  lVar11 = local_1a0;
                  FUN_100007e64(lVar36,local_1a0,FUN_1001d59ac);
                  FUN_100007e64(lVar11,local_198,FUN_1001d59ac);
                  puVar10 = local_190;
                  _swift_isUniquelyReferenced_nonNull_native();
                  if (((ulong)puVar10 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                    FUN_1001c5880(0,*(long *)(local_190 + 0x10) + 1,1);
                    local_190 = puVar10;
                  }
                  uVar39 = *(ulong *)(local_190 + 0x10);
                  if (*(ulong *)(local_190 + 0x18) >> 1 <= uVar39) {
                    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_190 + 0x18));
                    FUN_1001c5880(puVar10,uVar39 + 1,1,local_190);
                    local_190 = puVar10;
                  }
                  *(ulong *)(local_190 + 0x10) = uVar39 + 1;
                  FUN_100007e64(local_198,local_190 + uVar39 * lVar21 + local_188,FUN_1001d59ac);
                  goto LAB_10036e914;
                }
              }
LAB_10036e9c8:
              FUN_10002a29c(lVar41,&DAT_100556c20,&DAT_10042ada0);
            }
            uVar39 = uVar39 + 1;
            FUN_100029548(lVar36,FUN_1001d59ac);
          } while (uVar20 != uVar39);
        }
        FUN_100029548(lVar19,FUN_1001d537c);
LAB_10036e914:
        uVar32 = uVar32 + 1;
      } while (uVar32 != local_178);
    }
    puVar10 = PTR___swiftEmptyArrayStorage_100524190;
    lVar17 = *(long *)(unaff_x20 + *(int *)(local_170 + 0x14));
    uVar32 = *(ulong *)(lVar17 + 0x10);
    if (uVar32 != 0) {
      uVar20 = 0;
      do {
        if (*(ulong *)(lVar17 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar40 = (code *)SoftwareBreakpoint(1,0x10036f0dc);
          (*pcVar40)();
        }
        uVar39 = (ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff);
        lVar33 = *(long *)(lVar16 + 0x48);
        FUN_100029504(lVar17 + uVar39 + lVar33 * uVar20,lVar27,FUN_1001d59ac);
        lVar19 = *(long *)(local_88 + 0x10);
        if (lVar19 != 0) {
          lVar36 = local_88 +
                   ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
          lVar37 = *(long *)(lVar18 + 0x48);
          do {
            FUN_100029504(lVar36,lVar34,FUN_1001d537c);
            lVar41 = (long)*(int *)(puVar6 + 0x30);
            FUN_100029504(lVar34,lVar26,FUN_1001d537c);
            FUN_100029504(lVar27,lVar26 + lVar41,FUN_1001d537c);
            lVar11 = lVar26;
            _swift_getEnumCaseMultiPayload(lVar26,lVar7);
            iVar4 = (int)lVar11;
            if (iVar4 < 2) {
              if (iVar4 == 0) {
                FUN_100029504(lVar26,pcVar29,FUN_1001d537c);
                lVar11 = lVar26 + lVar41;
                _swift_getEnumCaseMultiPayload(lVar11,lVar7);
                if ((int)lVar11 != 0) goto LAB_10036ee34;
                cVar2 = *pcVar29;
LAB_10036ef18:
                if (cVar2 == *(char *)(lVar26 + lVar41)) goto LAB_10036ed60;
              }
              else {
                FUN_100029504(lVar26,lVar38,FUN_1001d537c);
                lVar11 = lVar26 + lVar41;
                _swift_getEnumCaseMultiPayload(lVar11,lVar7);
                if ((int)lVar11 != 1) {
                  (**(code **)(lVar14 + 8))(lVar38,UVar5.unknown);
                  goto LAB_10036ee34;
                }
                pcVar40 = *(code **)(lVar14 + 0x20);
                (*pcVar40)(UVar24.unknown,lVar38,UVar5.unknown);
                UVar15 = UVar5;
                (*pcVar40)(UVar23.unknown,lVar26 + lVar41);
                bVar3 = Foundation::UUID::___infix(UVar24,UVar23,UVar15);
                pcVar40 = *(code **)(lVar14 + 8);
                (*pcVar40)(UVar23.unknown,UVar5.unknown);
                (*pcVar40)(UVar24.unknown,UVar5.unknown);
                if (bVar3) goto LAB_10036ed60;
              }
              FUN_100029548(lVar26,FUN_1001d537c);
            }
            else {
              if (iVar4 == 2) {
                FUN_100029504(lVar26,pcVar28,FUN_1001d537c);
                lVar11 = lVar26 + lVar41;
                _swift_getEnumCaseMultiPayload(lVar11,lVar7);
                if ((int)lVar11 == 2) {
                  cVar2 = *pcVar28;
                  goto LAB_10036ef18;
                }
              }
              else {
                lVar41 = lVar26 + lVar41;
                _swift_getEnumCaseMultiPayload(lVar41,lVar7);
                if ((int)lVar41 == 3) {
LAB_10036ed60:
                  FUN_100029548(lVar26,FUN_1001d537c);
                  FUN_100029548(lVar34,FUN_1001d537c);
                  FUN_100029548(lVar27,FUN_1001d59ac);
                  goto LAB_10036ed94;
                }
              }
LAB_10036ee34:
              FUN_10002a29c(lVar26,&DAT_100556c20,&DAT_10042ada0);
            }
            FUN_100029548(lVar34,FUN_1001d537c);
            lVar36 = lVar36 + lVar37;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        puVar12 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar12 & 1) == 0) {
          FUN_1001c5cf8(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          FUN_1001c5cf8(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
        FUN_100007e64(lVar27,puVar10 + uVar1 * lVar33 + uVar39,FUN_1001d59ac);
LAB_10036ed94:
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar32);
    }
    _swift_bridgeObjectRelease(local_88);
    FUN_10012f938(puVar10);
  }
  return;
}

