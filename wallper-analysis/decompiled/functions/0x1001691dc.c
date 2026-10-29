// rea decompile_all
// name: FUN_1001691dc
// address: 0x1001691dc
// body: available
// range: 0x1001691dc-0x10016926b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001691dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    pcVar2 = *(code **)(param_1 + 0x10);
    if (pcVar2 == (code *)0x0) {
      _swift_release();
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      FUN_1000939f8(pcVar2,uVar1);
      _swift_release(param_1);
      (*pcVar2)(param_2);
      FUN_10002f6dc(pcVar2,uVar1);
    }
  }
  return;
}

