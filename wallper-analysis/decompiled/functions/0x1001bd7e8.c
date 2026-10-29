// rea decompile_all
// name: FUN_1001bd7e8
// address: 0x1001bd7e8
// body: available
// range: 0x1001bd7e8-0x1001be25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bd7e8(long param_1,undefined *param_2,UUID param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  UUID UVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  UUID UVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  long local_120;
  long local_118;
  long local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  code *local_c0;
  undefined *local_b8;
  code *local_b0;
  code *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  ulong local_88;
  long local_80;
  undefined *local_78;
  UUID local_70;
  
  lVar3 = 0;
  local_70.unknown = param_2;
  FUN_100266c40();
  local_c0 = *(code **)(lVar3 + -8);
  local_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar5 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar5 - extraout_x12;
  local_78 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_80 = *(long *)(local_78 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_80 + 0x40));
  lVar9 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_10054a9c0;
  local_e0 = lVar9;
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  local_98 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12_00;
  puVar4 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar19 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar19 - extraout_x12_01;
  local_f0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_02;
  local_d0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_03;
  lVar3 = 0;
  local_c8 = lVar10;
  FUN_100266c2c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar11 = lVar10 - extraout_x12_04;
  local_88 = uVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar16.unknown = (undefined *)(uVar11 - extraout_x12_05);
  lVar3 = 0;
  FUN_10025ee04();
  local_a8 = (code *)(long)*(int *)(lVar3 + 0x34);
  uVar11 = *(ulong *)(local_a8 + param_1);
  puVar13 = (ulong *)(uVar11 + 0x10);
  uVar15 = *puVar13;
  if (uVar15 < 2) {
    return;
  }
  pcVar20 = (code *)((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
  lVar10 = *(long *)(lVar12 + 0x48);
  uVar14 = 0;
  local_120 = lVar5;
  local_118 = lVar17;
  local_110 = lVar19;
  local_e8 = (ulong *)lVar3;
  local_d8 = param_1;
  local_b0 = pcVar20;
LAB_1001bda74:
  bVar2 = Foundation::UUID::___infix((UUID)(pcVar20 + uVar11),local_70,param_3);
  uVar18 = uVar14 + 1;
  if (!bVar2) goto code_r0x0001001bda88;
  uVar15 = *puVar13;
  if (uVar15 - 1 != uVar14) {
    local_b8 = UVar16.unknown;
    do {
      pcVar20 = pcVar20 + lVar10;
      if (uVar15 <= uVar18) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be228);
        (*pcVar20)();
      }
      UVar8.unknown = FUN_100266c2c;
      FUN_100029504(pcVar20 + uVar11,UVar16.unknown);
      bVar2 = Foundation::UUID::___infix(UVar16,local_70,UVar8);
      FUN_100029548(UVar16.unknown,FUN_100266c2c);
      if (!bVar2) {
        if (uVar18 != uVar14) {
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be230);
            (*pcVar20)();
          }
          uVar15 = *puVar13;
          if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be234);
            (*pcVar20)();
          }
          FUN_100029504(local_b0 + uVar14 * lVar10 + uVar11,local_88,FUN_100266c2c);
          if (uVar15 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be238);
            (*pcVar20)();
          }
          FUN_100029504(pcVar20 + uVar11,local_a0,FUN_100266c2c);
          uVar15 = uVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar15 & 1) == 0) {
            FUN_1002872ec();
          }
          UVar16.unknown = local_b8;
          if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be23c);
            (*pcVar20)();
          }
          FUN_1001d4cb0(local_a0,local_b0 + uVar14 * lVar10 + uVar11,FUN_100266c2c);
          if (*(ulong *)(uVar11 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be240);
            (*pcVar20)();
          }
          FUN_1001d4cb0(local_88,pcVar20 + uVar11,FUN_100266c2c);
          *(ulong *)(local_a8 + local_d8) = uVar11;
        }
        uVar14 = uVar14 + 1;
      }
      uVar18 = uVar18 + 1;
      puVar13 = (ulong *)(uVar11 + 0x10);
      uVar15 = *puVar13;
    } while (uVar18 != uVar15);
  }
  if ((long)uVar18 < (long)uVar14) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be258);
    (*pcVar20)();
  }
  goto LAB_1001bdabc;
code_r0x0001001bda88:
  pcVar20 = pcVar20 + lVar10;
  uVar14 = uVar18;
  if (uVar15 == uVar18) goto code_r0x0001001bda98;
  goto LAB_1001bda74;
code_r0x0001001bda98:
  uVar18 = *puVar13;
  uVar14 = uVar18;
LAB_1001bdabc:
  lVar3 = local_d8;
  FUN_1002886c0(local_a8,uVar14,uVar18);
  local_100 = (long)*(int *)((long)local_e8 + 0x20);
  local_e8 = (ulong *)(*(ulong *)(lVar3 + local_100) + 0x10);
  local_b8 = (undefined *)*local_e8;
  if (local_b8 == (undefined *)0x0) {
    uVar15 = 0;
    uVar11 = 0;
  }
  else {
    uVar15 = 0;
    uVar14 = (ulong)(byte)local_c0[0x50] + 0x20 & ((ulong)(byte)local_c0[0x50] ^ 0xffffffffffffffff)
    ;
    local_a0 = *(long *)(local_c0 + 0x48);
    local_a8 = *(code **)(local_80 + 0x10);
    lVar10 = local_c8;
    local_108 = uVar14;
    local_88 = *(ulong *)(lVar3 + local_100);
    do {
      puVar4 = local_78;
      iVar1 = *(int *)(local_90 + 0x18);
      lVar12 = local_88 + uVar14;
      (*local_a8)(lVar10,local_70.unknown,local_78);
      lVar5 = local_80;
      local_b0 = *(code **)(local_80 + 0x38);
      (*local_b0)(lVar10,0,1,puVar4);
      lVar3 = (long)*(int *)(local_98 + 0x30);
      FUN_1000087e4(lVar12 + iVar1,lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_1000087e4(lVar10,lVar9 + lVar3,&DAT_10054a9c8,&DAT_10041bbe0);
      pcVar20 = *(code **)(lVar5 + 0x30);
      lVar5 = lVar9;
      (*pcVar20)(lVar9,1,puVar4);
      lVar12 = local_d0;
      if ((int)lVar5 == 1) {
        FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
        lVar3 = lVar9 + lVar3;
        (*pcVar20)(lVar3,1,puVar4);
        if ((int)lVar3 == 1) {
          local_c0 = pcVar20;
          FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
LAB_1001bde90:
          uVar11 = uVar15 + 1;
          uVar18 = *local_e8;
          if (uVar18 - 1 == uVar15) goto LAB_1001bdea8;
          uVar14 = local_a0 + uVar14;
          puVar13 = local_e8;
          uVar7 = local_88;
          lVar3 = local_f8;
          lVar9 = local_f0;
          goto LAB_1001bdf24;
        }
LAB_1001bdb5c:
        FUN_10002a29c(lVar9,&DAT_10054a9c0,&DAT_100422d20);
      }
      else {
        FUN_1000087e4(lVar9,local_d0,&DAT_10054a9c8,&DAT_10041bbe0);
        lVar5 = lVar9 + lVar3;
        (*pcVar20)(lVar5,1,puVar4);
        puVar4 = local_78;
        lVar19 = local_80;
        lVar10 = local_c8;
        lVar17 = local_e0;
        if ((int)lVar5 == 1) {
          FUN_10002a29c(local_c8,&DAT_10054a9c8,&DAT_10041bbe0);
          (**(code **)(local_80 + 8))(lVar12,local_78);
          goto LAB_1001bdb5c;
        }
        local_c0 = pcVar20;
        (**(code **)(local_80 + 0x20))(local_e0,lVar9 + lVar3,local_78);
        puVar6 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        bVar2 = Swift::Equatable::___infix(lVar12,lVar17,puVar4,puVar6);
        pcVar20 = *(code **)(lVar19 + 8);
        (*pcVar20)(lVar17,puVar4);
        lVar10 = local_c8;
        FUN_10002a29c(local_c8,&DAT_10054a9c8,&DAT_10041bbe0);
        (*pcVar20)(lVar12,puVar4);
        FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
        if (bVar2) goto LAB_1001bde90;
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 + local_a0;
    } while (local_b8 != (undefined *)uVar15);
    uVar15 = *local_e8;
    uVar11 = uVar15;
  }
  goto LAB_1001bdeb0;
LAB_1001bdf24:
  do {
    puVar4 = local_78;
    if (uVar18 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be22c);
      (*pcVar20)();
    }
    iVar1 = *(int *)(local_90 + 0x18);
    local_b8 = (undefined *)uVar14;
    local_88 = uVar7;
    (*local_a8)(lVar9,local_70.unknown,local_78);
    (*local_b0)(lVar9,0,1,puVar4);
    lVar10 = (long)*(int *)(local_98 + 0x30);
    local_c8 = uVar7 + uVar14;
    FUN_1000087e4(uVar7 + uVar14 + (long)iVar1,lVar3,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar9,lVar3 + lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar20 = local_c0;
    lVar5 = lVar3;
    (*local_c0)(lVar3,1,puVar4);
    lVar12 = local_110;
    if ((int)lVar5 == 1) {
      FUN_10002a29c(lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar10 = lVar3 + lVar10;
      (*pcVar20)(lVar10,1,local_78);
      if ((int)lVar10 != 1) {
LAB_1001be06c:
        FUN_10002a29c(lVar3,&DAT_10054a9c0,&DAT_100422d20);
        goto LAB_1001be084;
      }
      FUN_10002a29c(lVar3,&DAT_10054a9c8,&DAT_10041bbe0);
      uVar7 = local_88;
    }
    else {
      local_e8 = puVar13;
      FUN_1000087e4(lVar3,local_110,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar5 = lVar3 + lVar10;
      (*pcVar20)(lVar5,1,local_78);
      puVar4 = local_78;
      lVar19 = local_80;
      lVar17 = local_e0;
      lVar9 = local_f0;
      if ((int)lVar5 == 1) {
        FUN_10002a29c(local_f0,&DAT_10054a9c8,&DAT_10041bbe0);
        (**(code **)(local_80 + 8))(lVar12,local_78);
        puVar13 = local_e8;
        goto LAB_1001be06c;
      }
      (**(code **)(local_80 + 0x20))(local_e0,lVar3 + lVar10,local_78);
      puVar6 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar2 = Swift::Equatable::___infix(lVar12,lVar17,puVar4,puVar6);
      lVar3 = local_f8;
      pcVar20 = *(code **)(lVar19 + 8);
      (*pcVar20)(lVar17,puVar4);
      lVar9 = local_f0;
      FUN_10002a29c(local_f0,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar20)(lVar12,puVar4);
      FUN_10002a29c(lVar3,&DAT_10054a9c8,&DAT_10041bbe0);
      puVar13 = local_e8;
      uVar7 = local_88;
      if (bVar2) goto LAB_1001bdf04;
LAB_1001be084:
      uVar7 = local_88;
      pcVar20 = local_c0;
      lVar10 = local_118;
      if (uVar11 != uVar15) {
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be244);
          (*pcVar20)();
        }
        uVar14 = *puVar13;
        if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be248);
          (*pcVar20)();
        }
        lVar9 = uVar15 * local_a0;
        FUN_100029504(local_88 + local_108 + lVar9,local_118,FUN_100266c40);
        lVar3 = local_120;
        if (uVar14 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be24c);
          (*pcVar20)();
        }
        FUN_100029504(local_c8,local_120,FUN_100266c40);
        uVar14 = uVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar14 & 1) == 0) {
          FUN_100287300();
        }
        if (*(ulong *)(uVar7 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be250);
          (*pcVar20)();
        }
        FUN_1001d4cb0(lVar3,uVar7 + local_108 + lVar9,FUN_100266c40);
        if (*(ulong *)(uVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be254);
          (*pcVar20)();
        }
        local_c0 = pcVar20;
        FUN_1001d4cb0(lVar10,uVar7 + (long)local_b8,FUN_100266c40);
        *(ulong *)(local_d8 + local_100) = uVar7;
        lVar3 = local_f8;
        lVar9 = local_f0;
      }
      uVar15 = uVar15 + 1;
    }
LAB_1001bdf04:
    uVar11 = uVar11 + 1;
    puVar13 = (ulong *)(uVar7 + 0x10);
    uVar18 = *puVar13;
    uVar14 = (long)local_b8 + local_a0;
  } while (uVar11 != uVar18);
LAB_1001bdea8:
  if ((long)uVar11 < (long)uVar15) {
                    /* WARNING: Does not return */
    pcVar20 = (code *)SoftwareBreakpoint(1,0x1001be25c);
    (*pcVar20)();
  }
LAB_1001bdeb0:
  FUN_1002886d4(local_d8,uVar15,uVar11);
  return;
}

