// rea decompile_all
// name: FUN_1004107b8
// address: 0x1004107b8
// body: available
// range: 0x1004107b8-0x100410947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100410914 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004107b8(int param_1,int param_2,uint param_3,uint param_4)

{
  long lVar1;
  int local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100521138;
  if (DAT_100577a78 != -1) {
    FUN_100410c98();
  }
  if (DAT_100577a80 != 0) {
    uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_40 = param_1;
    __availability_version_check(1,&local_40);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_38) {
      return;
    }
    goto LAB_100410914;
  }
  if (param_1 == 1) {
    if (DAT_100577a70 != -1) {
      FUN_100410ca8();
    }
    if (DAT_100577a60 <= param_2) {
      if (DAT_100577a60 < param_2) {
LAB_100410888:
        lVar1 = *(long *)PTR____stack_chk_guard_100521138;
      }
      else {
        if ((int)param_3 < DAT_100577a64) goto LAB_1004108b8;
        if (DAT_100577a64 < (int)param_3) goto LAB_100410888;
        lVar1 = *(long *)PTR____stack_chk_guard_100521138;
      }
      if (lVar1 == local_38) {
        return;
      }
      goto LAB_100410914;
    }
  }
LAB_1004108b8:
  if (*(long *)PTR____stack_chk_guard_100521138 == local_38) {
    return;
  }
LAB_100410914:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

