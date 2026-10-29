// rea decompile_all
// name: FUN_100408d80
// address: 0x100408d80
// body: available
// range: 0x100408d80-0x100408ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100408d80(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  
  lVar3 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  if (param_3 != param_2) {
    lVar10 = *param_4;
    lVar4 = *(long *)(extraout_x12 + 0x48);
    lVar8 = lVar10 + lVar4 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar6 = lVar10 + lVar4 * param_3;
    lVar9 = lVar8;
    lVar7 = lVar6;
    lVar5 = param_1;
LAB_100408e80:
    do {
      if (*(long *)(lVar8 + *(int *)(lVar3 + 0x20)) < *(long *)(lVar6 + *(int *)(lVar3 + 0x20))) {
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100408ee4);
          (*pcVar1)();
        }
        FUN_100007e64(lVar6,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar6,lVar8,1,lVar3);
        FUN_100007e64(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar8,FUN_10040211c);
        lVar8 = lVar8 + -lVar4;
        lVar6 = lVar6 + -lVar4;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_100408e80;
      }
      param_3 = param_3 + 1;
      lVar8 = lVar9 + lVar4;
      param_1 = lVar5 + -1;
      lVar6 = lVar7 + lVar4;
      lVar9 = lVar8;
      lVar7 = lVar6;
      lVar5 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

