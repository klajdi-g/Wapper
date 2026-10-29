// rea decompile_all
// name: FUN_1002bbca0
// address: 0x1002bbca0
// body: available
// range: 0x1002bbca0-0x1002bbdc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bbdc0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bbca0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  *(undefined1 *)(unaff_x22 + 0xa0) = 0;
  puVar4 = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::set_wrappedValue((State *)(lVar7 + 0x30),(undefined1 *)(unaff_x22 + 0xa0),puVar4);
  lVar5 = 0;
  FUN_1002bc1b0();
  iVar3 = *(int *)(lVar5 + 0x24);
  *(undefined1 *)(unaff_x22 + 0xa1) = 0;
  SwiftUI::State::set_wrappedValue((State *)(lVar7 + iVar3),(undefined1 *)(unaff_x22 + 0xa1),puVar4)
  ;
  lVar6 = 0;
  FUN_100400294();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar2,1,1,lVar6);
  iVar3 = *(int *)(lVar5 + 0x20);
  FUN_1000087e4(uVar2,uVar1,&DAT_100554ab8,&DAT_100427d98);
  puVar4 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  SwiftUI::State::set_wrappedValue((State *)(lVar7 + iVar3),uVar1,puVar4);
  FUN_10002a29c(uVar2,&DAT_100554ab8,&DAT_100427d98);
  _swift_task_switch(FUN_1002bbdc4,*(undefined8 *)(unaff_x22 + 0x48),
                     *(undefined8 *)(unaff_x22 + 0x50));
  return;
}

