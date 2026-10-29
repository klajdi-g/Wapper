// rea decompile_all
// name: FUN_100229854
// address: 0x100229854
// body: available
// range: 0x100229854-0x100229923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100229920 to 0x100225764 FUN_100225764 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100229854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  URL UVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar12;
  
  UVar9 = Foundation::URL::typeMetadataAccessor();
  uVar11 = (ulong)*(byte *)(*(long *)(UVar9.unknown + -8) + 0x50);
  uVar11 = uVar11 + 0x39 & (uVar11 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x38);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(UVar9.unknown + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8));
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar10 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)thunk_FUN_10002a4dc;
  FUN_100225764(plVar10,param_1,uVar2,uVar5,uVar3,uVar6,uVar12,uVar8,unaff_x20 + uVar11,uVar4,uVar7)
  ;
  return;
}

