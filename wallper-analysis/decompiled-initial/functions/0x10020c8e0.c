// rea decompile_all
// name: FUN_10020c8e0
// address: 0x10020c8e0
// body: available
// range: 0x10020c8e0-0x10020c98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020c964 to 0x10041343c /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::$_createNewBuffer (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10020c8e0(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined *puVar3;
  
  puVar3 = (undefined *)*unaff_x20;
  puVar2 = puVar3;
  _swift_isUniquelyReferenced_nonNull_bridgeObject();
  *unaff_x20 = puVar3;
  if ((((int)puVar2 != 0) && (puVar2 = (undefined *)0x0, -1 < (long)puVar3)) &&
     (((ulong)puVar3 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return puVar2;
    }
    puVar2 = (undefined *)0x1;
  }
  if ((ulong)puVar3 >> 0x3e != 0) {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  Swift::Array<undefined>::__createNewBuffer();
  return puVar2;
}

