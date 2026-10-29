// rea decompile_all
// name: FUN_10033fd78
// address: 0x10033fd78
// body: available
// range: 0x10033fd78-0x100340257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010034018c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033fd78(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  Design DVar2;
  OpacityTransition OVar3;
  ScaleTransition SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Image IVar7;
  Font FVar9;
  Color CVar10;
  Color CVar11;
  Set SVar12;
  UnitPoint UVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  AnyTransition AVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x12;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  String systemName;
  undefined1 auStack_160 [8];
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long lVar8;
  
  OVar3 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_138 = *(long *)(OVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  puVar18 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar4 = SwiftUI::ScaleTransition::typeMetadataAccessor();
  local_140 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar20 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054b370;
  FUN_100002f94(&DAT_10054b370,&DAT_10041c6c0);
  lVar19 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_148 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12;
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(param_6 + 1) == '\x01') {
    systemName.bridgeObject = (void *)0xe90000000000006b;
    systemName.str = (char *)0x72616d6b63656863;
    IVar7 = SwiftUI::Image::init(systemName);
    SwiftUI::Font::Weight::get_bold((Weight)IVar7.unknown);
    local_158 = param_1;
    DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)IVar7.unknown >> 8),DVar2.value);
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar17 - extraout_x8_02,1,1,lVar8);
    FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(lVar17 - extraout_x8_02,&DAT_10054a828,&DAT_10041e3c0);
    CVar10.unknown = &DAT_1004324f8;
    _swift_getKeyPath();
    CVar11 = SwiftUI::Color::get_white(CVar10);
    local_150 = lVar19;
    SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
    SwiftUI::_FrameLayout::_init((Alignment)0x403a000000000000);
    lVar19 = local_158;
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    local_130 = IVar7.unknown;
    puStack_128 = CVar10.unknown;
    local_120 = FVar9.unknown;
    puStack_118 = CVar11.unknown;
    local_e0 = IVar7.unknown;
    puStack_d8 = CVar10.unknown;
    puStack_d0 = FVar9.unknown;
    puStack_c8 = CVar11.unknown;
    FUN_10033a994(local_158);
    SVar12.unknown = (undefined *)&local_130;
    FUN_10002a29c(SVar12.unknown,&DAT_10054b1f8,&DAT_1004226d0);
    SVar12 = SwiftUI::Edge::Set::get_all(SVar12);
    uVar21 = 0x4028000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
    UVar13.unknown = &DAT_10055d088;
    FUN_100002f94(&DAT_10055d088,&DAT_100432660);
    puVar1 = (undefined1 *)(lVar19 + *(int *)(UVar13.unknown + 0x24));
    *puVar1 = (char)SVar12.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar21;
    *(undefined **)(puVar1 + 0x10) = IVar7.unknown;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    UVar13 = SwiftUI::UnitPoint::get_center(UVar13);
    SwiftUI::ScaleTransition::init(1e-05,UVar13);
    SwiftUI::OpacityTransition::init();
    puVar6 = &DAT_10054b3e8;
    FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                  PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
    puVar14 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (lVar17,puVar18,SVar4.unknown,OVar3.unknown,puVar6,puVar14);
    (**(code **)(local_138 + 8))(puVar18,OVar3.unknown);
    (**(code **)(local_140 + 8))(lVar20,SVar4.unknown);
    lVar20 = local_150;
    (**(code **)(local_150 + 0x10))(local_148,lVar17,puVar5);
    ppuVar15 = &local_130;
    local_130 = SVar4.unknown;
    puStack_128 = OVar3.unknown;
    local_120 = puVar6;
    puStack_118 = puVar14;
    _swift_getOpaqueTypeConformance2
              (ppuVar15,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar16 = SwiftUI::AnyTransition::_init(ppuVar15,puVar5,ppuVar15);
    (**(code **)(lVar20 + 8))(lVar17,puVar5);
    puVar5 = &DAT_10055d080;
    FUN_100002f94(&DAT_10055d080,&DAT_100432658);
    *(undefined **)(lVar19 + *(int *)(puVar5 + 0x24)) = AVar16.unknown;
    (**(code **)(*(long *)(puVar5 + -8) + 0x38))(lVar19,0,1);
    return;
  }
  puVar5 = &DAT_10055d080;
  FUN_100002f94(&DAT_10055d080,&DAT_100432658);
                    /* WARNING: Could not recover jumptable at 0x000100340254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(param_1,1,1,puVar5);
  return;
}

