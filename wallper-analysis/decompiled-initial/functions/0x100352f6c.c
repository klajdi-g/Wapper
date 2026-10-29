// rea decompile_all
// name: FUN_100352f6c
// address: 0x100352f6c
// body: available
// range: 0x100352f6c-0x10035370f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035355c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100352f6c(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  RoundedCornerStyle RVar4;
  DefaultGlassEffectShape DVar5;
  DefaultGlassEffectShape DVar6;
  undefined **ppuVar7;
  AnyView AVar8;
  undefined *puVar9;
  undefined *puVar10;
  Material MVar11;
  Set SVar12;
  Capsule CVar13;
  Color CVar14;
  Color CVar15;
  Alignment AVar16;
  Alignment AVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long lVar18;
  Glass unaff_x20;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long local_140;
  undefined *local_138 [3];
  long local_120 [4];
  undefined *local_100 [5];
  undefined1 local_d8 [8];
  undefined1 auStack_d7 [8];
  undefined1 auStack_cf [111];
  
  local_100[1] = (undefined *)param_1;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    puVar9 = &DAT_100553798;
    FUN_100002f94(&DAT_100553798,&DAT_1004267d0);
    local_100[2] = (undefined *)&local_140;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = -extraout_x8_03;
    puVar22 = (undefined8 *)((long)&local_140 + lVar18);
    puVar10 = &DAT_1005537c8;
    FUN_100002f94(&DAT_1005537c8,&DAT_1004333c0);
    iVar2 = *(int *)(puVar10 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar20 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar4.value);
    pcVar26 = *(code **)(*(long *)(lVar20 + -8) + 0x68);
    (*pcVar26)((long)puVar22 + (long)iVar2,uVar1,lVar20);
    puVar10 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)((long)puVar22 + (long)iVar2 + (long)*(int *)(puVar10 + 0x24)) = 0;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x58);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x50);
    *(undefined8 *)((long)local_100 + lVar18 + 8) = *(undefined8 *)((long)unaff_x20.unknown + 0x48);
    *(undefined8 *)((long)local_100 + lVar18) = uVar27;
    *(undefined8 *)((long)local_100 + lVar18 + 0x18) = uVar29;
    *(undefined8 *)((long)local_100 + lVar18 + 0x10) = uVar28;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x60);
    *(undefined8 *)(&stack0xffffffffffffff28 + lVar18) =
         *(undefined8 *)((long)unaff_x20.unknown + 0x68);
    *(undefined8 *)((long)local_100 + lVar18 + 0x20) = uVar27;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x69);
    *(undefined8 *)(auStack_cf + lVar18) = *(undefined8 *)((long)unaff_x20.unknown + 0x71);
    *(undefined8 *)((undefined1 *)((long)register0x00000008 + -0xd7) + lVar18) = uVar27;
    uVar27 = *(undefined8 *)unaff_x20.unknown;
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
    *(undefined8 *)((long)local_138 + lVar18) = *(undefined8 *)((long)unaff_x20.unknown + 8);
    *puVar22 = uVar27;
    *(undefined8 *)((long)local_138 + lVar18 + 0x10) = uVar29;
    *(undefined8 *)((long)local_138 + lVar18 + 8) = uVar28;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
    *(undefined8 *)((long)local_120 + lVar18 + 8) = *(undefined8 *)((long)unaff_x20.unknown + 0x28);
    *(undefined8 *)((long)local_120 + lVar18) = uVar27;
    *(undefined8 *)((long)local_120 + lVar18 + 0x18) = uVar29;
    *(undefined8 *)((long)local_120 + lVar18 + 0x10) = uVar28;
    puVar10 = &DAT_1005537b8;
    FUN_100002f94(&DAT_1005537b8,&DAT_1004267d8);
    iVar2 = *(int *)(puVar10 + 0x24);
    FUN_1000087e4();
    MVar11 = SwiftUI::Material::get_ultraThin(unaff_x20.unknown);
    SVar12 = SwiftUI::Edge::Set::get_all(MVar11.unknown);
    puVar10 = &DAT_10054a658;
    FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
    *(char *)((long)puVar22 + (long)*(int *)(puVar10 + 0x24) + (long)iVar2) = (char)SVar12.unknown;
    puVar10 = &DAT_1005537a8;
    FUN_100002f94(&DAT_1005537a8,&DAT_1004333b0);
    iVar2 = *(int *)(puVar10 + 0x24);
    (*pcVar26)((long)puVar22 + (long)iVar2,uVar1,lVar20);
    puVar10 = &DAT_10054a660;
    FUN_100002f94(&DAT_10054a660,&DAT_10041d1f0);
    *(undefined2 *)((long)puVar22 + (long)iVar2 + (long)*(int *)(puVar10 + 0x24)) = 0x100;
    CVar13 = SwiftUI::Capsule::typeMetadataAccessor();
    puVar10 = PTR_typeMetadataAccessor_100523540;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(CVar13.unknown + -8) + 0x40));
    puVar25 = (undefined *)((long)puVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    CVar14.unknown = puVar25;
    (*pcVar26)(puVar25,uVar1,lVar20);
    CVar14 = SwiftUI::Color::get_white(CVar14);
    CVar15 = SwiftUI::Color::opacity(0.14,CVar14);
    _swift_release(CVar14.unknown);
    SwiftUI::StrokeStyle::init
              (local_100 + 3,0x3ff0000000000000,0x4024000000000000,0,CVar15.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    lVar18 = (long)puVar22 + (long)*(int *)(puVar9 + 0x24);
    FUN_100029504(puVar25,lVar18,puVar10);
    puVar9 = &DAT_10054a698;
    FUN_100002f94(&DAT_10054a698,&DAT_10041b660);
    puVar19 = (undefined8 *)(lVar18 + *(int *)(puVar9 + 0x24));
    puVar19[1] = local_100[4];
    *puVar19 = local_100[3];
    puVar19[3] = stack0xffffffffffffff30;
    puVar19[2] = local_d8;
    puVar19[4] = auStack_cf._7_8_;
    AVar17.unknown = &DAT_10054a6a0;
    puVar9 = &DAT_10041c350;
    FUN_100002f94();
    *(undefined **)(lVar18 + *(int *)(AVar17.unknown + 0x34)) = CVar15.unknown;
    *(undefined2 *)(lVar18 + *(int *)(AVar17.unknown + 0x38)) = 0x100;
    AVar16 = SwiftUI::Alignment::get_center(AVar17);
    FUN_100029548(puVar25,puVar10);
    AVar17.unknown = &DAT_10054a6a8;
    puVar10 = &DAT_10041b670;
    FUN_100002f94();
    iVar2 = *(int *)(AVar17.unknown + 0x24);
    *(undefined8 *)(lVar18 + iVar2) = AVar16.unknown;
    ((undefined8 *)(lVar18 + iVar2))[1] = puVar9;
    AVar17 = SwiftUI::Alignment::get_center(AVar17);
    puVar9 = &DAT_10054a668;
    FUN_100002f94(&DAT_10054a668,&DAT_10041b650);
    iVar2 = *(int *)(puVar9 + 0x24);
    *(undefined8 *)(lVar18 + iVar2) = AVar17.unknown;
    ((undefined8 *)(lVar18 + iVar2))[1] = puVar10;
    puVar9 = &DAT_10055dc58;
    FUN_100002f94(&DAT_10055dc58,&DAT_1004333e8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = (long)puVar22 - extraout_x8_05;
    FUN_1000087e4(puVar22,lVar18,&DAT_100553798,&DAT_1004267d0);
    _swift_storeEnumTagMultiPayload(lVar18,puVar9,1);
    FUN_1001228dc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar18);
    FUN_10002a29c(puVar22,&DAT_100553798,&DAT_1004267d0);
  }
  else {
    puVar9 = &DAT_10055dc60;
    FUN_100002f94(&DAT_10055dc60,&DAT_1004333f0);
    local_120[3] = *(long *)(puVar9 + -8);
    local_120[1] = *(undefined8 *)(local_120[3] + 0x40);
    local_100[0] = puVar9;
    local_100[2] = (undefined *)&local_140;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_120[2] = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar23 = (long)&local_140 - local_120[2];
    puVar9 = &DAT_1005537c8;
    FUN_100002f94(&DAT_1005537c8,&DAT_1004333c0);
    local_138[2] = puVar9;
    local_120[0] = lVar23;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined8 *)(lVar23 - extraout_x8);
    iVar2 = *(int *)(puVar9 + 0x24);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar18 = CONCAT71((int7)((ulong)puVar9 >> 8),RVar4.value);
    (**(code **)(*(long *)(lVar18 + -8) + 0x68))((long)puVar19 + (long)iVar2,uVar1,lVar18);
    puVar9 = &DAT_10054a650;
    FUN_100002f94(&DAT_10054a650,&DAT_10041d1e0);
    *(undefined1 *)((long)puVar19 + (long)iVar2 + (long)*(int *)(puVar9 + 0x24)) = 0;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x58);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x50);
    puVar19[9] = *(undefined8 *)((long)unaff_x20.unknown + 0x48);
    puVar19[8] = uVar27;
    puVar19[0xb] = uVar29;
    puVar19[10] = uVar28;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x60);
    puVar19[0xd] = *(undefined8 *)((long)unaff_x20.unknown + 0x68);
    puVar19[0xc] = uVar27;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x69);
    *(undefined8 *)((long)puVar19 + 0x71) = *(undefined8 *)((long)unaff_x20.unknown + 0x71);
    *(undefined8 *)((long)puVar19 + 0x69) = uVar27;
    uVar27 = *(undefined8 *)unaff_x20.unknown;
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
    puVar19[1] = *(undefined8 *)((long)unaff_x20.unknown + 8);
    *puVar19 = uVar27;
    puVar19[3] = uVar29;
    puVar19[2] = uVar28;
    uVar27 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
    uVar29 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
    uVar28 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
    puVar19[5] = *(undefined8 *)((long)unaff_x20.unknown + 0x28);
    puVar19[4] = uVar27;
    puVar19[7] = uVar29;
    puVar19[6] = uVar28;
    local_138[0] = (undefined *)SwiftUI::Glass::typeMetadataAccessor();
    lVar20 = *(long *)(local_138[0] + -8);
    local_138[1] = (undefined *)puVar19;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
    lVar18 = (long)puVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    FUN_1000087e4();
    SwiftUI::Glass::get_regular(unaff_x20);
    DVar5 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    lVar21 = *(long *)(DVar5.unknown + -8);
    local_140 = lVar18;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
    lVar24 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    DVar6 = SwiftUI::DefaultGlassEffectShape::init();
    FUN_100122aa4();
    puVar25 = DVar6.unknown;
    FUN_100009808();
    puVar9 = local_138[2];
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar23,lVar18,lVar24,local_138[2],DVar5.unknown,DVar6.unknown,puVar25);
    (**(code **)(lVar21 + 8))(lVar24,DVar5.unknown);
    (**(code **)(lVar20 + 8))(lVar18,local_138[0]);
    FUN_10002a29c(puVar19,&DAT_1005537c8,&DAT_1004333c0);
    lVar18 = local_120[0];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar10 = local_100[0];
    lVar20 = local_120[3];
    (**(code **)(local_120[3] + 0x10))(lVar18 - local_120[2],lVar23,local_100[0]);
    local_100[3] = puVar9;
    ppuVar7 = local_100 + 3;
    local_100[4] = DVar5.unknown;
    local_d8 = (undefined1  [8])DVar6.unknown;
    unique0x10000cdd = puVar25;
    _swift_getOpaqueTypeConformance2
              (ppuVar7,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar8 = SwiftUI::AnyView::_init(ppuVar7,puVar10,ppuVar7);
    puVar9 = &DAT_10055dc58;
    FUN_100002f94(&DAT_10055dc58,&DAT_1004333e8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined8 *)(lVar18 - extraout_x8_02);
    *puVar19 = AVar8.unknown;
    _swift_storeEnumTagMultiPayload(puVar19);
    FUN_100002f94(&DAT_100553798,&DAT_1004267d0);
    FUN_1001228dc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar19);
    (**(code **)(lVar20 + 8))(lVar23,puVar10);
  }
  return;
}

