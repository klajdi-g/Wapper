// rea decompile_all
// name: FUN_1002aacd4
// address: 0x1002aacd4
// body: available
// range: 0x1002aacd4-0x1002ab01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002aacd4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar3 = 0;
  FUN_10040211c();
  lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ab018);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ab01c);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ab020);
    (*pcVar2)();
  }
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = (long)(param_2 - param_1) / lVar8;
  }
  lVar4 = 0;
  if (lVar8 != 0) {
    lVar4 = (long)(param_3 - param_2) / lVar8;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar9 < lVar4) {
    lVar4 = lVar9 * lVar8;
    if ((param_4 < param_1) || (param_1 + lVar4 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar9,lVar3);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar9,lVar3);
    }
    uVar5 = param_4 + lVar4;
    local_70 = uVar5;
    if (0 < lVar4 && param_2 < param_3) {
      do {
        if (*(long *)(param_4 + (long)*(int *)(lVar3 + 0x20)) <
            *(long *)(param_2 + (long)*(int *)(lVar3 + 0x20))) {
          uVar7 = param_2 + lVar8;
          uVar6 = param_4;
          if ((param_1 < param_2) || (uVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar3);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar3);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar6 = param_4 + lVar8;
          uVar7 = param_2;
          uVar1 = uVar6;
          if ((param_1 < param_4) || (uVar6 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar3);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar3);
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar8;
        local_58 = param_1;
      } while ((uVar6 < uVar5) &&
              (param_4 = uVar6, param_2 = uVar7, local_58 = param_1, uVar7 < param_3));
    }
  }
  else {
    lVar9 = lVar4 * lVar8;
    if ((param_4 < param_2) || (param_2 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar4,lVar3);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar4,lVar3);
    }
    uVar5 = param_4 + lVar9;
    local_70 = uVar5;
    local_58 = param_2;
    if (0 < lVar9 && param_1 < param_2) {
      lVar8 = -lVar8;
      do {
        uVar7 = param_2 + lVar8;
        uVar6 = param_3;
        local_58 = param_2;
        while (param_3 = uVar6 + lVar8,
              *(long *)(uVar5 + lVar8 + *(int *)(lVar3 + 0x20)) <=
              *(long *)(uVar7 + (long)*(int *)(lVar3 + 0x20))) {
          uVar1 = uVar5 + lVar8;
          local_70 = uVar1;
          if ((uVar6 < uVar5) || (uVar5 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar3);
          }
          else if (uVar6 != uVar5) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar3);
          }
          uVar6 = param_3;
          uVar5 = uVar1;
          if (uVar1 <= param_4) goto LAB_1002aaef4;
        }
        if ((uVar6 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar7,1,lVar3);
        }
        else if (uVar6 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar7,1,lVar3);
        }
        local_58 = uVar7;
      } while ((param_4 < uVar5) && (param_2 = uVar7, param_1 < uVar7));
    }
  }
LAB_1002aaef4:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

