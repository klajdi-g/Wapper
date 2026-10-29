// rea decompile_all
// name: FUN_100001df8
// address: 0x100001df8
// body: available
// range: 0x100001df8-0x100002e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100002a58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100001df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  RoundedCornerStyle RVar6;
  ModifiedContent MVar7;
  ModifiedContent MVar8;
  ModifiedContent MVar9;
  ModifiedContent MVar10;
  DefaultGlassEffectShape DVar11;
  long lVar12;
  Capsule CVar13;
  long lVar14;
  undefined **ppuVar15;
  Material MVar16;
  Material MVar17;
  Set SVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  Color CVar21;
  Color CVar22;
  Alignment AVar23;
  Alignment AVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long extraout_x8;
  long lVar28;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar29;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long extraout_x13_00;
  undefined *puVar30;
  undefined *puVar31;
  code *pcVar32;
  long lVar33;
  undefined1 *puVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined1 auStack_260 [8];
  code *local_258;
  undefined4 local_24c;
  undefined8 local_248;
  ulong local_240;
  long local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  long local_218;
  undefined *local_210;
  long local_208;
  undefined *local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  long local_1e8;
  long local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 *local_190;
  long local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
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
  undefined *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  long local_70;
  
  local_178 = param_1;
  FUN_100002fe4(&DAT_10054a650,&DAT_10041d1e0);
  local_1b0 = param_2;
  MVar7 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a660,&DAT_10041d1f0);
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a668,&DAT_10041b650);
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_180 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_188 = *(long *)(local_180 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar34 = auStack_260 + -extraout_x8;
  local_190 = puVar34;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_1a8 = puVar34;
  local_1a0 = param_3;
  local_198 = MVar9.unknown;
  local_170 = MVar7.unknown;
  local_168 = MVar8.unknown;
  if ((bVar5 & 1) == 0) {
    local_1c8 = *(long *)(MVar10.unknown + -8);
    local_1d0 = *(undefined8 *)(local_1c8 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1d8 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
    lVar12 = (long)puVar34 - local_1d8;
    local_1e8 = lVar12;
    local_1e0 = lVar12;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar29 = (undefined *)(lVar12 - extraout_x13_00);
    local_1f8 = *(undefined8 **)(MVar9.unknown + -8);
    local_200 = puVar29;
    local_1f0 = puVar29;
    (*(code *)PTR____chkstk_darwin_100521118)(local_1f8[8]);
    lVar36 = (long)puVar29 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
    local_210 = *(undefined **)(MVar8.unknown + -8);
    local_208 = lVar36;
    local_1b8 = lVar36;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_210 + 0x40));
    lVar36 = lVar36 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
    local_220 = *(undefined **)(MVar7.unknown + -8);
    local_238 = lVar36;
    local_218 = lVar36;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_220 + 0x40));
    lVar36 = lVar36 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
    CVar13 = SwiftUI::Capsule::typeMetadataAccessor();
    local_248 = *(undefined8 *)(*(long *)(CVar13.unknown + -8) + 0x40);
    local_228 = CVar13.unknown;
    local_1c0 = MVar10.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_240 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
    lVar12 = lVar36 - local_240;
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    local_24c = uVar2;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar14 = CONCAT71((int7)((ulong)CVar13.unknown >> 8),RVar6.value);
    local_258 = *(code **)(*(long *)(lVar14 + -8) + 0x68);
    (*local_258)(lVar12,uVar2,lVar14);
    puVar29 = &DAT_10054a670;
    FUN_1000036d0(&DAT_10054a670,PTR_typeMetadataAccessor_100523540,
                  PTR_SwiftUI__SwiftUI__Capsule_>SwiftUI__Shape_100523538);
    local_230 = puVar29;
    (extension_SwiftUI)::SwiftUI::View::_contentShape
              (lVar36,lVar12,0,local_1b0,CVar13.unknown,param_3,puVar29);
    FUN_1000086d8(lVar12);
    MVar16 = SwiftUI::Material::typeMetadataAccessor();
    puVar26 = PTR_typeMetadataAccessor_100523680;
    lVar28 = *(long *)(MVar16.unknown + -8);
    MVar17 = MVar16;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
    lVar33 = lVar36 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
    MVar17 = SwiftUI::Material::get_ultraThin(MVar17);
    SVar18 = SwiftUI::Edge::Set::get_all(MVar17.unknown);
    puVar29 = &DAT_10054a678;
    FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    puVar31 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_a0 = param_3;
    puStack_98 = puVar29;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_170,&local_a0);
    puVar19 = &DAT_10054a680;
    FUN_1000036d0(&DAT_10054a680,puVar26,
                  PTR_SwiftUI__SwiftUI__Material_>SwiftUI__ShapeStyle_100523678);
    lVar12 = local_238;
    (extension_SwiftUI)::SwiftUI::View::_background
              (local_238,lVar33,SVar18.unknown,local_170,MVar16.unknown,puVar31,puVar19);
    (**(code **)(lVar28 + 8))(lVar33,MVar16.unknown);
    (**(code **)(local_220 + 8))(lVar36,local_170);
    lVar36 = local_218;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar4 = local_240;
    uVar2 = local_24c;
    pcVar32 = local_258;
    lVar36 = lVar36 - local_240;
    (*local_258)(lVar36,local_24c,lVar14);
    puVar29 = &DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    puVar20 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_b0 = puVar31;
    puStack_a8 = puVar29;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_168,&local_b0);
    (extension_SwiftUI)::SwiftUI::View::_clipShape
              (local_1b8,lVar36,0x100,local_168,local_228,puVar20,local_230);
    FUN_1000086d8(lVar36);
    (**(code **)((long)local_210 + 8))(lVar12,local_168);
    lVar12 = local_208;
    puVar29 = &DAT_10054a690;
    FUN_100002f94(&DAT_10054a690,&DAT_10041b658);
    local_1b0 = lVar12;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = lVar12 - extraout_x8_08;
    local_208 = lVar12;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar31 = (undefined *)(lVar12 - uVar4);
    CVar21.unknown = puVar31;
    (*pcVar32)(puVar31,uVar2,lVar14);
    CVar21 = SwiftUI::Color::get_white(CVar21);
    CVar22 = SwiftUI::Color::opacity(0.14,CVar21);
    _swift_release(CVar21.unknown);
    SwiftUI::StrokeStyle::init
              (&local_90,0x3ff0000000000000,0x4024000000000000,0,CVar22.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    FUN_100008714(puVar31,lVar12);
    puVar26 = &DAT_10054a698;
    FUN_100002f94(&DAT_10054a698,&DAT_10041b660);
    plVar1 = (long *)(lVar12 + *(int *)(puVar26 + 0x24));
    plVar1[1] = (long)puStack_88;
    *plVar1 = (long)local_90;
    plVar1[3] = (long)puStack_78;
    plVar1[2] = (long)local_80;
    plVar1[4] = local_70;
    AVar24.unknown = &DAT_10054a6a0;
    puVar26 = &DAT_10041c350;
    FUN_100002f94();
    *(undefined **)(lVar12 + *(int *)(AVar24.unknown + 0x34)) = CVar22.unknown;
    *(undefined2 *)(lVar12 + *(int *)(AVar24.unknown + 0x38)) = 0x100;
    AVar23 = SwiftUI::Alignment::get_center(AVar24);
    FUN_1000086d8(puVar31);
    AVar24.unknown = &DAT_10054a6a8;
    puVar31 = &DAT_10041b670;
    FUN_100002f94();
    puVar37 = local_198;
    iVar3 = *(int *)(AVar24.unknown + 0x24);
    *(undefined8 *)(lVar12 + iVar3) = AVar23.unknown;
    ((undefined8 *)(lVar12 + iVar3))[1] = puVar26;
    AVar24 = SwiftUI::Alignment::get_center(AVar24);
    puVar26 = &DAT_10054a6b0;
    FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    puVar25 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_c0 = puVar20;
    puStack_b8 = puVar26;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               puVar37,&local_c0);
    puVar26 = &DAT_10054a6b8;
    FUN_1000087a0(&DAT_10054a6b8,&DAT_10054a690,&DAT_10041b658,
                  PTR_SwiftUI__SwiftUI__StrokeShapeView<undefined,undefined,undefined>_>SwiftUI__View_1005222f0
                 );
    lVar36 = local_1b8;
    puVar20 = local_200;
    (extension_SwiftUI)::SwiftUI::View::_overlay
              (local_200,lVar12,AVar24.unknown,puVar31,puVar37,puVar29,puVar25,puVar26);
    MVar10.unknown = local_1c0;
    FUN_100008758(lVar12);
    (*(code *)local_1f8[1])(lVar36,puVar37);
    puVar29 = &DAT_10054a6c0;
    FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    local_d0 = puVar25;
    puStack_c8 = puVar29;
    _swift_getWitnessTable(puVar27,MVar10.unknown,&local_d0);
    lVar12 = local_1e8;
    thunk_FUN_1000bdaa4(local_1e8,puVar20,MVar10.unknown,puVar27);
    pcVar32 = *(code **)(local_1c8 + 8);
    (*pcVar32)(puVar20,MVar10.unknown);
    lVar36 = local_1e0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar36 = lVar36 - local_1d8;
    thunk_FUN_1000bdaa4(lVar36,lVar12,MVar10.unknown,puVar27);
    puVar34 = local_190;
    FUN_100008acc(local_190,lVar36,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,MVar10.unknown,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,puVar27);
    (*pcVar32)(lVar36,MVar10.unknown);
    (*pcVar32)(lVar12,MVar10.unknown);
    puVar29 = local_168;
  }
  else {
    DVar11 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    puVar26 = PTR_typeMetadataAccessor_100522a20;
    puVar29 = &DAT_10054a678;
    local_210 = DVar11.unknown;
    FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    puVar31 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_130 = param_3;
    local_128 = puVar29;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               MVar7.unknown,&local_130);
    puVar19 = &DAT_10054a6c8;
    local_200 = puVar31;
    FUN_1000036d0(&DAT_10054a6c8,puVar26,
                  PTR_SwiftUI__SwiftUI__DefaultGlassEffectShape_>SwiftUI__Shape_100522a10);
    lVar12 = 0;
    local_1f8 = puVar19;
    local_90 = MVar7.unknown;
    puStack_88 = DVar11.unknown;
    local_80 = puVar31;
    puStack_78 = puVar19;
    _swift_getOpaqueTypeMetadata2
              (0,&local_90,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,0);
    local_1c0 = *(undefined **)(lVar12 + -8);
    local_1d0 = *(undefined8 *)(local_1c0 + 0x40);
    local_1c8 = lVar12;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1d8 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar28 = (long)puVar34 - local_1d8;
    local_1e0 = lVar28;
    local_1b8 = lVar28;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar28 = lVar28 - extraout_x13;
    local_1f0 = *(undefined **)(MVar7.unknown + -8);
    local_208 = lVar28;
    local_1e8 = lVar28;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1f0 + 0x40));
    lVar28 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    local_218 = lVar28;
    CVar13 = SwiftUI::Capsule::typeMetadataAccessor();
    puVar26 = PTR_typeMetadataAccessor_100523540;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CVar13.unknown + -8) + 0x40));
    lVar36 = lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar12 = CONCAT71((int7)((ulong)CVar13.unknown >> 8),RVar6.value);
    (**(code **)(*(long *)(lVar12 + -8) + 0x68))(lVar36,uVar2,lVar12);
    puVar29 = &DAT_10054a670;
    FUN_1000036d0(&DAT_10054a670,puVar26,PTR_SwiftUI__SwiftUI__Capsule_>SwiftUI__Shape_100523538);
    (extension_SwiftUI)::SwiftUI::View::_contentShape
              (lVar28,lVar36,0,local_1b0,CVar13.unknown,param_3,puVar29);
    FUN_1000086d8(lVar36);
    local_220 = (undefined *)SwiftUI::Glass::typeMetadataAccessor();
    local_228 = *(undefined **)(local_220 + -8);
    local_1b0 = lVar28;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_228 + 0x40));
    lVar28 = lVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    lVar14 = 0;
    _swift_checkMetadataState(0,local_210);
    puVar19 = local_1f8;
    puVar27 = local_200;
    FUN_100008964(lVar28,MVar7.unknown,lVar14,local_200,local_1f8);
    lVar35 = *(long *)(lVar14 + -8);
    local_210 = (undefined *)lVar28;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar33 = lVar28 - extraout_x8_03;
    FUN_100008978(lVar33,MVar7.unknown,lVar14,puVar27,puVar19);
    lVar36 = local_208;
    lVar12 = local_218;
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (local_208,lVar28,lVar33,MVar7.unknown,lVar14,puVar27,puVar19);
    (**(code **)(lVar35 + 8))(lVar33,lVar14);
    puVar29 = local_168;
    puVar37 = local_198;
    (**(code **)(local_228 + 8))(lVar28,local_220);
    (**(code **)(local_1f0 + 8))(lVar12,MVar7.unknown);
    local_80 = puVar27;
    puStack_78 = puVar19;
    ppuVar15 = &local_90;
    local_90 = MVar7.unknown;
    puStack_88 = (undefined *)lVar14;
    _swift_getOpaqueTypeConformance2
              (ppuVar15,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    lVar28 = local_1b8;
    lVar14 = local_1c8;
    thunk_FUN_1000bdaa4(local_1b8,lVar36,local_1c8,ppuVar15);
    pcVar32 = *(code **)(local_1c0 + 8);
    (*pcVar32)(lVar36,lVar14);
    lVar12 = local_1e0;
    local_1b0 = local_1e0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar30 = (undefined *)(lVar12 - local_1d8);
    thunk_FUN_1000bdaa4(puVar30,lVar28,lVar14,ppuVar15);
    puVar20 = puVar30;
    FUN_10000898c(puVar30,lVar14,ppuVar15);
    puVar26 = &DAT_10054a688;
    local_90 = puVar20;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    puVar31 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_140 = puVar27;
    puVar25 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_138 = puVar26;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               puVar29,&local_140);
    puVar26 = &DAT_10054a6b0;
    FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    puVar27 = puVar31;
    local_150 = puVar25;
    local_148 = puVar26;
    _swift_getWitnessTable(puVar31,puVar37,&local_150);
    puVar26 = &DAT_10054a6c0;
    FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    local_160 = puVar27;
    local_158 = puVar26;
    _swift_getWitnessTable(puVar31,MVar10.unknown,&local_160);
    puVar34 = local_190;
    FUN_100008a08(local_190,&local_90,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,
                  MVar10.unknown,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,puVar31);
    _swift_release(puVar20);
    (*pcVar32)(puVar30,lVar14);
    (*pcVar32)(local_1b8,lVar14);
  }
  puVar26 = &DAT_10054a678;
  FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar31 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_e0 = local_1a0;
  puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_d8 = puVar26;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_170,&local_e0);
  puVar26 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar20 = puVar31;
  local_f0 = puVar27;
  puStack_e8 = puVar26;
  _swift_getWitnessTable(puVar31,puVar29,&local_f0);
  puVar29 = &DAT_10054a6b0;
  FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar26 = puVar31;
  local_100 = puVar20;
  puStack_f8 = puVar29;
  _swift_getWitnessTable(puVar31,puVar37,&local_100);
  puVar29 = &DAT_10054a6c0;
  FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  local_110 = puVar26;
  puStack_108 = puVar29;
  _swift_getWitnessTable(puVar31,MVar10.unknown,&local_110);
  puVar29 = local_180;
  local_120 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar26 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  local_118 = puVar31;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_180,&local_120);
  thunk_FUN_1000bdaa4(local_178,puVar34,puVar29,puVar26);
  (**(code **)(local_188 + 8))(puVar34,puVar29);
  return;
}

