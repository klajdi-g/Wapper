// rea decompile_all
// name: FUN_100357f84
// address: 0x100357f84
// body: available
// range: 0x100357f84-0x100358cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100358978 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100357f84(undefined8 param_1,Color param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  RoundedCornerStyle RVar5;
  Glass GVar6;
  Color CVar7;
  DefaultGlassEffectShape DVar8;
  Alignment AVar9;
  undefined *puVar10;
  Glass GVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  AnyView AVar17;
  undefined *puVar18;
  Glass GVar19;
  long extraout_x8;
  undefined1 *puVar20;
  long extraout_x8_00;
  code *pcVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar22;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  code *pcVar27;
  undefined8 *puVar28;
  undefined1 auStack_f0 [8];
  long local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_80;
  undefined *puStack_78;
  undefined **local_70;
  undefined **ppuStack_68;
  
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar4 & 1) == 0) {
    if (param_2.unknown == (undefined *)0x0) {
      puVar18 = &DAT_10054e1c0;
      FUN_100002f94(&DAT_10054e1c0,&DAT_100433cb0);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar20 = auStack_f0 + -extraout_x8_15;
      FUN_10034ee84(puVar20);
      puVar18 = &DAT_10055e340;
      FUN_100002f94(&DAT_10055e340,&DAT_100433cb8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = (long)puVar20 - extraout_x8_16;
      FUN_1000087e4(puVar20,lVar23,&DAT_10054e1c0,&DAT_100433cb0);
      _swift_storeEnumTagMultiPayload(lVar23,puVar18,1);
      FUN_100002f94(&DAT_10054e190,&DAT_10041f090);
      FUN_1000372f4(&DAT_10054e188,&DAT_10054e190,&DAT_10041f090,FUN_100069a58);
      FUN_1000372f4(&DAT_10054e1b8,&DAT_10054e1c0,&DAT_100433cb0,FUN_100069b5c);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      FUN_10002a29c(puVar20,&DAT_10054e1c0,&DAT_100433cb0);
    }
    else {
      puVar18 = &DAT_10054e1a0;
      FUN_100002f94(&DAT_10054e1a0,&DAT_10041f098);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar24 = auStack_f0 + -extraout_x8_04;
      puVar20 = puVar24 + *(int *)(puVar18 + 0x24);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar23 = CONCAT71((int7)((ulong)puVar18 >> 8),RVar5.value);
      (**(code **)(*(long *)(lVar23 + -8) + 0x68))(puVar20,uVar1,lVar23);
      CVar7.unknown = param_2.unknown;
      _swift_retain();
      CVar7 = SwiftUI::Color::opacity(0.96,CVar7);
      AVar9.unknown = &DAT_10054b118;
      puVar18 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(puVar20 + *(int *)(AVar9.unknown + 0x34)) = CVar7.unknown;
      *(undefined2 *)(puVar20 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
      AVar9 = SwiftUI::Alignment::get_center(AVar9);
      puVar10 = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar2 = *(int *)(puVar10 + 0x24);
      *(undefined **)(puVar20 + iVar2) = AVar9.unknown;
      *(undefined **)((long)(puVar20 + iVar2) + 8) = puVar18;
      puVar18 = &DAT_10054e100;
      FUN_100002f94(&DAT_10054e100,&DAT_10041f038);
      (**(code **)(*(long *)(puVar18 + -8) + 0x10))(puVar24);
      puVar18 = &DAT_10054e190;
      FUN_100002f94(&DAT_10054e190,&DAT_10041f090);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar26 = (long)puVar24 - extraout_x8_05;
      puVar18 = &DAT_10055e348;
      FUN_100002f94(&DAT_10055e348,&DAT_100433ce0);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar26 - extraout_x8_06;
      FUN_1000087e4(puVar24,lVar23,&DAT_10054e1a0,&DAT_10041f098);
      _swift_storeEnumTagMultiPayload(lVar23,puVar18,1);
      FUN_100069a58();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      puVar18 = &DAT_10055e340;
      FUN_100002f94(&DAT_10055e340,&DAT_100433cb8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar26 - extraout_x8_07;
      FUN_1000087e4(lVar26,lVar23,&DAT_10054e190,&DAT_10041f090);
      _swift_storeEnumTagMultiPayload(lVar23,puVar18,0);
      FUN_100002f94(&DAT_10054e1c0,&DAT_100433cb0);
      FUN_1000372f4(&DAT_10054e188,&DAT_10054e190,&DAT_10041f090,FUN_100069a58);
      FUN_1000372f4(&DAT_10054e1b8,&DAT_10054e1c0,&DAT_100433cb0,FUN_100069b5c);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      _swift_release(param_2.unknown);
      FUN_10002a29c(lVar26,&DAT_10054e190,&DAT_10041f090);
      FUN_10002a29c(puVar24,&DAT_10054e1a0,&DAT_10041f098);
    }
  }
  else {
    puVar18 = &DAT_10055e350;
    local_a0 = param_1;
    FUN_100002f94(&DAT_10055e350,&DAT_100433ce8);
    local_b0 = *(long *)(*(long *)(puVar18 + -8) + 0x40);
    local_a8 = puVar18;
    (*(code *)PTR____chkstk_darwin_100521118)(local_b0 + 0xfU & 0xfffffffffffffff0);
    puVar20 = auStack_f0 + -extraout_x8;
    pcVar21 = (code *)&DAT_10055e358;
    GVar19.unknown = &DAT_100433cf0;
    local_b8 = puVar20;
    if (param_2.unknown == (undefined *)0x0) {
      FUN_100002f94();
      lVar23 = *(long *)(pcVar21 + -8);
      local_d0 = pcVar21;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar27 = (code *)(puVar20 + -extraout_x8_08);
      local_c8 = pcVar27;
      GVar11 = SwiftUI::Glass::typeMetadataAccessor();
      lVar26 = *(long *)(GVar11.unknown + -8);
      GVar6 = GVar11;
      local_c0 = pcVar27;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      pcVar27 = pcVar27 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar6);
      SwiftUI::Glass::interactive(true,GVar19);
      local_d8 = *(code **)(lVar26 + 8);
      (*local_d8)((long)pcVar27 - extraout_x12_01,GVar11.unknown);
      DVar8 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar25 = *(long *)(DVar8.unknown + -8);
      local_e0 = pcVar27;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
      lVar26 = (long)pcVar27 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar18 = &DAT_10054e100;
      FUN_100002f94(&DAT_10054e100,&DAT_10041f038);
      puVar10 = &DAT_10054e0f8;
      FUN_100002fe4(&DAT_10054e0f8,&DAT_10041f030);
      puVar12 = &DAT_10054e160;
      FUN_1000087a0(&DAT_10054e160,&DAT_10054e0f8,&DAT_10041f030,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar13 = puVar12;
      FUN_100003038();
      puStack_78 = &DAT_100525378;
      ppuVar14 = &local_80;
      local_80 = puVar10;
      local_70 = (undefined **)puVar12;
      ppuStack_68 = (undefined **)puVar13;
      _swift_getOpaqueTypeConformance2
                (ppuVar14,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
                 ,1);
      ppuVar15 = ppuVar14;
      FUN_100009808();
      pcVar21 = local_c8;
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_c8,pcVar27,lVar26,puVar18,DVar8.unknown,ppuVar14,ppuVar15);
      (**(code **)(lVar25 + 8))(lVar26,DVar8.unknown);
      (*local_d8)(pcVar27,GVar11.unknown);
      pcVar22 = local_c0;
      puVar10 = &DAT_10055e360;
      FUN_100002f94(&DAT_10055e360,&DAT_100433cf8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar27 = local_d0;
      lVar26 = (long)pcVar22 - extraout_x8_11;
      (**(code **)(lVar23 + 0x10))(lVar26,pcVar21,local_d0);
      _swift_storeEnumTagMultiPayload(lVar26,puVar10,1);
      local_80 = puVar18;
      puStack_78 = DVar8.unknown;
      local_70 = ppuVar14;
      ppuStack_68 = ppuVar15;
      _swift_getOpaqueTypeConformance2
                (&local_80,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
      pcVar22 = *(code **)(lVar23 + 8);
    }
    else {
      FUN_100002f94();
      local_c8 = *(code **)(pcVar21 + -8);
      local_c0 = pcVar21;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar21 = (code *)(puVar20 + -extraout_x8_00);
      local_d8 = pcVar21;
      GVar6 = SwiftUI::Glass::typeMetadataAccessor();
      lVar26 = *(long *)(GVar6.unknown + -8);
      local_d0 = pcVar21;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      lVar23 = (long)pcVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar7.unknown = param_2.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar7.unknown);
      CVar7 = SwiftUI::Color::opacity(0.85,param_2);
      SwiftUI::Glass::_tint((Glass)CVar7.unknown);
      _swift_release(CVar7.unknown);
      pcVar27 = *(code **)(lVar26 + 8);
      GVar19 = GVar6;
      local_e0 = (code *)GVar6;
      (*pcVar27)((lVar23 - extraout_x12) - extraout_x12_00);
      SwiftUI::Glass::interactive(true,GVar19);
      (*pcVar27)(lVar23 - extraout_x12,GVar6.unknown);
      DVar8 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar25 = *(long *)(DVar8.unknown + -8);
      local_e8 = lVar23;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
      lVar26 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar18 = &DAT_10054e100;
      FUN_100002f94(&DAT_10054e100,&DAT_10041f038);
      puVar10 = &DAT_10054e0f8;
      FUN_100002fe4(&DAT_10054e0f8,&DAT_10041f030);
      puVar12 = &DAT_10054e160;
      FUN_1000087a0(&DAT_10054e160,&DAT_10054e0f8,&DAT_10041f030,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar13 = puVar12;
      FUN_100003038();
      puStack_78 = &DAT_100525378;
      ppuVar14 = &local_80;
      local_80 = puVar10;
      local_70 = (undefined **)puVar12;
      ppuStack_68 = (undefined **)puVar13;
      _swift_getOpaqueTypeConformance2
                (ppuVar14,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
                 ,1);
      ppuVar15 = ppuVar14;
      FUN_100009808();
      pcVar21 = local_d8;
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_d8,lVar23,lVar26,puVar18,DVar8.unknown,ppuVar14,ppuVar15);
      (**(code **)(lVar25 + 8))(lVar26,DVar8.unknown);
      (*pcVar27)(lVar23,local_e0);
      pcVar22 = local_d0;
      puVar10 = &DAT_10055e360;
      FUN_100002f94(&DAT_10055e360,&DAT_100433cf8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      pcVar27 = local_c0;
      pcVar3 = local_c8;
      lVar23 = (long)pcVar22 - extraout_x8_03;
      (**(code **)(local_c8 + 0x10))(lVar23,pcVar21,local_c0);
      _swift_storeEnumTagMultiPayload(lVar23,puVar10,0);
      local_80 = puVar18;
      puStack_78 = DVar8.unknown;
      local_70 = ppuVar14;
      ppuStack_68 = ppuVar15;
      _swift_getOpaqueTypeConformance2
                (&local_80,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
      _swift_release(param_2.unknown);
      pcVar22 = *(code **)(pcVar3 + 8);
    }
    (*pcVar22)(pcVar21,pcVar27);
    puVar24 = local_b8;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar16 = puVar20;
    FUN_1000087e4(puVar20,(long)puVar24 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),
                  &DAT_10055e350,&DAT_100433ce8);
    FUN_100389e30();
    AVar17 = SwiftUI::AnyView::_init(puVar16,local_a8,puVar16);
    puVar18 = &DAT_10054e190;
    FUN_100002f94(&DAT_10054e190,&DAT_10041f090);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = (long)puVar24 - extraout_x8_12;
    puVar18 = &DAT_10055e348;
    FUN_100002f94(&DAT_10055e348,&DAT_100433ce0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar28 = (undefined8 *)(lVar23 - extraout_x8_13);
    *puVar28 = AVar17.unknown;
    _swift_storeEnumTagMultiPayload(puVar28);
    _swift_retain(AVar17.unknown);
    FUN_100002f94(&DAT_10054e1a0,&DAT_10041f098);
    FUN_100069a58();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar28);
    puVar18 = &DAT_10055e340;
    FUN_100002f94(&DAT_10055e340,&DAT_100433cb8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar26 = lVar23 - extraout_x8_14;
    FUN_1000087e4(lVar23,lVar26,&DAT_10054e190,&DAT_10041f090);
    _swift_storeEnumTagMultiPayload(lVar26,puVar18,0);
    FUN_100002f94(&DAT_10054e1c0,&DAT_100433cb0);
    FUN_1000372f4(&DAT_10054e188,&DAT_10054e190,&DAT_10041f090,FUN_100069a58);
    FUN_1000372f4(&DAT_10054e1b8,&DAT_10054e1c0,&DAT_100433cb0,FUN_100069b5c);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
    _swift_release(AVar17.unknown);
    FUN_10002a29c(lVar23,&DAT_10054e190,&DAT_10041f090);
    FUN_10002a29c(puVar20,&DAT_10055e350,&DAT_100433ce8);
  }
  return;
}

