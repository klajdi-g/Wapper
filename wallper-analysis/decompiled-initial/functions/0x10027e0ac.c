// rea decompile_all
// name: FUN_10027e0ac
// address: 0x10027e0ac
// body: available
// range: 0x10027e0ac-0x10027e143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027e140 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027e0ac(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar2 = *(long *)(lVar4 + 0x30);
  uVar3 = *(undefined8 *)(lVar4 + 200);
  if (lVar2 == 0) {
    (**(code **)(*(long *)(lVar4 + 0xb8) + 0x20))
              (*(undefined8 *)(lVar4 + 0x78),uVar3,*(undefined8 *)(lVar4 + 0xb0));
    _swift_task_dealloc(uVar3);
    pcVar1 = FUN_10027e144;
  }
  else {
    _swift_willThrow();
    _swift_task_dealloc(uVar3);
    *(long *)(lVar4 + 0xd0) = lVar2;
    pcVar1 = FUN_10027e18c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}

