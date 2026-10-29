// rea decompile_all
// name: /usr/lib/swift/libswiftCore.dylib::Swift::String::$init
// address: 0x1004133ac
// body: available
// range: 0x1004133ac-0x1004133b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Swift.String.init<A where A: Swift.Sequence, A.Element == Swift.Character>(A) -> Swift.String */

String Swift::String::_init(char *param_1,void *param_2)

{
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001004133b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100523ae0)();
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  return SVar1;
}

