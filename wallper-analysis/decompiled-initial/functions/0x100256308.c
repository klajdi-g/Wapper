// rea decompile_all
// name: FUN_100256308
// address: 0x100256308
// body: available
// range: 0x100256308-0x1002563a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002563a4 to 0x1004145b8 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100256308(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      lVar2 = param_1[4];
      lVar3 = *(long *)param_1[3];
      FUN_100043c00(*(long *)(lVar3 + 0x30) + lVar2 * 0x10);
      thunk_FUN_1001d1dc4(lVar2,lVar3);
    }
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    lVar2 = param_1[2];
    thunk_FUN_1002a7954(param_1[4],param_1[1],lVar2,lVar1);
    _swift_bridgeObjectRetain(lVar2);
  }
  else {
    *(long *)(*(long *)(*(long *)param_1[3] + 0x38) + param_1[4] * 8) = lVar1;
  }
  lVar2 = *param_1;
  _swift_bridgeObjectRetain(lVar1);
  _swift_bridgeObjectRelease(lVar2);
  _free(param_1);
  return;
}

