// rea decompile_all
// name: /usr/lib/swift/libswiftDarwin.dylib::Darwin::open
// address: 0x1004115a0
// body: available
// range: 0x1004115a0-0x1004115ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Darwin.open(Swift.UnsafePointer<Swift.Int8>, Swift.Int32) -> Swift.Int32 */

__int32 Darwin::open(UnsafePointer<__int8> param_1,__int32 param_2)

{
  __int32 _Var1;
  
  _Var1 = (__int32)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x0001004115a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_open_100524480)(_Var1,param_2);
  return _Var1;
}

