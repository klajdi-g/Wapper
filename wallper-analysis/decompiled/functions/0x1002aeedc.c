// rea decompile_all
// name: FUN_1002aeedc
// address: 0x1002aeedc
// body: available
// range: 0x1002aeedc-0x1002aef8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002aef88 to 0x1002ade74 FUN_1002ade74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002aeedc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  URL UVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  uVar8 = (ulong)*(byte *)(*(long *)(UVar6.unknown + -8) + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(UVar6.unknown + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8));
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  plVar7 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10002a4dc;
  FUN_1002ade74(plVar7,param_1,uVar2,uVar4,unaff_x20 + uVar8,uVar3,uVar5);
  return;
}

