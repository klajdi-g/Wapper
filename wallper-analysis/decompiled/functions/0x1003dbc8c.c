// rea decompile_all
// name: FUN_1003dbc8c
// address: 0x1003dbc8c
// body: available
// range: 0x1003dbc8c-0x1003dc397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003dbc8c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_f0 [3];
  long *plStack_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined *local_58;
  
  lVar4 = 0;
  local_d0 = param_1;
  FUN_10040211c();
  local_c8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar15 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_b8 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar8 = (lVar15 - extraout_x12_00) - extraout_x12_01;
  local_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100521118)();
  alStack_f0[1] = lVar8 - extraout_x12_02;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  local_78 = param_3[1];
  if (0 < local_78) {
    lVar8 = 0;
    local_c0 = unaff_x21;
    alStack_f0[2] = param_4;
    plStack_d8 = param_3;
    local_68 = lVar4;
    do {
      lVar11 = alStack_f0[1];
      lVar12 = lVar8 + 1;
      local_90 = lVar8;
      if (lVar12 < local_78) {
        lVar10 = *param_3;
        lVar13 = *(long *)(local_c8 + 0x48);
        lVar12 = lVar10 + lVar13 * lVar12;
        FUN_100029504(lVar10 + lVar13 * lVar8,alStack_f0[1],FUN_10040211c);
        lVar14 = local_90;
        plVar1 = (long *)(lVar12 + *(int *)(lVar4 + 0x30));
        local_98 = 0;
        if ((char)plVar1[1] != '\x01') {
          local_98 = *plVar1;
        }
        plVar1 = (long *)(lVar11 + *(int *)(lVar4 + 0x30));
        local_a0 = 0;
        if ((char)plVar1[1] != '\x01') {
          local_a0 = *plVar1;
        }
        FUN_100029548(lVar11,FUN_10040211c);
        lVar8 = local_78 + -2;
        lVar10 = lVar10 + lVar13 * (lVar14 + 2);
        lVar4 = 1;
        local_88 = lVar13;
        do {
          lVar11 = local_a8;
          if (lVar14 == lVar8) goto LAB_1003dbee8;
          local_80 = CONCAT44(local_80._4_4_,(uint)(local_98 < local_a0));
          FUN_100029504(lVar12,local_a8,FUN_10040211c);
          lVar14 = local_90;
          plVar1 = (long *)(lVar10 + *(int *)(local_68 + 0x30));
          lVar13 = 0;
          if ((char)plVar1[1] != '\x01') {
            lVar13 = *plVar1;
          }
          plVar1 = (long *)(lVar11 + *(int *)(local_68 + 0x30));
          lVar16 = 0;
          if ((char)plVar1[1] != '\x01') {
            lVar16 = *plVar1;
          }
          FUN_100029548(lVar11,FUN_10040211c);
          lVar8 = lVar8 + -1;
          lVar4 = lVar4 + 1;
          lVar10 = lVar10 + local_88;
          lVar12 = lVar12 + local_88;
        } while ((((uint)local_80 ^ lVar16 <= lVar13) & 1) != 0);
        local_78 = lVar14 + lVar4;
LAB_1003dbee8:
        lVar4 = local_68;
        lVar8 = lVar14;
        param_4 = alStack_f0[2];
        param_3 = plStack_d8;
        lVar12 = local_78;
        if (local_98 < local_a0) {
          if (local_78 < lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc36c);
            (*pcVar2)();
          }
          if (lVar14 < local_78) {
            lVar13 = 0;
            lVar10 = *plStack_d8;
            lVar17 = local_88 * (local_78 + -1);
            lVar16 = local_78 * local_88;
            lVar11 = lVar14 * local_88;
            do {
              if (lVar14 != local_78 + lVar13 + -1) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc38c);
                  (*pcVar2)();
                }
                uVar9 = lVar10 + lVar11;
                FUN_100007e64(uVar9,local_b8,FUN_10040211c);
                if ((lVar11 < lVar17) || ((ulong)(lVar10 + lVar16) <= uVar9)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar9,lVar10 + lVar17,1,lVar4);
                }
                else if (local_88 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar9,lVar10 + lVar17,1,lVar4);
                }
                FUN_100007e64(local_b8,lVar10 + lVar17,FUN_10040211c);
              }
              lVar14 = lVar14 + 1;
              lVar13 = lVar13 + -1;
              lVar17 = lVar17 - local_88;
              lVar16 = lVar16 - local_88;
              lVar11 = lVar11 + local_88;
              lVar8 = local_90;
              param_4 = alStack_f0[2];
              param_3 = plStack_d8;
              lVar12 = local_78;
            } while (lVar14 < local_78 + lVar13);
          }
        }
      }
      local_78 = lVar12;
      lVar11 = param_3[1];
      lVar12 = local_c0;
      if (local_78 < lVar11) {
        if (SBORROW8(local_78,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc368);
          (*pcVar2)();
        }
        if (local_78 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc370);
            (*pcVar2)();
          }
          lVar14 = lVar8 + param_4;
          if (lVar11 <= lVar8 + param_4) {
            lVar14 = lVar11;
          }
          if (lVar14 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc374);
            (*pcVar2)();
          }
          if (local_78 != lVar14) {
            lVar16 = *param_3;
            local_b0 = *(long *)(local_c8 + 0x48);
            lVar12 = lVar16 + local_b0 * (local_78 + -1);
            lVar17 = -local_b0;
            lVar8 = lVar8 - local_78;
            lVar11 = lVar16 + local_78 * local_b0;
            local_a0 = lVar14;
            lVar14 = lVar11;
            lVar10 = lVar8;
            lVar13 = lVar12;
LAB_1003dc0b8:
            do {
              local_80 = lVar13;
              local_88 = lVar10;
              local_98 = lVar14;
              FUN_100029504(lVar12,lVar15,FUN_10040211c);
              plVar1 = (long *)(lVar11 + *(int *)(lVar4 + 0x30));
              lVar14 = 0;
              if ((char)plVar1[1] != '\x01') {
                lVar14 = *plVar1;
              }
              plVar1 = (long *)(lVar15 + *(int *)(lVar4 + 0x30));
              lVar10 = 0;
              if ((char)plVar1[1] != '\x01') {
                lVar10 = *plVar1;
              }
              FUN_100029548(lVar15,FUN_10040211c);
              lVar13 = local_70;
              lVar4 = local_68;
              if (lVar14 < lVar10) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc378);
                  (*pcVar2)();
                }
                FUN_100007e64(lVar11,local_70,FUN_10040211c);
                lVar4 = local_68;
                _swift_arrayInitWithTakeFrontToBack(lVar11,lVar12,1,local_68);
                FUN_100007e64(lVar13,lVar12,FUN_10040211c);
                lVar12 = lVar12 + lVar17;
                lVar11 = lVar11 + lVar17;
                bVar3 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                lVar14 = local_98;
                lVar10 = local_88;
                lVar13 = local_80;
                if (bVar3) goto LAB_1003dc0b8;
              }
              local_78 = local_78 + 1;
              lVar12 = local_80 + local_b0;
              lVar8 = local_88 + -1;
              lVar11 = local_98 + local_b0;
              lVar14 = lVar11;
              lVar10 = lVar8;
              lVar13 = lVar12;
            } while (local_78 != local_a0);
            local_78 = local_a0;
            lVar8 = local_90;
            param_4 = alStack_f0[2];
            lVar12 = local_c0;
            param_3 = plStack_d8;
          }
        }
      }
      puVar7 = local_58;
      if (local_78 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc35c);
        (*pcVar2)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar9 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10026486c(puVar7,uVar9 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
      *(long *)(puVar7 + uVar9 * 0x10 + 0x20) = local_90;
      *(long *)(puVar7 + uVar9 * 0x10 + 0x28) = local_78;
      local_58 = puVar7;
      if (*local_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc390);
        (*pcVar2)();
      }
      FUN_1003e01c4(&local_58,*local_d0,param_3,FUN_1003e1404);
      puVar7 = local_58;
      if (lVar12 != 0) goto LAB_1003dc32c;
      lVar11 = param_3[1];
      bVar3 = local_78 < lVar11;
      lVar8 = local_78;
      local_c0 = lVar12;
      local_78 = lVar11;
    } while (bVar3);
    unaff_x21 = 0;
  }
  puVar7 = local_58;
  lVar4 = *local_d0;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc398);
    (*pcVar2)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100265268();
  }
  uVar9 = *(ulong *)(puVar7 + 0x10);
  while (local_58 = puVar7, 1 < uVar9) {
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc394);
      (*pcVar2)();
    }
    lVar11 = uVar9 - 1;
    lVar14 = *(long *)(puVar7 + uVar9 * 0x10);
    lVar8 = *(long *)(puVar7 + lVar11 * 0x10 + 0x28);
    lVar12 = *(long *)(local_c8 + 0x48);
    FUN_1003e1404(lVar15 + lVar12 * lVar14,
                  lVar15 + lVar12 * *(long *)(puVar7 + lVar11 * 0x10 + 0x20),lVar15 + lVar12 * lVar8
                  ,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar8 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc360);
      (*pcVar2)();
    }
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dc364);
      (*pcVar2)();
    }
    *(long *)(puVar7 + uVar9 * 0x10) = lVar14;
    *(long *)((long)(puVar7 + uVar9 * 0x10) + 8) = lVar8;
    local_58 = puVar7;
    FUN_10026503c(lVar11);
    puVar7 = local_58;
    uVar9 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003dc32c:
  _swift_bridgeObjectRelease(puVar7);
  return;
}

