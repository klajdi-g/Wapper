// rea decompile_all
// name: FUN_10029eea4
// address: 0x10029eea4
// body: available
// range: 0x10029eea4-0x10029ef2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029ef28 to 0x10029f198 FUN_10029f198 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029eea4(void)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  lVar4 = 0;
  FUN_1002a473c();
  iVar2 = *(int *)(lVar4 + 0x14);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar4 + 0x18));
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  iVar3 = *(int *)(lVar4 + 0x1c);
  plVar5 = (long *)0x5f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10029ef2c;
  FUN_10029f198(plVar5,uVar7,uVar8,*(undefined8 *)(unaff_x22 + 0x18),lVar6 + iVar2,lVar6 + iVar3);
  return;
}

