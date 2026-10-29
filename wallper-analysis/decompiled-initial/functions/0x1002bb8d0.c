// rea decompile_all
// name: FUN_1002bb8d0
// address: 0x1002bb8d0
// body: available
// range: 0x1002bb8d0-0x1002bb96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bb934 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002bb968 to 0x10013afdc FUN_10013afdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bb8d0(void)

{
  UnownedSerialExecutor UVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    UVar1 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1002bbb14,UVar1.unknown,uVar3);
    return;
  }
  plVar2 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(lVar4 + 0x88) = plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)FUN_1002bb96c;
  FUN_10013afdc();
  return;
}

