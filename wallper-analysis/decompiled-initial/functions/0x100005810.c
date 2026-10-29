// rea decompile_all
// name: FUN_100005810
// address: 0x100005810
// body: available
// range: 0x100005810-0x100005947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005878 to 0x100411ccc /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::ModifiedContent::typeMetadataAccessor (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005810(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  int iVar3;
  TagValueTraitKey TVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  iVar3 = 1;
  FUN_1004107b8(1,0x1a,0,0);
  if (iVar3 != 0) {
    SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor();
    SwiftUI::ModifiedContent::typeMetadataAccessor();
    return;
  }
  TVar4 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
  puVar1 = PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_1005223e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_1005223e0,
             TVar4.unknown);
  SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_48 = uVar5;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100524160
             ,OVar2.value,&local_48);
  TVar4 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
  _swift_getWitnessTable(puVar1,TVar4.unknown);
  SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  return;
}

