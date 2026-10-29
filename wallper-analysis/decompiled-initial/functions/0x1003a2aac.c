// rea decompile_all
// name: FUN_1003a2aac
// address: 0x1003a2aac
// body: available
// range: 0x1003a2aac-0x1003a2aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a2ae8 to 0x100412b54 /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Label::$init (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a2aac(char *param_1,void *param_2,uint param_3)

{
  LocalizedStringKey LVar1;
  String stringLiteral;
  String systemImage;
  
  stringLiteral.bridgeObject = param_2;
  stringLiteral.str = param_1;
  LVar1 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  systemImage.bridgeObject._0_4_ = param_3 & 1;
  systemImage.str = param_2;
  systemImage.bridgeObject._4_4_ = 0;
  (extension_SwiftUI)::SwiftUI::Label::_init(LVar1,systemImage);
  return;
}

