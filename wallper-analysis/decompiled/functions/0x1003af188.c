// rea decompile_all
// name: FUN_1003af188
// address: 0x1003af188
// body: available
// range: 0x1003af188-0x1003af49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003af31c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003af188(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  TabBarMinimizeBehavior TVar4;
  TabBarMinimizeBehavior TVar5;
  undefined **ppuVar6;
  AnyView AVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  TabBarMinimizeBehavior TVar14;
  long local_90;
  long local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar3 & 1) == 0) {
    puVar8 = &DAT_10055fb40;
    FUN_100002f94(&DAT_10055fb40,&DAT_1004354e0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar12 = (long)&local_90 - extraout_x8_01;
    puVar9 = &DAT_10055fb48;
    FUN_100002f94(&DAT_10055fb48,&DAT_1004354e8);
    (**(code **)(*(long *)(puVar9 + -8) + 0x10))(lVar12,param_2,puVar9);
    _swift_storeEnumTagMultiPayload(lVar12,puVar8,1);
    FUN_1000087a0(&DAT_10055fb50,&DAT_10055fb48,&DAT_1004354e8,
                  PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100522988);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar12);
  }
  else {
    puVar8 = &DAT_10055fb58;
    FUN_100002f94(&DAT_10055fb58,&DAT_1004354f0);
    local_88 = *(long *)(puVar8 + -8);
    lVar12 = *(long *)(local_88 + 0x40);
    puStack_80 = puVar8;
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar10 = lVar12 + 0xfU & 0xfffffffffffffff0;
    lVar11 = (long)&local_90 - uVar10;
    local_78 = param_1;
    TVar4 = SwiftUI::TabBarMinimizeBehavior::typeMetadataAccessor();
    lVar12 = *(long *)(TVar4.unknown + -8);
    TVar5 = TVar4;
    local_90 = lVar11;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
    TVar14.unknown = (undefined *)(lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SwiftUI::TabBarMinimizeBehavior::get_automatic(TVar5);
    puVar8 = &DAT_10055fb48;
    FUN_100002f94(&DAT_10055fb48,&DAT_1004354e8);
    puVar9 = &DAT_10055fb50;
    FUN_1000087a0(&DAT_10055fb50,&DAT_10055fb48,&DAT_1004354e8,
                  PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100522988);
    (extension_SwiftUI)::SwiftUI::View::_tabBarMinimizeBehavior(TVar14);
    (**(code **)(lVar12 + 8))(TVar14.unknown,TVar4.unknown);
    lVar12 = local_90;
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar2 = puStack_80;
    lVar1 = local_88;
    (**(code **)(local_88 + 0x10))(lVar12 - uVar10,lVar11,puStack_80);
    ppuVar6 = &local_70;
    local_70 = puVar8;
    puStack_68 = puVar9;
    _swift_getOpaqueTypeConformance2
              (ppuVar6,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_tabBarMinimizeBehavior(SwiftUI_TabBarMinimizeBehavior)__>_some>>_100523030
               ,1);
    AVar7 = SwiftUI::AnyView::_init(ppuVar6,puVar2,ppuVar6);
    puVar8 = &DAT_10055fb40;
    FUN_100002f94(&DAT_10055fb40,&DAT_1004354e0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar13 = (undefined8 *)(lVar12 - extraout_x8_00);
    *puVar13 = AVar7.unknown;
    _swift_storeEnumTagMultiPayload(puVar13);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
    (**(code **)(lVar1 + 8))(lVar11,puVar2);
  }
  return;
}

