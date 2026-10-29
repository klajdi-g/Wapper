// rea decompile_all
// name: FUN_10014e95c
// address: 0x10014e95c
// body: available
// range: 0x10014e95c-0x10014e9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014e95c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  Published *pPStack_48;
  
  uVar1 = *param_1;
  pPVar2 = (Published *)param_1[1];
  uVar5 = *param_2;
  puVar3 = &DAT_100428040;
  _swift_getKeyPath(&DAT_100428040);
  puVar4 = &DAT_100428068;
  _swift_getKeyPath(&DAT_100428068);
  local_50 = uVar1;
  pPStack_48 = pPVar2;
  FUN_10014f54c(uVar1,pPVar2);
  _swift_retain(uVar5);
  Combine::Published::_set_subscript(pPVar2,&local_50,uVar5,puVar3,puVar4);
  return;
}

