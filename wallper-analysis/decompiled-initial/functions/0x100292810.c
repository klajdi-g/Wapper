// rea decompile_all
// name: FUN_100292810
// address: 0x100292810
// body: available
// range: 0x100292810-0x1002928ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002928fc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029286c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100292810(undefined8 param_1)

{
  size_t sVar1;
  code *pcVar2;
  _ArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  size_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100521138;
  local_40 = 0;
  _sysctlbyname("hw.model",(void *)0x0,&local_40,(void *)0x0,0);
  sVar1 = local_40;
  if ((long)local_40 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002928fc);
    (*pcVar2)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100524190;
  if (local_40 != 0) {
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100523fc8);
    *(size_t *)(_Var3.unknown + 0x10) = sVar1;
    _bzero(_Var3.unknown + 0x20,sVar1);
  }
  puVar5 = _Var3.unknown + 0x20;
  _sysctlbyname("hw.model",puVar5,&local_40,(void *)0x0,0);
  puVar4 = _Var3.unknown;
  FUN_1002927c4(_Var3.unknown);
  _swift_bridgeObjectRelease(_Var3.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}

