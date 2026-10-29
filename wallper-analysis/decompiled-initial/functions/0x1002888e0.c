// rea decompile_all
// name: FUN_1002888e0
// address: 0x1002888e0
// body: available
// range: 0x1002888e0-0x1002889a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100288978 to 0x1002887e4 FUN_1002887e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002888e0(long param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100288980);
    (*pcVar2)();
  }
  puVar5 = (undefined *)*unaff_x20;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar3 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100288998);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10028899c);
    (*pcVar2)();
  }
  lVar3 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002889a0);
    (*pcVar2)();
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002889a4);
    (*pcVar2)();
  }
  FUN_10020c8e0(lVar4 + lVar3,1);
  FUN_1002887e4(param_1,param_2,0);
  return;
}

