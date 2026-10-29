// rea decompile_all
// name: FUN_1001b56ac
// address: 0x1001b56ac
// body: available
// range: 0x1001b56ac-0x1001b57a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b56ac(undefined8 param_1,ulong param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *unaff_x20;
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    (*param_3)();
  }
  if (param_2 < *(ulong *)(uVar6 + 0x10)) {
    lVar8 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar2 = 0;
    (*param_4)();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    lVar9 = *(long *)(*(long *)(lVar2 + -8) + 0x48);
    lVar7 = uVar6 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)) + lVar9 * param_2;
    FUN_100007e64(lVar7,param_1,param_4);
    lVar3 = lVar8 - param_2;
    lVar4 = lVar9 + lVar9 * lVar3;
    if ((lVar9 < 1 && lVar4 != 0) && (0 < lVar9 || -1 < lVar4)) {
      if (lVar9 != 0) {
        _swift_arrayInitWithTakeBackToFront(lVar7,lVar7 + lVar9,lVar3,lVar2);
      }
    }
    else {
      _swift_arrayInitWithTakeFrontToBack(lVar7,lVar7 + lVar9,lVar3,lVar2);
    }
    *(long *)(uVar6 + 0x10) = lVar8;
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b57a4);
  (*pcVar1)();
}

