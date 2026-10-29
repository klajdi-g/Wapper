// rea decompile_all
// name: FUN_1000af6e0
// address: 0x1000af6e0
// body: available
// range: 0x1000af6e0-0x1000af753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1000af6e0(undefined8 *param_1)

{
  EmptyAnimatableData EVar1;
  EmptyAnimatableData EVar2;
  Animatable *unaff_x20;
  
  EVar1.unknown = (undefined *)0x28;
  if (PTR__swift_coroFrameAlloc_100524228 == (undefined *)0x0) {
    EVar1.unknown = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xb0fa);
  }
  *param_1 = EVar1.unknown;
  EVar2.unknown = EVar1.unknown;
  (extension_SwiftUI)::SwiftUI::Animatable::_modify_animatableData(unaff_x20,EVar1);
  *(undefined **)(EVar1.unknown + 0x20) = EVar2.unknown;
  return FUN_1000af754;
}

