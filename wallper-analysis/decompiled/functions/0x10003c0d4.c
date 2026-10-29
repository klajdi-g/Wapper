// rea decompile_all
// name: FUN_10003c0d4
// address: 0x10003c0d4
// body: available
// range: 0x10003c0d4-0x10003c26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003c268 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10003c26c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c0d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x1e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x1d8));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x178);
    uVar2 = *(undefined8 *)(lVar5 + 0x180);
    *(undefined8 *)(lVar5 + 0xf8) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0xf0) = *(undefined8 *)(lVar5 + 0x60);
    FUN_100043c00(lVar5 + 0xf0);
    *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar5 + 0x70);
    FUN_100043c00(lVar5 + 0xe0);
    *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(lVar5 + 0x80);
    FUN_10002a29c(lVar5 + 0x138,&DAT_10054c050,&DAT_10041dca0);
    *(undefined8 *)(lVar5 + 0x130) = *(undefined8 *)(lVar5 + 0x88);
    FUN_10002a29c(lVar5 + 0x130,&DAT_10054c058,&DAT_10041d7d0);
    FUN_10002a29c(uVar1,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002a29c(uVar2,&DAT_10054c040,&DAT_100420500);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar4) goto LAB_10003c26c;
    pcVar3 = FUN_10003c270;
  }
  else {
    *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0x60);
    FUN_100043c00(lVar5 + 0xd0);
    *(undefined8 *)(lVar5 + 200) = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(lVar5 + 0x70);
    FUN_100043c00(lVar5 + 0xc0);
    *(undefined8 *)(lVar5 + 0x128) = *(undefined8 *)(lVar5 + 0x80);
    FUN_10002a29c(lVar5 + 0x128,&DAT_10054c050,&DAT_10041dca0);
    *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(lVar5 + 0x88);
    FUN_10002a29c(lVar5 + 0x120,&DAT_10054c058,&DAT_10041d7d0);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar4) {
LAB_10003c26c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar3 = FUN_10003c4d4;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}

