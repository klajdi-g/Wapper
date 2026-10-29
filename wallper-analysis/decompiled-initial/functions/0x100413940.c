// rea decompile_all
// name: /usr/lib/swift/libswiftCore.dylib::Swift::Substring::get_subscript
// address: 0x100413940
// body: available
// range: 0x100413940-0x10041394b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Swift.Substring.subscript.getter : (Swift.String.Index) -> Swift.Character */

Character Swift::Substring::get_subscript(Index param_1,Substring param_2)

{
  Character CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100413948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscript_100523c90)();
  CVar1.bridgeObject = param_2.unknown;
  CVar1.str = param_1.unknown;
  return CVar1;
}

