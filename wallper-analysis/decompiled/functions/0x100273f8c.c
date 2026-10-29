// rea decompile_all
// name: FUN_100273f8c
// address: 0x100273f8c
// body: available
// range: 0x100273f8c-0x10027406f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100273f8c(long param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    _swift_beginAccess(param_4 + 0x10,auStack_70,0,0);
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    _swift_beginAccess(param_5 + 0x10,auStack_88,0,0);
    uVar1 = *(undefined8 *)(param_5 + 0x10);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar1);
    (*param_2)(uVar2,uVar1,0);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    _swift_errorRetain(lVar3);
    (*param_2)(lVar3,0,1);
    _swift_errorRelease(lVar3);
  }
  return;
}

