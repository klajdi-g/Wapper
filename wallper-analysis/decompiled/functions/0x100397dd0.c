// rea decompile_all
// name: FUN_100397dd0
// address: 0x100397dd0
// body: available
// range: 0x100397dd0-0x100398273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100397dd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  _ConditionalContent _Var14;
  ModifiedContent MVar15;
  ModifiedContent MVar16;
  ModifiedContent MVar17;
  ModifiedContent MVar18;
  _ConditionalContent _Var19;
  _ConditionalContent _Var20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
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
  puVar3 = &DAT_10055e9c8;
  FUN_100002fe4(&DAT_10055e9c8,&DAT_100434200);
  puVar4 = puVar3;
  FUN_10039080c();
  local_88 = puVar3;
  puStack_80 = (undefined *)uVar1;
  local_78 = (undefined **)puVar4;
  puStack_70 = (undefined *)uVar2;
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
  puVar22 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
  ;
  puVar8 = (undefined *)0xff;
  local_88 = MVar5.unknown;
  puStack_80 = BVar6.unknown;
  local_78 = (undefined **)puVar7;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,0);
  PVar9 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100522380;
  ppuVar10 = &local_88;
  local_88 = MVar5.unknown;
  puStack_80 = BVar6.unknown;
  local_78 = (undefined **)puVar7;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeConformance2(ppuVar10,puVar22,1);
  puVar3 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar4,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  local_88 = puVar8;
  puStack_80 = PVar9.unknown;
  local_78 = ppuVar10;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,0);
  FUN_100002fe4(&DAT_100550b40,&DAT_1004226e0);
  MVar11 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054e1b0,&DAT_10041f0a0);
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var14 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a650,&DAT_10041d1e0);
  MVar15 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar16 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a660,&DAT_10041d1f0);
  MVar17 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a668,&DAT_10041b650);
  MVar18 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var19 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  _Var20 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  ppuVar21 = &local_88;
  local_88 = puVar8;
  puStack_80 = PVar9.unknown;
  local_78 = ppuVar10;
  puStack_70 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar21,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  puVar3 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar22 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_98 = ppuVar21;
  puStack_90 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar11.unknown,&local_98);
  puStack_a0 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
  ;
  puVar8 = puVar4;
  local_a8 = puVar22;
  _swift_getWitnessTable(puVar4,MVar12.unknown,&local_a8);
  puVar3 = &DAT_10054e1a8;
  FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar23 = puVar4;
  local_b8 = puVar8;
  puStack_b0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar13.unknown,&local_b8);
  puVar7 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar22 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  local_c8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar24 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puStack_c0 = puVar23;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,_Var14.unknown,&local_c8);
  puVar3 = &DAT_10054a678;
  FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar23 = puVar4;
  local_d8 = puVar8;
  puStack_d0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar15.unknown,&local_d8);
  puVar3 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar8 = puVar4;
  local_e8 = puVar23;
  puStack_e0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar16.unknown,&local_e8);
  puVar3 = &DAT_10054a6b0;
  FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar23 = puVar4;
  local_f8 = puVar8;
  puStack_f0 = puVar3;
  _swift_getWitnessTable(puVar4,MVar17.unknown,&local_f8);
  puVar3 = &DAT_10054a6c0;
  FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  local_108 = puVar23;
  puStack_100 = puVar3;
  _swift_getWitnessTable(puVar4,MVar18.unknown,&local_108);
  local_118 = puVar7;
  puVar3 = puVar22;
  puStack_110 = puVar4;
  _swift_getWitnessTable(puVar22,_Var19.unknown,&local_118);
  local_128 = puVar24;
  puStack_120 = puVar3;
  _swift_getWitnessTable(puVar22,_Var20.unknown,&local_128);
  return;
}

