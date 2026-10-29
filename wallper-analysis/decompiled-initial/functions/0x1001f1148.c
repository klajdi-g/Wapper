// rea decompile_all
// name: FUN_1001f1148
// address: 0x1001f1148
// body: available
// range: 0x1001f1148-0x1001f11fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f11f8 to 0x10003b840 FUN_10003b840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1148(void)

{
  URL UVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x5;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x20) = UVar1.unknown;
  lVar5 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  uVar2 = lVar5 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  plVar4 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001f11fc;
  FUN_10003b840(plVar4,uVar2,in_x3);
  return;
}

