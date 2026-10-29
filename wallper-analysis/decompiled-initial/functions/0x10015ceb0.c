// rea decompile_all
// name: FUN_10015ceb0
// address: 0x10015ceb0
// body: available
// range: 0x10015ceb0-0x10015cf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015cf60 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015ceb0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  code *pcVar4;
  long lVar5;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3c8));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x390);
    lVar5 = *(long *)(lVar2 + 0x380);
    uVar1 = *(undefined8 *)(lVar2 + 0x378);
    (**(code **)(lVar2 + 0x3c0))(*(undefined8 *)(lVar2 + 0x370),*(undefined8 *)(lVar2 + 0x358));
    (**(code **)(lVar5 + 8))(uVar3,uVar1);
    uVar3 = *(undefined8 *)(lVar2 + 0x3a8);
    uVar1 = *(undefined8 *)(lVar2 + 0x3a0);
    pcVar4 = FUN_10015cf64;
  }
  else {
    pcVar4 = *(code **)(lVar2 + 0x3c0);
    uVar1 = *(undefined8 *)(lVar2 + 0x370);
    uVar3 = *(undefined8 *)(lVar2 + 0x358);
    _swift_errorRelease();
    (*pcVar4)(uVar1,uVar3);
    pcVar4 = FUN_10015d018;
    uVar1 = 0;
    uVar3 = 0;
  }
  _swift_task_switch(pcVar4,uVar1,uVar3);
  return;
}

