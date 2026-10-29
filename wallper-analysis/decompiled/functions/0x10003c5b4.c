// rea decompile_all
// name: FUN_10003c5b4
// address: 0x10003c5b4
// body: available
// range: 0x10003c5b4-0x10003c60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003c60c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x550) = param_9;
  *(undefined8 *)(unaff_x22 + 0x548) = param_8;
  *(undefined8 *)(unaff_x22 + 0x540) = param_7;
  *(undefined8 *)(unaff_x22 + 0x538) = param_2;
  *(undefined8 *)(unaff_x22 + 0x530) = param_1;
  *(undefined1 *)(unaff_x22 + 0x764) = param_6;
  *(undefined8 *)(unaff_x22 + 0x528) = param_5;
  *(undefined8 **)(unaff_x22 + 0x520) = param_4;
  *(undefined8 *)(unaff_x22 + 0x518) = param_3;
  uVar1 = *param_4;
  *(undefined8 *)(unaff_x22 + 0x560) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x558) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x568) = param_4[2];
  uVar1 = param_4[3];
  *(undefined8 *)(unaff_x22 + 0x578) = param_4[4];
  *(undefined8 *)(unaff_x22 + 0x570) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x580) = param_4[5];
  _swift_task_switch(FUN_10003c610,0,0);
  return;
}

