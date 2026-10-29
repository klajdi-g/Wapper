// rea decompile_all
// name: FUN_1003e09fc
// address: 0x1003e09fc
// body: available
// range: 0x1003e09fc-0x1003e0e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e09fc(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  long lVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  double dVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double local_b0;
  double local_88;
  double local_80;
  double local_78;
  
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - extraout_x13;
  lVar7 = *(long *)(extraout_x12 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e0e5c);
    (*pcVar5)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e0e60);
    (*pcVar5)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1003e0e64);
    (*pcVar5)();
  }
  lVar3 = 0;
  if (lVar7 != 0) {
    lVar3 = ((long)param_2 - (long)param_1) / lVar7;
  }
  lVar4 = 0;
  if (lVar7 != 0) {
    lVar4 = ((long)param_3 - (long)param_2) / lVar7;
  }
  local_80 = param_4;
  local_78 = param_1;
  if (lVar3 < lVar4) {
    lVar10 = lVar3 * lVar7;
    if (((ulong)param_4 < (ulong)param_1) || ((ulong)((long)param_1 + lVar10) <= (ulong)param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar3,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar3,lVar6);
    }
    dVar8 = (double)((long)param_4 + lVar10);
    local_88 = dVar8;
    if (0 < lVar10 && (ulong)param_2 < (ulong)param_3) {
      do {
        FUN_100029504(param_4,lVar12,FUN_10040211c);
        pdVar1 = (double *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
        dVar11 = 0.0;
        if (*(char *)(pdVar1 + 1) != '\x01') {
          dVar11 = *pdVar1;
        }
        pdVar1 = (double *)(lVar12 + *(int *)(lVar6 + 0x38));
        dVar9 = 0.0;
        if (*(char *)(pdVar1 + 1) != '\x01') {
          dVar9 = *pdVar1;
        }
        FUN_100029548(lVar12,FUN_10040211c);
        if (dVar9 <= dVar11) {
          dVar9 = (double)((long)param_4 + lVar7);
          dVar11 = param_2;
          dVar2 = dVar9;
          if (((ulong)param_1 < (ulong)param_4) || ((ulong)dVar9 <= (ulong)param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        else {
          dVar11 = (double)((long)param_2 + lVar7);
          dVar9 = param_4;
          if (((ulong)param_1 < (ulong)param_2) || ((ulong)dVar11 <= (ulong)param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            dVar2 = local_80;
          }
          else {
            dVar2 = local_80;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              dVar2 = local_80;
            }
          }
        }
        local_80 = dVar2;
        param_1 = (double)((long)param_1 + lVar7);
        local_78 = param_1;
      } while (((ulong)dVar9 < (ulong)dVar8) &&
              (param_4 = dVar9, param_2 = dVar11, local_78 = param_1, (ulong)dVar11 < (ulong)param_3
              ));
    }
  }
  else {
    lVar12 = lVar4 * lVar7;
    if (((ulong)param_4 < (ulong)param_2) || ((ulong)((long)param_2 + lVar12) <= (ulong)param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar4,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar4,lVar6);
    }
    dVar8 = (double)((long)param_4 + lVar12);
    local_88 = dVar8;
    local_78 = param_2;
    if (0 < lVar12 && (ulong)param_1 < (ulong)param_2) {
      lVar7 = -lVar7;
      local_b0 = param_1;
      do {
        dVar11 = (double)((long)param_2 + lVar7);
        dVar9 = param_3;
        local_78 = param_2;
        while( true ) {
          dVar2 = (double)((long)dVar8 + lVar7);
          FUN_100029504(dVar11,lVar10,FUN_10040211c);
          pdVar1 = (double *)((long)dVar2 + (long)*(int *)(lVar6 + 0x38));
          dVar13 = 0.0;
          if (*(char *)(pdVar1 + 1) != '\x01') {
            dVar13 = *pdVar1;
          }
          pdVar1 = (double *)(lVar10 + *(int *)(lVar6 + 0x38));
          dVar14 = 0.0;
          if (*(char *)(pdVar1 + 1) != '\x01') {
            dVar14 = *pdVar1;
          }
          param_3 = (double)((long)dVar9 + lVar7);
          FUN_100029548(lVar10,FUN_10040211c);
          if (dVar13 < dVar14) break;
          local_88 = dVar2;
          if (((ulong)dVar9 < (ulong)dVar8) || ((ulong)dVar8 <= (ulong)param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,dVar2,1,lVar6);
          }
          else if (dVar9 != dVar8) {
            _swift_arrayInitWithTakeBackToFront(param_3,dVar2,1,lVar6);
          }
          dVar8 = dVar2;
          dVar9 = param_3;
          if ((ulong)dVar2 <= (ulong)param_4) goto LAB_1003e0cb4;
        }
        if (((ulong)dVar9 < (ulong)param_2) || ((ulong)param_2 <= (ulong)param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,dVar11,1,lVar6);
        }
        else if (dVar9 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,dVar11,1,lVar6);
        }
        local_78 = dVar11;
      } while (((ulong)param_4 < (ulong)dVar8) &&
              (param_2 = dVar11, (ulong)local_b0 < (ulong)dVar11));
    }
  }
LAB_1003e0cb4:
  FUN_1002650d8(&local_78,&local_80,&local_88);
  return 1;
}

