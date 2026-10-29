// rea decompile_all
// name: FUN_10025fc60
// address: 0x10025fc60
// body: available
// range: 0x10025fc60-0x10025fcf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025fc60(long *param_1,undefined8 param_2)

{
  long lVar1;
  __int64 _Var2;
  long lVar3;
  long unaff_x21;
  undefined1 auStack_58 [40];
  
  FUN_10013d448(param_2,auStack_58);
  _Var2 = __int64::_init();
  FUN_100043f24(param_2);
  if (unaff_x21 == 0) {
    lVar3 = _Var2 % 0x5a0;
    lVar1 = lVar3 + 0x5a0;
    if (-1 < lVar3) {
      lVar1 = lVar3;
    }
    *param_1 = lVar1;
  }
  return;
}

