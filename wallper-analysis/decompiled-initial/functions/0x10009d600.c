// rea decompile_all
// name: FUN_10009d600
// address: 0x10009d600
// body: available
// range: 0x10009d600-0x10009d737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10009d600(long *param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  if (DAT_10054f738 != -1) {
    _swift_once(&DAT_10054f738,FUN_10009a974);
  }
  lVar2 = *param_1;
  uVar4 = param_1[1];
  _swift_beginAccess(&DAT_10054f740,auStack_48,0x20,0);
  lVar1 = DAT_10054f740;
  if (*(long *)(DAT_10054f740 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_10054f740);
    FUN_10000464c();
    if ((uVar4 & 1) != 0) {
      IVar3 = *(ID *)(*(long *)(lVar1 + 0x38) + lVar2 * 8);
      _swift_endAccess(auStack_48);
      _swift_bridgeObjectRelease(lVar1);
      return IVar3;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_endAccess(auStack_48);
  IVar3 = objc_stub::CGImageForProposedRect_context_hints_(param_1[2],0,0,0);
  if (IVar3 != 0) {
    FUN_10009c1bc(param_1[3],param_1[4]);
    if (IVar3 == 0) {
      IVar3 = 0;
    }
    else {
      FUN_10009d2c0();
    }
  }
  return IVar3;
}

