// rea decompile_all
// name: FUN_10020c4ac
// address: 0x10020c4ac
// body: available
// range: 0x10020c4ac-0x10020c59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020c4ac(int param_1,undefined8 param_2,long param_3,ID param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_58 [24];
  
  objc_stub::lock(param_4);
  if ((param_1 == 0) && (param_3 != 0)) {
    _swift_beginAccess(param_6 + 0x10,auStack_58,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar2 = *(ulong *)(param_6 + 0x10) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar2 = *(ulong *)(uVar2 + 0x18);
    if (uVar2 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,param_3);
    _swift_endAccess(auStack_58);
  }
  else {
    _swift_beginAccess(param_5 + 0x10,auStack_58,1,0);
    *(undefined1 *)(param_5 + 0x10) = 1;
  }
  objc_stub::unlock(param_4);
  return;
}

