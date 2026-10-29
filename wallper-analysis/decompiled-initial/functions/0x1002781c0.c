// rea decompile_all
// name: FUN_1002781c0
// address: 0x1002781c0
// body: available
// range: 0x1002781c0-0x10027824b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100278248 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002781c0(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x389);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x360));
  FUN_10027885c(uVar6,uVar5,uVar3,uVar1,uVar2,uVar4);
  _swift_task_switch(FUN_10027824c,*(undefined8 *)(unaff_x22 + 0x248),
                     *(undefined8 *)(unaff_x22 + 0x250));
  return;
}

