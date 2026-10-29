// rea decompile_all
// name: FUN_1002a35bc
// address: 0x1002a35bc
// body: available
// range: 0x1002a35bc-0x1002a3d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a35bc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Date DVar7;
  long extraout_x8;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  long local_c0;
  long local_b8;
  ulong uStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined *local_58;
  
  puVar6 = &DAT_1005569c8;
  local_e0 = param_1;
  FUN_100002f94(&DAT_1005569c8,&DAT_10042aac8);
  local_d0 = *(long *)(puVar6 + -8);
  local_68 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar8 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12;
  local_c0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = lVar8 - extraout_x12_00;
  local_70 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_78 = lVar8 - extraout_x12_01;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  uVar9 = param_3[1];
  if (0 < (long)uVar9) {
    uVar17 = 0;
    local_f0 = param_4;
    local_e8 = param_3;
    do {
      lVar8 = local_78;
      DVar7.unknown = &DAT_1005569c8;
      uVar12 = uVar17 + 1;
      uVar13 = uVar17;
      local_d8 = unaff_x21;
      if ((long)uVar12 < (long)uVar9) {
        lVar10 = *param_3;
        lVar18 = *(long *)(local_d0 + 0x48);
        lVar11 = lVar10 + lVar18 * uVar12;
        FUN_1000087e4(lVar11,local_78,&DAT_1005569c8,&DAT_10042aac8);
        lVar14 = local_70;
        FUN_1000087e4(lVar10 + lVar18 * uVar17,local_70,&DAT_1005569c8,&DAT_10042aac8);
        bVar3 = Foundation::Date::<_infix
                          ((undefined *)(lVar8 + *(int *)(local_68 + 0x40)),
                           (undefined *)(lVar14 + *(int *)(local_68 + 0x40)),DVar7);
        local_90 = CONCAT44(local_90._4_4_,(int)CONCAT71(extraout_var,bVar3));
        FUN_10002a29c(lVar14,&DAT_1005569c8,&DAT_10042aac8);
        FUN_10002a29c(lVar8,&DAT_1005569c8,&DAT_10042aac8);
        lVar10 = lVar10 + lVar18 * (uVar17 + 2);
        uVar13 = uVar17 + 2;
        local_c8 = uVar17;
        local_80 = lVar18;
        do {
          lVar8 = local_78;
          uVar12 = uVar9;
          if (uVar9 == uVar13) break;
          DVar7.unknown = &DAT_1005569c8;
          FUN_1000087e4(lVar10,local_78,&DAT_1005569c8,&DAT_10042aac8);
          lVar14 = local_70;
          FUN_1000087e4(lVar11,local_70,&DAT_1005569c8,&DAT_10042aac8);
          bVar3 = Foundation::Date::<_infix
                            ((undefined *)(lVar8 + *(int *)(local_68 + 0x40)),
                             (undefined *)(lVar14 + *(int *)(local_68 + 0x40)),DVar7);
          FUN_10002a29c(lVar14,&DAT_1005569c8,&DAT_10042aac8);
          FUN_10002a29c(lVar8,&DAT_1005569c8,&DAT_10042aac8);
          lVar10 = lVar10 + local_80;
          lVar11 = lVar11 + local_80;
          uVar12 = uVar13;
          uVar13 = uVar13 + 1;
        } while (((uint)local_90 & 1) == (uint)bVar3);
        param_3 = local_e8;
        uVar13 = local_c8;
        if ((local_90 & 1) != 0) {
          if ((long)uVar12 < (long)local_c8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cd8);
            (*pcVar2)();
          }
          if ((long)local_c8 < (long)uVar12) {
            lVar11 = 0;
            lVar10 = *local_e8;
            lVar18 = local_80 * (uVar12 - 1);
            lVar14 = uVar12 * local_80;
            lVar8 = local_c8 * local_80;
            uVar9 = local_c8;
            do {
              if (uVar9 != (uVar12 + lVar11) - 1) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cf8);
                  (*pcVar2)();
                }
                uVar17 = lVar10 + lVar8;
                FUN_100007e1c(uVar17,local_c0,&DAT_1005569c8,&DAT_10042aac8);
                if ((lVar8 < lVar18) || ((ulong)(lVar10 + lVar14) <= uVar17)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar17,lVar10 + lVar18,1,local_68);
                }
                else if (local_80 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar17,lVar10 + lVar18,1,local_68);
                }
                FUN_100007e1c(local_c0,lVar10 + lVar18,&DAT_1005569c8,&DAT_10042aac8);
              }
              uVar9 = uVar9 + 1;
              lVar11 = lVar11 + -1;
              lVar18 = lVar18 - local_80;
              lVar14 = lVar14 - local_80;
              lVar8 = lVar8 + local_80;
              param_3 = local_e8;
              uVar13 = local_c8;
            } while ((long)uVar9 < (long)(uVar12 + lVar11));
          }
        }
      }
      uVar9 = param_3[1];
      uVar17 = uVar12;
      unaff_x21 = local_d8;
      if ((long)uVar12 < (long)uVar9) {
        if (SBORROW8(uVar12,uVar13)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cd4);
          (*pcVar2)();
        }
        if ((long)(uVar12 - uVar13) < local_f0) {
          if (SCARRY8(uVar13,local_f0)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cdc);
            (*pcVar2)();
          }
          uVar1 = uVar13 + local_f0;
          if ((long)uVar9 <= (long)(uVar13 + local_f0)) {
            uVar1 = uVar9;
          }
          if ((long)uVar1 < (long)uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3ce0);
            (*pcVar2)();
          }
          if (uVar12 != uVar1) {
            local_80 = *param_3;
            local_b8 = *(long *)(local_d0 + 0x48);
            lVar10 = local_80 + local_b8 * (uVar12 - 1);
            lVar15 = -local_b8;
            lVar8 = uVar13 - uVar12;
            lVar11 = local_80 + uVar12 * local_b8;
            puVar6 = local_68;
            local_c8 = uVar13;
            uStack_b0 = uVar1;
            lVar14 = lVar11;
            lVar18 = lVar8;
            lVar16 = lVar10;
LAB_1002a3a10:
            do {
              local_90 = uVar12;
              local_98 = lVar16;
              lStack_a0 = lVar18;
              local_a8 = lVar14;
              lVar14 = local_78;
              DVar7.unknown = &DAT_1005569c8;
              FUN_1000087e4(lVar11,local_78,&DAT_1005569c8,&DAT_10042aac8);
              lVar18 = local_70;
              FUN_1000087e4(lVar10,local_70,&DAT_1005569c8,&DAT_10042aac8);
              bVar3 = Foundation::Date::<_infix
                                ((undefined *)(lVar14 + *(int *)(puVar6 + 0x40)),
                                 (undefined *)(lVar18 + *(int *)(puVar6 + 0x40)),DVar7);
              FUN_10002a29c(lVar18,&DAT_1005569c8,&DAT_10042aac8);
              FUN_10002a29c(lVar14,&DAT_1005569c8,&DAT_10042aac8);
              lVar14 = local_88;
              puVar6 = local_68;
              if (bVar3) {
                if (local_80 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3ce4);
                  (*pcVar2)();
                }
                FUN_100007e1c(lVar11,local_88,&DAT_1005569c8,&DAT_10042aac8);
                puVar6 = local_68;
                _swift_arrayInitWithTakeFrontToBack(lVar11,lVar10,1,local_68);
                FUN_100007e1c(lVar14,lVar10,&DAT_1005569c8,&DAT_10042aac8);
                lVar10 = lVar10 + lVar15;
                lVar11 = lVar11 + lVar15;
                bVar3 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                lVar14 = local_a8;
                lVar18 = lStack_a0;
                lVar16 = local_98;
                uVar12 = local_90;
                if (bVar3) goto LAB_1002a3a10;
              }
              lVar10 = local_98 + local_b8;
              lVar8 = lStack_a0 + -1;
              lVar11 = local_a8 + local_b8;
              param_3 = local_e8;
              uVar17 = uStack_b0;
              uVar13 = local_c8;
              unaff_x21 = local_d8;
              lVar14 = lVar11;
              lVar18 = lVar8;
              lVar16 = lVar10;
              uVar12 = local_90 + 1;
            } while (local_90 + 1 != uStack_b0);
          }
        }
      }
      puVar6 = local_58;
      if ((long)uVar17 < (long)uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cc8);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar9 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10026486c(puVar6,uVar9 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar9 + 1;
      *(ulong *)(puVar6 + uVar9 * 0x10 + 0x20) = uVar13;
      *(ulong *)(puVar6 + uVar9 * 0x10 + 0x28) = uVar17;
      local_58 = puVar6;
      if (*local_e0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cfc);
        (*pcVar2)();
      }
      FUN_1002a3f18(&local_58,*local_e0,param_3);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_1002a3c98;
      uVar9 = param_3[1];
    } while ((long)uVar17 < (long)uVar9);
    unaff_x21 = 0;
  }
  puVar6 = local_58;
  lVar8 = *local_e0;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3d04);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100265268();
  }
  uVar9 = *(ulong *)(puVar6 + 0x10);
  while (local_58 = puVar6, 1 < uVar9) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3d00);
      (*pcVar2)();
    }
    lVar18 = uVar9 - 1;
    lVar16 = *(long *)(puVar6 + uVar9 * 0x10);
    lVar11 = *(long *)(puVar6 + lVar18 * 0x10 + 0x28);
    lVar14 = *(long *)(local_d0 + 0x48);
    FUN_1002a41a4(lVar10 + lVar14 * lVar16,
                  lVar10 + lVar14 * *(long *)(puVar6 + lVar18 * 0x10 + 0x20),
                  lVar10 + lVar14 * lVar11,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar11 < lVar16) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3ccc);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002a3cd0);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar9 * 0x10) = lVar16;
    *(long *)((long)(puVar6 + uVar9 * 0x10) + 8) = lVar11;
    local_58 = puVar6;
    FUN_10026503c(lVar18);
    puVar6 = local_58;
    uVar9 = *(ulong *)(local_58 + 0x10);
  }
LAB_1002a3c98:
  _swift_bridgeObjectRelease(puVar6);
  return;
}

