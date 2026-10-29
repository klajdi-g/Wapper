// rea decompile_all
// name: FUN_10010f5c0
// address: 0x10010f5c0
// body: available
// range: 0x10010f5c0-0x10010f927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010f5c0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  ModifiedContent MVar5;
  ModifiedContent MVar6;
  ModifiedContent MVar7;
  ModifiedContent MVar8;
  ModifiedContent MVar9;
  undefined *puVar10;
  ForEach FVar11;
  undefined *puVar12;
  undefined *puVar13;
  ZStack ZVar14;
  undefined *local_118;
  undefined *puStack_110;
  undefined *local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = &DAT_100553098;
  FUN_100002fe4(&DAT_100553098,&DAT_100425d60);
  FUN_100002fe4(&DAT_1005530a0,&DAT_100425d68);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar7 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::AccessibilityAttachmentModifier::typeMetadataAccessor();
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_1005530a8,&DAT_100425d70);
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar10 = &DAT_1005530b0;
  FUN_1000087a0(&DAT_1005530b0,&DAT_100553098,&DAT_100425d60,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100523b60);
  local_88 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_70 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0;
  local_90 = puVar2;
  local_80 = MVar9.unknown;
  puStack_78 = puVar10;
  FVar11 = SwiftUI::ForEach::typeMetadataAccessor();
  puVar2 = &DAT_1005530b8;
  FUN_1000087a0(&DAT_1005530b8,&DAT_1005530a0,&DAT_100425d68,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar10 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_a0 = uVar1;
  puStack_98 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar3.unknown,&local_a0);
  puStack_a8 = 
  PTR___protocol_witness_table_for_SwiftUI__CompositingGroupEffect___SwiftUI_ViewModifier_in_SwiftUI_100522a40
  ;
  puVar2 = puVar10;
  local_b0 = puVar12;
  _swift_getWitnessTable(puVar10,MVar4.unknown,&local_b0);
  puStack_b8 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  puVar12 = puVar10;
  local_c0 = puVar2;
  _swift_getWitnessTable(puVar10,MVar5.unknown,&local_c0);
  puStack_c8 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar2 = puVar10;
  local_d0 = puVar12;
  _swift_getWitnessTable(puVar10,MVar6.unknown,&local_d0);
  puStack_d8 = 
  PTR___protocol_witness_table_for_SwiftUI__AllowsHitTestingModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b18
  ;
  puVar12 = puVar10;
  local_e0 = puVar2;
  _swift_getWitnessTable(puVar10,MVar7.unknown,&local_e0);
  puVar2 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar13 = puVar10;
  local_f0 = puVar12;
  puStack_e8 = puVar2;
  _swift_getWitnessTable(puVar10,MVar8.unknown,&local_f0);
  puVar2 = &DAT_1005530c0;
  FUN_1000087a0(&DAT_1005530c0,&DAT_1005530a8,&DAT_100425d70,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar12 = puVar10;
  local_100 = puVar13;
  puStack_f8 = puVar2;
  _swift_getWitnessTable(puVar10,MVar9.unknown,&local_100);
  local_108 = puVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             FVar11.unknown,&local_108);
  ZVar14 = SwiftUI::ZStack::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054b7d8,&DAT_1004222b0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar12 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar14.unknown);
  puVar2 = &DAT_10054b7d0;
  FUN_1000087a0(&DAT_10054b7d0,&DAT_10054b7d8,&DAT_1004222b0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  local_118 = puVar12;
  puStack_110 = puVar2;
  _swift_getWitnessTable(puVar10,MVar3.unknown,&local_118);
  local_88 = PTR___type_metadata_for_Swift_Int_100523bd8;
  puStack_78 = PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8;
  local_90 = MVar3.unknown;
  local_80 = puVar10;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,1);
  return;
}

