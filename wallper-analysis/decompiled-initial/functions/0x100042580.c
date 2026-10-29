// rea decompile_all
// name: FUN_100042580
// address: 0x100042580
// body: available
// range: 0x100042580-0x100042667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004263c to 0x100418e40 objc_stub::unlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100042580(int param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ID self;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(param_4 + 0x10);
  objc_stub::lock(self);
  if ((param_1 == 0) && (param_3 != 0)) {
    _swift_beginAccess(param_4 + 0x18,auStack_48,0x21,0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar2 = *(ulong *)(param_4 + 0x18) & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar2 = *(ulong *)(uVar2 + 0x18);
    if (uVar2 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,param_3);
    _swift_endAccess(auStack_48);
    objc_stub::unlock(self);
    return;
  }
  *(undefined1 *)(param_4 + 0x20) = 1;
  objc_stub::unlock(self);
  return;
}

