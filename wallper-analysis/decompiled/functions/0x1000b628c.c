// rea decompile_all
// name: FUN_1000b628c
// address: 0x1000b628c
// body: available
// range: 0x1000b628c-0x1000b636f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000b628c(undefined8 param_1,undefined8 param_2,AnyTransition param_3)

{
  Edge edge;
  State SVar1;
  AnyTransition AVar2;
  AnyTransition AVar3;
  AnyTransition insertion;
  AnyTransition AVar4;
  Edge edge_00;
  double local_48;
  
  SVar1.unknown = &DAT_100550940;
  AVar4.unknown = &DAT_100422368;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar1);
  edge_00.value = 3;
  if (local_48 <= 0.0) {
    edge.value = edge_00.value;
    edge_00.value = 1;
  }
  else {
    edge.value = 1;
  }
  AVar2 = SwiftUI::AnyTransition::move(edge_00,AVar4);
  AVar3 = SwiftUI::AnyTransition::get_opacity(AVar2);
  AVar4 = AVar2;
  insertion = SwiftUI::AnyTransition::combined(AVar3,AVar2);
  _swift_release(AVar2.unknown);
  _swift_release(AVar3.unknown);
  AVar4 = SwiftUI::AnyTransition::move(edge,AVar4);
  AVar2 = SwiftUI::AnyTransition::get_opacity(AVar4);
  AVar3 = SwiftUI::AnyTransition::combined(AVar2,AVar4);
  _swift_release(AVar4.unknown);
  _swift_release(AVar2.unknown);
  AVar4 = SwiftUI::AnyTransition::asymmetric(insertion,AVar3,param_3);
  _swift_release(insertion.unknown);
  _swift_release(AVar3.unknown);
  return AVar4.unknown;
}

