// rea decompile_all
// name: FUN_1000d911c
// address: 0x1000d911c
// body: available
// range: 0x1000d911c-0x1000d98af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d96ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d911c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  byte bVar5;
  RoundedCornerStyle RVar6;
  RoundedRectangle RVar7;
  Glass GVar8;
  Glass GVar9;
  undefined **ppuVar10;
  AnyView AVar11;
  undefined *puVar12;
  undefined *puVar13;
  Material MVar14;
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
  undefined8 *puVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined8 *apuStack_f0 [2];
  long local_e0 [6];
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  local_a8 = param_1;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar5 & 1) == 0) {
    puVar12 = &DAT_100551b58;
    FUN_100002f94(&DAT_100551b58,&DAT_100430810);
    local_a0 = (undefined1 *)apuStack_f0;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = (long)apuStack_f0 - extraout_x8_03;
    puVar13 = &DAT_100551b60;
    FUN_100002f94(&DAT_100551b60,&DAT_100423a18);
    puVar23 = (undefined8 *)(lVar20 + *(int *)(puVar13 + 0x24));
    RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar3 = *(int *)(RVar7.unknown + 0x14);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar24 = CONCAT71((int7)((ulong)RVar7.unknown >> 8),RVar6.value);
    pcVar21 = *(code **)(*(long *)(lVar24 + -8) + 0x68);
    (*pcVar21)((long)puVar23 + (long)iVar3,uVar2,lVar24);
    *puVar23 = param_2;
    puVar23[1] = param_2;
    puVar13 = &DAT_10054ad40;
    FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
    *(undefined1 *)((long)puVar23 + (long)*(int *)(puVar13 + 0x24)) = 0;
    puVar13 = &DAT_100551b68;
    FUN_100002f94(&DAT_100551b68,&DAT_1004307d0);
    (**(code **)(*(long *)(puVar13 + -8) + 0x10))(lVar20);
    puVar23 = (undefined8 *)(lVar20 + *(int *)(puVar12 + 0x24));
    (*pcVar21)((long)puVar23 + (long)*(int *)(RVar7.unknown + 0x14),uVar2,lVar24);
    *puVar23 = param_2;
    puVar23[1] = param_2;
    MVar14.unknown = &DAT_10054b148;
    FUN_100002f94(&DAT_10054b148,&DAT_10041c380);
    SwiftUI::Material::get_ultraThin(MVar14);
    *(undefined2 *)((long)puVar23 + (long)*(int *)(MVar14.unknown + 0x38)) = 0x100;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40))
    ;
    puVar19 = (undefined8 *)(lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
    CVar15.unknown = (undefined *)((long)puVar19 + (long)*(int *)(RVar7.unknown + 0x14));
    (*pcVar21)(CVar15.unknown,uVar2,lVar24);
    *puVar19 = param_2;
    puVar19[1] = param_2;
    CVar15 = SwiftUI::Color::get_white(CVar15);
    CVar16 = SwiftUI::Color::opacity(0.1,CVar15);
    _swift_release(CVar15.unknown);
    SwiftUI::StrokeStyle::init
              (&local_98,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
               PTR___swiftEmptyArrayStorage_100524190);
    puVar12 = &DAT_100551768;
    FUN_100002f94(&DAT_100551768,&DAT_1004235e0);
    puVar13 = PTR_typeMetadataAccessor_1005223a8;
    lVar24 = (long)puVar23 + (long)*(int *)(puVar12 + 0x24);
    FUN_100029504(puVar19,lVar24,PTR_typeMetadataAccessor_1005223a8);
    puVar12 = &DAT_10054b170;
    FUN_100002f94(&DAT_10054b170,&DAT_100430890);
    puVar1 = (undefined8 *)(lVar24 + *(int *)(puVar12 + 0x24));
    puVar1[1] = puStack_90;
    *puVar1 = local_98;
    puVar1[3] = puStack_80;
    puVar1[2] = local_88;
    puVar1[4] = local_78;
    AVar18.unknown = &DAT_10054b178;
    puVar12 = &DAT_10041c3b0;
    FUN_100002f94();
    *(undefined **)(lVar24 + *(int *)(AVar18.unknown + 0x34)) = CVar16.unknown;
    *(undefined2 *)(lVar24 + *(int *)(AVar18.unknown + 0x38)) = 0x100;
    AVar17 = SwiftUI::Alignment::get_center(AVar18);
    FUN_100029548(puVar19,puVar13);
    AVar18.unknown = &DAT_10054b180;
    puVar13 = &DAT_1004308a0;
    FUN_100002f94();
    iVar3 = *(int *)(AVar18.unknown + 0x24);
    *(undefined8 *)(lVar24 + iVar3) = AVar17.unknown;
    ((undefined8 *)(lVar24 + iVar3))[1] = puVar12;
    AVar17 = SwiftUI::Alignment::get_center(AVar18);
    AVar18.unknown = &DAT_10054b188;
    puVar12 = &DAT_10041c3c0;
    FUN_100002f94();
    iVar3 = *(int *)(AVar18.unknown + 0x24);
    *(undefined8 *)(lVar24 + iVar3) = AVar17.unknown;
    ((undefined8 *)(lVar24 + iVar3))[1] = puVar13;
    AVar18 = SwiftUI::Alignment::get_center(AVar18);
    puVar13 = &DAT_10054ad50;
    FUN_100002f94(&DAT_10054ad50,&DAT_10041c020);
    iVar3 = *(int *)(puVar13 + 0x24);
    *(undefined8 *)((long)puVar23 + (long)iVar3) = AVar18.unknown;
    ((undefined8 *)((long)puVar23 + (long)iVar3))[1] = puVar12;
    puVar12 = &DAT_100551b70;
    FUN_100002f94(&DAT_100551b70,&DAT_100423a20);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar24 = lVar20 - extraout_x8_05;
    FUN_1000087e4(lVar20,lVar24,&DAT_100551b58,&DAT_100430810);
    _swift_storeEnumTagMultiPayload(lVar24,puVar12,1);
    FUN_1000e2d54();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar24);
    FUN_10002a29c(lVar20,&DAT_100551b58,&DAT_100430810);
  }
  else {
    puVar12 = &DAT_100551b90;
    FUN_100002f94(&DAT_100551b90,&DAT_100423a28);
    local_e0[5] = *(long *)(puVar12 + -8);
    local_e0[3] = *(undefined8 *)(local_e0[5] + 0x40);
    local_b0 = puVar12;
    local_a0 = (undefined1 *)apuStack_f0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_e0[4] = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar20 = (long)apuStack_f0 - local_e0[4];
    puVar12 = &DAT_100551b60;
    local_e0[1] = lVar20;
    FUN_100002f94(&DAT_100551b60,&DAT_100423a18);
    puVar13 = puVar12;
    local_e0[2] = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar20 - extraout_x8;
    puVar23 = (undefined8 *)(lVar20 + *(int *)(puVar13 + 0x24));
    RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar3 = *(int *)(RVar7.unknown + 0x14);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    lVar24 = CONCAT71((int7)((ulong)RVar7.unknown >> 8),RVar6.value);
    pcVar21 = *(code **)(*(long *)(lVar24 + -8) + 0x68);
    (*pcVar21)((long)puVar23 + (long)iVar3,uVar2,lVar24);
    *puVar23 = param_2;
    puVar23[1] = param_2;
    puVar13 = &DAT_10054ad40;
    FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
    *(undefined1 *)((long)puVar23 + (long)*(int *)(puVar13 + 0x24)) = 0;
    puVar13 = &DAT_100551b68;
    FUN_100002f94(&DAT_100551b68,&DAT_1004307d0);
    (**(code **)(*(long *)(puVar13 + -8) + 0x10))(lVar20);
    local_e0[0] = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40))
    ;
    puVar23 = (undefined8 *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (*pcVar21)((long)puVar23 + (long)*(int *)(RVar7.unknown + 0x14),uVar2,lVar24);
    *puVar23 = param_2;
    puVar23[1] = param_2;
    GVar8 = SwiftUI::Glass::typeMetadataAccessor();
    lVar22 = *(long *)(GVar8.unknown + -8);
    GVar9 = GVar8;
    apuStack_f0[1] = puVar23;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar22 + 0x40));
    lVar25 = (long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    GVar9 = SwiftUI::Glass::get_regular(GVar9);
    FUN_1000e2dec();
    puVar13 = &DAT_100551798;
    FUN_1000036d0(&DAT_100551798,PTR_typeMetadataAccessor_1005223a8,
                  PTR_SwiftUI__SwiftUI__RoundedRectangle_>SwiftUI__Shape_1005223a0);
    lVar24 = local_e0[1];
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (local_e0[1],lVar25,puVar23,puVar12,RVar7.unknown,GVar9.unknown,puVar13);
    (**(code **)(lVar22 + 8))(lVar25,GVar8.unknown);
    FUN_100029548(puVar23,PTR_typeMetadataAccessor_1005223a8);
    FUN_10002a29c(lVar20,&DAT_100551b60,&DAT_100423a18);
    lVar20 = local_e0[2];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar4 = local_b0;
    lVar22 = local_e0[5];
    (**(code **)(local_e0[5] + 0x10))(lVar20 - local_e0[4],lVar24,local_b0);
    ppuVar10 = &local_98;
    local_98 = puVar12;
    puStack_90 = RVar7.unknown;
    local_88 = GVar9.unknown;
    puStack_80 = puVar13;
    _swift_getOpaqueTypeConformance2
              (ppuVar10,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar11 = SwiftUI::AnyView::_init(ppuVar10,puVar4,ppuVar10);
    puVar12 = &DAT_100551b70;
    FUN_100002f94(&DAT_100551b70,&DAT_100423a20);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar23 = (undefined8 *)(lVar20 - extraout_x8_02);
    *puVar23 = AVar11.unknown;
    _swift_storeEnumTagMultiPayload(puVar23);
    FUN_100002f94(&DAT_100551b58,&DAT_100430810);
    FUN_1000e2d54();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar23);
    (**(code **)(lVar22 + 8))(lVar24,puVar4);
  }
  return;
}

