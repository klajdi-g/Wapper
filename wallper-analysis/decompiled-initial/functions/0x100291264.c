// rea decompile_all
// name: FUN_100291264
// address: 0x100291264
// body: available
// range: 0x100291264-0x1002912f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002912f0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100291264(void)

{
  int iVar1;
  kern_return_t kVar2;
  undefined8 uVar3;
  long unaff_x20;
  mach_msg_type_number_t local_2c;
  int local_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100521138;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_2c = 4;
  kVar2 = _host_statistics(*(host_t *)(unaff_x20 + 0x10),3,local_28,&local_2c);
  if (kVar2 == 0) {
    iVar1 = local_28[1] + local_28[0] + local_28[3];
    uVar3 = CONCAT44(iVar1 + local_28[2],iVar1);
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3,kVar2 != 0);
}

