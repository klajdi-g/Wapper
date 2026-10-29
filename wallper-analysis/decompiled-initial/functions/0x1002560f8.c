// rea decompile_all
// name: FUN_1002560f8
// address: 0x1002560f8
// body: available
// range: 0x1002560f8-0x10025618f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1002560f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  pvVar1 = (void *)0x50;
  if (PTR__swift_coroFrameAlloc_100524228 == (undefined *)0x0) {
    pvVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0x287a);
  }
  *param_1 = pvVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  pvVar3 = pvVar1;
  FUN_1002563a8();
  *(void **)((long)pvVar1 + 0x40) = pvVar3;
  lVar4 = (long)pvVar1 + 0x20;
  FUN_1002561cc(lVar4,param_2,param_3,uVar2);
  *(long *)((long)pvVar1 + 0x48) = lVar4;
  return FUN_100256190;
}

