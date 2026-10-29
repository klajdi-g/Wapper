// rea decompile_all
// name: FUN_1002b0dbc
// address: 0x1002b0dbc
// body: available
// range: 0x1002b0dbc-0x1002b1107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002b0dbc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *local_70;
  long *local_68;
  long *local_58;
  
  puVar3 = &DAT_1005564c8;
  FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
  lVar8 = *(long *)(*(long *)(puVar3 + -8) + 0x48);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b1100);
    (*pcVar2)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b1104);
    (*pcVar2)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) && (lVar8 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b1108);
    (*pcVar2)();
  }
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = ((long)param_2 - (long)param_1) / lVar8;
  }
  lVar4 = 0;
  if (lVar8 != 0) {
    lVar4 = ((long)param_3 - (long)param_2) / lVar8;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar9 < lVar4) {
    lVar4 = lVar9 * lVar8;
    if ((param_4 < param_1) || ((long *)((long)param_1 + lVar4) <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar9,puVar3);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar9,puVar3);
    }
    plVar5 = (long *)((long)param_4 + lVar4);
    local_70 = plVar5;
    if (0 < lVar4 && param_2 < param_3) {
      do {
        if (*param_2 < *param_4) {
          plVar7 = (long *)((long)param_2 + lVar8);
          plVar6 = param_4;
          if ((param_1 < param_2) || (plVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,puVar3);
            plVar1 = local_68;
          }
          else {
            plVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,puVar3);
              plVar1 = local_68;
            }
          }
        }
        else {
          plVar6 = (long *)((long)param_4 + lVar8);
          plVar7 = param_2;
          plVar1 = plVar6;
          if ((param_1 < param_4) || (plVar6 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,puVar3);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,puVar3);
          }
        }
        local_68 = plVar1;
        param_1 = (long *)((long)param_1 + lVar8);
        local_58 = param_1;
      } while ((plVar6 < plVar5) &&
              (param_4 = plVar6, param_2 = plVar7, local_58 = param_1, plVar7 < param_3));
    }
  }
  else {
    lVar9 = lVar4 * lVar8;
    if ((param_4 < param_2) || ((long *)((long)param_2 + lVar9) <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar4,puVar3);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar4,puVar3);
    }
    plVar5 = (long *)((long)param_4 + lVar9);
    local_70 = plVar5;
    local_58 = param_2;
    if (0 < lVar9 && param_1 < param_2) {
      lVar8 = -lVar8;
      do {
        plVar7 = (long *)((long)param_2 + lVar8);
        plVar6 = param_3;
        local_58 = param_2;
        while( true ) {
          param_3 = (long *)((long)plVar6 + lVar8);
          plVar1 = (long *)((long)plVar5 + lVar8);
          if (*plVar1 < *plVar7) break;
          local_70 = plVar1;
          if ((plVar6 < plVar5) || (plVar5 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,plVar1,1,puVar3);
          }
          else if (plVar6 != plVar5) {
            _swift_arrayInitWithTakeBackToFront(param_3,plVar1,1,puVar3);
          }
          plVar6 = param_3;
          plVar5 = plVar1;
          if (plVar1 <= param_4) goto LAB_1002b0fe4;
        }
        if ((plVar6 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,plVar7,1,puVar3);
        }
        else if (plVar6 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,plVar7,1,puVar3);
        }
        local_58 = plVar7;
      } while ((param_4 < plVar5) && (param_2 = plVar7, param_1 < plVar7));
    }
  }
LAB_1002b0fe4:
  FUN_1002650c4(&local_58,&local_68,&local_70);
  return 1;
}

