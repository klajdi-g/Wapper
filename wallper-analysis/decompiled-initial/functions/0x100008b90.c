// rea decompile_all
// name: FUN_100008b90
// address: 0x100008b90
// body: available
// range: 0x100008b90-0x10000973b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000093ec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100008b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  _ConditionalContent _Var5;
  DefaultGlassEffectShape DVar6;
  long lVar7;
  Glass GVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  Material MVar12;
  Material MVar13;
  Set SVar14;
  undefined *puVar15;
  Color CVar16;
  StrokeStyle SVar17;
  Alignment AVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long extraout_x8;
  undefined *puVar22;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  undefined *puVar23;
  long lVar24;
  Color CVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long local_240;
  long local_238;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  long local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  long local_1f0;
  long local_1e8;
  ulong local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_a8;
  undefined2 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  local_198 = param_1;
  FUN_100002fe4(&DAT_100549cb0,&DAT_100433ba0);
  local_1c8 = (undefined *)param_2;
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  local_190 = MVar2.unknown;
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a780,&DAT_10041e510);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a788,&DAT_100425370);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var5 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_1a8 = *(long *)(_Var5.unknown + -8);
  local_1a0 = _Var5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar24 = (long)&local_240 - extraout_x8;
  local_1b0 = lVar24;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_228 = (undefined *)CONCAT71((int7)((ulong)_Var5.unknown >> 8),bVar1);
  local_1c0 = lVar24;
  local_1b8 = param_3;
  local_188 = MVar3.unknown;
  if ((bVar1 & 1) == 0) {
    local_1d0 = *(undefined **)(MVar4.unknown + -8);
    local_1d8 = *(undefined **)(local_1d0 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1e0 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
    lVar24 = lVar24 - local_1e0;
    local_1f0 = lVar24;
    local_1e8 = lVar24;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar22 = (undefined *)(lVar24 - extraout_x13_00);
    local_200 = *(undefined **)(MVar2.unknown + -8);
    local_208 = puVar22;
    local_1f8 = puVar22;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_200 + 0x40));
    puVar22 = puVar22 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
    local_218 = *(long *)(MVar3.unknown + -8);
    local_220 = puVar22;
    local_210 = puVar22;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_218 + 0x40));
    puVar19 = local_190;
    CVar25.unknown = puVar22 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
    local_238 = *(long *)(local_190 + -8);
    local_230 = CVar25.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_238 + 0x40));
    lVar24 = (long)CVar25.unknown - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
    FUN_10000973c();
    (extension_SwiftUI)::SwiftUI::View::_contentShape(lVar24);
    MVar12 = SwiftUI::Material::typeMetadataAccessor();
    lVar26 = *(long *)(MVar12.unknown + -8);
    MVar13 = MVar12;
    local_240 = lVar24;
    local_1c8 = MVar4.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
    lVar7 = lVar24 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
    MVar13 = SwiftUI::Material::get_ultraThin(MVar13);
    SVar14 = SwiftUI::Edge::Set::get_all(MVar13.unknown);
    puVar22 = &DAT_100549ca8;
    FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_78 = param_3;
    puStack_70 = puVar22;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               puVar19,&local_78);
    puVar22 = puVar15;
    FUN_10000977c();
    (extension_SwiftUI)::SwiftUI::View::_background
              (CVar25.unknown,lVar7,SVar14.unknown,puVar19,MVar12.unknown,puVar15,puVar22);
    (**(code **)(lVar26 + 8))(lVar7,MVar12.unknown);
    (**(code **)(local_238 + 8))(lVar24,puVar19);
    puVar22 = &DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    puVar20 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    puVar23 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_88 = puVar15;
    puStack_80 = puVar22;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_188,&local_88);
    puVar15 = local_220;
    (extension_SwiftUI)::SwiftUI::View::_clipShape(local_220);
    (**(code **)(local_218 + 8))(CVar25.unknown,local_188);
    CVar25 = SwiftUI::Color::get_white(CVar25);
    CVar16 = SwiftUI::Color::opacity(0.14,CVar25);
    _swift_release(CVar25.unknown);
    uVar21 = 0;
    SVar17 = SwiftUI::StrokeStyle::init
                       (&local_d0,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
                        PTR___swiftEmptyArrayStorage_100524190);
    local_98 = (undefined *)SwiftUI::Alignment::get_center(SVar17.unknown);
    local_a0 = 0x100;
    local_a8 = CVar16.unknown;
    uStack_90 = uVar21;
    AVar18 = SwiftUI::Alignment::get_center((Alignment)local_98);
    puVar22 = &DAT_10054a798;
    FUN_100002f94(&DAT_10054a798,&DAT_10041f480);
    puVar19 = &DAT_10054a7a0;
    FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    local_e0 = puVar23;
    puStack_d8 = puVar19;
    _swift_getWitnessTable(puVar20,MVar2.unknown,&local_e0);
    puVar19 = &DAT_10054a7a8;
    FUN_1000087a0(&DAT_10054a7a8,&DAT_10054a798,&DAT_10041f480,
                  PTR_SwiftUI__SwiftUI__StrokeShapeView<undefined,undefined,undefined>_>SwiftUI__View_1005222f0
                 );
    MVar4.unknown = local_1c8;
    puVar23 = local_208;
    (extension_SwiftUI)::SwiftUI::View::_overlay
              (local_208,&local_d0,AVar18.unknown,uVar21,MVar2.unknown,puVar22,puVar20,puVar19);
    FUN_1000097c0(&local_d0);
    (**(code **)(local_200 + 8))(puVar15,MVar2.unknown);
    puVar22 = &DAT_10054a7b0;
    FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    puVar19 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_f0 = puVar20;
    puStack_e8 = puVar22;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               MVar4.unknown,&local_f0);
    lVar24 = local_1f0;
    thunk_FUN_1000bdaa4(local_1f0,puVar23,MVar4.unknown,puVar19);
    pcVar27 = *(code **)(local_1d0 + 8);
    (*pcVar27)(puVar23,MVar4.unknown);
    lVar7 = local_1e8;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar7 = lVar7 - local_1e0;
    thunk_FUN_1000bdaa4(lVar7,lVar24,MVar4.unknown,puVar19);
    lVar26 = local_1b0;
    FUN_100008acc(local_1b0,lVar7,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,MVar4.unknown,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,puVar19);
    (*pcVar27)(lVar7,MVar4.unknown);
    (*pcVar27)(lVar24,MVar4.unknown);
    puVar22 = local_188;
  }
  else {
    DVar6 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    puVar22 = &DAT_100549ca8;
    local_228 = DVar6.unknown;
    FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    puVar20 = local_190;
    puVar19 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_150 = param_3;
    puStack_148 = puVar22;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_190,&local_150);
    puVar22 = puVar19;
    local_208 = puVar19;
    FUN_100009808();
    local_d0 = puVar20;
    lVar7 = 0;
    local_210 = puVar22;
    puStack_c8 = DVar6.unknown;
    local_c0 = puVar19;
    puStack_b8 = puVar22;
    _swift_getOpaqueTypeMetadata2
              (0,&local_d0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,0);
    local_1e0 = *(ulong *)(lVar7 + -8);
    local_1f0 = *(long *)(local_1e0 + 0x40);
    local_1e8 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1f8 = (undefined *)(extraout_x12 + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined *)(lVar24 - (long)local_1f8);
    local_200 = puVar22;
    local_1d0 = puVar22;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar7 = (long)puVar22 - extraout_x13;
    local_220 = *(undefined **)(puVar20 + -8);
    local_240 = lVar7;
    local_218 = lVar7;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_220 + 0x40));
    lVar28 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    local_1d8 = MVar2.unknown;
    FUN_10000973c();
    (extension_SwiftUI)::SwiftUI::View::_contentShape(lVar28);
    local_230 = (undefined *)SwiftUI::Glass::typeMetadataAccessor();
    local_238 = *(long *)(local_230 + -8);
    local_1c8 = (undefined *)lVar28;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_238 + 0x40));
    lVar26 = lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    GVar8.unknown = (undefined *)0x0;
    _swift_checkMetadataState(0,local_228);
    SwiftUI::Glass::get_regular(GVar8);
    lVar24 = *(long *)(GVar8.unknown + -8);
    local_228 = (undefined *)lVar26;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
    SwiftUI::DefaultGlassEffectShape::init();
    puVar15 = local_208;
    puVar19 = local_210;
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar7,lVar26,lVar26 - extraout_x8_02,puVar20,GVar8.unknown,local_208,local_210);
    (**(code **)(lVar24 + 8))(lVar26 - extraout_x8_02,GVar8.unknown);
    puVar22 = local_188;
    (**(code **)(local_238 + 8))(lVar26,local_230);
    puVar20 = local_190;
    MVar2.unknown = local_1d8;
    (**(code **)(local_220 + 8))(lVar28,local_190);
    local_d0 = puVar20;
    local_c0 = puVar15;
    puStack_b8 = puVar19;
    ppuVar9 = &local_d0;
    puStack_c8 = GVar8.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar9,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    puVar19 = local_1d0;
    lVar7 = local_1e8;
    lVar24 = local_240;
    thunk_FUN_1000bdaa4(local_1d0,local_240,local_1e8,ppuVar9);
    pcVar27 = *(code **)(local_1e0 + 8);
    (*pcVar27)(lVar24,lVar7);
    puVar23 = local_200;
    local_1c8 = local_200;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar23 = puVar23 + -(long)local_1f8;
    thunk_FUN_1000bdaa4(puVar23,puVar19,lVar7,ppuVar9);
    puVar10 = puVar23;
    FUN_10000898c(puVar23,lVar7,ppuVar9);
    puVar19 = &DAT_10054a688;
    local_d0 = puVar10;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    puVar20 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_160 = puVar15;
    puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    puStack_158 = puVar19;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               puVar22,&local_160);
    puVar19 = &DAT_10054a7a0;
    FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    puVar11 = puVar20;
    local_170 = puVar15;
    puStack_168 = puVar19;
    _swift_getWitnessTable(puVar20,MVar2.unknown,&local_170);
    puVar19 = &DAT_10054a7b0;
    FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    local_180 = puVar11;
    puStack_178 = puVar19;
    _swift_getWitnessTable(puVar20,MVar4.unknown,&local_180);
    lVar26 = local_1b0;
    FUN_100008a08(local_1b0,&local_d0,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,
                  MVar4.unknown,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,puVar20);
    _swift_release(puVar10);
    (*pcVar27)(puVar23,lVar7);
    (*pcVar27)(local_1d0,lVar7);
  }
  puVar19 = &DAT_100549ca8;
  FUN_1000087a0(&DAT_100549ca8,&DAT_100549cb0,&DAT_100433ba0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar20 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_100 = local_1b8;
  puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puStack_f8 = puVar19;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_190,&local_100);
  puVar19 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar23 = puVar20;
  local_110 = puVar15;
  puStack_108 = puVar19;
  _swift_getWitnessTable(puVar20,puVar22,&local_110);
  puVar22 = &DAT_10054a7a0;
  FUN_1000087a0(&DAT_10054a7a0,&DAT_10054a780,&DAT_10041e510,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar19 = puVar20;
  local_120 = puVar23;
  puStack_118 = puVar22;
  _swift_getWitnessTable(puVar20,MVar2.unknown,&local_120);
  puVar22 = &DAT_10054a7b0;
  FUN_1000087a0(&DAT_10054a7b0,&DAT_10054a788,&DAT_100425370,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  local_130 = puVar19;
  puStack_128 = puVar22;
  _swift_getWitnessTable(puVar20,MVar4.unknown,&local_130);
  puVar22 = local_1a0;
  local_140 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
  puVar19 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puStack_138 = puVar20;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,local_1a0,&local_140);
  thunk_FUN_1000bdaa4(local_198,lVar26,puVar22,puVar19);
  (**(code **)(local_1a8 + 8))(lVar26,puVar22);
  return;
}

