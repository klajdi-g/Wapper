// rea decompile_all
// name: FUN_10030be5c
// address: 0x10030be5c
// body: available
// range: 0x10030be5c-0x10030c137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10030be5c(ID *param_1,ID *param_2,ID *param_3,ID *param_4)

{
  ulong uVar1;
  long lVar2;
  ID *pIVar3;
  ulong uVar4;
  long lVar5;
  ID *pIVar6;
  ID *pIVar7;
  ID *pIVar8;
  ID *pIVar9;
  ID IVar10;
  long lVar11;
  long lVar12;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar13;
  double extraout_d0_02;
  double dVar14;
  
  lVar11 = (long)param_2 - (long)param_1;
  lVar2 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar2 = lVar11;
  }
  lVar2 = lVar2 >> 3;
  lVar12 = (long)param_3 - (long)param_2;
  lVar5 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 3;
  if (lVar2 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 3);
    }
    pIVar7 = param_4 + lVar2;
    pIVar8 = param_1;
    if (7 < lVar11) {
      do {
        if (param_3 <= param_2) break;
        IVar10 = *param_4;
        objc_stub::frame(*param_2);
        dVar13 = extraout_d0;
        _CGRectGetMinX();
        objc_stub::frame(IVar10);
        dVar14 = extraout_d0_00;
        _CGRectGetMinX();
        if (dVar14 <= dVar13) {
          pIVar9 = param_4 + 1;
          pIVar6 = param_4;
        }
        else {
          pIVar9 = param_4;
          pIVar6 = param_2;
          param_2 = param_2 + 1;
        }
        param_4 = pIVar9;
        if (pIVar8 != pIVar6) {
          *pIVar8 = *pIVar6;
        }
        pIVar8 = pIVar8 + 1;
      } while (param_4 < pIVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar5 << 3);
    }
    pIVar6 = param_4 + lVar5;
    pIVar7 = pIVar6;
    pIVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar12)) {
      do {
        pIVar3 = param_2 + -1;
        pIVar9 = param_3;
        while( true ) {
          param_3 = pIVar9 + -1;
          pIVar7 = pIVar6 + -1;
          IVar10 = *pIVar3;
          objc_stub::frame(*pIVar7);
          dVar13 = extraout_d0_01;
          _CGRectGetMinX();
          objc_stub::frame(IVar10);
          dVar14 = extraout_d0_02;
          _CGRectGetMinX();
          if (dVar13 < dVar14) break;
          if (pIVar9 != pIVar6) {
            *param_3 = *pIVar7;
          }
          pIVar8 = param_2;
          pIVar6 = pIVar7;
          pIVar9 = param_3;
          if (pIVar7 <= param_4) goto LAB_10030c0d0;
        }
        if (pIVar9 != param_2) {
          *param_3 = *pIVar3;
        }
        pIVar7 = pIVar6;
        pIVar8 = pIVar3;
      } while ((param_1 < pIVar3) && (param_2 = pIVar3, param_4 < pIVar6));
    }
  }
LAB_10030c0d0:
  uVar4 = (long)pIVar7 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((pIVar8 != param_4) || ((ID *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= pIVar8)) {
    _memmove(pIVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}

