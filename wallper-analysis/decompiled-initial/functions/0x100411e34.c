// rea decompile_all
// name: /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::EnvironmentValues::get_colorScheme
// address: 0x100411e34
// body: available
// range: 0x100411e34-0x100411e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SwiftUI.EnvironmentValues.colorScheme.getter : SwiftUI.ColorScheme */

ColorScheme SwiftUI::EnvironmentValues::get_colorScheme(EnvironmentValues param_1)

{
  ColorScheme CVar1;
  
  CVar1.value = (__int8)param_1.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100411e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_colorScheme_1005224a8)();
  return (ColorScheme)CVar1.value;
}

