// rea decompile_all
// name: FUN_1001e49fc
// address: 0x1001e49fc
// body: available
// range: 0x1001e49fc-0x1001e4ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e4a7c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001e4ad0 to 0x1001e4dc0 FUN_1001e4dc0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e49fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_100077938(*(undefined8 *)(unaff_x22 + 0x20),uVar4);
  (**(code **)(lVar2 + 0x30))(uVar4,1,uVar1);
  if ((int)uVar4 == 1) {
    FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x38),&DAT_100553d90,&DAT_10041bf10);
    _swift_task_switch(FUN_1001e4c94,0,0);
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x40));
  plVar3 = (long *)0x440;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001e4ad4;
  FUN_1001e4dc0(plVar3,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x50),
                *(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}

