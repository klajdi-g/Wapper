// rea decompile_all
// name: FUN_100005948
// address: 0x100005948
// body: available
// range: 0x100005948-0x100005afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005948(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  Optional OVar3;
  int iVar4;
  _TagTraitWritingModifier _Var5;
  ModifiedContent MVar6;
  TagValueTraitKey TVar7;
  _TraitWritingModifier _Var8;
  ModifiedContent MVar9;
  _TraitWritingModifier _Var10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  iVar4 = 1;
  FUN_1004107b8(1,0x1a,0,0);
  if (iVar4 == 0) {
    TVar7 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
    puVar14 = PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_1005223e0;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_1005223e0,
               TVar7.unknown);
    _Var8 = SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
    MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    OVar3 = Swift::Optional::typeMetadataAccessor();
    local_58 = uVar2;
    _swift_getWitnessTable
              (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100524160
               ,OVar3.value,&local_58);
    TVar7 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
    _swift_getWitnessTable(puVar14,TVar7.unknown);
    _Var10 = SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
    MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar13 = 
    PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978;
    puVar11 = 
    PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               ,_Var8.unknown);
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_68 = puVar1;
    puStack_60 = puVar11;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               MVar9.unknown,&local_68);
    _swift_getWitnessTable(puVar13,_Var10.unknown);
    ppuVar15 = &local_78;
    local_78 = puVar12;
    puStack_70 = puVar13;
  }
  else {
    _Var5 = SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor();
    MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar13 = 
    PTR_SwiftUI__SwiftUI___TagTraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522af0;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI___TagTraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522af0
               ,_Var5.unknown);
    ppuVar15 = &local_50;
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_50 = puVar1;
    puStack_48 = puVar13;
  }
  _swift_getWitnessTable(puVar14,MVar6.unknown,ppuVar15);
  return;
}

