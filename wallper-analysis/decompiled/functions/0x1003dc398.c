// rea decompile_all
// name: FUN_1003dc398
// address: 0x1003dc398
// body: available
// range: 0x1003dc398-0x1003dcb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003dc5d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003dc398(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  NSComparisonResult NVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong local_120;
  long local_118 [2];
  long *plStack_108;
  long *local_100;
  long local_f8;
  long local_f0;
  undefined *local_58;
  
  lVar3 = 0;
  local_100 = param_1;
  FUN_10040211c();
  local_f0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar9 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = (lVar10 - extraout_x12_01) - extraout_x12_02;
  local_118[0] = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_120 = lVar11 - extraout_x12_03;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    lVar26 = 0;
    local_118[1] = param_4;
    plStack_108 = param_3;
    do {
      uVar20 = local_120;
      lVar12 = lVar26 + 1;
      lVar27 = lVar26;
      if (lVar12 < lVar11) {
        lVar14 = *param_3;
        lVar24 = *(long *)(local_f0 + 0x48);
        lVar27 = lVar14 + lVar24 * lVar12;
        FUN_100029504(lVar27,local_120,FUN_10040211c);
        lVar12 = local_118[0];
        FUN_100029504(lVar14 + lVar24 * lVar26,local_118[0],FUN_10040211c);
        uVar4 = uVar20;
        FUN_1003bd438(uVar20,lVar12);
        FUN_100029548(lVar12,FUN_10040211c);
        FUN_100029548(uVar20,FUN_10040211c);
        if (unaff_x21 != 0) goto LAB_1003dcb24;
        lVar14 = lVar14 + lVar24 * (lVar26 + 2) + 8;
        lVar18 = lVar26 + 2;
        local_f8 = lVar26;
        do {
          lVar12 = lVar11;
          if (lVar11 == lVar18) break;
          lVar26 = lVar27;
          FUN_100029504(lVar27,extraout_x13,FUN_10040211c);
          lVar16 = *(long *)(lVar14 + *(int *)(lVar3 + 0x1c));
          lVar12 = lVar16;
          if (lVar16 == 0) {
            lVar12 = -0x2000000000000000;
          }
          lVar15 = *(long *)(extraout_x13 + *(int *)(lVar3 + 0x1c) + 8);
          lVar21 = lVar15;
          if (lVar15 == 0) {
            lVar15 = -0x2000000000000000;
            lVar21 = 0;
          }
          FUN_100026df4();
          _swift_bridgeObjectRetain(lVar16);
          _swift_bridgeObjectRetain(lVar21);
          NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (lVar26,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,lVar26,lVar26);
          _swift_bridgeObjectRelease(lVar12);
          _swift_bridgeObjectRelease(lVar15);
          FUN_100029548(extraout_x13,FUN_10040211c);
          lVar14 = lVar14 + lVar24;
          lVar27 = lVar27 + lVar24;
          lVar12 = lVar18;
          lVar18 = lVar18 + 1;
        } while ((((uint)uVar4 ^ (uint)(NVar5.unknown != (undefined *)0xffffffffffffffff)) & 1) != 0
                );
        param_4 = local_118[1];
        lVar27 = local_f8;
        param_3 = plStack_108;
        if ((uVar4 & 1) != 0) {
          if (lVar12 < local_f8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb68);
            (*pcVar1)();
          }
          if (local_f8 < lVar12) {
            lVar14 = 0;
            lVar18 = *plStack_108;
            lVar16 = lVar24 * (lVar12 + -1);
            lVar21 = lVar12 * lVar24;
            lVar26 = local_f8 * lVar24;
            lVar11 = local_f8;
            do {
              if (lVar11 != lVar12 + lVar14 + -1) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb88);
                  (*pcVar1)();
                }
                uVar20 = lVar18 + lVar26;
                FUN_100007e64(uVar20,lVar10,FUN_10040211c);
                if ((lVar26 < lVar16) || ((ulong)(lVar18 + lVar21) <= uVar20)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar20,lVar18 + lVar16,1,lVar3);
                }
                else if (lVar24 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar20,lVar18 + lVar16,1,lVar3);
                }
                FUN_100007e64(lVar10,lVar18 + lVar16,FUN_10040211c);
              }
              lVar11 = lVar11 + 1;
              lVar14 = lVar14 + -1;
              lVar16 = lVar16 - lVar24;
              lVar21 = lVar21 - lVar24;
              lVar26 = lVar26 + lVar24;
              param_4 = local_118[1];
              lVar27 = local_f8;
              param_3 = plStack_108;
            } while (lVar11 < lVar12 + lVar14);
          }
        }
      }
      lVar11 = param_3[1];
      lVar26 = lVar12;
      if (lVar12 < lVar11) {
        if (SBORROW8(lVar12,lVar27)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb5c);
          (*pcVar1)();
        }
        if (lVar12 - lVar27 < param_4) {
          if (SCARRY8(lVar27,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb60);
            (*pcVar1)();
          }
          lVar14 = lVar27 + param_4;
          if (lVar11 <= lVar27 + param_4) {
            lVar14 = lVar11;
          }
          if (lVar14 < lVar27) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb64);
            (*pcVar1)();
          }
          if (lVar12 != lVar14) {
            lVar22 = *param_3;
            lVar13 = *(long *)(local_f0 + 0x48);
            lVar24 = lVar22 + lVar13 * (lVar12 + -1);
            lVar11 = lVar27 - lVar12;
            lVar18 = lVar22 + lVar12 * lVar13;
            local_f8 = lVar27;
            lVar16 = lVar24;
            lVar21 = lVar11;
            lVar15 = lVar18;
LAB_1003dc83c:
            do {
              lVar26 = lVar24;
              FUN_100029504(lVar24,lVar23,FUN_10040211c);
              lVar17 = *(long *)(lVar18 + *(int *)(lVar3 + 0x1c) + 8);
              lVar27 = lVar17;
              if (lVar17 == 0) {
                lVar27 = -0x2000000000000000;
              }
              lVar19 = *(long *)(lVar23 + *(int *)(lVar3 + 0x1c) + 8);
              lVar25 = lVar19;
              if (lVar19 == 0) {
                lVar19 = -0x2000000000000000;
                lVar25 = 0;
              }
              FUN_100026df4();
              _swift_bridgeObjectRetain(lVar17);
              _swift_bridgeObjectRetain(lVar25);
              NVar5 = (extension_Foundation)::Swift::StringProtocol::
                      _localizedCaseInsensitiveCompare
                                (lVar26,PTR___type_metadata_for_Swift_String_100523a98,
                                 PTR___type_metadata_for_Swift_String_100523a98,lVar26,lVar26);
              _swift_bridgeObjectRelease(lVar27);
              _swift_bridgeObjectRelease(lVar19);
              FUN_100029548(lVar23,FUN_10040211c);
              if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb6c);
                  (*pcVar1)();
                }
                FUN_100007e64(lVar18,lVar9,FUN_10040211c);
                _swift_arrayInitWithTakeFrontToBack(lVar18,lVar24,1,lVar3);
                FUN_100007e64(lVar9,lVar24,FUN_10040211c);
                lVar24 = lVar24 + -lVar13;
                lVar18 = lVar18 + -lVar13;
                bVar2 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                if (bVar2) goto LAB_1003dc83c;
              }
              lVar12 = lVar12 + 1;
              lVar24 = lVar16 + lVar13;
              lVar11 = lVar21 + -1;
              lVar18 = lVar15 + lVar13;
              lVar26 = lVar14;
              param_4 = local_118[1];
              lVar27 = local_f8;
              param_3 = plStack_108;
              lVar16 = lVar24;
              lVar21 = lVar11;
              lVar15 = lVar18;
            } while (lVar12 != lVar14);
          }
        }
      }
      puVar8 = local_58;
      if (lVar26 < lVar27) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb50);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar20 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar20) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar8,uVar20 + 1,1,puVar7);
        puVar7 = puVar8;
      }
      *(ulong *)(puVar7 + 0x10) = uVar20 + 1;
      *(long *)(puVar7 + uVar20 * 0x10 + 0x20) = lVar27;
      *(long *)(puVar7 + uVar20 * 0x10 + 0x28) = lVar26;
      local_58 = puVar7;
      if (*local_100 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb8c);
        (*pcVar1)();
      }
      FUN_1003e01c4(&local_58,*local_100,param_3,FUN_1003e1898);
      if (unaff_x21 != 0) goto LAB_1003dcb24;
      lVar11 = param_3[1];
    } while (lVar26 < lVar11);
  }
  puVar8 = local_58;
  lVar3 = *local_100;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb94);
    (*pcVar1)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100265268();
  }
  uVar20 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar20) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb90);
      (*pcVar1)();
    }
    lVar23 = uVar20 - 1;
    lVar26 = *(long *)(puVar8 + uVar20 * 0x10);
    lVar10 = *(long *)(puVar8 + lVar23 * 0x10 + 0x28);
    lVar11 = *(long *)(local_f0 + 0x48);
    FUN_1003e1898(lVar9 + lVar11 * lVar26,lVar9 + lVar11 * *(long *)(puVar8 + lVar23 * 0x10 + 0x20),
                  lVar9 + lVar11 * lVar10,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar10 < lVar26) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb54);
      (*pcVar1)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003dcb58);
      (*pcVar1)();
    }
    *(long *)(puVar8 + uVar20 * 0x10) = lVar26;
    *(long *)((long)(puVar8 + uVar20 * 0x10) + 8) = lVar10;
    local_58 = puVar8;
    FUN_10026503c(lVar23);
    puVar8 = local_58;
    uVar20 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003dcb24:
  _swift_bridgeObjectRelease(local_58);
  return;
}

