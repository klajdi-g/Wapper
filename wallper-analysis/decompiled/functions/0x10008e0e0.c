// rea decompile_all
// name: FUN_10008e0e0
// address: 0x10008e0e0
// body: available
// range: 0x10008e0e0-0x10008e18f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10008e18c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008e0e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  code *pcVar5;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x218) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x210));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x160);
    uVar2 = *(undefined8 *)(lVar3 + 0x140);
    lVar1 = *(long *)(lVar3 + 0x148);
    (**(code **)(lVar3 + 0x208))(*(undefined8 *)(lVar3 + 0x118),*(undefined8 *)(lVar3 + 0xe8));
    (**(code **)(lVar1 + 8))(uVar4,uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x1c8);
    uVar4 = *(undefined8 *)(lVar3 + 0x1d0);
    pcVar5 = FUN_10008e190;
  }
  else {
    pcVar5 = *(code **)(lVar3 + 0x208);
    uVar2 = *(undefined8 *)(lVar3 + 0x118);
    uVar4 = *(undefined8 *)(lVar3 + 0xe8);
    _swift_errorRelease();
    (*pcVar5)(uVar2,uVar4);
    pcVar5 = FUN_10008e3e4;
    uVar2 = 0;
    uVar4 = 0;
  }
  _swift_task_switch(pcVar5,uVar2,uVar4);
  return;
}

