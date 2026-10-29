// rea decompile_all
// name: FUN_1000c1ac0
// address: 0x1000c1ac0
// body: available
// range: 0x1000c1ac0-0x1000c2343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c1ac0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  Optional OVar2;
  undefined *puVar3;
  undefined *puVar4;
  Menu MVar5;
  ButtonMenuStyle BVar6;
  undefined *puVar7;
  undefined *puVar8;
  PlainButtonStyle PVar9;
  undefined **ppuVar10;
  ModifiedContent MVar11;
  ModifiedContent MVar12;
  ModifiedContent MVar13;
  ModifiedContent MVar14;
  ModifiedContent MVar15;
  ModifiedContent MVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  ZStack ZVar19;
  Alignment alignment;
  ZStack<undefined> ZVar20;
  Animation AVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  long local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined **local_120;
  undefined *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined **local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
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
  undefined **local_78;
  undefined *puStack_70;
  
  puVar3 = &DAT_10054d8e0;
  local_180 = param_6;
  local_178 = param_5;
  local_16c = param_2;
  local_168 = param_3;
  local_160 = param_4;
  local_158 = param_1;
  FUN_100002fe4(&DAT_10054d8e0,&DAT_10041f1b0);
  puVar4 = puVar3;
  FUN_1000599d4();
  local_130 = puVar3;
  local_128 = (undefined *)param_5;
  local_120 = (undefined **)puVar4;
  local_118 = (undefined *)param_6;
  MVar5 = SwiftUI::Menu::typeMetadataAccessor();
  BVar6 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100522210;
  puVar7 = PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88,MVar5.unknown)
  ;
  puVar3 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,puVar4,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  puVar18 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
  ;
  puVar8 = (undefined *)0xff;
  local_130 = MVar5.unknown;
  local_128 = BVar6.unknown;
  local_120 = (undefined **)puVar7;
  local_118 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,0);
  PVar9 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100522380;
  ppuVar10 = &local_130;
  local_130 = MVar5.unknown;
  local_128 = BVar6.unknown;
  local_120 = (undefined **)puVar7;
  local_118 = puVar3;
  _swift_getOpaqueTypeConformance2(ppuVar10,puVar18,1);
  puVar3 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar4,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  local_130 = puVar8;
  local_128 = PVar9.unknown;
  local_120 = ppuVar10;
  local_118 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,0);
  FUN_100002fe4(&DAT_100550b40,&DAT_1004226e0);
  MVar11 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_100549cb0,&DAT_100433ba0);
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar14 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a780,&DAT_10041e510);
  MVar15 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a788,&DAT_100425370);
  local_190 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_188 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054ae18,&DAT_10041e5d0);
  MVar16 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  ppuVar17 = &local_130;
  local_130 = puVar8;
  local_128 = PVar9.unknown;
  local_120 = ppuVar10;
  local_118 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  puVar3 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar18 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_78 = ppuVar17;
  puStack_70 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar11.unknown,&local_78);
  puStack_80 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
  ;
  puVar7 = puVar4;
  local_88 = puVar18;
  _swift_getWitnessTable(puVar4,MVar12.unknown,&local_88);
  puVar3 = &DAT_100549ca8;
  FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar18 = puVar4;
  local_98 = puVar7;
  puStack_90 = puVar3;
  _swift_getWitnessTable(puVar4,MVar13.unknown,&local_98);
  puVar3 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar7 = puVar4;
  local_a8 = puVar18;
  puStack_a0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar14.unknown,&local_a8);
  puVar3 = &DAT_10054a7a0;
  FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar18 = puVar4;
  local_b8 = puVar7;
  puStack_b0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar15.unknown,&local_b8);
  puVar3 = &DAT_10054a7b0;
  FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  puVar7 = puVar4;
  local_c8 = puVar18;
  puStack_c0 = puVar3;
  _swift_getWitnessTable(puVar4,local_190,&local_c8);
  local_d8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar18 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puStack_d0 = puVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_188,&local_d8);
  puVar3 = &DAT_10054ae10;
  FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  local_e8 = puVar18;
  puStack_e0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar16.unknown,&local_e8);
  puVar3 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
  ;
  local_130 = MVar16.unknown;
  local_128 = puVar4;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  ppuVar10 = &local_130;
  local_130 = MVar16.unknown;
  local_128 = puVar4;
  _swift_getOpaqueTypeConformance2(ppuVar10,puVar3,1);
  local_f0 = ppuVar10;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
             ,OVar2.value,&local_f0);
  ZVar19 = SwiftUI::ZStack::typeMetadataAccessor();
  local_1a0 = *(long *)(ZVar19.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  AVar21.unknown = (undefined *)((long)&local_1a0 - extraout_x8);
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_190 = *(undefined **)(MVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_190 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)AVar21.unknown - extraout_x8_00;
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_188 = *(undefined **)(MVar13.unknown + -8);
  MVar11 = MVar13;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_188 + 0x40));
  lVar24 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_198 = lVar24 - extraout_x12;
  local_120 = (undefined **)local_178;
  local_118 = (undefined *)local_180;
  uVar1 = (undefined1)local_16c;
  local_108 = local_168;
  uStack_100 = local_160;
  local_110 = uVar1;
  alignment = SwiftUI::Alignment::get_center(MVar11.unknown);
  ZVar20 = SwiftUI::ZStack::_init(alignment);
  SwiftUI::Alignment::get_center((Alignment)ZVar20.unknown);
  puVar3 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar19.unknown);
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x403a000000000000);
  (**(code **)(local_1a0 + 8))(AVar21.unknown,ZVar19.unknown);
  AVar21 = SwiftUI::Animation::easeOut(0.12,AVar21);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_130 = (undefined *)CONCAT71(local_130._1_7_,uVar1);
  local_138 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100521e80;
  puVar18 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_140 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar12.unknown,&local_140);
  (extension_SwiftUI)::SwiftUI::View::_animation
            (lVar24,AVar21.unknown,&local_130,MVar12.unknown,
             PTR___type_metadata_for_Swift_Bool_100523b70,puVar18,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  _swift_release(AVar21.unknown);
  (**(code **)((long)local_190 + 8))(lVar25,MVar12.unknown);
  puVar3 = &DAT_10054aa18;
  FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  local_150 = puVar18;
  local_148 = puVar3;
  _swift_getWitnessTable(puVar4,MVar13.unknown,&local_150);
  puVar3 = local_188;
  lVar25 = local_198;
  pcVar22 = *(code **)((long)local_188 + 0x10);
  (*pcVar22)(local_198,lVar24,MVar13.unknown);
  pcVar23 = *(code **)((long)puVar3 + 8);
  (*pcVar23)(lVar24,MVar13.unknown);
  (*pcVar22)(local_158,lVar25,MVar13.unknown);
  (*pcVar23)(lVar25,MVar13.unknown);
  return;
}

