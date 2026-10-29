// rea decompile_all
// name: FUN_10030bb04
// address: 0x10030bb04
// body: available
// range: 0x10030bb04-0x10030bbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10030bb04(ID param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ID *pIVar3;
  ID IVar4;
  long lVar5;
  ID *pIVar6;
  long lVar7;
  long lVar8;
  double extraout_d0;
  double dVar9;
  double extraout_d0_00;
  double dVar10;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    pIVar3 = (ID *)(lVar5 + param_3 * 8 + -8);
    lVar7 = param_1 - param_3;
    do {
      param_1 = *(ID *)(lVar5 + param_3 * 8);
      pIVar6 = pIVar3;
      lVar8 = lVar7;
      do {
        IVar4 = *pIVar6;
        objc_stub::frame(param_1);
        dVar9 = extraout_d0;
        _CGRectGetMinX();
        objc_stub::frame(IVar4);
        dVar10 = extraout_d0_00;
        _CGRectGetMinX();
        param_1 = 0;
        if (dVar10 <= dVar9) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10030bbf4);
          (*pcVar1)();
        }
        IVar4 = *pIVar6;
        param_1 = pIVar6[1];
        *pIVar6 = param_1;
        pIVar6[1] = IVar4;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        pIVar6 = pIVar6 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      pIVar3 = pIVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (param_3 != param_2);
  }
  return param_1;
}

