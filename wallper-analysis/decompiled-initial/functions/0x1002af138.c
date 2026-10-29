// rea decompile_all
// name: FUN_1002af138
// address: 0x1002af138
// body: available
// range: 0x1002af138-0x1002af23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002af238 to 0x1002ad3e4 FUN_1002ad3e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002af138(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  URL UVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  uVar11 = (ulong)*(byte *)(*(long *)(UVar8.unknown + -8) + 0x50);
  uVar15 = uVar11 + 0x38 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = *(long *)(*(long *)(UVar8.unknown + -8) + 0x40) + uVar15 + 7 & 0xfffffffffffffff8;
  lVar9 = 0;
  FUN_10040211c();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar11 = uVar13 + uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + uVar13);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8))
  ;
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar10 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)thunk_FUN_10002a4dc;
  FUN_1002ad3e4(plVar10,param_1,uVar2,uVar5,uVar3,uVar6,uVar12,unaff_x20 + uVar15,uVar14,
                unaff_x20 + uVar11,uVar4,uVar7);
  return;
}

