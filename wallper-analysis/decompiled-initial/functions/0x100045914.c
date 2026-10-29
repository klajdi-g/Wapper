// rea decompile_all
// name: _TtCV7WallperP33_EA1F53D86E0E79876722E5C615A23FEE15MeshRasterLayer11Coordinator::tick:
// address: 0x100045914
// body: available
// range: 0x100045914-0x10004597f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004597c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCV7WallperP33_EA1F53D86E0E79876722E5C615A23FEE15MeshRasterLayer11Coordinator::tick_
               (ID param_1,SEL param_2,ID param_3)

{
  double extraout_d0;
  
  _swift_retain(param_1);
  objc_stub::targetTimestamp(param_3);
  if (*(double *)(param_1 + 0x48) * 0.8 <= extraout_d0 - *(double *)(param_1 + 0x50)) {
    FUN_1000454b8();
  }
  _swift_release(param_1);
  return;
}

