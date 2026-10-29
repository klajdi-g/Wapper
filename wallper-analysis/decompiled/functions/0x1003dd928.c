// rea decompile_all
// name: FUN_1003dd928
// address: 0x1003dd928
// body: available
// range: 0x1003dd928-0x1003de1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003ddbac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003dd928(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  NSComparisonResult NVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x21;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_140 [8];
  long local_138 [3];
  long *local_120;
  long local_118;
  long *local_110;
  long local_108;
  long lStack_80;
  undefined *local_58;
  
  lVar4 = 0;
  local_120 = param_1;
  FUN_10040211c();
  local_118 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  puVar11 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar26 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar28 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar12 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = (lVar13 - extraout_x12_03) - extraout_x12_04;
  local_138[0] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_138[2] = lVar14 - extraout_x12_05;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar14 = param_3[1];
  local_110 = param_3;
  if (0 < lVar14) {
    lVar21 = 0;
    local_138[1] = param_4;
    do {
      uVar24 = local_138[2];
      lVar6 = lVar21 + 1;
      local_108 = lVar21;
      if (lVar6 < lVar14) {
        lVar17 = *param_3;
        lVar18 = *(long *)(local_118 + 0x48);
        lVar22 = lVar17 + lVar18 * lVar6;
        FUN_100029504(lVar22,local_138[2],FUN_10040211c);
        lVar6 = local_138[0];
        FUN_100029504(lVar17 + lVar18 * lVar21,local_138[0],FUN_10040211c);
        FUN_1003bd348(uVar24,lVar6);
        FUN_100029548(lVar6,FUN_10040211c);
        FUN_100029548(local_138[2],FUN_10040211c);
        if (unaff_x21 != 0) goto LAB_1003de178;
        lVar17 = lVar17 + lVar18 * (lVar21 + 2);
        lVar21 = lVar21 + 2;
        do {
          lVar23 = lVar21;
          lVar6 = lVar14;
          if (lVar14 == lVar23) break;
          FUN_100029504(lVar17,extraout_x13,FUN_10040211c);
          lVar6 = lVar22;
          FUN_100029504(lVar22,lVar13,FUN_10040211c);
          iVar1 = *(int *)(lVar4 + 0x3c);
          lVar19 = *(long *)(extraout_x13 + iVar1 + 8);
          lVar21 = lVar19;
          if (lVar19 == 0) {
            lVar21 = *(long *)(extraout_x13 + 8);
            lVar6 = lVar21;
            _swift_bridgeObjectRetain(lVar21);
          }
          lVar27 = *(long *)(lVar13 + iVar1 + 8);
          lStack_80 = lVar27;
          if (lVar27 == 0) {
            lStack_80 = *(long *)(lVar13 + 8);
            lVar6 = lStack_80;
            _swift_bridgeObjectRetain(lStack_80);
          }
          FUN_100026df4();
          _swift_bridgeObjectRetain(lVar19);
          _swift_bridgeObjectRetain(lVar27);
          NVar5 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (lVar6,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,lVar6,lVar6);
          _swift_bridgeObjectRelease(lVar21);
          _swift_bridgeObjectRelease(lStack_80);
          FUN_100029548(lVar13,FUN_10040211c);
          FUN_100029548(extraout_x13,FUN_10040211c);
          lVar17 = lVar17 + lVar18;
          lVar22 = lVar22 + lVar18;
          lVar21 = lVar23 + 1;
          lVar6 = lVar23;
        } while ((((uint)uVar24 ^ (uint)(NVar5.unknown != (undefined *)0xffffffffffffffff)) & 1) !=
                 0);
        param_4 = local_138[1];
        param_3 = local_110;
        if ((uVar24 & 1) != 0) {
          if (lVar6 < local_108) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1bc);
            (*pcVar2)();
          }
          if (local_108 < lVar6) {
            lVar17 = 0;
            lVar22 = *local_110;
            lVar23 = lVar18 * (lVar6 + -1);
            lVar19 = lVar6 * lVar18;
            lVar21 = local_108 * lVar18;
            lVar14 = local_108;
            do {
              if (lVar14 != lVar6 + lVar17 + -1) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1d4);
                  (*pcVar2)();
                }
                uVar24 = lVar22 + lVar21;
                FUN_100007e64(uVar24,lVar12,FUN_10040211c);
                if ((lVar21 < lVar23) || ((ulong)(lVar22 + lVar19) <= uVar24)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar24,lVar22 + lVar23,1,lVar4);
                }
                else if (lVar18 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar24,lVar22 + lVar23,1,lVar4);
                }
                FUN_100007e64(lVar12,lVar22 + lVar23,FUN_10040211c);
              }
              lVar14 = lVar14 + 1;
              lVar17 = lVar17 + -1;
              lVar23 = lVar23 - lVar18;
              lVar19 = lVar19 - lVar18;
              lVar21 = lVar21 + lVar18;
              param_4 = local_138[1];
              param_3 = local_110;
            } while (lVar14 < lVar6 + lVar17);
          }
        }
      }
      lVar14 = param_3[1];
      lVar21 = lVar6;
      if (lVar6 < lVar14) {
        if (SBORROW8(lVar6,local_108)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1b0);
          (*pcVar2)();
        }
        if (lVar6 - local_108 < param_4) {
          if (SCARRY8(local_108,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1b4);
            (*pcVar2)();
          }
          lVar17 = local_108 + param_4;
          if (lVar14 <= local_108 + param_4) {
            lVar17 = lVar14;
          }
          if (lVar17 < local_108) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1b8);
            (*pcVar2)();
          }
          if (lVar6 != lVar17) {
            lVar15 = *param_3;
            lVar16 = *(long *)(local_118 + 0x48);
            lVar22 = lVar15 + lVar16 * (lVar6 + -1);
            lVar14 = local_108 - lVar6;
            lVar18 = lVar15 + lVar6 * lVar16;
            lVar23 = lVar22;
            lVar19 = lVar18;
            lVar27 = lVar14;
LAB_1003dde60:
            do {
              FUN_100029504(lVar18,lVar28,FUN_10040211c);
              lVar7 = lVar22;
              FUN_100029504(lVar22,lVar26,FUN_10040211c);
              iVar1 = *(int *)(lVar4 + 0x3c);
              lVar20 = *(long *)(lVar28 + iVar1 + 8);
              lVar21 = lVar20;
              if (lVar20 == 0) {
                lVar21 = *(long *)(lVar28 + 8);
                lVar7 = lVar21;
                _swift_bridgeObjectRetain(lVar21);
              }
              lVar25 = *(long *)(lVar26 + iVar1 + 8);
              lVar29 = lVar25;
              if (lVar25 == 0) {
                lVar29 = *(long *)(lVar26 + 8);
                lVar7 = lVar29;
                _swift_bridgeObjectRetain(lVar29);
              }
              FUN_100026df4();
              _swift_bridgeObjectRetain(lVar20);
              _swift_bridgeObjectRetain(lVar25);
              NVar5 = (extension_Foundation)::Swift::StringProtocol::
                      _localizedCaseInsensitiveCompare
                                (lVar7,PTR___type_metadata_for_Swift_String_100523a98,
                                 PTR___type_metadata_for_Swift_String_100523a98,lVar7,lVar7);
              _swift_bridgeObjectRelease(lVar21);
              _swift_bridgeObjectRelease(lVar29);
              FUN_100029548(lVar26,FUN_10040211c);
              FUN_100029548(lVar28,FUN_10040211c);
              if (NVar5.unknown == (undefined *)0xffffffffffffffff) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1c0);
                  (*pcVar2)();
                }
                FUN_100007e64(lVar18,puVar11,FUN_10040211c);
                _swift_arrayInitWithTakeFrontToBack(lVar18,lVar22,1,lVar4);
                FUN_100007e64(puVar11,lVar22,FUN_10040211c);
                lVar22 = lVar22 + -lVar16;
                lVar18 = lVar18 + -lVar16;
                bVar3 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                if (bVar3) goto LAB_1003dde60;
              }
              lVar6 = lVar6 + 1;
              lVar22 = lVar23 + lVar16;
              lVar14 = lVar27 + -1;
              lVar18 = lVar19 + lVar16;
              param_4 = local_138[1];
              param_3 = local_110;
              lVar21 = lVar17;
              lVar23 = lVar22;
              lVar19 = lVar18;
              lVar27 = lVar14;
            } while (lVar6 != lVar17);
          }
        }
      }
      puVar10 = local_58;
      if (lVar21 < local_108) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1a4);
        (*pcVar2)();
      }
      puVar8 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar24 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar24) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_10026486c(puVar10,uVar24 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar24 + 1;
      *(long *)(puVar10 + uVar24 * 0x10 + 0x20) = local_108;
      *(long *)(puVar10 + uVar24 * 0x10 + 0x28) = lVar21;
      local_58 = puVar10;
      if (*local_120 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1d8);
        (*pcVar2)();
      }
      FUN_1003e01c4(&local_58,*local_120,param_3,FUN_1003e28ac);
      if (unaff_x21 != 0) goto LAB_1003de178;
      lVar14 = param_3[1];
    } while (lVar21 < lVar14);
  }
  puVar10 = local_58;
  lVar4 = *local_120;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1e0);
    (*pcVar2)();
  }
  puVar8 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_100265268();
  }
  uVar24 = *(ulong *)(puVar10 + 0x10);
  while (local_58 = puVar10, 1 < uVar24) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1dc);
      (*pcVar2)();
    }
    lVar26 = uVar24 - 1;
    lVar28 = *(long *)(puVar10 + uVar24 * 0x10);
    lVar12 = *(long *)(puVar10 + lVar26 * 0x10 + 0x28);
    lVar13 = *(long *)(local_118 + 0x48);
    FUN_1003e28ac(lVar14 + lVar13 * lVar28,
                  lVar14 + lVar13 * *(long *)(puVar10 + lVar26 * 0x10 + 0x20),
                  lVar14 + lVar13 * lVar12,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar12 < lVar28) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1a8);
      (*pcVar2)();
    }
    puVar8 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar8 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar10 + 0x10) <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003de1ac);
      (*pcVar2)();
    }
    *(long *)(puVar10 + uVar24 * 0x10) = lVar28;
    *(long *)((long)(puVar10 + uVar24 * 0x10) + 8) = lVar12;
    local_58 = puVar10;
    FUN_10026503c(lVar26);
    puVar10 = local_58;
    param_3 = local_110;
    uVar24 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003de178:
  _swift_bridgeObjectRelease(local_58);
  return;
}

