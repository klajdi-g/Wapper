// rea decompile_all
// name: FUN_1000bdbbc
// address: 0x1000bdbbc
// body: available
// range: 0x1000bdbbc-0x1000beeff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bdbbc(undefined8 param_1,Color param_2,ulong param_3,long param_4)

{
  byte bVar1;
  RoundedCornerStyle RVar2;
  ModifiedContent MVar3;
  _ConditionalContent _Var4;
  ModifiedContent MVar5;
  ModifiedContent MVar6;
  ModifiedContent MVar7;
  ModifiedContent MVar8;
  _ConditionalContent _Var9;
  _ConditionalContent _Var10;
  DefaultGlassEffectShape DVar11;
  DefaultGlassEffectShape DVar12;
  undefined *puVar13;
  Glass GVar14;
  Color CVar15;
  undefined7 extraout_var;
  Alignment AVar16;
  undefined *puVar17;
  undefined *puVar18;
  Glass GVar19;
  ulong *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  Glass GVar23;
  long lVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar28;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar29;
  long lVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  code *pcVar34;
  long lVar35;
  undefined *puVar36;
  code *local_370 [4];
  long local_350;
  ulong local_348;
  long local_340;
  ulong local_338;
  ulong local_330;
  undefined *local_328;
  long local_320;
  long local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  long local_2f8;
  long local_2f0;
  undefined *local_268;
  undefined *puStack_260;
  undefined *local_258;
  undefined *puStack_250;
  undefined *local_248;
  undefined *puStack_240;
  undefined *local_238;
  undefined *puStack_230;
  long local_228;
  undefined *puStack_220;
  undefined *local_218;
  undefined *puStack_210;
  long local_208;
  undefined *puStack_200;
  ulong *local_1f8;
  ulong *puStack_1f0;
  ulong local_1e8;
  undefined *puStack_1e0;
  long local_1d8;
  undefined *puStack_1d0;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  undefined *puStack_190;
  long local_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined *puStack_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  long local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  long local_78;
  undefined *puStack_70;
  
  FUN_100002fe4(&DAT_10054e1b0,&DAT_10041f0a0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var4 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a650,&DAT_10041d1e0);
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a658,&DAT_10041b640);
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a660,&DAT_10041d1f0);
  MVar7 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054a668,&DAT_10041b650);
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var9 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  _Var10 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  lVar24 = *(long *)(_Var10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)local_370 - extraout_x8;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar1 & 1) == 0) {
    if (param_2.unknown == (undefined *)0x0) {
      lVar30 = *(long *)(_Var9.unknown + -8);
      lVar25 = *(long *)(lVar30 + 0x40);
      (*(code *)PTR____chkstk_darwin_100521118)();
      uVar28 = lVar25 + 0xfU & 0xfffffffffffffff0;
      lVar25 = lVar29 - uVar28;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar26 = lVar25 - extraout_x12_05;
      FUN_100001df8(lVar26,param_3,param_4);
      puVar13 = &DAT_10054a678;
      FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                    PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                   );
      puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      puVar36 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      local_78 = param_4;
      puStack_70 = puVar13;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
                 ,MVar5.unknown,&local_78);
      puVar13 = &DAT_10054a688;
      FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                    PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                   );
      puVar22 = puVar27;
      local_88 = puVar36;
      puStack_80 = puVar13;
      _swift_getWitnessTable(puVar27,MVar6.unknown,&local_88);
      puVar13 = &DAT_10054a6b0;
      FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                    PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
      puVar36 = puVar27;
      local_98 = puVar22;
      puStack_90 = puVar13;
      _swift_getWitnessTable(puVar27,MVar7.unknown,&local_98);
      puVar13 = &DAT_10054a6c0;
      FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                    PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                   );
      local_a8 = puVar36;
      puStack_a0 = puVar13;
      _swift_getWitnessTable(puVar27,MVar8.unknown,&local_a8);
      puVar36 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
      ;
      local_b8 = 
      PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
      puVar22 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
      puStack_b0 = puVar27;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
                 ,_Var9.unknown,&local_b8);
      pcVar34 = *(code **)(lVar30 + 0x10);
      (*pcVar34)(lVar25,lVar26,_Var9.unknown);
      pcVar32 = *(code **)(lVar30 + 8);
      (*pcVar32)(lVar26,_Var9.unknown);
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar26 = lVar25 - uVar28;
      (*pcVar34)(lVar26,lVar25,_Var9.unknown);
      puVar13 = &DAT_10054e1a8;
      FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                    PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
                   );
      puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      local_c8 = param_4;
      puStack_c0 = puVar13;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
                 ,MVar3.unknown,&local_c8);
      local_d8 = puVar36;
      puVar13 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
      puStack_d0 = puVar27;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
                 ,_Var4.unknown,&local_d8);
      FUN_100008acc(lVar29,lVar26,_Var4.unknown,_Var9.unknown,puVar13,puVar22);
      (*pcVar32)(lVar26,_Var9.unknown);
      (*pcVar32)(lVar25,_Var9.unknown);
    }
    else {
      local_308 = *(undefined **)(MVar3.unknown + -8);
      lVar25 = *(long *)(local_308 + 0x40);
      (*(code *)PTR____chkstk_darwin_100521118)();
      local_300 = (undefined *)(lVar25 + 0xfU & 0xfffffffffffffff0);
      lVar26 = lVar29 - (long)local_300;
      local_2f8 = lVar26;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar25 = lVar26 - extraout_x12_02;
      puVar13 = &DAT_10054b118;
      FUN_100002f94(&DAT_10054b118,&DAT_10041f7b0);
      local_2f0 = lVar25;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar30 = lVar25 - extraout_x8_03;
      uVar28 = (ulong)*(uint *)
                       PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar2 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x68))
                (lVar30,uVar28,CONCAT71(extraout_var,RVar2.value));
      CVar15.unknown = param_2.unknown;
      _swift_retain();
      CVar15 = SwiftUI::Color::opacity(0.96,CVar15);
      *(undefined **)(lVar30 + *(int *)(puVar13 + 0x34)) = CVar15.unknown;
      *(undefined2 *)(lVar30 + *(int *)(puVar13 + 0x38)) = 0x100;
      AVar16 = SwiftUI::Alignment::get_center(CVar15.unknown);
      puVar27 = &DAT_100550918;
      FUN_1000087a0(&DAT_100550918,&DAT_10054b118,&DAT_10041f7b0,
                    PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100521c78);
      (extension_SwiftUI)::SwiftUI::View::_background
                (lVar25,lVar30,AVar16.unknown,uVar28,param_3,puVar13,param_4,puVar27);
      FUN_10002a29c(lVar30,&DAT_10054b118,&DAT_10041f7b0);
      puVar13 = &DAT_10054e1a8;
      FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                    PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
                   );
      puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      local_2f0 = param_4;
      local_168 = param_4;
      local_160 = puVar13;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
                 ,MVar3.unknown,&local_168);
      puVar13 = local_308;
      pcVar34 = *(code **)(local_308 + 0x10);
      (*pcVar34)(lVar26,lVar25,MVar3.unknown);
      pcVar32 = *(code **)(puVar13 + 8);
      (*pcVar32)(lVar25,MVar3.unknown);
      lVar25 = local_2f8;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar25 = lVar25 - (long)local_300;
      (*pcVar34)(lVar25,lVar26,MVar3.unknown);
      lVar35 = *(long *)(_Var4.unknown + -8);
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
      puVar36 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
      ;
      lVar30 = lVar25 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
      FUN_100008acc(lVar30,lVar25,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,MVar3.unknown,
                    PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                    ,puVar27);
      local_178 = puVar36;
      puVar22 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
      puStack_170 = puVar27;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
                 ,_Var4.unknown,&local_178);
      puVar13 = &DAT_10054a678;
      FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                    PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                   );
      puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      local_188 = local_2f0;
      puVar17 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
      ;
      puStack_180 = puVar13;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288
                 ,MVar5.unknown,&local_188);
      puVar13 = &DAT_10054a688;
      FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                    PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                   );
      puVar18 = puVar27;
      local_198 = puVar17;
      puStack_190 = puVar13;
      _swift_getWitnessTable(puVar27,MVar6.unknown,&local_198);
      puVar13 = &DAT_10054a6b0;
      FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                    PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
      puVar17 = puVar27;
      local_1a8 = puVar18;
      puStack_1a0 = puVar13;
      _swift_getWitnessTable(puVar27,MVar7.unknown,&local_1a8);
      puVar13 = &DAT_10054a6c0;
      FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                    PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                   );
      param_4 = local_2f0;
      local_1b8 = puVar17;
      puStack_1b0 = puVar13;
      _swift_getWitnessTable(puVar27,MVar8.unknown,&local_1b8);
      local_1c8 = puVar36;
      puVar13 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
      puStack_1c0 = puVar27;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
                 ,_Var9.unknown,&local_1c8);
      FUN_100008a08(lVar29,lVar30,_Var4.unknown,_Var9.unknown,puVar22,puVar13);
      _swift_release(param_2.unknown);
      (**(code **)(lVar35 + 8))(lVar30,_Var4.unknown);
      (*pcVar32)(lVar25,MVar3.unknown);
      (*pcVar32)(lVar26,MVar3.unknown);
    }
  }
  else {
    DVar11 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    DVar12 = DVar11;
    FUN_100009808();
    puVar13 = (undefined *)0xff;
    local_300 = DVar12.unknown;
    local_1e8 = param_3;
    puStack_1e0 = DVar11.unknown;
    local_1d8 = param_4;
    puStack_1d0 = DVar12.unknown;
    _swift_getOpaqueTypeMetadata2
              (0xff,&local_1e8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,0);
    GVar23.unknown = puVar13;
    local_308 = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
    local_2f8 = *(long *)(local_308 + -8);
    local_318 = *(long *)(local_2f8 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)(local_318 + 0xfU & 0xfffffffffffffff0);
    lVar25 = lVar29 - extraout_x8_00;
    local_320 = lVar25;
    local_310 = DVar11.unknown;
    if (param_2.unknown == (undefined *)0x0) {
      local_340 = *(long *)(puVar13 + -8);
      local_328 = *(undefined **)(local_340 + 0x40);
      local_2f0 = param_4;
      (*(code *)PTR____chkstk_darwin_100521118)();
      local_330 = extraout_x12_03 + 0xfU & 0xfffffffffffffff0;
      uVar28 = lVar25 - local_330;
      local_348 = uVar28;
      local_338 = uVar28;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar30 = uVar28 - extraout_x13_00;
      GVar19 = SwiftUI::Glass::typeMetadataAccessor();
      lVar26 = *(long *)(GVar19.unknown + -8);
      GVar14 = GVar19;
      local_370[3] = (code *)GVar19;
      local_350 = lVar30;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      puVar36 = (undefined *)(lVar30 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar14);
      SwiftUI::Glass::interactive(true,GVar23);
      local_370[2] = *(code **)(lVar26 + 8);
      (*local_370[2])((long)puVar36 - extraout_x12_04,GVar19.unknown);
      lVar26 = 0;
      _swift_checkMetadataState(0,DVar11.unknown);
      lVar33 = *(long *)(lVar26 + -8);
      local_370[1] = (code *)puVar36;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
      param_4 = local_2f0;
      puVar27 = local_300;
      lVar35 = (long)puVar36 - extraout_x8_06;
      FUN_100008978(lVar35,param_3,lVar26,local_2f0,local_300);
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (lVar30,puVar36,lVar35,param_3,lVar26,param_4,puVar27);
      (**(code **)(lVar33 + 8))(lVar35,lVar26);
      (*local_370[2])(puVar36,local_370[3]);
      local_1d8 = param_4;
      puStack_1d0 = puVar27;
      puVar20 = &local_1e8;
      local_1e8 = param_3;
      puStack_1e0 = (undefined *)lVar26;
      _swift_getOpaqueTypeConformance2
                (puVar20,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      lVar26 = local_340;
      uVar28 = local_348;
      pcVar32 = *(code **)(local_340 + 0x10);
      (*pcVar32)(local_348,lVar30,puVar13);
      pcVar34 = *(code **)(lVar26 + 8);
      (*pcVar34)(lVar30,puVar13);
      uVar31 = local_338;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar26 = uVar31 - local_330;
      (*pcVar32)(lVar26,uVar28,puVar13);
      FUN_100008acc(lVar25,lVar26,puVar13,puVar13,puVar20,puVar20);
      (*pcVar34)(lVar26,puVar13);
      (*pcVar34)(uVar28,puVar13);
    }
    else {
      local_348 = *(ulong *)(puVar13 + -8);
      local_330 = *(ulong *)(local_348 + 0x40);
      local_2f0 = param_4;
      (*(code *)PTR____chkstk_darwin_100521118)();
      local_338 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
      lVar26 = lVar25 - local_338;
      local_350 = lVar26;
      local_340 = lVar26;
      (*(code *)PTR____chkstk_darwin_100521118)();
      puVar27 = (undefined *)(lVar26 - extraout_x13);
      local_328 = puVar27;
      GVar14 = SwiftUI::Glass::typeMetadataAccessor();
      lVar26 = *(long *)(GVar14.unknown + -8);
      local_370[3] = (code *)puVar27;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      pcVar34 = (code *)(puVar27 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      local_370[2] = pcVar34;
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar15.unknown = param_2.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar15.unknown);
      CVar15 = SwiftUI::Color::opacity(0.85,param_2);
      SwiftUI::Glass::_tint((Glass)CVar15.unknown);
      _swift_release(CVar15.unknown);
      pcVar32 = *(code **)(lVar26 + 8);
      GVar23 = GVar14;
      local_370[1] = (code *)GVar14;
      (*pcVar32)(((long)pcVar34 - extraout_x12_00) - extraout_x12_01);
      local_370[0] = pcVar32;
      SwiftUI::Glass::interactive(true,GVar23);
      (*pcVar32)((long)pcVar34 - extraout_x12_00,GVar14.unknown);
      pcVar32 = local_370[2];
      lVar26 = 0;
      _swift_checkMetadataState(0,DVar11.unknown);
      lVar30 = *(long *)(lVar26 + -8);
      local_370[2] = pcVar32;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0);
      param_4 = local_2f0;
      puVar27 = local_300;
      lVar35 = (long)pcVar32 - extraout_x8_02;
      FUN_100008978(lVar35,param_3,lVar26,local_2f0,local_300);
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_328,pcVar34,lVar35,param_3,lVar26,param_4,puVar27);
      (**(code **)(lVar30 + 8))(lVar35,lVar26);
      (*local_370[0])(pcVar34,local_370[1]);
      local_1d8 = param_4;
      puStack_1d0 = puVar27;
      puVar20 = &local_1e8;
      local_1e8 = param_3;
      puStack_1e0 = (undefined *)lVar26;
      _swift_getOpaqueTypeConformance2
                (puVar20,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      puVar27 = local_328;
      uVar28 = local_348;
      lVar26 = local_350;
      pcVar32 = *(code **)(local_348 + 0x10);
      (*pcVar32)(local_350,local_328,puVar13);
      pcVar34 = *(code **)(uVar28 + 8);
      (*pcVar34)(puVar27,puVar13);
      lVar30 = local_340;
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar30 = lVar30 - local_338;
      (*pcVar32)(lVar30,lVar26,puVar13);
      FUN_100008a08(lVar25,lVar30,puVar13,puVar13,puVar20,puVar20);
      _swift_release(param_2.unknown);
      (*pcVar34)(lVar30,puVar13);
      (*pcVar34)(lVar26,puVar13);
    }
    lVar26 = local_320;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar31 = lVar26 - (extraout_x13_01 + 0xfU & 0xfffffffffffffff0);
    puStack_1e0 = local_310;
    puStack_1d0 = local_300;
    puVar20 = &local_1e8;
    local_1d8 = param_4;
    _swift_getOpaqueTypeConformance2
              (puVar20,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    puVar17 = local_308;
    puVar22 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    puVar13 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    local_1f8 = puVar20;
    puStack_1f0 = puVar20;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,local_308,&local_1f8);
    (**(code **)(local_2f8 + 0x10))(uVar31,lVar25,puVar17);
    uVar28 = uVar31;
    FUN_10000898c(uVar31,puVar17,puVar13);
    local_2f0 = *(long *)(_Var4.unknown + -8);
    local_300 = (undefined *)uVar28;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2f0 + 0x40));
    lVar26 = uVar31 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
    puVar13 = &DAT_10054e1a8;
    local_1e8 = uVar28;
    FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                  PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
                 );
    puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    puVar18 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_208 = param_4;
    puStack_200 = puVar13;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               MVar3.unknown,&local_208);
    puVar36 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8;
    FUN_100008a08(lVar26,&local_1e8,PTR___type_metadata_for_SwiftUI_AnyView_1005234f8,MVar3.unknown,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_1005234e8
                  ,puVar18);
    local_218 = puVar36;
    puStack_210 = puVar18;
    _swift_getWitnessTable(puVar22,_Var4.unknown,&local_218);
    puVar13 = &DAT_10054a678;
    FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                  PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
                 );
    puVar18 = puVar27;
    local_228 = param_4;
    puStack_220 = puVar13;
    _swift_getWitnessTable(puVar27,MVar5.unknown,&local_228);
    puVar13 = &DAT_10054a688;
    FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                  PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
                 );
    puVar21 = puVar27;
    local_238 = puVar18;
    puStack_230 = puVar13;
    _swift_getWitnessTable(puVar27,MVar6.unknown,&local_238);
    puVar13 = &DAT_10054a6b0;
    FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                  PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
    puVar18 = puVar27;
    local_248 = puVar21;
    puStack_240 = puVar13;
    _swift_getWitnessTable(puVar27,MVar7.unknown,&local_248);
    puVar13 = &DAT_10054a6c0;
    FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                  PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438
                 );
    local_258 = puVar18;
    puStack_250 = puVar13;
    _swift_getWitnessTable(puVar27,MVar8.unknown,&local_258);
    local_268 = puVar36;
    puVar13 = 
    PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830;
    puStack_260 = puVar27;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
               ,_Var9.unknown,&local_268);
    FUN_100008a08(lVar29,lVar26,_Var4.unknown,_Var9.unknown,puVar22,puVar13);
    _swift_release(local_300);
    (**(code **)(local_2f0 + 8))(lVar26,_Var4.unknown);
    pcVar32 = *(code **)(local_2f8 + 8);
    (*pcVar32)(uVar31,puVar17);
    (*pcVar32)(lVar25,puVar17);
  }
  puVar13 = &DAT_10054e1a8;
  FUN_1000087a0(&DAT_10054e1a8,&DAT_10054e1b0,&DAT_10041f0a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100522800
               );
  puVar27 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  puVar17 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_e8 = param_4;
  puStack_e0 = puVar13;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             MVar3.unknown,&local_e8);
  puVar22 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  puVar18 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
  ;
  local_f8 = puVar36;
  puStack_f0 = puVar17;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100522830
             ,_Var4.unknown,&local_f8);
  puVar13 = &DAT_10054a678;
  FUN_1000087a0(&DAT_10054a678,&DAT_10054a650,&DAT_10041d1e0,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100522950
               );
  puVar17 = puVar27;
  local_108 = param_4;
  puStack_100 = puVar13;
  _swift_getWitnessTable(puVar27,MVar5.unknown,&local_108);
  puVar13 = &DAT_10054a688;
  FUN_1000087a0(&DAT_10054a688,&DAT_10054a658,&DAT_10041b640,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100522ac8
               );
  puVar21 = puVar27;
  local_118 = puVar17;
  local_110 = puVar13;
  _swift_getWitnessTable(puVar27,MVar6.unknown,&local_118);
  puVar13 = &DAT_10054a6b0;
  FUN_1000087a0(&DAT_10054a6b0,&DAT_10054a660,&DAT_10041d1f0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100521d38);
  puVar17 = puVar27;
  local_128 = puVar21;
  local_120 = puVar13;
  _swift_getWitnessTable(puVar27,MVar7.unknown,&local_128);
  puVar13 = &DAT_10054a6c0;
  FUN_1000087a0(&DAT_10054a6c0,&DAT_10054a668,&DAT_10041b650,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100522438);
  local_138 = puVar17;
  local_130 = puVar13;
  _swift_getWitnessTable(puVar27,MVar8.unknown,&local_138);
  puVar13 = puVar22;
  local_148 = puVar36;
  local_140 = puVar27;
  _swift_getWitnessTable(puVar22,_Var9.unknown,&local_148);
  local_158 = puVar18;
  local_150 = puVar13;
  _swift_getWitnessTable(puVar22,_Var10.unknown,&local_158);
  (**(code **)(lVar24 + 0x10))(param_1,lVar29,_Var10.unknown);
  (**(code **)(lVar24 + 8))(lVar29,_Var10.unknown);
  return;
}

