// rea decompile_all
// name: FUN_10022549c
// address: 0x10022549c
// body: available
// range: 0x10022549c-0x100225583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100225524 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100225580 to 0x10021de1c FUN_10021de1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022549c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_100220ee8(uVar4);
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar4 == 1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
    FUN_10002a29c(uVar3,&DAT_10054ac40,&DAT_10041ce70);
    _swift_task_switch(FUN_100225614,*(undefined8 *)(unaff_x22 + 0x70),
                       *(undefined8 *)(unaff_x22 + 0x78));
    return;
  }
  FUN_100007e64(uVar3,*(undefined8 *)(unaff_x22 + 0x50),FUN_10040211c);
  plVar2 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100225584;
  FUN_10021de1c(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined1 *)(unaff_x22 + 0xa8));
  return;
}

