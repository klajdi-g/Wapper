// rea decompile_all
// name: FUN_1002f58fc
// address: 0x1002f58fc
// body: available
// range: 0x1002f58fc-0x1002f5f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002f5a60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002f58fc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  NSComparisonResult NVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_e0 [8];
  long local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  undefined *local_58;
  
  lVar4 = 0;
  local_d0 = param_1;
  FUN_1002f58e8();
  local_c8 = *(long *)(lVar4 + -8);
  local_68 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  local_70 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = lVar4 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar4 - extraout_x12_01;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar9 = param_3[1];
  local_b8 = param_3;
  if (0 < lVar9) {
    lVar10 = 0;
    local_c0 = unaff_x21;
    local_d8 = param_4;
    do {
      lVar11 = lVar10 + 1;
      local_b0 = lVar10;
      if (lVar11 < lVar9) {
        lVar15 = *param_3;
        lVar18 = *(long *)(local_c8 + 0x48);
        lVar12 = lVar15 + lVar18 * lVar11;
        local_78 = lVar9;
        FUN_100029504(lVar12,lVar14,FUN_1002f58e8);
        lVar5 = lVar15 + lVar18 * lVar10;
        FUN_100029504(lVar5,lVar4,FUN_1002f58e8);
        FUN_100026df4();
        NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                          (lVar5,PTR___type_metadata_for_Swift_String_100523a98,
                           PTR___type_metadata_for_Swift_String_100523a98,lVar5,lVar5);
        local_88 = NVar6.unknown;
        FUN_100029548(lVar4,FUN_1002f58e8);
        FUN_100029548(lVar14,FUN_1002f58e8);
        lVar15 = lVar15 + lVar18 * (lVar10 + 2);
        lVar9 = lVar10 + 2;
        local_80 = lVar18;
        do {
          lVar11 = local_78;
          if (local_78 == lVar9) break;
          bVar3 = local_88 == (undefined *)0xffffffffffffffff;
          FUN_100029504(lVar15,lVar14,FUN_1002f58e8);
          FUN_100029504(lVar12,lVar4,FUN_1002f58e8);
          NVar6 = (extension_Foundation)::Swift::StringProtocol::_localizedCaseInsensitiveCompare
                            (NVar6.unknown,PTR___type_metadata_for_Swift_String_100523a98,
                             PTR___type_metadata_for_Swift_String_100523a98,lVar5,lVar5);
          FUN_100029548(lVar4,FUN_1002f58e8);
          FUN_100029548(lVar14,FUN_1002f58e8);
          lVar15 = lVar15 + local_80;
          lVar12 = lVar12 + local_80;
          lVar11 = lVar9;
          lVar9 = lVar9 + 1;
        } while (bVar3 != (NVar6.unknown != (undefined *)0xffffffffffffffff));
        param_3 = local_b8;
        if (local_88 == (undefined *)0xffffffffffffffff) {
          if (lVar11 < local_b0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f74);
            (*pcVar2)();
          }
          if (local_b0 < lVar11) {
            lVar15 = 0;
            puVar17 = (undefined *)*local_b8;
            lVar12 = local_80 * (lVar11 + -1);
            lVar5 = lVar11 * local_80;
            lVar10 = local_b0 * local_80;
            lVar9 = local_b0;
            local_88 = puVar17;
            local_78 = lVar11;
            do {
              if (lVar9 != lVar11 + lVar15 + -1) {
                if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f8c);
                  (*pcVar2)();
                }
                puVar7 = puVar17 + lVar10;
                FUN_100007e64(puVar7,local_a8,FUN_1002f58e8);
                puVar17 = local_88;
                if ((lVar10 < lVar12) || (local_88 + lVar5 <= puVar7)) {
                  _swift_arrayInitWithTakeFrontToBack(puVar7,local_88 + lVar12,1,local_68);
                }
                else if (local_80 != 0) {
                  _swift_arrayInitWithTakeBackToFront(puVar7,local_88 + lVar12,1,local_68);
                }
                FUN_100007e64(local_a8,puVar17 + lVar12,FUN_1002f58e8);
                lVar11 = local_78;
              }
              lVar9 = lVar9 + 1;
              lVar15 = lVar15 + -1;
              lVar12 = lVar12 - local_80;
              lVar5 = lVar5 - local_80;
              lVar10 = lVar10 + local_80;
              param_3 = local_b8;
            } while (lVar9 < lVar11 + lVar15);
          }
        }
      }
      lVar9 = param_3[1];
      lVar10 = lVar11;
      lVar15 = local_c0;
      if (lVar11 < lVar9) {
        if (SBORROW8(lVar11,local_b0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f68);
          (*pcVar2)();
        }
        if (lVar11 - local_b0 < local_d8) {
          if (SCARRY8(local_b0,local_d8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f6c);
            (*pcVar2)();
          }
          lVar12 = local_b0 + local_d8;
          if (lVar9 <= local_b0 + local_d8) {
            lVar12 = lVar9;
          }
          if (lVar12 < local_b0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f70);
            (*pcVar2)();
          }
          if (lVar11 != lVar12) {
            lVar16 = *param_3;
            local_a0 = *(long *)(local_c8 + 0x48);
            lVar9 = lVar16 + local_a0 * (lVar11 + -1);
            lVar19 = -local_a0;
            puVar17 = (undefined *)(local_b0 - lVar11);
            lVar5 = lVar16 + lVar11 * local_a0;
            lStack_98 = lVar12;
            lVar12 = lVar5;
            puVar7 = puVar17;
            lVar18 = lVar9;
LAB_1002f5bd8:
            do {
              local_78 = lVar11;
              local_80 = lVar18;
              local_88 = puVar7;
              local_90 = lVar12;
              FUN_100029504(lVar5,lVar14,FUN_1002f58e8);
              lVar10 = lVar9;
              FUN_100029504(lVar9,lVar4,FUN_1002f58e8);
              FUN_100026df4();
              NVar6 = (extension_Foundation)::Swift::StringProtocol::
                      _localizedCaseInsensitiveCompare
                                (lVar10,PTR___type_metadata_for_Swift_String_100523a98,
                                 PTR___type_metadata_for_Swift_String_100523a98,lVar10,lVar10);
              FUN_100029548(lVar4,FUN_1002f58e8);
              FUN_100029548(lVar14,FUN_1002f58e8);
              puVar1 = local_70;
              if (NVar6.unknown == (undefined *)0xffffffffffffffff) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f78);
                  (*pcVar2)();
                }
                FUN_100007e64(lVar5,local_70,FUN_1002f58e8);
                _swift_arrayInitWithTakeFrontToBack(lVar5,lVar9,1,local_68);
                FUN_100007e64(puVar1,lVar9,FUN_1002f58e8);
                lVar9 = lVar9 + lVar19;
                lVar5 = lVar5 + lVar19;
                bVar3 = puVar17 != (undefined *)0xffffffffffffffff;
                puVar17 = puVar17 + 1;
                lVar12 = local_90;
                puVar7 = local_88;
                lVar18 = local_80;
                lVar11 = local_78;
                if (bVar3) goto LAB_1002f5bd8;
              }
              lVar9 = local_80 + local_a0;
              puVar17 = local_88 + -1;
              lVar5 = local_90 + local_a0;
              lVar10 = lStack_98;
              param_3 = local_b8;
              lVar15 = local_c0;
              lVar12 = lVar5;
              puVar7 = puVar17;
              lVar18 = lVar9;
              lVar11 = local_78 + 1;
            } while (local_78 + 1 != lStack_98);
          }
        }
      }
      puVar17 = local_58;
      if (lVar10 < local_b0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f5c);
        (*pcVar2)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar17;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar13 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10026486c(puVar17,uVar13 + 1,1,puVar8);
        puVar8 = puVar17;
      }
      *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
      *(long *)(puVar8 + uVar13 * 0x10 + 0x20) = local_b0;
      *(long *)(puVar8 + uVar13 * 0x10 + 0x28) = lVar10;
      local_58 = puVar8;
      if (*local_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f90);
        (*pcVar2)();
      }
      FUN_1002f6188(&local_58,*local_d0,param_3);
      puVar17 = local_58;
      if (lVar15 != 0) goto LAB_1002f5f2c;
      lVar9 = param_3[1];
      local_c0 = lVar15;
    } while (lVar10 < lVar9);
    unaff_x21 = 0;
  }
  puVar17 = local_58;
  lVar4 = *local_d0;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f98);
    (*pcVar2)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  uVar13 = *(ulong *)(puVar17 + 0x10);
  while (local_58 = puVar17, 1 < uVar13) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f94);
      (*pcVar2)();
    }
    lVar11 = uVar13 - 1;
    lVar15 = *(long *)(puVar17 + uVar13 * 0x10);
    lVar14 = *(long *)(puVar17 + lVar11 * 0x10 + 0x28);
    lVar10 = *(long *)(local_c8 + 0x48);
    FUN_1002f6408(lVar9 + lVar10 * lVar15,lVar9 + lVar10 * *(long *)(puVar17 + lVar11 * 0x10 + 0x20)
                  ,lVar9 + lVar10 * lVar14,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar14 < lVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f60);
      (*pcVar2)();
    }
    puVar7 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar17 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f5f64);
      (*pcVar2)();
    }
    *(long *)(puVar17 + uVar13 * 0x10) = lVar15;
    *(long *)((long)(puVar17 + uVar13 * 0x10) + 8) = lVar14;
    local_58 = puVar17;
    FUN_10026503c(lVar11);
    puVar17 = local_58;
    param_3 = local_b8;
    uVar13 = *(ulong *)(local_58 + 0x10);
  }
LAB_1002f5f2c:
  _swift_bridgeObjectRelease(puVar17);
  return;
}

