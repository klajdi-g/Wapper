// rea decompile_all
// name: FUN_1001ef4c8
// address: 0x1001ef4c8
// body: available
// range: 0x1001ef4c8-0x1001ef54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ef4c8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ID IVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  IVar2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((IVar2 != 0) && (IVar2 = objc_stub::window(IVar2), IVar2 != 0)) {
    lVar3 = 3;
    thunk_FUN_100328848();
    lVar3 = lVar3 + 1;
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ef550);
      (*pcVar1)();
    }
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_1001ef558();
    }
  }
  return;
}

