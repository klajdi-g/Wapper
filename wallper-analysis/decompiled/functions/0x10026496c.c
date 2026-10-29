// rea decompile_all
// name: FUN_10026496c
// address: 0x10026496c
// body: available
// range: 0x10026496c-0x10026503b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10026496c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long extraout_x8;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_f0;
  ulong local_88;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  puVar7 = &DAT_100556878;
  FUN_100002f94(&DAT_100556878,&DAT_10042a730);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar17 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar17 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)(lVar10 - extraout_x13_00);
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar12 = (long *)((long)plVar11 - extraout_x13_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = (long)plVar12 - extraout_x13_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x13_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar15 = (long *)(lVar14 - extraout_x13_04);
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar8 = (long *)((long)plVar15 - extraout_x13_05);
  lVar9 = *(long *)(extraout_x12 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100265034);
    (*pcVar6)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100265038);
    (*pcVar6)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10026503c);
    (*pcVar6)();
  }
  lVar4 = 0;
  if (lVar9 != 0) {
    lVar4 = (long)(param_2 - param_1) / lVar9;
  }
  lVar5 = 0;
  if (lVar9 != 0) {
    lVar5 = (long)(param_3 - param_2) / lVar9;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar4 < lVar5) {
    lVar17 = lVar4 * lVar9;
    if ((param_4 < param_1) || (param_1 + lVar17 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar4,puVar7);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar4,puVar7);
    }
    uVar19 = param_4 + lVar17;
    local_88 = param_1;
    local_70 = uVar19;
    if (0 < lVar17 && param_2 < param_3) {
      do {
        FUN_1000087e4(param_2,plVar8,&DAT_100556878,&DAT_10042a730);
        FUN_1000087e4(param_4,plVar15,&DAT_100556878,&DAT_10042a730);
        FUN_1000087e4(plVar8,lVar14,&DAT_100556878,&DAT_10042a730);
        iVar3 = *(int *)(puVar7 + 0x30);
        lVar17 = 0;
        FUN_100266c2c();
        lVar10 = *(long *)(lVar14 + iVar3 + (long)*(int *)(lVar17 + 0x18));
        FUN_100029548(lVar14 + iVar3,FUN_100266c2c);
        FUN_1000087e4(plVar15,lVar13,&DAT_100556878,&DAT_10042a730);
        lVar17 = *(long *)(lVar13 + *(int *)(puVar7 + 0x30) + (long)*(int *)(lVar17 + 0x18));
        FUN_100029548(lVar13 + *(int *)(puVar7 + 0x30),FUN_100266c2c);
        bVar1 = *plVar8 < *plVar15;
        if (lVar10 != lVar17) {
          bVar1 = lVar10 < lVar17;
        }
        FUN_10002a29c(plVar15,&DAT_100556878,&DAT_10042a730);
        FUN_10002a29c(plVar8,&DAT_100556878,&DAT_10042a730);
        if (bVar1) {
          uVar16 = param_2 + lVar9;
          uVar18 = param_4;
          if ((local_88 < param_2) || (uVar16 <= local_88)) {
            _swift_arrayInitWithTakeFrontToBack(local_88,param_2,1,puVar7);
            uVar2 = local_68;
          }
          else {
            uVar2 = local_68;
            if (local_88 != param_2) {
              _swift_arrayInitWithTakeBackToFront(local_88,param_2,1,puVar7);
              uVar2 = local_68;
            }
          }
        }
        else {
          uVar18 = param_4 + lVar9;
          uVar16 = param_2;
          uVar2 = uVar18;
          if ((local_88 < param_4) || (uVar18 <= local_88)) {
            _swift_arrayInitWithTakeFrontToBack(local_88,param_4,1,puVar7);
          }
          else if (local_88 != param_4) {
            _swift_arrayInitWithTakeBackToFront(local_88,param_4,1,puVar7);
          }
        }
        local_68 = uVar2;
        local_88 = local_88 + lVar9;
        local_58 = local_88;
      } while ((uVar18 < uVar19) &&
              (param_2 = uVar16, param_4 = uVar18, local_58 = local_88, uVar16 < param_3));
    }
  }
  else {
    lVar13 = lVar5 * lVar9;
    if ((param_4 < param_2) || (param_2 + lVar13 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar5,puVar7);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar5,puVar7);
    }
    uVar19 = param_4 + lVar13;
    local_70 = uVar19;
    local_58 = param_2;
    if (0 < lVar13 && param_1 < param_2) {
      lVar9 = -lVar9;
      do {
        uVar16 = param_2 + lVar9;
        uVar18 = param_3;
        local_58 = param_2;
        while( true ) {
          uVar2 = uVar19 + lVar9;
          FUN_1000087e4(uVar2,plVar12,&DAT_100556878,&DAT_10042a730);
          FUN_1000087e4(uVar16,plVar11,&DAT_100556878,&DAT_10042a730);
          FUN_1000087e4(plVar12,lVar10,&DAT_100556878,&DAT_10042a730);
          iVar3 = *(int *)(puVar7 + 0x30);
          lVar13 = 0;
          FUN_100266c2c();
          lVar14 = *(long *)(lVar10 + iVar3 + (long)*(int *)(lVar13 + 0x18));
          FUN_100029548(lVar10 + iVar3,FUN_100266c2c);
          FUN_1000087e4(plVar11,lVar17,&DAT_100556878,&DAT_10042a730);
          lVar13 = *(long *)(lVar17 + *(int *)(puVar7 + 0x30) + (long)*(int *)(lVar13 + 0x18));
          FUN_100029548(lVar17 + *(int *)(puVar7 + 0x30),FUN_100266c2c);
          bVar1 = *plVar12 < *plVar11;
          if (lVar14 != lVar13) {
            bVar1 = lVar14 < lVar13;
          }
          param_3 = uVar18 + lVar9;
          FUN_10002a29c(plVar11,&DAT_100556878,&DAT_10042a730);
          FUN_10002a29c(plVar12,&DAT_100556878,&DAT_10042a730);
          if (bVar1) break;
          local_70 = uVar2;
          if ((uVar18 < uVar19) || (uVar19 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar2,1,puVar7);
          }
          else if (uVar18 != uVar19) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar2,1,puVar7);
          }
          uVar18 = param_3;
          uVar19 = uVar2;
          if (uVar2 <= param_4) goto LAB_100264dc4;
        }
        if ((uVar18 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar16,1,puVar7);
        }
        else if (uVar18 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar16,1,puVar7);
        }
        local_58 = uVar16;
      } while ((param_4 < uVar19) && (param_2 = uVar16, param_1 < uVar16));
    }
  }
LAB_100264dc4:
  FUN_1002650f8(&local_58,&local_68,&local_70,&DAT_100556878,&DAT_10042a730);
  return 1;
}

