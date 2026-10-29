// rea decompile_all
// name: FUN_1000c2344
// address: 0x1000c2344
// body: available
// range: 0x1000c2344-0x1000c308f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c2344(undefined8 param_1,undefined4 param_2,long param_3,long param_4,
                  undefined8 *****param_5,undefined *param_6)

{
  long lVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined1 *puVar4;
  Optional OVar5;
  PlainButtonStyle PVar6;
  ButtonMenuStyle BVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  Menu MVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  ModifiedContent MVar15;
  ModifiedContent MVar16;
  ModifiedContent MVar17;
  ModifiedContent MVar18;
  _ConditionalContent _Var19;
  ModifiedContent MVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined7 extraout_var;
  LocalizedStringKey LVar26;
  undefined1 uVar27;
  long extraout_x8;
  long extraout_x8_00;
  long lVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  code *pcVar34;
  String stringLiteral;
  undefined1 auStack_2a0 [8];
  undefined *local_298;
  long local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined *local_248;
  long local_240;
  undefined *local_238;
  undefined *local_230;
  long local_228;
  long local_220;
  undefined *local_218;
  undefined8 ****local_210;
  long local_208;
  undefined *local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined8 **local_1e8;
  undefined8 ***local_1e0;
  long local_1d8;
  undefined8 ****local_1d0;
  undefined8 ****local_1c8;
  long local_1c0;
  long local_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  undefined8 ****local_188;
  long local_180;
  undefined *local_178;
  long local_170;
  undefined1 *local_168;
  long local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 ****local_130;
  undefined8 ****local_128;
  undefined8 ****local_120;
  undefined *local_118;
  undefined1 local_110;
  long local_108;
  long lStack_100;
  undefined8 ****local_f0;
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
  undefined8 ****local_78;
  undefined *puStack_70;
  long lVar25;
  undefined8 uVar28;
  
  local_140 = CONCAT44(local_140._4_4_,param_2);
  local_198 = param_3;
  local_190 = param_4;
  local_138 = param_1;
  local_158 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  local_168 = auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  PVar6 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar21 = PTR_typeMetadataAccessor_100522380;
  local_170 = *(long *)(PVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_170 + 0x40));
  lVar29 = (long)(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar29;
  BVar7 = SwiftUI::ButtonMenuStyle::typeMetadataAccessor();
  puVar23 = PTR_typeMetadataAccessor_100522210;
  local_1a8 = *(long *)(BVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  lVar29 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pppppuVar8 = (undefined8 *****)&DAT_10054d8e0;
  local_1c0 = lVar29;
  FUN_100002fe4(&DAT_10054d8e0,&DAT_10041f1b0);
  pppppuVar9 = pppppuVar8;
  FUN_1000599d4();
  local_1d0 = pppppuVar9;
  local_1c8 = pppppuVar8;
  local_1a0 = param_6;
  local_188 = param_5;
  local_130 = pppppuVar8;
  local_128 = param_5;
  local_120 = pppppuVar9;
  local_118 = param_6;
  MVar10 = SwiftUI::Menu::typeMetadataAccessor();
  local_1b8 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_02;
  puVar11 = PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88;
  local_1d8 = lVar29;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100522d88,MVar10.unknown
            );
  puVar12 = &DAT_100550b38;
  FUN_1000036d0(&DAT_100550b38,puVar23,
                PTR_SwiftUI__SwiftUI__ButtonMenuStyle_>SwiftUI__MenuStyle_100522200);
  puVar23 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
  ;
  ppppuVar13 = (undefined8 ****)0x0;
  local_130 = (undefined8 ****)MVar10;
  local_128 = (undefined8 ****)BVar7;
  local_120 = (undefined8 ****)puVar11;
  local_118 = puVar12;
  _swift_getOpaqueTypeMetadata2
            (0,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_1005231b0
             ,0);
  local_1e8 = ppppuVar13[-1];
  (*(code *)PTR____chkstk_darwin_100521118)((long)local_1e8[8] + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_03;
  pppppuVar8 = &local_130;
  local_218 = BVar7.unknown;
  local_200 = puVar12;
  local_1f8 = puVar11;
  local_1f0 = lVar29;
  local_1b0 = MVar10.unknown;
  local_130 = (undefined8 ****)MVar10;
  local_128 = (undefined8 ****)BVar7;
  local_120 = (undefined8 ****)puVar11;
  local_118 = puVar12;
  _swift_getOpaqueTypeConformance2(pppppuVar8,puVar23,1);
  puVar12 = &DAT_10054a8b0;
  FUN_1000036d0(&DAT_10054a8b0,puVar21,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
  lVar14 = 0;
  local_130 = ppppuVar13;
  local_128 = (undefined8 ****)PVar6;
  local_120 = pppppuVar8;
  local_118 = puVar12;
  _swift_getOpaqueTypeMetadata2
            (0,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,0);
  local_220 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_220 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_04;
  local_228 = lVar29;
  FUN_100002fe4(&DAT_100550b40,&DAT_1004226e0);
  local_208 = lVar14;
  MVar15 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_240 = *(long *)(MVar15.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_240 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_05;
  local_250 = lVar29;
  MVar16 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_258 = *(long *)(MVar16.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_258 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_06;
  local_260 = lVar29;
  FUN_100002fe4(&DAT_100549cb0,&DAT_100433ba0);
  MVar17 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar18 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a780,&DAT_10041e510);
  local_150 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a788,&DAT_100425370);
  local_148 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var19 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_278 = *(long *)(_Var19.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_278 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_07;
  local_280 = lVar29;
  FUN_100002fe4(&DAT_10054ae18,&DAT_10041e5d0);
  MVar20 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_268 = *(long *)(MVar20.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_268 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar29 = lVar29 - extraout_x8_08;
  pppppuVar9 = &local_130;
  local_270 = lVar29;
  local_238 = puVar12;
  local_210 = pppppuVar8;
  local_1e0 = ppppuVar13;
  local_178 = PVar6.unknown;
  local_130 = ppppuVar13;
  local_128 = (undefined8 ****)PVar6;
  local_120 = pppppuVar8;
  local_118 = puVar12;
  _swift_getOpaqueTypeConformance2
            (pppppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
             ,1);
  puVar12 = &DAT_100550b48;
  FUN_1000087a0(&DAT_100550b48,&DAT_100550b40,&DAT_1004226e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100522bc8
               );
  pppppuVar8 = (undefined8 *****)
               PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar23 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_230 = MVar15.unknown;
  local_78 = pppppuVar9;
  puStack_70 = puVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar15.unknown,&local_78);
  puStack_80 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100522400
  ;
  puVar21 = (undefined *)pppppuVar8;
  local_288 = puVar23;
  local_248 = MVar16.unknown;
  local_88 = puVar23;
  _swift_getWitnessTable(pppppuVar8,MVar16.unknown,&local_88);
  puVar12 = &DAT_100549ca8;
  FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar23 = (undefined *)pppppuVar8;
  local_98 = puVar21;
  puStack_90 = puVar12;
  _swift_getWitnessTable(pppppuVar8,MVar17.unknown,&local_98);
  puVar12 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar11 = (undefined *)pppppuVar8;
  local_a8 = puVar23;
  puStack_a0 = puVar12;
  _swift_getWitnessTable(pppppuVar8,MVar18.unknown,&local_a8);
  puVar12 = &DAT_10054a7a0;
  FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar22 = (undefined *)pppppuVar8;
  local_b8 = puVar11;
  puStack_b0 = puVar12;
  _swift_getWitnessTable(pppppuVar8,local_150,&local_b8);
  puVar12 = &DAT_10054a7b0;
  FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  puVar23 = (undefined *)pppppuVar8;
  local_c8 = puVar22;
  puStack_c0 = puVar12;
  _swift_getWitnessTable(pppppuVar8,local_148,&local_c8);
  local_d8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar11 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  local_150 = _Var19.unknown;
  puStack_d0 = puVar23;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,_Var19.unknown,&local_d8);
  puVar12 = &DAT_10054ae10;
  FUN_1000087a0(&DAT_10054ae10,&DAT_10054ae18,&DAT_10041e5d0,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100522978
               );
  local_298 = puVar11;
  local_e8 = puVar11;
  puStack_e0 = puVar12;
  _swift_getWitnessTable(pppppuVar8,MVar20.unknown,&local_e8);
  lVar24 = 0;
  local_130 = (undefined8 ****)MVar20;
  local_128 = pppppuVar8;
  _swift_getOpaqueTypeMetadata2
            (0,&local_130,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,0);
  uVar31 = *(ulong *)(lVar24 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(uVar31 + 0x40));
  lVar29 = lVar29 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_290 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - extraout_x12;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar25 = CONCAT71(extraout_var,OVar5.value);
  uVar27 = 1;
  local_148 = *(undefined **)(lVar25 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_148 + 0x40));
  lVar30 = lVar29 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = local_1d8;
  lVar33 = lVar30 - extraout_x12_00;
  if ((local_140 & 1) != 0) {
    local_120 = local_188;
    local_118 = local_1a0;
    local_108 = local_198;
    lStack_100 = local_190;
    local_140 = uVar31;
    local_110 = uVar27;
    SwiftUI::Menu::_init();
    lVar3 = local_1c0;
    local_1c8 = pppppuVar9;
    SwiftUI::ButtonMenuStyle::init();
    puVar23 = local_1b0;
    lVar1 = local_1f0;
    puVar12 = local_218;
    local_1a0 = puVar21;
    local_198 = lVar29;
    local_190 = lVar33;
    (extension_SwiftUI)::SwiftUI::View::_menuStyle
              (local_1f0,lVar3,local_1b0,local_218,local_1f8,local_200);
    (**(code **)(local_1a8 + 8))(lVar3,puVar12);
    (**(code **)(local_1b8 + 8))(lVar14,puVar23);
    lVar14 = local_180;
    SwiftUI::PlainButtonStyle::init();
    puVar12 = local_178;
    pppuVar2 = local_1e0;
    lVar33 = local_228;
    local_188 = pppppuVar8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_228,lVar14,local_1e0,local_178,local_210,local_238);
    (**(code **)(local_170 + 8))(lVar14,puVar12);
    (*(code *)local_1e8[1])(lVar1,pppuVar2);
    lVar29 = local_208;
    lVar14 = local_250;
    (extension_SwiftUI)::SwiftUI::View::_menuIndicator((Visibility)0x2);
    (**(code **)(local_220 + 8))(lVar33,lVar29);
    puVar12 = local_230;
    lVar33 = local_260;
    (extension_SwiftUI)::SwiftUI::View::_fixedSize(true,true);
    (**(code **)(local_240 + 8))(lVar14,puVar12);
    puVar12 = local_248;
    lVar14 = local_280;
    FUN_100008b90(local_280,local_248,local_1a0);
    (**(code **)(local_258 + 8))(lVar33,puVar12);
    puVar4 = local_168;
    SwiftUI::OpacityTransition::init();
    puVar12 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar21 = local_150;
    puVar23 = local_158;
    lVar29 = local_270;
    puVar11 = local_298;
    FUN_1000bdabc(local_270,puVar4,local_150,local_158,local_298,puVar12);
    (**(code **)(local_160 + 8))(puVar4,puVar23);
    pppppuVar8 = (undefined8 *****)local_188;
    (**(code **)(local_278 + 8))(lVar14,puVar21);
    stringLiteral.bridgeObject = (void *)0xe400000000000000;
    stringLiteral.str = (char *)0x65726f4d;
    uVar28 = 0xe400000000000000;
    LVar26 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    lVar14 = local_290;
    (extension_SwiftUI)::SwiftUI::View::_help(LVar26);
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(uVar28);
    lVar33 = local_190;
    (**(code **)(local_268 + 8))(lVar29,MVar20.unknown);
    lVar29 = local_198;
    pcVar32 = *(code **)(local_140 + 0x10);
    (*pcVar32)(local_198,lVar14,lVar24);
    pcVar34 = *(code **)(local_140 + 8);
    (*pcVar34)(lVar14,lVar24);
    (*pcVar32)(lVar14,lVar29,lVar24);
    uVar31 = local_140;
    (*pcVar34)(lVar29,lVar24);
    (**(code **)(uVar31 + 0x20))(lVar30,lVar14,lVar24);
  }
  (**(code **)(uVar31 + 0x38))(lVar30);
  puVar12 = local_148;
  pcVar32 = *(code **)((long)local_148 + 0x10);
  (*pcVar32)(lVar33,lVar30,lVar25);
  pcVar34 = *(code **)((long)puVar12 + 8);
  (*pcVar34)(lVar30,lVar25);
  pppppuVar9 = &local_130;
  local_130 = (undefined8 ****)MVar20;
  local_128 = pppppuVar8;
  _swift_getOpaqueTypeConformance2
            (pppppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  local_f0 = pppppuVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
             ,lVar25,&local_f0);
  (*pcVar32)(local_138,lVar33,lVar25);
  (*pcVar34)(lVar33,lVar25);
  return;
}

