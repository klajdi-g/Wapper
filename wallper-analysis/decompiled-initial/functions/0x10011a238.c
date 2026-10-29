// rea decompile_all
// name: FUN_10011a238
// address: 0x10011a238
// body: available
// range: 0x10011a238-0x10011a30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011a308 to 0x100119850 FUN_100119850 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011a238(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar7 = 0;
  FUN_100113f00();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar11 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 0x10);
  uVar10 = *puVar1;
  plVar8 = (long *)0x40;
  uVar6 = *(undefined1 *)(puVar1 + 1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_10002a4dc;
  FUN_100119850(plVar8,param_1,uVar2,uVar4,unaff_x20 + uVar11,uVar3,uVar5,uVar10,uVar6);
  return;
}

