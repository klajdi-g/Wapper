// rea decompile_all
// name: FUN_10038087c
// address: 0x10038087c
// body: available
// range: 0x10038087c-0x1003810ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038087c(undefined8 param_1,long param_2)

{
  PlainButtonStyle PVar1;
  ButtonMenuStyle BVar2;
  undefined *puVar3;
  undefined *puVar4;
  Menu MVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  ModifiedContent MVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar19;
  long extraout_x8_06;
  long extraout_x12;
  code *pcVar20;
  undefined1 auStack_2a0 [8];
  long local_298;
  long local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  undefined *local_270;
  undefined *local_268;
  long local_260;
  undefined *local_258;
  undefined **local_250;
  long local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  long local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long local_208;
  undefined *local_200;
  long local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined *local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined *local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined **local_d0;
  undefined *puStack_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_90;
  undefined *local_88;
  undefined **local_80;
  undefined *puStack_78;
  
  PVar1 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100522380;
  lVar14 = *(long *)(PVar1.unknown + -8);
  local_240 = PVar1.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  puVar15 = auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  BVar2 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100522210;
  lVar16 = *(long *)(BVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10055e9c8;
  local_1c0 = lVar17;
  FUN_100002fe4(&DAT_10055e9c8,&DAT_100434200);
  puVar4 = puVar3;
  local_1c8 = puVar3;
  FUN_10039080c();
  local_210 = *(undefined8 *)(param_2 + 0x18);
  uStack_218 = *(undefined8 *)(param_2 + 0x18);
  local_220 = *(undefined8 *)(param_2 + 0x10);
  local_1e0 = puVar4;
  local_1d0 = local_220;
  local_90 = puVar3;
  local_88 = (undefined *)local_220;
  local_80 = (undefined **)puVar4;
  puStack_78 = (undefined *)local_210;
  MVar5 = SwiftUI::Menu::typeMetadataAccessor();
  local_1b0 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = lVar17 - extraout_x8_01;
  puVar4 = PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88,MVar5.unknown)
  ;
  puVar3 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,puVar8,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  puVar8 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
  ;
  puVar6 = (undefined *)0x0;
  local_270 = BVar2.unknown;
  local_268 = puVar4;
  local_90 = MVar5.unknown;
  local_88 = BVar2.unknown;
  local_80 = (undefined **)puVar4;
  puStack_78 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0,&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,0);
  local_1e8 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = lVar17 - extraout_x8_02;
  ppuVar7 = &local_90;
  local_278 = lVar18;
  local_90 = MVar5.unknown;
  local_88 = BVar2.unknown;
  local_80 = (undefined **)puVar4;
  puStack_78 = puVar3;
  _swift_getOpaqueTypeConformance2(ppuVar7,puVar8,1);
  puVar8 = &DAT_10054a8b0;
  local_250 = ppuVar7;
  FUN_1000036d0(&DAT_10054a8b0,puVar13,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar9 = 0;
  local_258 = puVar8;
  local_90 = puVar6;
  local_88 = PVar1.unknown;
  local_80 = ppuVar7;
  puStack_78 = puVar8;
  _swift_getOpaqueTypeMetadata2
            (0,&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,0);
  local_228 = *(long *)(lVar9 + -8);
  local_260 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_228 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = lVar18 - extraout_x8_03;
  local_290 = lVar18;
  FUN_100002fe4(&DAT_100550b40,&DAT_1004226e0);
  local_238 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_208 = *(long *)(local_238 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_208 + 0x40) + 0xfU & 0xfffffffffffffff0,local_238,local_238);
  lVar18 = lVar18 - extraout_x8_04;
  local_280 = lVar18;
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_1f8 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = lVar18 - extraout_x8_05;
  local_248 = lVar18;
  FUN_100002fe4(&DAT_10054e1b0,&DAT_10041f0a0);
  local_200 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_288 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a650,&DAT_10041d1e0);
  local_1f0 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  local_1d8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a660,&DAT_10041d1f0);
  local_1b8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a668,&DAT_10041b650);
  local_1a8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_198 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_230 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  lVar19 = *(long *)(local_230 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = lVar18 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_298 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1a0 = lVar18 - extraout_x12;
  puStack_78 = (undefined *)uStack_218;
  local_80 = (undefined **)local_220;
  local_b0 = local_220;
  local_a8 = local_210;
  SwiftUI::Menu::_init();
  lVar9 = local_1c0;
  SwiftUI::ButtonMenuStyle::init();
  puVar8 = local_270;
  lVar18 = local_278;
  (extension_SwiftUI)::SwiftUI::View::_menuStyle
            (local_278,lVar9,MVar5.unknown,local_270,local_268,puVar3);
  (**(code **)(lVar16 + 8))(lVar9,puVar8);
  (**(code **)(local_1b0 + 8))(lVar17,MVar5.unknown);
  SwiftUI::PlainButtonStyle::init();
  puVar8 = local_240;
  ppuVar7 = local_250;
  puVar3 = local_258;
  lVar9 = local_290;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_290,puVar15,puVar6,local_240,local_250,local_258);
  (**(code **)(lVar14 + 8))(puVar15,puVar8);
  (**(code **)(local_1e8 + 8))(lVar18,puVar6);
  local_88 = puVar8;
  local_80 = ppuVar7;
  puStack_78 = puVar3;
  ppuVar7 = &local_90;
  local_90 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  lVar14 = local_260;
  lVar18 = local_280;
  (extension_SwiftUI)::SwiftUI::View::_menuIndicator((Visibility)0x2);
  (**(code **)(local_228 + 8))(lVar9,lVar14);
  puVar3 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  puVar13 = local_238;
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_d0 = ppuVar7;
  puStack_c8 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_238,&local_d0);
  lVar14 = local_248;
  FUN_1000bdba8(local_248,puVar13,puVar4);
  (**(code **)(local_208 + 8))(lVar18,puVar13);
  puStack_d8 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
  ;
  puVar6 = puVar8;
  local_e0 = puVar4;
  _swift_getWitnessTable(puVar8,MVar10.unknown,&local_e0);
  lVar9 = local_298;
  FUN_1000bdbbc(local_298,0,MVar10.unknown,puVar6);
  (**(code **)(local_1f8 + 8))(lVar14,MVar10.unknown);
  puVar3 = &DAT_10054e1a8;
  FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar11 = puVar8;
  local_f0 = puVar6;
  puStack_e8 = puVar3;
  _swift_getWitnessTable(puVar8,local_200,&local_f0);
  puVar4 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar13 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  local_100 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar12 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puStack_f8 = puVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_288,&local_100);
  puVar3 = &DAT_10054a678;
  FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar11 = puVar8;
  local_110 = puVar6;
  puStack_108 = puVar3;
  _swift_getWitnessTable(puVar8,local_1f0,&local_110);
  puVar3 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar6 = puVar8;
  local_120 = puVar11;
  puStack_118 = puVar3;
  _swift_getWitnessTable(puVar8,local_1d8,&local_120);
  puVar3 = &DAT_10054a6b0;
  FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar11 = puVar8;
  local_130 = puVar6;
  puStack_128 = puVar3;
  _swift_getWitnessTable(puVar8,local_1b8,&local_130);
  puVar3 = &DAT_10054a6c0;
  FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  local_140 = puVar11;
  puStack_138 = puVar3;
  _swift_getWitnessTable(puVar8,local_1a8,&local_140);
  local_150 = puVar4;
  puVar4 = puVar13;
  puStack_148 = puVar8;
  _swift_getWitnessTable(puVar13,local_198,&local_150);
  puVar3 = local_230;
  local_160 = puVar12;
  puStack_158 = puVar4;
  _swift_getWitnessTable(puVar13,local_230,&local_160);
  lVar18 = local_1a0;
  thunk_FUN_1000bdaa4(local_1a0,lVar9,puVar3,puVar13);
  pcVar20 = *(code **)(lVar19 + 8);
  (*pcVar20)(lVar9,puVar3);
  thunk_FUN_1000bdaa4(param_1,lVar18,puVar3,puVar13);
  (*pcVar20)(lVar18,puVar3);
  return;
}

