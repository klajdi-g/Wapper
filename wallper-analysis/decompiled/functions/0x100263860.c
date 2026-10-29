// rea decompile_all
// name: FUN_100263860
// address: 0x100263860
// body: available
// range: 0x100263860-0x1002642df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100263860(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long *plVar11;
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
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_150;
  long *local_148;
  long *local_140;
  long local_138;
  long local_130;
  long local_128;
  long *local_120;
  long *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined *local_58;
  
  puVar9 = &DAT_100556878;
  local_118 = param_1;
  FUN_100002f94(&DAT_100556878,&DAT_10042a730);
  local_110 = *(long *)(puVar9 + -8);
  local_70 = puVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar10 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  local_78 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)(lVar10 - extraout_x12_01);
  local_88 = plVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)((long)plVar11 - extraout_x12_02);
  local_90 = plVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = (long)plVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar15 - extraout_x12_04;
  local_d0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_05;
  local_d8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)(lVar10 - extraout_x12_06);
  local_e0 = plVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)((long)plVar11 - extraout_x12_07);
  local_e8 = plVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = (long)plVar11 - extraout_x12_08;
  local_130 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_09;
  local_138 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)(lVar10 - extraout_x12_10);
  local_140 = plVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_148 = (long *)((long)plVar11 - extraout_x12_11);
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar16 = 0;
    local_108 = unaff_x21;
    local_150 = lVar15;
    local_128 = param_4;
    local_120 = param_3;
    do {
      plVar11 = local_148;
      lVar15 = lVar16 + 1;
      local_100 = lVar16;
      if (lVar15 < lVar10) {
        lVar12 = *param_3;
        lVar14 = *(long *)(local_110 + 0x48);
        lVar6 = lVar12 + lVar14 * lVar15;
        local_b0 = lVar10;
        local_98 = lVar12;
        FUN_1000087e4(lVar6,local_148,&DAT_100556878,&DAT_10042a730);
        plVar2 = local_140;
        FUN_1000087e4(lVar12 + lVar14 * lVar16,local_140,&DAT_100556878,&DAT_10042a730);
        lVar10 = local_138;
        FUN_1000087e4(plVar11,local_138,&DAT_100556878,&DAT_10042a730);
        puVar9 = local_70;
        iVar1 = *(int *)(local_70 + 0x30);
        lVar15 = 0;
        FUN_100266c2c();
        lVar16 = *(long *)(lVar10 + iVar1 + (long)*(int *)(lVar15 + 0x18));
        FUN_100029548(lVar10 + iVar1,FUN_100266c2c);
        lVar10 = local_130;
        FUN_1000087e4(plVar2,local_130,&DAT_100556878,&DAT_10042a730);
        lVar12 = *(long *)(lVar10 + *(int *)(puVar9 + 0x30) + (long)*(int *)(lVar15 + 0x18));
        local_c0 = lVar15;
        FUN_100029548(lVar10 + *(int *)(puVar9 + 0x30),FUN_100266c2c);
        bVar5 = *plVar11 < *plVar2;
        if (lVar16 != lVar12) {
          bVar5 = lVar16 < lVar12;
        }
        local_b8 = CONCAT44(local_b8._4_4_,(uint)bVar5);
        FUN_10002a29c(plVar2,&DAT_100556878,&DAT_10042a730);
        FUN_10002a29c(plVar11,&DAT_100556878,&DAT_10042a730);
        lVar10 = local_98 + lVar14 * (local_100 + 2);
        lVar16 = local_100 + 2;
        local_a0 = lVar14;
        do {
          plVar11 = local_e8;
          lVar15 = local_b0;
          if (local_b0 == lVar16) break;
          FUN_1000087e4(lVar10,local_e8,&DAT_100556878,&DAT_10042a730);
          plVar2 = local_e0;
          FUN_1000087e4(lVar6,local_e0,&DAT_100556878,&DAT_10042a730);
          lVar15 = local_d8;
          FUN_1000087e4(plVar11,local_d8,&DAT_100556878,&DAT_10042a730);
          puVar9 = local_70;
          lVar12 = local_c0;
          local_98 = *(long *)(lVar15 + *(int *)(local_70 + 0x30) + (long)*(int *)(local_c0 + 0x18))
          ;
          FUN_100029548(lVar15 + *(int *)(local_70 + 0x30),FUN_100266c2c);
          lVar15 = local_d0;
          FUN_1000087e4(plVar2,local_d0,&DAT_100556878,&DAT_10042a730);
          lVar14 = *(long *)(lVar15 + *(int *)(puVar9 + 0x30) + (long)*(int *)(lVar12 + 0x18));
          FUN_100029548(lVar15 + *(int *)(puVar9 + 0x30),FUN_100266c2c);
          lVar15 = *plVar11;
          lVar12 = *plVar2;
          FUN_10002a29c(plVar2,&DAT_100556878,&DAT_10042a730);
          FUN_10002a29c(plVar11,&DAT_100556878,&DAT_10042a730);
          bVar5 = lVar12 <= lVar15;
          if (local_98 != lVar14) {
            bVar5 = lVar14 <= local_98;
          }
          lVar10 = lVar10 + local_a0;
          lVar6 = lVar6 + local_a0;
          lVar15 = lVar16;
          lVar16 = lVar16 + 1;
        } while ((uint)local_b8 != bVar5);
        lVar10 = local_150;
        param_4 = local_128;
        param_3 = local_120;
        if ((uint)local_b8 != 0) {
          if (lVar15 < local_100) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642b4);
            (*pcVar4)();
          }
          if (local_100 < lVar15) {
            lVar14 = 0;
            lVar12 = *local_120;
            lVar17 = local_a0 * (lVar15 + -1);
            lVar18 = lVar15 * local_a0;
            lVar6 = local_100 * local_a0;
            lVar16 = local_100;
            do {
              if (lVar16 != lVar15 + lVar14 + -1) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642d4);
                  (*pcVar4)();
                }
                uVar13 = lVar12 + lVar6;
                FUN_100007e1c(uVar13,lVar10,&DAT_100556878,&DAT_10042a730);
                if ((lVar6 < lVar17) || ((ulong)(lVar12 + lVar18) <= uVar13)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar13,lVar12 + lVar17,1,local_70);
                }
                else if (local_a0 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar13,lVar12 + lVar17,1,local_70);
                }
                FUN_100007e1c(lVar10,lVar12 + lVar17,&DAT_100556878,&DAT_10042a730);
              }
              lVar16 = lVar16 + 1;
              lVar14 = lVar14 + -1;
              lVar17 = lVar17 - local_a0;
              lVar18 = lVar18 - local_a0;
              lVar6 = lVar6 + local_a0;
              param_4 = local_128;
              param_3 = local_120;
            } while (lVar16 < lVar15 + lVar14);
          }
        }
      }
      lVar10 = param_3[1];
      lVar16 = lVar15;
      lVar6 = local_108;
      if (lVar15 < lVar10) {
        if (SBORROW8(lVar15,local_100)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642b0);
          (*pcVar4)();
        }
        if (lVar15 - local_100 < param_4) {
          if (SCARRY8(local_100,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642b8);
            (*pcVar4)();
          }
          lVar12 = local_100 + param_4;
          if (lVar10 <= local_100 + param_4) {
            lVar12 = lVar10;
          }
          if (lVar12 < local_100) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642bc);
            (*pcVar4)();
          }
          if (lVar15 != lVar12) {
            local_98 = *param_3;
            local_f8 = *(long *)(local_110 + 0x48);
            lVar14 = local_98 + local_f8 * (lVar15 + -1);
            local_a0 = -local_f8;
            lVar10 = local_100 - lVar15;
            lVar17 = local_98 + lVar15 * local_f8;
            puVar9 = local_70;
            lStack_f0 = lVar12;
            lVar12 = lVar17;
            lVar18 = lVar10;
            lVar3 = lVar14;
LAB_100263f30:
            do {
              local_b0 = lVar15;
              local_b8 = lVar3;
              local_c0 = lVar18;
              local_c8 = lVar12;
              plVar11 = local_90;
              FUN_1000087e4(lVar17,local_90,&DAT_100556878,&DAT_10042a730);
              plVar2 = local_88;
              FUN_1000087e4(lVar14,local_88,&DAT_100556878,&DAT_10042a730);
              lVar15 = local_80;
              FUN_1000087e4(plVar11,local_80,&DAT_100556878,&DAT_10042a730);
              iVar1 = *(int *)(puVar9 + 0x30);
              lVar16 = 0;
              FUN_100266c2c();
              lVar6 = *(long *)(lVar15 + iVar1 + (long)*(int *)(lVar16 + 0x18));
              FUN_100029548(lVar15 + iVar1,FUN_100266c2c);
              lVar15 = local_78;
              FUN_1000087e4(plVar2,local_78,&DAT_100556878,&DAT_10042a730);
              lVar16 = *(long *)(lVar15 + *(int *)(puVar9 + 0x30) + (long)*(int *)(lVar16 + 0x18));
              FUN_100029548(lVar15 + *(int *)(puVar9 + 0x30),FUN_100266c2c);
              bVar5 = *plVar11 < *plVar2;
              if (lVar6 != lVar16) {
                bVar5 = lVar6 < lVar16;
              }
              FUN_10002a29c(plVar2,&DAT_100556878,&DAT_10042a730);
              FUN_10002a29c(plVar11,&DAT_100556878,&DAT_10042a730);
              lVar15 = local_a8;
              puVar9 = local_70;
              if (bVar5) {
                if (local_98 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642c0);
                  (*pcVar4)();
                }
                FUN_100007e1c(lVar17,local_a8,&DAT_100556878,&DAT_10042a730);
                puVar9 = local_70;
                _swift_arrayInitWithTakeFrontToBack(lVar17,lVar14,1,local_70);
                FUN_100007e1c(lVar15,lVar14,&DAT_100556878,&DAT_10042a730);
                lVar14 = lVar14 + local_a0;
                lVar17 = lVar17 + local_a0;
                bVar5 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                lVar12 = local_c8;
                lVar18 = local_c0;
                lVar3 = local_b8;
                lVar15 = local_b0;
                if (bVar5) goto LAB_100263f30;
              }
              lVar14 = local_b8 + local_f8;
              lVar10 = local_c0 + -1;
              lVar17 = local_c8 + local_f8;
              lVar16 = lStack_f0;
              lVar6 = local_108;
              param_4 = local_128;
              param_3 = local_120;
              lVar12 = lVar17;
              lVar18 = lVar10;
              lVar3 = lVar14;
              lVar15 = local_b0 + 1;
            } while (local_b0 + 1 != lStack_f0);
          }
        }
      }
      puVar9 = local_58;
      if (lVar16 < local_100) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642a4);
        (*pcVar4)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar13 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_10026486c(puVar9,uVar13 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar13 + 1;
      *(long *)(puVar9 + uVar13 * 0x10 + 0x20) = local_100;
      *(long *)(puVar9 + uVar13 * 0x10 + 0x28) = lVar16;
      local_58 = puVar9;
      if (*local_118 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642d8);
        (*pcVar4)();
      }
      FUN_1002645e0(&local_58,*local_118,param_3);
      puVar9 = local_58;
      if (lVar6 != 0) goto LAB_100264274;
      lVar10 = param_3[1];
      local_108 = lVar6;
    } while (lVar16 < lVar10);
    unaff_x21 = 0;
  }
  puVar9 = local_58;
  lVar10 = *local_118;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642e0);
    (*pcVar4)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100265268();
  }
  uVar13 = *(ulong *)(puVar9 + 0x10);
  while( true ) {
    local_58 = puVar9;
    if (uVar13 < 2) {
      _swift_bridgeObjectRelease(puVar9);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642dc);
      (*pcVar4)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar9 + uVar13 * 0x10);
    lVar16 = *(long *)(puVar9 + lVar12 * 0x10 + 0x28);
    lVar6 = *(long *)(local_110 + 0x48);
    FUN_10026496c(lVar15 + lVar6 * lVar14,lVar15 + lVar6 * *(long *)(puVar9 + lVar12 * 0x10 + 0x20),
                  lVar15 + lVar6 * lVar16,lVar10);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642a8);
      (*pcVar4)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002642ac);
      (*pcVar4)();
    }
    *(long *)(puVar9 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar9 + uVar13 * 0x10) + 8) = lVar16;
    local_58 = puVar9;
    FUN_10026503c(lVar12);
    uVar13 = *(ulong *)(local_58 + 0x10);
    puVar9 = local_58;
  }
LAB_100264274:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

