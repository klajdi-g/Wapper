// rea decompile_all
// name: /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Tab::$init
// address: 0x100412458
// body: available
// range: 0x100412458-0x100412463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* (extension in SwiftUI):SwiftUI.Tab< where A == Swift.Never, B: SwiftUI.View, C:
   SwiftUI.View>.init<A where C == SwiftUI.DefaultTabLabel, A1: Swift.StringProtocol>(_: A1,
   systemImage: Swift.String, content: () -> B) -> SwiftUI.Tab<Swift.Never, B,
   SwiftUI.DefaultTabLabel> */

Tab<Never,undefined,DefaultTabLabel>
(extension_SwiftUI)::SwiftUI::Tab::_init(Tab<Never,undefined,DefaultTabLabel> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100412460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100522c58)();
  return (Tab<Never,undefined,DefaultTabLabel>)param_1.unknown;
}

