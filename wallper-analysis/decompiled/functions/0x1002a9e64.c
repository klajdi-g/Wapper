// rea decompile_all
// name: FUN_1002a9e64
// address: 0x1002a9e64
// body: available
// range: 0x1002a9e64-0x1002a9ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a9ef4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a9e64(void)

{
  URL UVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 in_x3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x20) = UVar1.unknown;
  lVar4 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  puVar3 = &DAT_1005569a8;
  FUN_100002f94(&DAT_1005569a8,&DAT_10042aaa8);
  *(undefined **)(unaff_x22 + 0x38) = puVar3;
  lVar4 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  _swift_task_switch(FUN_1002a9ef8,0,0);
  return;
}

