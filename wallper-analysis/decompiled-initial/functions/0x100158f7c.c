// rea decompile_all
// name: FUN_100158f7c
// address: 0x100158f7c
// body: available
// range: 0x100158f7c-0x100159053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100159050 to 0x100155d54 FUN_100155d54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100158f7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  URL UVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
  uVar10 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(UVar5.unknown + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + uVar7);
  uVar4 = ((undefined8 *)(unaff_x20 + uVar7))[1];
  uVar8 = *(undefined8 *)(unaff_x20 + uVar7 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + uVar7 + 0x18);
  plVar6 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10002a4dc;
  FUN_100155d54(plVar6,param_1,uVar1,uVar3,unaff_x20 + uVar10,uVar2,uVar4,uVar8,uVar9);
  return;
}

