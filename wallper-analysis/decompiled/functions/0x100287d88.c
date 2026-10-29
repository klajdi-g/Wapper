// rea decompile_all
// name: FUN_100287d88
// address: 0x100287d88
// body: available
// range: 0x100287d88-0x100287e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100287e38 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100287d88(void *param_1,void *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100521138;
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    uVar1 = (long)param_2 - (long)param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100287e34);
    (*pcVar2)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100287e38);
    (*pcVar2)();
  }
  local_28 = 0;
  local_1a = (undefined1)uVar1;
  local_1c = 0;
  local_20 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    _memcpy(&local_28,param_1,(long)param_2 - (long)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_28);
  }
  return;
}

