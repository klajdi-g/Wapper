// rea decompile_all
// name: FUN_1002b749c
// address: 0x1002b749c
// body: available
// range: 0x1002b749c-0x1002b7547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b7544 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b749c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Code CVar1;
  ulong uVar2;
  URLError UVar3;
  URLRequest UVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  CVar1 = Foundation::URLError::Code::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  UVar3 = Foundation::URLError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar3.unknown;
  lVar5 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = UVar4.unknown;
  lVar5 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  _swift_task_switch(FUN_1002b7548,0,0);
  return;
}

