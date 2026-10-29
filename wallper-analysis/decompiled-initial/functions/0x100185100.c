// rea decompile_all
// name: FUN_100185100
// address: 0x100185100
// body: available
// range: 0x100185100-0x1001851ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001851f8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001851fc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100185100(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  long lVar2;
  long unaff_x22;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100521138;
  SVar8 = *(String *)(unaff_x22 + 0x740);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x738);
  pcVar4 = ((String *)(unaff_x22 + 0x730))->str;
  SVar1 = *(String *)(unaff_x22 + 0x730);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x720);
  _swift_bridgeObjectRetain(uVar3);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x7c;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar7,SVar9);
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar8,SVar10);
  *(char **)(unaff_x22 + 0x848) = pcVar4;
  *(undefined8 *)(unaff_x22 + 0x850) = uVar3;
  _swift_bridgeObjectRetain(uVar5);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x7c;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar8,SVar11);
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar1,SVar12);
  *(undefined8 *)(unaff_x22 + 0x858) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x860) = uVar5;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar2) {
    _swift_task_switch(FUN_100185200,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

