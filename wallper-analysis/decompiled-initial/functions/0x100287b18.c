// rea decompile_all
// name: FUN_100287b18
// address: 0x100287b18
// body: available
// range: 0x100287b18-0x100287ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100287b18(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if (param_3 - param_2 < 0xf) {
      FUN_100287d88();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      FUN_100287eb0();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      FUN_100287e3c();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}

