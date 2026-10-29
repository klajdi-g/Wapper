// rea decompile_all
// name: FUN_1001f1894
// address: 0x1001f1894
// body: available
// range: 0x1001f1894-0x1001f18c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f18c4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1894(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x58) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x50) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  _swift_task_switch(FUN_1001f18c8,0,0);
  return;
}

