// rea decompile_all
// name: FUN_10033d400
// address: 0x10033d400
// body: available
// range: 0x10033d400-0x10033d493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033d400(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  pbVar1 = &BYTE_100432250;
  _swift_getKeyPath(&BYTE_100432250);
  pbVar2 = &BYTE_100432278;
  _swift_getKeyPath(&BYTE_100432278);
  Combine::Published::_get_subscript(&local_60,uVar3,pbVar1,pbVar2);
  _swift_release(pbVar1);
  _swift_release(pbVar2);
  if (local_58 == 0) {
    switchD_10033ccc8::caseD_f0();
  }
  else {
    FUN_10002a3bc(local_60,local_58,local_50,uStack_48,local_40,uStack_38);
  }
  return;
}

