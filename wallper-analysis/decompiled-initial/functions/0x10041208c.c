// rea decompile_all
// name: /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::RoundedCornerStyle::==_infix
// address: 0x10041208c
// body: available
// range: 0x10041208c-0x100412097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* static SwiftUI.RoundedCornerStyle.== infix(SwiftUI.RoundedCornerStyle,
   SwiftUI.RoundedCornerStyle) -> Swift.Bool */

bool SwiftUI::RoundedCornerStyle::___infix
               (RoundedCornerStyle param_1,RoundedCornerStyle param_2,RoundedCornerStyle param_3,...
               )

{
                    /* WARNING: Could not recover jumptable at 0x000100412094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100522680)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}

