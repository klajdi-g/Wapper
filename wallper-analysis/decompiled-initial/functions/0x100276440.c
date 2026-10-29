// rea decompile_all
// name: FUN_100276440
// address: 0x100276440
// body: available
// range: 0x100276440-0x1002764e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002764e4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100276440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x270));
  uVar3 = *(undefined8 *)(lVar4 + 600);
  _swift_release(*(undefined8 *)(lVar4 + 0x260));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x280) = param_1;
    *(int *)(lVar4 + 900) = (int)param_2;
    *(int *)(lVar4 + 0x380) = (int)((ulong)param_2 >> 0x20);
    *(undefined8 *)(lVar4 + 0x278) = param_3;
    uVar2 = *(undefined8 *)(lVar4 + 0x250);
    uVar3 = *(undefined8 *)(lVar4 + 0x248);
    pcVar1 = FUN_1002764e8;
  }
  else {
    *(long *)(lVar4 + 0x288) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x250);
    uVar3 = *(undefined8 *)(lVar4 + 0x248);
    pcVar1 = FUN_10027665c;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}

