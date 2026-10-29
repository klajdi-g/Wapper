// rea decompile_all
// name: FUN_1001b1590
// address: 0x1001b1590
// body: available
// range: 0x1001b1590-0x1001b160b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1001b1590(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  iVar1 = *(int *)(param_3 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(DVar2.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar4)(param_1 + iVar1,param_2 + iVar1,DVar2.unknown);
  return param_1;
}

