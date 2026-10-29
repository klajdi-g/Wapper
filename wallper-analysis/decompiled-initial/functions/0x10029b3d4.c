// rea decompile_all
// name: FUN_10029b3d4
// address: 0x10029b3d4
// body: available
// range: 0x10029b3d4-0x10029b463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10029b3d4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long local_50 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    lVar3 = 0;
    local_50[1] = 0;
    local_50[2] = 0;
  }
  else {
    lVar3 = param_3;
    _swift_getObjectType();
  }
  local_50[0] = param_3;
  local_50[3] = lVar3;
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  (*pcVar1)(param_2,local_50);
  _swift_unknownObjectRelease(param_2);
  _swift_release(uVar2);
  FUN_10028f264(local_50);
  return;
}

