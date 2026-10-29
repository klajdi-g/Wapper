// rea decompile_all
// name: FUN_1003e1404
// address: 0x1003e1404
// body: available
// range: 0x1003e1404-0x1003e1897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e1404(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_b0 [3];
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar11 - extraout_x13;
  lVar9 = *(long *)(extraout_x12 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e1890);
    (*pcVar5)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e1894);
    (*pcVar5)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e1898);
    (*pcVar5)();
  }
  lVar3 = 0;
  if (lVar9 != 0) {
    lVar3 = (long)(param_2 - param_1) / lVar9;
  }
  lVar4 = 0;
  if (lVar9 != 0) {
    lVar4 = (long)(param_3 - param_2) / lVar9;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar3 < lVar4) {
    lVar11 = lVar3 * lVar9;
    if ((param_4 < param_1) || (param_1 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar3,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar3,lVar6);
    }
    uVar7 = param_4 + lVar11;
    local_70 = uVar7;
    if (0 < lVar11 && param_2 < param_3) {
      do {
        FUN_100029504(param_4,lVar12,FUN_10040211c);
        plVar1 = (long *)(param_2 + (long)*(int *)(lVar6 + 0x30));
        lVar11 = 0;
        if ((char)plVar1[1] != '\x01') {
          lVar11 = *plVar1;
        }
        plVar1 = (long *)(lVar12 + *(int *)(lVar6 + 0x30));
        lVar3 = 0;
        if ((char)plVar1[1] != '\x01') {
          lVar3 = *plVar1;
        }
        FUN_100029548(lVar12,FUN_10040211c);
        if (lVar11 < lVar3) {
          uVar10 = param_2 + lVar9;
          uVar13 = param_4;
          if ((param_1 < param_2) || (uVar10 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            uVar2 = local_68;
          }
          else {
            uVar2 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              uVar2 = local_68;
            }
          }
        }
        else {
          uVar13 = param_4 + lVar9;
          uVar10 = param_2;
          uVar2 = uVar13;
          if ((param_1 < param_4) || (uVar13 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        local_68 = uVar2;
        param_1 = param_1 + lVar9;
        local_58 = param_1;
      } while ((uVar13 < uVar7) &&
              (param_2 = uVar10, param_4 = uVar13, local_58 = param_1, uVar10 < param_3));
    }
  }
  else {
    lVar12 = lVar4 * lVar9;
    if ((param_4 < param_2) || (param_2 + lVar12 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar4,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar4,lVar6);
    }
    uVar7 = param_4 + lVar12;
    local_70 = uVar7;
    local_58 = param_2;
    if (0 < lVar12 && param_1 < param_2) {
      lVar9 = -lVar9;
      local_58 = param_2;
      alStack_b0[1] = param_1;
      local_78 = param_3;
      do {
        uVar10 = local_58 + lVar9;
        alStack_b0[2] = local_58;
        while( true ) {
          uVar13 = uVar7 + lVar9;
          FUN_100029504(uVar10,lVar11,FUN_10040211c);
          plVar1 = (long *)(uVar13 + (long)*(int *)(lVar6 + 0x30));
          lVar12 = 0;
          if ((char)plVar1[1] != '\x01') {
            lVar12 = *plVar1;
          }
          plVar1 = (long *)(lVar11 + *(int *)(lVar6 + 0x30));
          lVar3 = 0;
          if ((char)plVar1[1] != '\x01') {
            lVar3 = *plVar1;
          }
          uVar2 = local_78 + lVar9;
          FUN_100029548(lVar11,FUN_10040211c);
          uVar8 = alStack_b0[1];
          if (lVar12 < lVar3) break;
          local_70 = uVar13;
          if ((local_78 < uVar7) || (uVar7 <= uVar2)) {
            _swift_arrayInitWithTakeFrontToBack(uVar2,uVar13,1,lVar6);
          }
          else if (local_78 != uVar7) {
            _swift_arrayInitWithTakeBackToFront(uVar2,uVar13,1,lVar6);
          }
          uVar7 = uVar13;
          local_78 = uVar2;
          if (uVar13 <= param_4) goto LAB_1003e16cc;
        }
        if ((local_78 < (ulong)alStack_b0[2]) || ((ulong)alStack_b0[2] <= uVar2)) {
          _swift_arrayInitWithTakeFrontToBack(uVar2,uVar10,1,lVar6);
          uVar8 = alStack_b0[1];
        }
        else if (local_78 != alStack_b0[2]) {
          _swift_arrayInitWithTakeBackToFront(uVar2,uVar10,1,lVar6);
        }
        local_58 = uVar10;
      } while ((param_4 < uVar7) && (local_78 = uVar2, uVar8 < uVar10));
    }
  }
LAB_1003e16cc:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

