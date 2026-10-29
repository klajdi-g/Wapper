// rea decompile_all
// name: FUN_10010ce78
// address: 0x10010ce78
// body: available
// range: 0x10010ce78-0x10010d553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010ce78(undefined8 param_1,long param_2)

{
  long lVar1;
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
  undefined *puVar15;
  Alignment AVar16;
  State SVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar20;
  undefined8 *unaff_x20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined1 auStack_1c0 [8];
  undefined *local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  puVar2 = &DAT_100553098;
  FUN_100002fe4(&DAT_100553098,&DAT_100425d60);
  uVar21 = *(undefined8 *)(param_2 + 0x10);
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
  puStack_148 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_130 = PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0;
  local_150 = puVar2;
  local_140 = MVar9.unknown;
  local_138 = puVar10;
  FVar11 = SwiftUI::ForEach::typeMetadataAccessor();
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = &DAT_1005530b8;
  local_178 = uVar20;
  FUN_1000087a0(&DAT_1005530b8,&DAT_1005530a0,&DAT_100425d68,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar10 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_78 = uVar20;
  puStack_70 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar3.unknown,&local_78);
  puStack_80 = 
  PTR___protocol_witness_table_for_SwiftUI__CompositingGroupEffect___SwiftUI_ViewModifier_in_SwiftUI_100522a40
  ;
  puVar2 = puVar10;
  local_88 = puVar12;
  _swift_getWitnessTable(puVar10,MVar4.unknown,&local_88);
  puStack_90 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  puVar12 = puVar10;
  local_98 = puVar2;
  _swift_getWitnessTable(puVar10,MVar5.unknown,&local_98);
  puStack_a0 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar2 = puVar10;
  local_a8 = puVar12;
  _swift_getWitnessTable(puVar10,MVar6.unknown,&local_a8);
  puStack_b0 = 
  PTR___protocol_witness_table_for_SwiftUI__AllowsHitTestingModifier___SwiftUI_ViewModifier_in_SwiftUI_100522b18
  ;
  puVar12 = puVar10;
  local_b8 = puVar2;
  _swift_getWitnessTable(puVar10,MVar7.unknown,&local_b8);
  puVar2 = &DAT_1005515d8;
  FUN_1000036d0(&DAT_1005515d8,PTR_typeMetadataAccessor_100522be8,
                PTR_SwiftUI__SwiftUI__AccessibilityAttachmentModifier_>SwiftUI__ViewModifier_100522be0
               );
  puVar13 = puVar10;
  local_c8 = puVar12;
  puStack_c0 = puVar2;
  _swift_getWitnessTable(puVar10,MVar8.unknown,&local_c8);
  puVar2 = &DAT_1005530c0;
  FUN_1000087a0(&DAT_1005530c0,&DAT_1005530a8,&DAT_100425d70,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar12 = puVar10;
  local_d8 = puVar13;
  puStack_d0 = puVar2;
  _swift_getWitnessTable(puVar10,MVar9.unknown,&local_d8);
  local_e0 = puVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100523598,
             FVar11.unknown,&local_e0);
  ZVar14 = SwiftUI::ZStack::typeMetadataAccessor();
  local_190 = *(long *)(ZVar14.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  FUN_100002fe4(&DAT_10054b7d8,&DAT_1004222b0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_180 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = (long)(auStack_1c0 + -extraout_x8) - extraout_x8_00;
  puVar12 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  local_1b0 = lVar19;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar14.unknown);
  puVar2 = &DAT_10054b7d0;
  local_1b8 = puVar12;
  FUN_1000087a0(&DAT_10054b7d0,&DAT_10054b7d8,&DAT_1004222b0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  local_f0 = puVar12;
  puStack_e8 = puVar2;
  _swift_getWitnessTable(puVar10,MVar3.unknown,&local_f0);
  puStack_148 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_138 = PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8;
  puVar15 = (undefined *)0x0;
  local_1a0 = puVar10;
  local_150 = MVar3.unknown;
  local_140 = puVar10;
  _swift_getOpaqueTypeMetadata2
            (0,&local_150,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,0);
  local_188 = *(long *)(puVar15 + -8);
  AVar16.unknown = puVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_188 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar20 = local_178;
  local_198 = lVar19 - extraout_x12;
  local_138 = (undefined *)local_178;
  local_140 = (undefined *)uVar21;
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  SwiftUI::ZStack::_init(AVar16);
  uVar23 = unaff_x20[10];
  puStack_148 = (undefined *)unaff_x20[8];
  local_150 = (undefined *)unaff_x20[7];
  SVar17.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar17);
  lVar19 = local_1b0;
  puVar10 = PTR___type_metadata_for_Swift_Int_100523bd8;
  (extension_SwiftUI)::SwiftUI::View::_animation
            (local_1b0,uVar23,&local_f8,ZVar14.unknown,PTR___type_metadata_for_Swift_Int_100523bd8,
             local_1b8,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8);
  (**(code **)(local_190 + 8))(auStack_1c0 + -extraout_x8,ZVar14.unknown);
  local_f8 = *unaff_x20;
  puVar2 = &DAT_10052c670;
  _swift_allocObject(&DAT_10052c670,0x78,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar21;
  *(undefined8 *)(puVar2 + 0x18) = uVar20;
  uVar20 = unaff_x20[4];
  uVar23 = unaff_x20[7];
  uVar21 = unaff_x20[6];
  *(undefined8 *)(puVar2 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar2 + 0x40) = uVar20;
  *(undefined8 *)(puVar2 + 0x58) = uVar23;
  *(undefined8 *)(puVar2 + 0x50) = uVar21;
  uVar20 = unaff_x20[8];
  *(undefined8 *)(puVar2 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar2 + 0x60) = uVar20;
  *(undefined8 *)(puVar2 + 0x70) = unaff_x20[10];
  uVar20 = *unaff_x20;
  uVar23 = unaff_x20[3];
  uVar21 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar20;
  *(undefined8 *)(puVar2 + 0x38) = uVar23;
  *(undefined8 *)(puVar2 + 0x30) = uVar21;
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(&local_150,unaff_x20);
  puVar13 = local_1a0;
  lVar1 = local_1a8;
  puVar12 = PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_1a8,&local_f8,0,FUN_10010f4a4,puVar2,MVar3.unknown,puVar10,local_1a0);
  _swift_release(puVar2);
  (**(code **)(local_180 + 8))(lVar19,MVar3.unknown);
  puStack_148 = puVar10;
  local_140 = puVar13;
  local_138 = puVar12;
  ppuVar18 = &local_150;
  local_150 = MVar3.unknown;
  _swift_getOpaqueTypeConformance2
            (ppuVar18,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100523140
             ,1);
  lVar19 = local_198;
  thunk_FUN_1000bdaa4(local_198,lVar1,puVar15,ppuVar18);
  pcVar22 = *(code **)(local_188 + 8);
  (*pcVar22)(lVar1,puVar15);
  thunk_FUN_1000bdaa4(param_1,lVar19,puVar15,ppuVar18);
  (*pcVar22)(lVar19,puVar15);
  return;
}

