// rea decompile_all
// name: FUN_10010ffa4
// address: 0x10010ffa4
// body: available
// range: 0x10010ffa4-0x100110443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011014c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10010ffa4(undefined8 param_1)

{
  undefined *puVar1;
  byte bVar2;
  GlassProminentButtonStyle GVar3;
  undefined **ppuVar4;
  AnyView AVar5;
  BorderedProminentButtonStyle BVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  local_88 = param_1;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    puVar7 = &DAT_100553120;
    FUN_100002f94(&DAT_100553120,&DAT_100425f70);
    local_90 = *(undefined **)(puVar7 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)((long)local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar15 = (long)&local_a0 - extraout_x8_01;
    BVar6 = SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
    puVar11 = PTR_typeMetadataAccessor_100522b90;
    lVar13 = *(long *)(BVar6.unknown + -8);
    local_98 = lVar15;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
    lVar16 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::BorderedProminentButtonStyle::init();
    puVar8 = &DAT_1005530e8;
    FUN_100002f94(&DAT_1005530e8,&DAT_100425f50);
    puVar9 = &DAT_100553110;
    FUN_1000087a0(&DAT_100553110,&DAT_1005530e8,&DAT_100425f50,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar10 = &DAT_100553118;
    FUN_1000036d0(&DAT_100553118,puVar11,
                  PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522b80
                 );
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar15,lVar16,puVar8,BVar6.unknown,puVar9,puVar10);
    (**(code **)(lVar13 + 8))(lVar16,BVar6.unknown);
    lVar13 = local_98;
    puVar11 = &DAT_100553128;
    FUN_100002f94(&DAT_100553128,&DAT_100425f78);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar1 = local_90;
    lVar13 = lVar13 - extraout_x8_03;
    (**(code **)((long)local_90 + 0x10))(lVar13,lVar15,puVar7);
    _swift_storeEnumTagMultiPayload(lVar13,puVar11,1);
    local_80 = puVar8;
    puStack_78 = BVar6.unknown;
    local_70 = puVar9;
    puStack_68 = puVar10;
    _swift_getOpaqueTypeConformance2
              (&local_80,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar13);
    (**(code **)((long)puVar1 + 8))(lVar15,puVar7);
  }
  else {
    puVar7 = &DAT_100553130;
    FUN_100002f94(&DAT_100553130,&DAT_100425f80);
    local_98 = *(long *)(puVar7 + -8);
    lVar13 = *(long *)(local_98 + 0x40);
    local_90 = puVar7;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar12 = lVar13 + 0xfU & 0xfffffffffffffff0;
    lVar16 = (long)&local_a0 - uVar12;
    GVar3 = SwiftUI::GlassProminentButtonStyle::typeMetadataAccessor();
    lVar13 = *(long *)(GVar3.unknown + -8);
    local_a0 = lVar16;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar13 + 0x40));
    lVar15 = lVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::GlassProminentButtonStyle::init();
    puVar7 = &DAT_1005530e8;
    FUN_100002f94(&DAT_1005530e8,&DAT_100425f50);
    puVar8 = &DAT_100553110;
    FUN_1000087a0(&DAT_100553110,&DAT_1005530e8,&DAT_100425f50,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar9 = puVar8;
    FUN_1001128d4();
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar16,lVar15,puVar7,GVar3.unknown,puVar8,puVar9);
    (**(code **)(lVar13 + 8))(lVar15,GVar3.unknown);
    lVar13 = local_a0;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar11 = local_90;
    lVar15 = local_98;
    (**(code **)(local_98 + 0x10))(lVar13 - uVar12,lVar16,local_90);
    puVar10 = 
    PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
    ;
    ppuVar4 = &local_80;
    local_80 = puVar7;
    puStack_78 = GVar3.unknown;
    local_70 = puVar8;
    puStack_68 = puVar9;
    _swift_getOpaqueTypeConformance2
              (ppuVar4,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
               ,1);
    AVar5 = SwiftUI::AnyView::_init(ppuVar4,puVar11,ppuVar4);
    puVar9 = &DAT_100553128;
    FUN_100002f94(&DAT_100553128,&DAT_100425f78);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar14 = (undefined8 *)(lVar13 - extraout_x8_00);
    *puVar14 = AVar5.unknown;
    _swift_storeEnumTagMultiPayload(puVar14);
    FUN_100002f94(&DAT_100553120,&DAT_100425f70);
    BVar6 = SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
    puVar9 = &DAT_100553118;
    FUN_1000036d0(&DAT_100553118,PTR_typeMetadataAccessor_100522b90,
                  PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522b80
                 );
    local_80 = puVar7;
    puStack_78 = BVar6.unknown;
    local_70 = puVar8;
    puStack_68 = puVar9;
    _swift_getOpaqueTypeConformance2(&local_80,puVar10,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    (**(code **)(lVar15 + 8))(lVar16,puVar11);
  }
  return;
}

