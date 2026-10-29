// rea decompile_all
// name: FUN_10038fd78
// address: 0x10038fd78
// body: available
// range: 0x10038fd78-0x10038fdf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038fd78(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  (*param_1)();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar5 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = 0;
  FUN_1001d59ac();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x24) + uVar5);
  (*(code *)*puVar1)(puVar1[1],unaff_x20 + (uVar5 + lVar6 + uVar4 & (uVar4 ^ 0xffffffffffffffff)));
  return;
}

