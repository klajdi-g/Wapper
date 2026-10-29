// rea decompile_all
// name: FUN_10029de40
// address: 0x10029de40
// body: available
// range: 0x10029de40-0x10029dff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029dff0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029dff4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029de40(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  Date DVar4;
  URL UVar5;
  undefined8 in_x3;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_1005569c8;
  FUN_100002f94(&DAT_1005569c8,&DAT_10042aac8);
  *(undefined **)(unaff_x22 + 0x50) = puVar1;
  lVar7 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  puVar1 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = DVar4.unknown;
  lVar7 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  puVar1 = &DAT_100558c70;
  FUN_100002f94(&DAT_100558c70,&DAT_10042d4a8);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 200) = UVar5.unknown;
  lVar7 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar6) {
    _swift_task_switch(FUN_10029dff8,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

