// rea decompile_all
// name: FUN_1002650f8
// address: 0x1002650f8
// body: available
// range: 0x1002650f8-0x1002651ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100265178 to 0x100414768 _swift_arrayInitWithTakeBackToFront (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100265190 to 0x100414774 _swift_arrayInitWithTakeFrontToBack (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002650f8(ulong *param_1,ulong *param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *param_1;
  uVar4 = *param_2;
  lVar6 = *param_3;
  FUN_100002f94(param_4,param_5);
  lVar3 = *(long *)(*(long *)(param_4 + -8) + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002651a8);
    (*pcVar2)();
  }
  if (lVar6 - uVar4 != -0x8000000000000000 || lVar3 != -1) {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = (long)(lVar6 - uVar4) / lVar3;
    }
    if ((uVar4 <= uVar5) && (uVar5 < uVar4 + lVar1 * lVar3)) {
      if (uVar5 != uVar4) {
        _swift_arrayInitWithTakeBackToFront(uVar5,uVar4);
        return;
      }
      return;
    }
    _swift_arrayInitWithTakeFrontToBack(uVar5,uVar4,lVar1,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002651ac);
  (*pcVar2)();
}

