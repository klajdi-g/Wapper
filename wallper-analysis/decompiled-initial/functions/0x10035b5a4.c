// rea decompile_all
// name: FUN_10035b5a4
// address: 0x10035b5a4
// body: available
// range: 0x10035b5a4-0x10035c23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035beb8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10035b5a4(undefined8 param_1,Color param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  RoundedCornerStyle RVar4;
  Glass GVar5;
  Color CVar6;
  DefaultGlassEffectShape DVar7;
  undefined *puVar8;
  Alignment AVar9;
  undefined *puVar10;
  Glass GVar11;
  undefined *puVar12;
  undefined *puVar13;
  AnyView AVar14;
  undefined *puVar15;
  Glass GVar16;
  long extraout_x8;
  long extraout_x8_00;
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
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    if (param_2.unknown == (undefined *)0x0) {
      puVar15 = &DAT_10055c3e0;
      FUN_100002f94(&DAT_10055c3e0,&DAT_100433300);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar18 = (long)&local_e0 - extraout_x8_15;
      FUN_100355bec(lVar18);
      puVar15 = &DAT_10055dbe8;
      FUN_100002f94(&DAT_10055dbe8,&DAT_100433308);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar17 = lVar18 - extraout_x8_16;
      FUN_1000087e4(lVar18,lVar17,&DAT_10055c3e0,&DAT_100433300);
      _swift_storeEnumTagMultiPayload(lVar17,puVar15,1);
      FUN_100002f94(&DAT_10055c390,&DAT_100433310);
      FUN_1000372f4(&DAT_10055c388,&DAT_10055c390,&DAT_100433310,FUN_10031fe60);
      FUN_1000372f4(&DAT_10055c3d8,&DAT_10055c3e0,&DAT_100433300,FUN_100320008);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar17);
      FUN_10002a29c(lVar18,&DAT_10055c3e0,&DAT_100433300);
    }
    else {
      puVar15 = &DAT_10055c3a0;
      FUN_100002f94(&DAT_10055c3a0,&DAT_100431070);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = (long)&local_e0 - extraout_x8_04;
      lVar18 = lVar23 + *(int *)(puVar15 + 0x24);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
      ;
      RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar17 = CONCAT71((int7)((ulong)puVar15 >> 8),RVar4.value);
      (**(code **)(*(long *)(lVar17 + -8) + 0x68))(lVar18,uVar1,lVar17);
      CVar6.unknown = param_2.unknown;
      _swift_retain();
      CVar6 = SwiftUI::Color::opacity(0.96,CVar6);
      AVar9.unknown = &DAT_10054b118;
      puVar15 = &DAT_10041f7b0;
      FUN_100002f94();
      *(undefined **)(lVar18 + *(int *)(AVar9.unknown + 0x34)) = CVar6.unknown;
      *(undefined2 *)(lVar18 + *(int *)(AVar9.unknown + 0x38)) = 0x100;
      AVar9 = SwiftUI::Alignment::get_center(AVar9);
      puVar10 = &DAT_10054e1b0;
      FUN_100002f94(&DAT_10054e1b0,&DAT_10041f0a0);
      iVar2 = *(int *)(puVar10 + 0x24);
      *(undefined8 *)(lVar18 + iVar2) = AVar9.unknown;
      ((undefined8 *)(lVar18 + iVar2))[1] = puVar15;
      FUN_1000087e4();
      puVar15 = &DAT_10055c390;
      FUN_100002f94(&DAT_10055c390,&DAT_100433310);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar17 = lVar23 - extraout_x8_05;
      puVar15 = &DAT_10055dbf0;
      FUN_100002f94(&DAT_10055dbf0,&DAT_100433358);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar18 = lVar17 - extraout_x8_06;
      FUN_1000087e4(lVar23,lVar18,&DAT_10055c3a0,&DAT_100431070);
      _swift_storeEnumTagMultiPayload(lVar18,puVar15,1);
      FUN_10031fe60();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
      puVar15 = &DAT_10055dbe8;
      FUN_100002f94(&DAT_10055dbe8,&DAT_100433308);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar18 = lVar17 - extraout_x8_07;
      FUN_1000087e4(lVar17,lVar18,&DAT_10055c390,&DAT_100433310);
      _swift_storeEnumTagMultiPayload(lVar18,puVar15,0);
      FUN_100002f94(&DAT_10055c3e0,&DAT_100433300);
      FUN_1000372f4(&DAT_10055c388,&DAT_10055c390,&DAT_100433310,FUN_10031fe60);
      FUN_1000372f4(&DAT_10055c3d8,&DAT_10055c3e0,&DAT_100433300,FUN_100320008);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
      _swift_release(param_2.unknown);
      FUN_10002a29c(lVar17,&DAT_10055c390,&DAT_100433310);
      FUN_10002a29c(lVar23,&DAT_10055c3a0,&DAT_100431070);
    }
  }
  else {
    puVar15 = &DAT_10055dbf8;
    local_a0 = param_1;
    FUN_100002f94(&DAT_10055dbf8,&DAT_100433360);
    local_b0 = *(long *)(*(long *)(puVar15 + -8) + 0x40);
    local_a8 = puVar15;
    (*(code *)PTR____chkstk_darwin_100521118)(local_b0 + 0xfU & 0xfffffffffffffff0);
    lVar18 = (long)&local_e0 - extraout_x8;
    puVar15 = &DAT_10055dc00;
    GVar16.unknown = &DAT_100433368;
    local_b8 = lVar18;
    if (param_2.unknown == (undefined *)0x0) {
      FUN_100002f94();
      local_c0 = *(undefined **)(puVar15 + -8);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar18 - extraout_x8_08;
      GVar11 = SwiftUI::Glass::typeMetadataAccessor();
      lVar17 = *(long *)(GVar11.unknown + -8);
      GVar5 = GVar11;
      local_c8 = lVar23;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
      lVar20 = lVar23 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      SwiftUI::Glass::get_regular(GVar5);
      SwiftUI::Glass::interactive(true,GVar16);
      pcVar21 = *(code **)(lVar17 + 8);
      (*pcVar21)(lVar20 - extraout_x12_01,GVar11.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar17 = *(long *)(DVar7.unknown + -8);
      local_d0 = lVar20;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
      lVar22 = lVar20 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar10 = &DAT_10055c3b0;
      FUN_100002f94(&DAT_10055c3b0,&DAT_100433320);
      puVar12 = puVar10;
      local_d8 = puVar10;
      FUN_10031fef8();
      puVar13 = puVar12;
      FUN_100009808();
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (lVar23,lVar20,lVar22,puVar10,DVar7.unknown,puVar12,puVar13);
      (**(code **)(lVar17 + 8))(lVar22,DVar7.unknown);
      (*pcVar21)(lVar20,GVar11.unknown);
      lVar17 = local_c8;
      puVar10 = &DAT_10055dc08;
      FUN_100002f94(&DAT_10055dc08,&DAT_100433370);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar8 = local_c0;
      lVar17 = lVar17 - extraout_x8_11;
      (**(code **)(local_c0 + 0x10))(lVar17,lVar23,puVar15);
      _swift_storeEnumTagMultiPayload(lVar17,puVar10,1);
      local_80 = local_d8;
      puStack_78 = DVar7.unknown;
      local_70 = puVar12;
      puStack_68 = puVar13;
      _swift_getOpaqueTypeConformance2
                (&local_80,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar17);
      pcVar21 = *(code **)(puVar8 + 8);
    }
    else {
      FUN_100002f94();
      local_c8 = *(long *)(puVar15 + -8);
      local_c0 = puVar15;
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar23 = lVar18 - extraout_x8_00;
      GVar5 = SwiftUI::Glass::typeMetadataAccessor();
      lVar20 = *(long *)(GVar5.unknown + -8);
      local_d0 = lVar23;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
      lVar17 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      (*(code *)PTR____chkstk_darwin_100521118)();
      CVar6.unknown = param_2.unknown;
      _swift_retain();
      SwiftUI::Glass::get_regular((Glass)CVar6.unknown);
      CVar6 = SwiftUI::Color::opacity(0.85,param_2);
      SwiftUI::Glass::_tint((Glass)CVar6.unknown);
      _swift_release(CVar6.unknown);
      pcVar21 = *(code **)(lVar20 + 8);
      GVar16 = GVar5;
      local_d8 = GVar5.unknown;
      (*pcVar21)((lVar17 - extraout_x12) - extraout_x12_00);
      SwiftUI::Glass::interactive(true,GVar16);
      (*pcVar21)(lVar17 - extraout_x12,GVar5.unknown);
      DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
      lVar20 = *(long *)(DVar7.unknown + -8);
      local_e0 = lVar17;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
      lVar22 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      SwiftUI::DefaultGlassEffectShape::init();
      puVar10 = &DAT_10055c3b0;
      FUN_100002f94(&DAT_10055c3b0,&DAT_100433320);
      puVar12 = puVar10;
      FUN_10031fef8();
      puVar13 = puVar12;
      FUN_100009808();
      (extension_SwiftUI)::SwiftUI::View::_glassEffect
                (lVar23,lVar17,lVar22,puVar10,DVar7.unknown,puVar12,puVar13);
      (**(code **)(lVar20 + 8))(lVar22,DVar7.unknown);
      (*pcVar21)(lVar17,local_d8);
      lVar17 = local_d0;
      puVar8 = &DAT_10055dc08;
      FUN_100002f94(&DAT_10055dc08,&DAT_100433370);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar15 = local_c0;
      lVar20 = local_c8;
      lVar17 = lVar17 - extraout_x8_03;
      (**(code **)(local_c8 + 0x10))(lVar17,lVar23,local_c0);
      _swift_storeEnumTagMultiPayload(lVar17,puVar8,0);
      local_80 = puVar10;
      puStack_78 = DVar7.unknown;
      local_70 = puVar12;
      puStack_68 = puVar13;
      _swift_getOpaqueTypeConformance2
                (&local_80,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
                 ,1);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar17);
      _swift_release(param_2.unknown);
      pcVar21 = *(code **)(lVar20 + 8);
    }
    (*pcVar21)(lVar23,puVar15);
    lVar17 = local_b8;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar23 = lVar18;
    FUN_1000087e4(lVar18,lVar17 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0),&DAT_10055dbf8,
                  &DAT_100433360);
    FUN_100385834();
    AVar14 = SwiftUI::AnyView::_init(lVar23,local_a8,lVar23);
    puVar15 = &DAT_10055c390;
    FUN_100002f94(&DAT_10055c390,&DAT_100433310);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar17 = lVar17 - extraout_x8_12;
    puVar15 = &DAT_10055dbf0;
    FUN_100002f94(&DAT_10055dbf0,&DAT_100433358);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined8 *)(lVar17 - extraout_x8_13);
    *puVar19 = AVar14.unknown;
    _swift_storeEnumTagMultiPayload(puVar19);
    _swift_retain(AVar14.unknown);
    FUN_100002f94(&DAT_10055c3a0,&DAT_100431070);
    FUN_10031fe60();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar19);
    puVar15 = &DAT_10055dbe8;
    FUN_100002f94(&DAT_10055dbe8,&DAT_100433308);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = lVar17 - extraout_x8_14;
    FUN_1000087e4(lVar17,lVar23,&DAT_10055c390,&DAT_100433310);
    _swift_storeEnumTagMultiPayload(lVar23,puVar15,0);
    FUN_100002f94(&DAT_10055c3e0,&DAT_100433300);
    FUN_1000372f4(&DAT_10055c388,&DAT_10055c390,&DAT_100433310,FUN_10031fe60);
    FUN_1000372f4(&DAT_10055c3d8,&DAT_10055c3e0,&DAT_100433300,FUN_100320008);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
    _swift_release(AVar14.unknown);
    FUN_10002a29c(lVar17,&DAT_10055c390,&DAT_100433310);
    FUN_10002a29c(lVar18,&DAT_10055dbf8,&DAT_100433360);
  }
  return;
}

