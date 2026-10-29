// rea decompile_all
// name: /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$removeDuplicates
// address: 0x1004116cc
// body: available
// range: 0x1004116cc-0x1004116d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* (extension in Combine):Combine.Publisher< where A.Output: Swift.Equatable>.removeDuplicates() ->
   Combine.Publishers.RemoveDuplicates<A> */

RemoveDuplicates<undefined> (extension_Combine)::Combine::Publisher::_removeDuplicates(void)

{
  RemoveDuplicates<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001004116d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__removeDuplicates_100521510)();
  return (RemoveDuplicates<undefined>)in_x0.unknown;
}

