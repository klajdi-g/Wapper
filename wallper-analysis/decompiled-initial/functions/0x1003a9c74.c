// rea decompile_all
// name: FUN_1003a9c74
// address: 0x1003a9c74
// body: available
// range: 0x1003a9c74-0x1003aac1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003a9efc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003a9c74(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  ToolbarSpacer TVar8;
  SpacerSizing SVar9;
  ToolbarItemPlacement TVar10;
  undefined **ppuVar11;
  LimitedAvailabilityToolbarContent LVar12;
  undefined *puVar13;
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
  ulong uVar14;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar15;
  SpacerSizing SVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ToolbarContentBuilder TVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long alStack_140 [2];
  undefined *local_130;
  ulong local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  long local_108;
  ulong local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  
  puVar20 = &DAT_10055f910;
  local_c0 = param_2;
  local_b8 = param_1;
  FUN_100002f94(&DAT_10055f910,&DAT_1004351c0);
  lVar22 = *(long *)(*(long *)(puVar20 + -8) + 0x40);
  puVar15 = (undefined *)(lVar22 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = (long)alStack_140 - (long)puVar15;
  bVar7 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  puVar27 = 
  PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
  ;
  uVar18 = CONCAT71((int7)((ulong)puVar20 >> 8),bVar7);
  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,(int)uVar18);
  local_90 = lVar25;
  local_88 = lVar22;
  if ((bVar7 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (undefined *)(lVar25 - (long)puVar15);
    puVar20 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    (**(code **)(*(long *)(puVar20 + -8) + 0x38))(TVar24.unknown,1,1,puVar20);
    _swift_getOpaqueTypeConformance2();
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
  }
  else {
    TVar8 = SwiftUI::ToolbarSpacer::typeMetadataAccessor();
    local_98 = *(undefined **)(TVar8.unknown + -8);
    local_a0 = lVar25;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_98 + 0x40));
    lVar25 = lVar25 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    SVar9 = SwiftUI::SpacerSizing::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar9.unknown + -8) + 0x40))
    ;
    SVar16.unknown = (undefined *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    local_b0 = puVar15;
    SwiftUI::SpacerSizing::get_fixed(SVar9);
    TVar10 = SwiftUI::ToolbarItemPlacement::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(TVar10.unknown + -8) + 0x40));
    SwiftUI::ToolbarItemPlacement::get_primaryAction(TVar10);
    local_c8 = lVar25;
    SwiftUI::ToolbarSpacer::init
              (SVar16,(ToolbarItemPlacement)
                      (SVar16.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
    puVar20 = &DAT_10055f960;
    FUN_100002f94(&DAT_10055f960,&DAT_1004351f8);
    lVar17 = *(long *)(puVar20 + -8);
    lVar22 = *(long *)(lVar17 + 0x40);
    local_e8 = puVar20;
    local_a8 = lVar25;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar18 = lVar22 + 0xfU & 0xfffffffffffffff0;
    lVar21 = lVar25 - uVar18;
    local_d8 = TVar8.unknown;
    SwiftUI::ToolbarContentBuilder::_buildBlock(lVar21,lVar25,TVar8.unknown,puVar27);
    puVar20 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    lVar26 = *(long *)(puVar20 + -8);
    local_d0 = lVar21;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar23 = (undefined8 *)(lVar21 - extraout_x8_02);
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar27 = local_e8;
    (**(code **)(lVar17 + 0x10))((long)puVar23 - uVar18,lVar21,local_e8);
    local_78 = 
    PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
    ;
    ppuVar11 = &local_80;
    local_80 = TVar8.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_static_SwiftUI_ToolbarContentBuilder_buildBlock<A_where_A:_SwiftUI_CustomizableToolbarContent>(A)__>_some>>_100522938
               ,1);
    LVar12 = SwiftUI::LimitedAvailabilityToolbarContent::_init(ppuVar11,puVar27,ppuVar11[1]);
    *puVar23 = LVar12.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (long)puVar23 - local_b0;
    (**(code **)(lVar26 + 0x10))(TVar24.unknown,puVar23,puVar20);
    (**(code **)(lVar26 + 0x38))(TVar24.unknown,0,1,puVar20);
    _swift_getOpaqueTypeConformance2();
    lVar25 = local_a0;
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    uVar18 = (ulong)local_e0 & 0xffffffff;
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
    lVar22 = local_88;
    (**(code **)(lVar26 + 8))(puVar23,puVar20);
    (**(code **)(lVar17 + 8))(lVar21,puVar27);
    (**(code **)((long)local_98 + 8))(local_c8,local_d8);
  }
  puVar20 = &DAT_10055f920;
  FUN_100002f94(&DAT_10055f920,&DAT_1004351d0);
  local_a0 = *(long *)(puVar20 + -8);
  local_c8 = lVar25;
  local_98 = puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar25 - extraout_x8_03;
  TVar10 = SwiftUI::ToolbarItemPlacement::typeMetadataAccessor();
  puVar27 = *(undefined **)(*(long *)(TVar10.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar19 = (long)puVar27 + 0xfU & 0xfffffffffffffff0;
  SwiftUI::ToolbarItemPlacement::get_primaryAction(TVar10);
  FUN_1003b0fb0();
  local_a8 = lVar25;
  (extension_SwiftUI)::SwiftUI::ToolbarItem::_init((undefined *)(lVar25 - uVar19));
  local_d0 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar14 = lVar22 + 0xfU & 0xfffffffffffffff0;
  puVar20 = (undefined *)(lVar25 - uVar14);
  local_e8 = puVar27;
  local_d8 = puVar20;
  if ((uVar18 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (undefined *)((long)puVar20 - extraout_x12);
    puVar15 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    (**(code **)(*(long *)(puVar15 + -8) + 0x38))(TVar24.unknown,1,1,puVar15);
    _swift_getOpaqueTypeConformance2();
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
  }
  else {
    local_100 = uVar14;
    local_b0 = (undefined *)SwiftUI::ToolbarSpacer::typeMetadataAccessor();
    local_f0 = *(long *)(local_b0 + -8);
    local_f8 = puVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
    lVar17 = (long)puVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
    SVar9 = SwiftUI::SpacerSizing::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar9.unknown + -8) + 0x40))
    ;
    SVar16.unknown = (undefined *)(lVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
    TVar10.unknown = (undefined *)SwiftUI::SpacerSizing::get_fixed(SVar9);
    (*(code *)PTR____chkstk_darwin_100521118)();
    SwiftUI::ToolbarItemPlacement::get_primaryAction(TVar10);
    local_110 = lVar17;
    SwiftUI::ToolbarSpacer::init(SVar16,(ToolbarItemPlacement)(SVar16.unknown + -uVar19));
    puVar20 = &DAT_10055f960;
    FUN_100002f94(&DAT_10055f960,&DAT_1004351f8);
    lVar25 = *(long *)(puVar20 + -8);
    lVar22 = *(long *)(lVar25 + 0x40);
    local_120 = puVar20;
    local_108 = lVar17;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar20 = local_b0;
    uVar18 = lVar22 + 0xfU & 0xfffffffffffffff0;
    lVar21 = lVar17 - uVar18;
    SwiftUI::ToolbarContentBuilder::_buildBlock
              (lVar21,lVar17,local_b0,
               PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
              );
    puVar27 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    lVar17 = *(long *)(puVar27 + -8);
    local_118 = lVar21;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar23 = (undefined8 *)(lVar21 - extraout_x8_06);
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar15 = local_120;
    (**(code **)(lVar25 + 0x10))((long)puVar23 - uVar18,lVar21,local_120);
    local_80 = puVar20;
    local_78 = 
    PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
    ;
    ppuVar11 = &local_80;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_static_SwiftUI_ToolbarContentBuilder_buildBlock<A_where_A:_SwiftUI_CustomizableToolbarContent>(A)__>_some>>_100522938
               ,1);
    LVar12 = SwiftUI::LimitedAvailabilityToolbarContent::_init(ppuVar11,puVar15,ppuVar11[1]);
    *puVar23 = LVar12.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (undefined *)((long)puVar23 - local_100);
    (**(code **)(lVar17 + 0x10))(TVar24.unknown,puVar23,puVar27);
    (**(code **)(lVar17 + 0x38))(TVar24.unknown,0,1,puVar27);
    _swift_getOpaqueTypeConformance2();
    puVar20 = local_f8;
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    uVar18 = (ulong)local_e0 & 0xffffffff;
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
    lVar22 = local_88;
    (**(code **)(lVar17 + 8))(puVar23,puVar27);
    (**(code **)(lVar25 + 8))(lVar21,puVar15);
    (**(code **)(local_f0 + 8))(local_110,local_b0);
    puVar27 = local_e8;
  }
  TVar10.unknown = &DAT_10055f930;
  FUN_100002f94(&DAT_10055f930,&DAT_1004351d8);
  local_100 = *(ulong *)(TVar10.unknown + -8);
  local_f8 = TVar10.unknown;
  local_f0 = (long)puVar20;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = (long)puVar20 - extraout_x8_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar19 = (long)puVar27 + 0xfU & 0xfffffffffffffff0;
  SwiftUI::ToolbarItemPlacement::get_primaryAction(TVar10);
  FUN_100002f94(&DAT_10055f938,&DAT_1004351e0);
  FUN_1000087a0(&DAT_10055f940,&DAT_10055f938,&DAT_1004351e0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_108 = lVar25;
  SwiftUI::ToolbarItemGroup::_init((undefined *)(lVar25 - uVar19));
  local_110 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar14 = lVar22 + 0xfU & 0xfffffffffffffff0;
  lVar25 = lVar25 - uVar14;
  local_b0 = (undefined *)lVar25;
  if ((uVar18 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (undefined *)(lVar25 - extraout_x12_00);
    puVar20 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    (**(code **)(*(long *)(puVar20 + -8) + 0x38))(TVar24.unknown,1,1,puVar20);
    _swift_getOpaqueTypeConformance2();
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
  }
  else {
    local_128 = uVar14;
    TVar8 = SwiftUI::ToolbarSpacer::typeMetadataAccessor();
    local_e0 = *(undefined **)(TVar8.unknown + -8);
    local_118 = lVar25;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_e0 + 0x40));
    puVar27 = (undefined *)(lVar25 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
    SVar9 = SwiftUI::SpacerSizing::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar9.unknown + -8) + 0x40))
    ;
    TVar10.unknown = (undefined *)SwiftUI::SpacerSizing::get_fixed(SVar9);
    (*(code *)PTR____chkstk_darwin_100521118)();
    SwiftUI::ToolbarItemPlacement::get_primaryAction(TVar10);
    local_130 = puVar27;
    SwiftUI::ToolbarSpacer::init
              ((SpacerSizing)(puVar27 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0)),
               (ToolbarItemPlacement)
               (puVar27 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0) + -uVar19));
    puVar20 = &DAT_10055f960;
    FUN_100002f94(&DAT_10055f960,&DAT_1004351f8);
    lVar22 = *(long *)(puVar20 + -8);
    lVar25 = *(long *)(lVar22 + 0x40);
    local_120 = puVar27;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar18 = lVar25 + 0xfU & 0xfffffffffffffff0;
    lVar17 = (long)puVar27 - uVar18;
    SwiftUI::ToolbarContentBuilder::_buildBlock
              (lVar17,puVar27,TVar8.unknown,
               PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
              );
    puVar15 = &DAT_10055f918;
    FUN_100002f94(&DAT_10055f918,&DAT_1004351c8);
    lVar21 = *(long *)(puVar15 + -8);
    alStack_140[1] = lVar17;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar23 = (undefined8 *)(lVar17 - extraout_x8_10);
    (*(code *)PTR____chkstk_darwin_100521118)();
    (**(code **)(lVar22 + 0x10))((long)puVar23 - uVar18,lVar17,puVar20);
    local_78 = 
    PTR___protocol_witness_table_for_SwiftUI_ToolbarSpacer___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100521fb8
    ;
    ppuVar11 = &local_80;
    local_80 = TVar8.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_static_SwiftUI_ToolbarContentBuilder_buildBlock<A_where_A:_SwiftUI_CustomizableToolbarContent>(A)__>_some>>_100522938
               ,1);
    LVar12 = SwiftUI::LimitedAvailabilityToolbarContent::_init(ppuVar11,puVar20,ppuVar11[1]);
    *puVar23 = LVar12.unknown;
    (*(code *)PTR____chkstk_darwin_100521118)();
    TVar24.unknown = (undefined *)((long)puVar23 - local_128);
    (**(code **)(lVar21 + 0x10))(TVar24.unknown,puVar23,puVar15);
    (**(code **)(lVar21 + 0x38))(TVar24.unknown,0,1,puVar15);
    _swift_getOpaqueTypeConformance2();
    SwiftUI::ToolbarContentBuilder::_buildIf(TVar24);
    lVar25 = local_118;
    FUN_10002a29c(TVar24.unknown,&DAT_10055f910,&DAT_1004351c0);
    puVar27 = local_e8;
    (**(code **)(lVar21 + 8))(puVar23,puVar15);
    (**(code **)(lVar22 + 8))(lVar17,puVar20);
    (**(code **)((long)local_e0 + 8))(local_130,TVar8.unknown);
  }
  TVar10.unknown = &DAT_10055f948;
  FUN_100002f94(&DAT_10055f948,&DAT_1004351e8);
  local_118 = *(long *)(TVar10.unknown + -8);
  local_e0 = TVar10.unknown;
  local_88 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar25 - extraout_x8_11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  SwiftUI::ToolbarItemPlacement::get_secondaryAction(TVar10);
  local_70 = local_c0;
  FUN_1003b0ff8();
  (extension_SwiftUI)::SwiftUI::ToolbarItem::_init
            ((undefined *)(lVar25 - ((long)puVar27 + 0xfU & 0xfffffffffffffff0)));
  puVar20 = &DAT_10055f958;
  FUN_100002f94(&DAT_10055f958,&DAT_1004351f0);
  puVar13 = puVar20;
  local_c0 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar25 - extraout_x8_12;
  iVar1 = *(int *)(puVar13 + 0x30);
  iVar2 = *(int *)(puVar13 + 0x40);
  iVar3 = *(int *)(puVar13 + 0x50);
  iVar4 = *(int *)(puVar13 + 0x60);
  local_e8 = (undefined *)(long)*(int *)(puVar13 + 0x70);
  FUN_1000087e4(local_90,lVar21,&DAT_10055f910,&DAT_1004351c0);
  (**(code **)(local_a0 + 0x10))(lVar21 + iVar1,local_a8,local_98);
  puVar5 = local_d8;
  FUN_1000087e4(local_d8,lVar21 + iVar2,&DAT_10055f910,&DAT_1004351c0);
  puVar27 = local_f8;
  uVar18 = local_100;
  lVar17 = local_108;
  (**(code **)(local_100 + 0x10))(lVar21 + iVar3,local_108,local_f8);
  puVar6 = local_b0;
  FUN_1000087e4(local_b0,lVar21 + iVar4,&DAT_10055f910,&DAT_1004351c0);
  puVar15 = local_e0;
  lVar22 = local_118;
  (**(code **)(local_118 + 0x10))(lVar21 + (long)local_e8,lVar25,local_e0);
  SwiftUI::TupleToolbarContent::init(local_b8,puVar13,puVar20);
  (**(code **)(lVar22 + 8))(lVar25,puVar15);
  FUN_10002a29c(puVar6,&DAT_10055f910,&DAT_1004351c0);
  (**(code **)(uVar18 + 8))(lVar17,puVar27);
  FUN_10002a29c(puVar5,&DAT_10055f910,&DAT_1004351c0);
  (**(code **)(local_a0 + 8))(local_a8,local_98);
  FUN_10002a29c(local_90,&DAT_10055f910,&DAT_1004351c0);
  return;
}

