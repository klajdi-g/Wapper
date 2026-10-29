// rea decompile_all
// name: FUN_1001331a0
// address: 0x1001331a0
// body: available
// range: 0x1001331a0-0x10013321f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001331a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published *pPVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pPVar5 = (Published *)*param_2;
  puVar3 = &DAT_1004270b0;
  _swift_getKeyPath(&DAT_1004270b0);
  puVar4 = &DAT_1004270d8;
  _swift_getKeyPath(&DAT_1004270d8);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript(pPVar5,&local_50,pPVar5,puVar3,puVar4);
  return;
}

