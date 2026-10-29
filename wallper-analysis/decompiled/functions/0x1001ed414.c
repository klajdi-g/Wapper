// rea decompile_all
// name: FUN_1001ed414
// address: 0x1001ed414
// body: available
// range: 0x1001ed414-0x1001ed513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ed510 to 0x1001e9b7c FUN_1001e9b7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ed414(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  URL UVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  uVar11 = (ulong)*(byte *)(*(long *)(UVar7.unknown + -8) + 0x50);
  uVar13 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(*(long *)(UVar7.unknown + -8) + 0x40);
  uVar14 = lVar10 + uVar11 + uVar13 & (uVar11 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar8 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  bVar6 = *(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar11);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  plVar9 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_10002a4dc;
  FUN_1001e9b7c(plVar9,param_1,uVar2,uVar4,uVar12,unaff_x20 + uVar13,unaff_x20 + uVar14,uVar3,uVar5,
                unaff_x20 + (bVar6 + uVar11 + 0x10 & ((ulong)bVar6 ^ 0xffffffffffffffff)));
  return;
}

