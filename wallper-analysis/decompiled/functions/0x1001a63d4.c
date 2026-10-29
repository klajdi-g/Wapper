// rea decompile_all
// name: FUN_1001a63d4
// address: 0x1001a63d4
// body: available
// range: 0x1001a63d4-0x1001a645b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a6458 to 0x10003b840 FUN_10003b840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a63d4(void)

{
  URL UVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x5;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa0) = UVar1.unknown;
  lVar4 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar2 = lVar4 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  plVar3 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001a645c;
  FUN_10003b840(plVar3,uVar2,in_x3);
  return;
}

