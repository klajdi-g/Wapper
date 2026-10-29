// rea decompile_all
// name: FUN_10019bd80
// address: 0x10019bd80
// body: available
// range: 0x10019bd80-0x10019be23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019be20 to 0x100184ec4 FUN_100184ec4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019bd80(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  uVar1 = 0;
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  }
  lVar2 = -0x2000000000000000;
  if (lVar5 != 0) {
    lVar2 = lVar5;
  }
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  }
  lVar5 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar5 = lVar4;
  }
  plVar6 = (long *)0xa70;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10019be24;
  FUN_100184ec4(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),uVar1,lVar2,
                uVar3,lVar5);
  return;
}

