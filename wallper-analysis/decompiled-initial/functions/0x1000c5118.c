// rea decompile_all
// name: FUN_1000c5118
// address: 0x1000c5118
// body: available
// range: 0x1000c5118-0x1000c5673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c5118(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined *puVar4;
  undefined *puVar5;
  Menu MVar6;
  ButtonMenuStyle BVar7;
  undefined *puVar8;
  undefined *puVar9;
  PlainButtonStyle PVar10;
  undefined **ppuVar11;
  ModifiedContent MVar12;
  ModifiedContent MVar13;
  ModifiedContent MVar14;
  ModifiedContent MVar15;
  ModifiedContent MVar16;
  ModifiedContent MVar17;
  _ConditionalContent _Var18;
  ModifiedContent MVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  ZStack ZVar22;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined **local_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
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
  undefined **local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined **local_78;
  undefined *puStack_70;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = &DAT_10054d8e0;
  FUN_100002fe4(&DAT_10054d8e0,&DAT_10041f1b0);
  puVar5 = puVar4;
  FUN_1000599d4();
  local_88 = puVar4;
  puStack_80 = (undefined *)uVar1;
  local_78 = (undefined **)puVar5;
  puStack_70 = (undefined *)uVar2;
  MVar6 = SwiftUI::Menu::typeMetadataAccessor();
  BVar7 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100522210;
  puVar8 = PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88,MVar6.unknown)
  ;
  puVar4 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,puVar5,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  puVar21 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
  ;
  puVar9 = (undefined *)0xff;
  local_88 = MVar6.unknown;
  puStack_80 = BVar7.unknown;
  local_78 = (undefined **)puVar8;
  puStack_70 = puVar4;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,0);
  PVar10 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100522380;
  ppuVar11 = &local_88;
  local_88 = MVar6.unknown;
  puStack_80 = BVar7.unknown;
  local_78 = (undefined **)puVar8;
  puStack_70 = puVar4;
  _swift_getOpaqueTypeConformance2(ppuVar11,puVar21,1);
  puVar4 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar5,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  local_88 = puVar9;
  puStack_80 = PVar10.unknown;
  local_78 = ppuVar11;
  puStack_70 = puVar4;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,0);
  FUN_100002fe4(&DAT_100550b40,&DAT_1004226e0);
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_100549cb0,&DAT_100433ba0);
  MVar14 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar15 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a780,&DAT_10041e510);
  MVar16 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a788,&DAT_100425370);
  MVar17 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var18 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054ae18,&DAT_10041e5d0);
  MVar19 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  ppuVar20 = &local_88;
  local_88 = puVar9;
  puStack_80 = PVar10.unknown;
  local_78 = ppuVar11;
  puStack_70 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar20,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  puVar4 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar21 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_98 = ppuVar20;
  puStack_90 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar12.unknown,&local_98);
  puStack_a0 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
  ;
  puVar8 = puVar5;
  local_a8 = puVar21;
  _swift_getWitnessTable(puVar5,MVar13.unknown,&local_a8);
  puVar4 = &DAT_100549ca8;
  FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar21 = puVar5;
  local_b8 = puVar8;
  puStack_b0 = puVar4;
  _swift_getWitnessTable(puVar5,MVar14.unknown,&local_b8);
  puVar4 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar8 = puVar5;
  local_c8 = puVar21;
  puStack_c0 = puVar4;
  _swift_getWitnessTable(puVar5,MVar15.unknown,&local_c8);
  puVar4 = &DAT_10054a7a0;
  FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar21 = puVar5;
  local_d8 = puVar8;
  puStack_d0 = puVar4;
  _swift_getWitnessTable(puVar5,MVar16.unknown,&local_d8);
  puVar4 = &DAT_10054a7b0;
  FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  puVar8 = puVar5;
  local_e8 = puVar21;
  puStack_e0 = puVar4;
  _swift_getWitnessTable(puVar5,MVar17.unknown,&local_e8);
  local_f8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar21 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puStack_f0 = puVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,_Var18.unknown,&local_f8);
  puVar4 = &DAT_10054ae10;
  FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  puVar8 = puVar5;
  local_108 = puVar21;
  puStack_100 = puVar4;
  _swift_getWitnessTable(puVar5,MVar19.unknown,&local_108);
  puVar4 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
  ;
  local_88 = MVar19.unknown;
  puStack_80 = puVar8;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,0);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  ppuVar11 = &local_88;
  local_88 = MVar19.unknown;
  puStack_80 = puVar8;
  _swift_getOpaqueTypeConformance2(ppuVar11,puVar4,1);
  local_110 = ppuVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
             ,OVar3.value,&local_110);
  ZVar22 = SwiftUI::ZStack::typeMetadataAccessor();
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar4 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0,ZVar22.unknown);
  puStack_118 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100521e80;
  puVar21 = puVar5;
  local_120 = puVar4;
  _swift_getWitnessTable(puVar5,MVar12.unknown,&local_120);
  puVar4 = &DAT_10054aa18;
  FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  local_130 = puVar21;
  puStack_128 = puVar4;
  _swift_getWitnessTable(puVar5,MVar13.unknown,&local_130);
  return;
}

