// rea decompile_all
// name: FUN_10027ec7c
// address: 0x10027ec7c
// body: available
// range: 0x10027ec7c-0x10027ed37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_10027ec7c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_10000464c();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1001cb420();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined1 *)(*(long *)(lVar3 + 0x38) + param_1);
    FUN_1001d2134(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}

