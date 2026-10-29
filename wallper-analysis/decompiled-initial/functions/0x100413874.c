// rea decompile_all
// name: /usr/lib/swift/libswiftCoreMedia.dylib::(extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::$get_seconds
// address: 0x100413874
// body: available
// range: 0x100413874-0x10041387f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* (extension in CoreMedia):__C.CMTime.seconds.getter : Swift.Double */

double (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::_get_seconds(void)

{
  double in_d0;
  
                    /* WARNING: Could not recover jumptable at 0x00010041387c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_seconds_100524478)();
  return in_d0;
}

