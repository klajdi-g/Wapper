// rea decompile_all
// name: FUN_10034d8dc
// address: 0x10034d8dc
// body: available
// range: 0x10034d8dc-0x10034e013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010034de60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10034d8dc(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  RoundedCornerStyle RVar4;
  Glass GVar5;
  DefaultGlassEffectShape DVar6;
  DefaultGlassEffectShape DVar7;
  undefined **ppuVar8;
  AnyView AVar9;
  undefined *puVar10;
  undefined *puVar11;
  Material MVar12;
  Set SVar13;
  Capsule CVar14;
  Color CVar15;
  Color CVar16;
  Alignment AVar17;
  Alignment AVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  code *pcVar27;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0 [4];
  undefined *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  local_98 = param_1;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    puVar10 = &DAT_10054bb80;
    FUN_100002f94(&DAT_10054bb80,&DAT_10041d218);
    local_90 = (undefined1 *)&local_e0;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = (long)&local_e0 - extraout_x8_03;
    puVar11 = &DAT_10054bbb0;
    FUN_100002f94(&DAT_10054bbb0,&DAT_10041d230);
    iVar2 = *(int *)(puVar11 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar19 = CONCAT71((int7)((ulong)puVar11 >> 8),RVar4.value);
    pcVar27 = *(code **)(*(long *)(lVar19 + -8) + 0x68);
    (*pcVar27)(lVar20 + iVar2,uVar1,lVar19);
    puVar11 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)(lVar20 + iVar2 + (long)*(int *)(puVar11 + 0x24)) = 0;
    puVar11 = &DAT_10054ba88;
    FUN_100002f94(&DAT_10054ba88,&DAT_10041d178);
    (**(code **)(*(long *)(puVar11 + -8) + 0x10))(lVar20);
    MVar12.unknown = &DAT_10054bba0;
    FUN_100002f94(&DAT_10054bba0,&DAT_100433460);
    iVar2 = *(int *)(MVar12.unknown + 0x24);
    MVar12 = SwiftUI::Material::get_ultraThin(MVar12);
    SVar13 = SwiftUI::Edge::Set::get_all(MVar12.unknown);
    puVar11 = &DAT_10054a658;
    FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
    *(char *)(lVar20 + iVar2 + (long)*(int *)(puVar11 + 0x24)) = (char)SVar13.unknown;
    puVar11 = &DAT_10054bb90;
    FUN_100002f94(&DAT_10054bb90,&DAT_10041d220);
    iVar2 = *(int *)(puVar11 + 0x24);
    (*pcVar27)(lVar20 + iVar2,uVar1,lVar19);
    puVar11 = &DAT_10054a660;
    FUN_100002f94(&DAT_10054a660,&DAT_10041d1f0);
    *(undefined2 *)(lVar20 + iVar2 + (long)*(int *)(puVar11 + 0x24)) = 0x100;
    CVar14 = SwiftUI::Capsule::typeMetadataAccessor();
    puVar11 = PTR_typeMetadataAccessor_100523540;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CVar14.unknown + -8) + 0x40));
    puVar26 = (undefined *)(lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    CVar15.unknown = puVar26;
    (*pcVar27)(puVar26,uVar1,lVar19);
    CVar15 = SwiftUI::Color::get_white(CVar15);
    CVar16 = SwiftUI::Color::opacity(0.14,CVar15);
    _swift_release(CVar15.unknown);
    SwiftUI::StrokeStyle::init
              (&local_88,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    lVar19 = lVar20 + *(int *)(puVar10 + 0x24);
    FUN_100029504(puVar26,lVar19,puVar11);
    puVar10 = &DAT_10054a698;
    FUN_100002f94(&DAT_10054a698,&DAT_10041b660);
    puVar21 = (undefined8 *)(lVar19 + *(int *)(puVar10 + 0x24));
    puVar21[1] = puStack_80;
    *puVar21 = local_88;
    puVar21[3] = puStack_70;
    puVar21[2] = local_78;
    puVar21[4] = local_68;
    AVar18.unknown = &DAT_10054a6a0;
    puVar10 = &DAT_10041c350;
    FUN_100002f94();
    *(undefined **)(lVar19 + *(int *)(AVar18.unknown + 0x34)) = CVar16.unknown;
    *(undefined2 *)(lVar19 + *(int *)(AVar18.unknown + 0x38)) = 0x100;
    AVar17 = SwiftUI::Alignment::get_center(AVar18);
    FUN_100029548(puVar26,puVar11);
    AVar18.unknown = &DAT_10054a6a8;
    puVar11 = &DAT_10041b670;
    FUN_100002f94();
    iVar2 = *(int *)(AVar18.unknown + 0x24);
    *(undefined8 *)(lVar19 + iVar2) = AVar17.unknown;
    ((undefined8 *)(lVar19 + iVar2))[1] = puVar10;
    AVar18 = SwiftUI::Alignment::get_center(AVar18);
    puVar10 = &DAT_10054a668;
    FUN_100002f94(&DAT_10054a668,&DAT_10041b650);
    iVar2 = *(int *)(puVar10 + 0x24);
    *(undefined8 *)(lVar19 + iVar2) = AVar18.unknown;
    ((undefined8 *)(lVar19 + iVar2))[1] = puVar11;
    puVar10 = &DAT_10055dc88;
    FUN_100002f94(&DAT_10055dc88,&DAT_100433470);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = lVar20 - extraout_x8_05;
    FUN_1000087e4(lVar20,lVar19,&DAT_10054bb80,&DAT_10041d218);
    _swift_storeEnumTagMultiPayload(lVar19,puVar10,1);
    FUN_100037364();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar19);
    FUN_10002a29c(lVar20,&DAT_10054bb80,&DAT_10041d218);
  }
  else {
    puVar10 = &DAT_10055dc90;
    FUN_100002f94(&DAT_10055dc90,&DAT_100433478);
    local_c0[3] = *(long *)(puVar10 + -8);
    local_c0[1] = *(undefined8 *)(local_c0[3] + 0x40);
    local_a0 = puVar10;
    local_90 = (undefined1 *)&local_e0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_c0[2] = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar24 = (long)&local_e0 - local_c0[2];
    puVar10 = &DAT_10054bbb0;
    FUN_100002f94(&DAT_10054bbb0,&DAT_10041d230);
    local_c8 = puVar10;
    local_c0[0] = lVar24;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar24 - extraout_x8;
    iVar2 = *(int *)(puVar10 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar19 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar4.value);
    (**(code **)(*(long *)(lVar19 + -8) + 0x68))(lVar20 + iVar2,uVar1,lVar19);
    puVar10 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)(lVar20 + iVar2 + (long)*(int *)(puVar10 + 0x24)) = 0;
    puVar10 = &DAT_10054ba88;
    FUN_100002f94(&DAT_10054ba88,&DAT_10041d178);
    (**(code **)(*(long *)(puVar10 + -8) + 0x10))(lVar20);
    GVar5 = SwiftUI::Glass::typeMetadataAccessor();
    lVar22 = *(long *)(GVar5.unknown + -8);
    local_d8 = GVar5.unknown;
    local_d0 = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
    lVar19 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::Glass::get_regular(GVar5);
    DVar6 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    lVar23 = *(long *)(DVar6.unknown + -8);
    local_e0 = lVar19;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
    lVar25 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    DVar7 = SwiftUI::DefaultGlassEffectShape::init();
    FUN_10003752c();
    puVar26 = DVar7.unknown;
    FUN_100009808();
    puVar10 = local_c8;
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar24,lVar19,lVar25,local_c8,DVar6.unknown,DVar7.unknown,puVar26);
    (**(code **)(lVar23 + 8))(lVar25,DVar6.unknown);
    (**(code **)(lVar22 + 8))(lVar19,local_d8);
    FUN_10002a29c(lVar20,&DAT_10054bbb0,&DAT_10041d230);
    lVar19 = local_c0[0];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar11 = local_a0;
    lVar20 = local_c0[3];
    (**(code **)(local_c0[3] + 0x10))(lVar19 - local_c0[2],lVar24,local_a0);
    local_88 = puVar10;
    ppuVar8 = &local_88;
    puStack_80 = DVar6.unknown;
    local_78 = DVar7.unknown;
    puStack_70 = puVar26;
    _swift_getOpaqueTypeConformance2
              (ppuVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar9 = SwiftUI::AnyView::_init(ppuVar8,puVar11,ppuVar8);
    puVar10 = &DAT_10055dc88;
    FUN_100002f94(&DAT_10055dc88,&DAT_100433470);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined8 *)(lVar19 - extraout_x8_02);
    *puVar21 = AVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar21);
    FUN_100002f94(&DAT_10054bb80,&DAT_10041d218);
    FUN_100037364();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
    (**(code **)(lVar20 + 8))(lVar24,puVar11);
  }
  return;
}

