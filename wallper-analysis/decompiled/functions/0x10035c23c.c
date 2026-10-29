// rea decompile_all
// name: FUN_10035c23c
// address: 0x10035c23c
// body: available
// range: 0x10035c23c-0x10035d007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035cc88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10035c23c(Color param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  RoundedCornerStyle RVar6;
  Glass GVar7;
  Color CVar8;
  DefaultGlassEffectShape DVar9;
  PlainButtonStyle PVar10;
  Alignment AVar11;
  undefined *puVar12;
  Glass GVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  AnyView AVar18;
  Glass GVar19;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar20;
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
  long lVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined *local_100;
  long local_f8 [2];
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_88;
  undefined *puStack_80;
  undefined **local_78;
  undefined **ppuStack_70;
  
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar5 & 1) == 0) {
    if (param_1.unknown == (undefined *)0x0) {
      puVar20 = &DAT_10055d810;
      FUN_100002f94(&DAT_10055d810,&DAT_100432f00);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar22 = (long)&local_100 - extraout_x8_15;
      FUN_10035784c(lVar22);
      puVar20 = &DAT_10055d818;
      FUN_100002f94(&DAT_10055d818,&DAT_100432f08);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar24 = lVar22 - extraout_x8_16;
      FUN_1000087e4(lVar22,lVar24,&DAT_10055d810,&DAT_100432f00);
      _swift_storeEnumTagMultiPayload(lVar24,puVar20,1);
      FUN_100002f94(&DAT_10055d820,&DAT_100432f10);
      FUN_1000372f4(&DAT_10055d828,&DAT_10055d820,&DAT_100432f10,FUN_10037a024);
      FUN_1000372f4(&DAT_10055d840,&DAT_10055d810,&DAT_100432f00,FUN_10037a150);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar24);
      FUN_10002a29c(lVar22,&DAT_10055d810,&DAT_100432f00);
    }
    else {
      puVar20 = &DAT_10055d838;
      FUN_100002f94(&DAT_10055d838,&DAT_100432f18);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar21 = (long)&local_100 - extraout_x8_04;
      lVar22 = lVar21 + *(int *)(puVar20 + 0x24);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar24 = CONCAT71((int7)((ulong)puVar20 >> 8),RVar6.value);
      (**(code **)(*(long *)(lVar24 + -8) + 0x68))(lVar22,uVar1,lVar24);
      CVar8.unknown = param_1.unknown;
      _swift_retain();
      CVar8 = SwiftUI::Color::opacity(0.96,CVar8);
      AVar11.unknown = &DAT_10054b118;
      puVar20 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(lVar22 + *(int *)(AVar11.unknown + 0x34)) = CVar8.unknown;
      *(undefined2 *)(lVar22 + *(int *)(AVar11.unknown + 0x38)) = 0x100;
      AVar11 = SwiftUI::Alignment::get_center(AVar11);
      puVar12 = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar2 = *(int *)(puVar12 + 0x24);
      *(undefined8 *)(lVar22 + iVar2) = AVar11.unknown;
      ((undefined8 *)(lVar22 + iVar2))[1] = puVar20;
      puVar20 = &DAT_10055d7b0;
      FUN_100002f94(&DAT_10055d7b0,&DAT_100432ec8);
      (**(code **)(*(long *)(puVar20 + -8) + 0x10))(lVar21);
      puVar20 = &DAT_10055d820;
      FUN_100002f94(&DAT_10055d820,&DAT_100432f10);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar24 = lVar21 - extraout_x8_05;
      puVar20 = &DAT_10055d888;
      FUN_100002f94(&DAT_10055d888,&DAT_100432f48);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar22 = lVar24 - extraout_x8_06;
      FUN_1000087e4(lVar21,lVar22,&DAT_10055d838,&DAT_100432f18);
      _swift_storeEnumTagMultiPayload(lVar22,puVar20,1);
      FUN_10037a024();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar22);
      puVar20 = &DAT_10055d818;
      FUN_100002f94(&DAT_10055d818,&DAT_100432f08);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar22 = lVar24 - extraout_x8_07;
      FUN_1000087e4(lVar24,lVar22,&DAT_10055d820,&DAT_100432f10);
      _swift_storeEnumTagMultiPayload(lVar22,puVar20,0);
      FUN_100002f94(&DAT_10055d810,&DAT_100432f00);
      FUN_1000372f4(&DAT_10055d828,&DAT_10055d820,&DAT_100432f10,FUN_10037a024);
      FUN_1000372f4(&DAT_10055d840,&DAT_10055d810,&DAT_100432f00,FUN_10037a150);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar22);
      _swift_release(param_1.unknown);
      FUN_10002a29c(lVar24,&DAT_10055d820,&DAT_100432f10);
      FUN_10002a29c(lVar21,&DAT_10055d838,&DAT_100432f18);
    }
  }
  else {
    puVar20 = &DAT_10055d890;
    FUN_100002f94(&DAT_10055d890,&DAT_100432f50);
    local_b0 = *(long *)(*(long *)(puVar20 + -8) + 0x40);
    local_a8 = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(local_b0 + 0xfU & 0xfffffffffffffff0);
    lVar22 = (long)&local_100 - extraout_x8;
    puVar20 = &DAT_10055d898;
    GVar19.unknown = &DAT_100432f58;
    local_b8 = lVar22;
    if (param_1.unknown == (undefined *)0x0) {
      FUN_100002f94();
      local_c0 = *(undefined **)(puVar20 + -8);
      local_d8 = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar20 = (undefined *)(lVar22 - extraout_x8_08);
      local_d0 = puVar20;
      GVar13 = SwiftUI::Glass::typeMetadataAccessor();
      lVar24 = *(long *)(GVar13.unknown + -8);
      GVar7 = GVar13;
      local_e0 = GVar13.unknown;
      local_c8 = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
      lVar26 = (long)puVar20 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar7);
      SwiftUI::Glass::interactive(true,GVar19);
      local_e8 = *(code **)(lVar24 + 8);
      (*local_e8)(lVar26 - extraout_x12_01,GVar13.unknown);
      DVar9 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar24 = *(long *)(DVar9.unknown + -8);
      local_f8[1] = lVar26;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
      lVar21 = lVar26 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar20 = &DAT_10055d7b0;
      FUN_100002f94(&DAT_10055d7b0,&DAT_100432ec8);
      puVar12 = &DAT_10055d7a8;
      FUN_100002fe4(&DAT_10055d7a8,&DAT_100432ec0);
      PVar10 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
      puVar3 = PTR_typeMetadataAccessor_100522380;
      puVar14 = &DAT_10055d808;
      FUN_1000087a0(&DAT_10055d808,&DAT_10055d7a8,&DAT_100432ec0,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar15 = &DAT_10054a8b0;
      FUN_1000036d0(&DAT_10054a8b0,puVar3,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370)
      ;
      ppuVar16 = &local_88;
      local_88 = puVar12;
      puStack_80 = PVar10.unknown;
      local_78 = (undefined **)puVar14;
      ppuStack_70 = (undefined **)puVar15;
      _swift_getOpaqueTypeConformance2
                (ppuVar16,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
                 ,1);
      ppuVar17 = ppuVar16;
      FUN_100009808();
      puVar14 = local_d0;
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_d0,lVar26,lVar21,puVar20,DVar9.unknown,ppuVar16,ppuVar17);
      (**(code **)(lVar24 + 8))(lVar21,DVar9.unknown);
      (*local_e8)(lVar26,local_e0);
      puVar3 = local_c8;
      puVar12 = &DAT_10055d8a0;
      FUN_100002f94(&DAT_10055d8a0,&DAT_100432f60);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar4 = local_c0;
      puVar15 = local_d8;
      lVar24 = (long)puVar3 - extraout_x8_11;
      (**(code **)(local_c0 + 0x10))(lVar24,puVar14,local_d8);
      _swift_storeEnumTagMultiPayload(lVar24,puVar12,1);
      local_88 = puVar20;
      puStack_80 = DVar9.unknown;
      local_78 = ppuVar16;
      ppuStack_70 = ppuVar17;
      _swift_getOpaqueTypeConformance2
                (&local_88,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar24);
      pcVar23 = *(code **)(puVar4 + 8);
    }
    else {
      FUN_100002f94();
      local_c8 = *(undefined **)(puVar20 + -8);
      local_c0 = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar20 = (undefined *)(lVar22 - extraout_x8_00);
      local_d8 = puVar20;
      GVar7 = SwiftUI::Glass::typeMetadataAccessor();
      lVar24 = *(long *)(GVar7.unknown + -8);
      local_d0 = puVar20;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
      lVar21 = (long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      local_f8[0] = lVar21;
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar8.unknown = param_1.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar8.unknown);
      CVar8 = SwiftUI::Color::opacity(0.85,param_1);
      SwiftUI::Glass::_tint((Glass)CVar8.unknown);
      _swift_release(CVar8.unknown);
      pcVar23 = *(code **)(lVar24 + 8);
      GVar19 = GVar7;
      local_e8 = (code *)GVar7;
      (*pcVar23)((lVar21 - extraout_x12) - extraout_x12_00);
      SwiftUI::Glass::interactive(true,GVar19);
      (*pcVar23)(lVar21 - extraout_x12,GVar7.unknown);
      DVar9 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar26 = *(long *)(DVar9.unknown + -8);
      local_f8[1] = lVar21;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
      lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar20 = &DAT_10055d7b0;
      FUN_100002f94(&DAT_10055d7b0,&DAT_100432ec8);
      puVar12 = &DAT_10055d7a8;
      local_100 = puVar20;
      FUN_100002fe4(&DAT_10055d7a8,&DAT_100432ec0);
      PVar10 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
      puVar3 = PTR_typeMetadataAccessor_100522380;
      puVar14 = &DAT_10055d808;
      local_e0 = param_1.unknown;
      FUN_1000087a0(&DAT_10055d808,&DAT_10055d7a8,&DAT_100432ec0,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar15 = &DAT_10054a8b0;
      FUN_1000036d0(&DAT_10054a8b0,puVar3,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370)
      ;
      ppuVar16 = &local_88;
      local_88 = puVar12;
      puStack_80 = PVar10.unknown;
      local_78 = (undefined **)puVar14;
      ppuStack_70 = (undefined **)puVar15;
      _swift_getOpaqueTypeConformance2
                (ppuVar16,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
                 ,1);
      ppuVar17 = ppuVar16;
      FUN_100009808();
      puVar14 = local_d8;
      lVar24 = local_f8[0];
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (local_d8,local_f8[0],lVar21,puVar20,DVar9.unknown,ppuVar16,ppuVar17);
      (**(code **)(lVar26 + 8))(lVar21,DVar9.unknown);
      (*pcVar23)(lVar24,local_e8);
      puVar12 = local_d0;
      puVar20 = &DAT_10055d8a0;
      FUN_100002f94(&DAT_10055d8a0,&DAT_100432f60);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar15 = local_c0;
      puVar3 = local_c8;
      lVar24 = (long)puVar12 - extraout_x8_03;
      (**(code **)(local_c8 + 0x10))(lVar24,puVar14,local_c0);
      _swift_storeEnumTagMultiPayload(lVar24,puVar20,0);
      local_88 = local_100;
      puStack_80 = DVar9.unknown;
      local_78 = ppuVar16;
      ppuStack_70 = ppuVar17;
      _swift_getOpaqueTypeConformance2
                (&local_88,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar24);
      _swift_release(local_e0);
      pcVar23 = *(code **)(puVar3 + 8);
    }
    (*pcVar23)(puVar14,puVar15);
    lVar24 = local_b8;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar21 = lVar22;
    FUN_1000087e4(lVar22,lVar24 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),&DAT_10055d890,
                  &DAT_100432f50);
    FUN_10037a444();
    AVar18 = SwiftUI::AnyView::_init(lVar21,local_a8,lVar21);
    puVar20 = &DAT_10055d820;
    FUN_100002f94(&DAT_10055d820,&DAT_100432f10);
    local_a8 = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar24 = lVar24 - extraout_x8_12;
    puVar20 = &DAT_10055d888;
    FUN_100002f94(&DAT_10055d888,&DAT_100432f48);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar25 = (undefined8 *)(lVar24 - extraout_x8_13);
    *puVar25 = AVar18.unknown;
    _swift_storeEnumTagMultiPayload(puVar25);
    _swift_retain(AVar18.unknown);
    FUN_100002f94(&DAT_10055d838,&DAT_100432f18);
    FUN_10037a024();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar25);
    puVar20 = &DAT_10055d818;
    FUN_100002f94(&DAT_10055d818,&DAT_100432f08);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar21 = lVar24 - extraout_x8_14;
    FUN_1000087e4(lVar24,lVar21,&DAT_10055d820,&DAT_100432f10);
    _swift_storeEnumTagMultiPayload(lVar21,puVar20,0);
    FUN_100002f94(&DAT_10055d810,&DAT_100432f00);
    FUN_1000372f4(&DAT_10055d828,&DAT_10055d820,&DAT_100432f10,FUN_10037a024);
    FUN_1000372f4(&DAT_10055d840,&DAT_10055d810,&DAT_100432f00,FUN_10037a150);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar21);
    _swift_release(AVar18.unknown);
    FUN_10002a29c(lVar24,&DAT_10055d820,&DAT_100432f10);
    FUN_10002a29c(lVar22,&DAT_10055d890,&DAT_100432f50);
  }
  return;
}

