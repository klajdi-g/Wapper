// rea decompile_all
// name: FUN_1002b0540
// address: 0x1002b0540
// body: available
// range: 0x1002b0540-0x1002b06bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b0540(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long extraout_x12;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar3 = &DAT_1005564c8;
  FUN_100002f94(&DAT_1005564c8,&DAT_10042a380);
  (*(code *)PTR____chkstk_darwin_100521118)();
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar4 = *(long *)(extraout_x8 + 0x48);
    plVar9 = (long *)(lVar6 + lVar4 * (param_3 + -1));
    param_1 = param_1 - param_3;
    plVar7 = (long *)(lVar6 + lVar4 * param_3);
    plVar10 = plVar9;
    plVar8 = plVar7;
    lVar5 = param_1;
LAB_1002b0654:
    do {
      if (*plVar7 < *plVar9) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002b06bc);
          (*pcVar1)();
        }
        FUN_100007e1c(plVar7,&stack0xffffffffffffff70 + -extraout_x12,&DAT_1005564c8,&DAT_10042a380)
        ;
        _swift_arrayInitWithTakeFrontToBack(plVar7,plVar9,1,puVar3);
        FUN_100007e1c(&stack0xffffffffffffff70 + -extraout_x12,plVar9,&DAT_1005564c8,&DAT_10042a380)
        ;
        plVar9 = (long *)((long)plVar9 + -lVar4);
        plVar7 = (long *)((long)plVar7 + -lVar4);
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1002b0654;
      }
      param_3 = param_3 + 1;
      plVar9 = (long *)((long)plVar10 + lVar4);
      param_1 = lVar5 + -1;
      plVar7 = (long *)((long)plVar8 + lVar4);
      plVar10 = plVar9;
      plVar8 = plVar7;
      lVar5 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

