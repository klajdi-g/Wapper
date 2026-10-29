// rea decompile_all
// name: FUN_10033be18
// address: 0x10033be18
// body: available
// range: 0x10033be18-0x10033becb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033be18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 local_90;
  Published *pPStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  pPVar4 = (Published *)param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar9 = *param_2;
  pbVar7 = &BYTE_100432250;
  _swift_getKeyPath(&BYTE_100432250);
  pbVar8 = &BYTE_100432278;
  _swift_getKeyPath(&BYTE_100432278);
  local_90 = uVar1;
  pPStack_88 = pPVar4;
  local_80 = uVar2;
  uStack_78 = uVar5;
  local_70 = uVar3;
  uStack_68 = uVar6;
  FUN_100341b60(uVar1,pPVar4,uVar2,uVar5,uVar3,uVar6);
  _swift_retain(uVar9);
  Combine::Published::_set_subscript(pPVar4,&local_90,uVar9,pbVar7,pbVar8);
  return;
}

