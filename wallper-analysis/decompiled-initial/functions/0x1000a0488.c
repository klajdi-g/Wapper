// rea decompile_all
// name: FUN_1000a0488
// address: 0x1000a0488
// body: available
// range: 0x1000a0488-0x1000a056f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a0540 to 0x1000a20d8 FUN_1000a20d8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0488(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = 0x6b63754c20746547;
  FUN_100161e0c(0x6b63754c20746547,0xe900000000000079,0x6e75502074666144,0xe90000000000006b,
                0xd000000000000016,0x80000001004dce60);
  uVar1 = DAT_10054f858;
  DAT_10054f858 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    plVar3 = (long *)0x1a0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1000a0970;
    FUN_1000a20d8();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  DAT_10054f948 = 0;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001000a056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

