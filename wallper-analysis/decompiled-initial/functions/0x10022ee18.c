// rea decompile_all
// name: FUN_10022ee18
// address: 0x10022ee18
// body: available
// range: 0x10022ee18-0x10022eeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022ee18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Published *pPVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_70;
  Published *pPStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  pPVar3 = (Published *)param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = *param_2;
  puVar5 = &DAT_10042bbc8;
  _swift_getKeyPath(&DAT_10042bbc8);
  puVar6 = &DAT_10042bbf0;
  _swift_getKeyPath(&DAT_10042bbf0);
  local_70 = uVar1;
  pPStack_68 = pPVar3;
  local_60 = uVar2;
  uStack_58 = uVar4;
  FUN_1002326f0(uVar1,pPVar3,uVar2,uVar4);
  _swift_retain(uVar7);
  Combine::Published::_set_subscript(pPVar3,&local_70,uVar7,puVar5,puVar6);
  return;
}

