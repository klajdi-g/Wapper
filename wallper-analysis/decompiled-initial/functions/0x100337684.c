// rea decompile_all
// name: FUN_100337684
// address: 0x100337684
// body: available
// range: 0x100337684-0x100337cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100337b18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100337684(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  Glass GVar6;
  DefaultGlassEffectShape DVar7;
  DefaultGlassEffectShape DVar8;
  undefined **ppuVar9;
  AnyView AVar10;
  undefined *puVar11;
  undefined *puVar12;
  Material MVar13;
  Set SVar14;
  Color CVar15;
  Color CVar16;
  StrokeStyle SVar17;
  Alignment AVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *local_270;
  long local_268 [2];
  undefined *local_258;
  long local_250 [5];
  undefined1 *local_228 [3];
  undefined1 auStack_210 [88];
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *puStack_190;
  undefined2 local_188;
  undefined6 uStack_186;
  undefined *puStack_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  local_228[2] = (undefined1 *)param_1;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar5 & 1) == 0) {
    puVar11 = &DAT_10054dc60;
    FUN_100002f94(&DAT_10054dc60,&DAT_10041e9f0);
    local_228[1] = (undefined1 *)&local_270;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = (long)&local_270 - extraout_x8_03;
    puVar12 = &DAT_10054dc90;
    FUN_100002f94(&DAT_10054dc90,&DAT_10041ea08);
    *(undefined1 *)(lVar20 + *(int *)(puVar12 + 0x24)) = 0;
    puVar12 = &DAT_10054dbf0;
    FUN_100002f94(&DAT_10054dbf0,&DAT_10041e998);
    (**(code **)(*(long *)(puVar12 + -8) + 0x10))(lVar20);
    MVar13.unknown = &DAT_10054dc80;
    FUN_100002f94(&DAT_10054dc80,&DAT_10041ea00);
    iVar1 = *(int *)(MVar13.unknown + 0x24);
    MVar13 = SwiftUI::Material::get_ultraThin(MVar13);
    SVar14 = SwiftUI::Edge::Set::get_all(MVar13.unknown);
    puVar12 = &DAT_10054a658;
    FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
    *(char *)(lVar20 + iVar1 + (long)*(int *)(puVar12 + 0x24)) = (char)SVar14.unknown;
    CVar15.unknown = &DAT_10054dc70;
    FUN_100002f94(&DAT_10054dc70,&DAT_10041e9f8);
    *(undefined2 *)(lVar20 + *(int *)(CVar15.unknown + 0x24)) = 0x100;
    CVar15 = SwiftUI::Color::get_white(CVar15);
    CVar16 = SwiftUI::Color::opacity(0.14,CVar15);
    _swift_release(CVar15.unknown);
    uVar19 = 0;
    SVar17 = SwiftUI::StrokeStyle::init
                       (&local_1b8,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
                        PTR___swiftEmptyArrayStorage_100524190);
    puStack_180 = (undefined *)SwiftUI::Alignment::get_center(SVar17.unknown);
    local_188 = 0x100;
    puStack_190 = CVar16.unknown;
    local_178 = uVar19;
    AVar18 = SwiftUI::Alignment::get_center((Alignment)puStack_180);
    puVar12 = puStack_180;
    uVar2 = CONCAT62(uStack_186,local_188);
    puStack_148 = puStack_190;
    local_150 = local_198;
    puStack_138 = puStack_180;
    local_130 = local_178;
    uStack_168 = uStack_1b0;
    local_170 = local_1b8;
    uStack_158 = uStack_1a0;
    uStack_160 = local_1a8;
    puStack_98 = puStack_190;
    local_a0 = local_198;
    puStack_88 = puStack_180;
    local_80 = local_178;
    puStack_b8 = (undefined *)uStack_1b0;
    local_c0 = local_1b8;
    puStack_a8 = (undefined *)uStack_1a0;
    local_b0 = (undefined *)local_1a8;
    puStack_f8 = puStack_190;
    local_100 = local_198;
    puStack_e8 = puStack_180;
    uStack_118 = uStack_1b0;
    local_120 = local_1b8;
    uStack_108 = uStack_1a0;
    uStack_110 = local_1a8;
    local_e0 = local_178;
    puVar22 = (undefined8 *)(lVar20 + *(int *)(puVar11 + 0x24));
    uStack_140 = uVar2;
    uStack_f0 = uVar2;
    puStack_d8 = AVar18.unknown;
    local_d0 = uVar19;
    uStack_90 = uVar2;
    puVar22[5] = puStack_190;
    puVar22[4] = local_198;
    puVar22[7] = puVar12;
    puVar22[6] = uVar2;
    uVar2 = local_e0;
    puVar22[9] = puStack_d8;
    puVar22[8] = uVar2;
    puVar22[10] = uVar19;
    uVar4 = uStack_108;
    uVar2 = uStack_110;
    puVar11 = local_120;
    puVar22[1] = uStack_118;
    *puVar22 = puVar11;
    puVar22[3] = uVar4;
    puVar22[2] = uVar2;
    local_78 = AVar18.unknown;
    uStack_70 = uVar19;
    FUN_1000087e4(&local_170,auStack_210,&DAT_10054a798,&DAT_10041f480);
    FUN_1000087e4(&local_120,auStack_210,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_c0,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_1b8,&DAT_10054a798,&DAT_10041f480);
    puVar11 = &DAT_10055d1e8;
    FUN_100002f94(&DAT_10055d1e8,&DAT_100432748);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = lVar20 - extraout_x8_04;
    FUN_1000087e4(lVar20,lVar23,&DAT_10054dc60,&DAT_10041e9f0);
    _swift_storeEnumTagMultiPayload(lVar23,puVar11,1);
    FUN_10005ad2c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar23);
    FUN_10002a29c(lVar20,&DAT_10054dc60,&DAT_10041e9f0);
  }
  else {
    puVar11 = &DAT_10055d1f0;
    FUN_100002f94(&DAT_10055d1f0,&DAT_100432750);
    local_250[4] = *(long *)(puVar11 + -8);
    local_250[2] = *(undefined8 *)(local_250[4] + 0x40);
    local_228[0] = puVar11;
    local_228[1] = (undefined1 *)&local_270;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_250[3] = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar21 = (long)&local_270 - local_250[3];
    puVar11 = &DAT_10054dc90;
    FUN_100002f94(&DAT_10054dc90,&DAT_10041ea08);
    puVar12 = puVar11;
    local_250[1] = lVar21;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar21 - extraout_x8;
    *(undefined1 *)(lVar20 + *(int *)(puVar12 + 0x24)) = 0;
    puVar12 = &DAT_10054dbf0;
    FUN_100002f94(&DAT_10054dbf0,&DAT_10041e998);
    (**(code **)(*(long *)(puVar12 + -8) + 0x10))(lVar20);
    GVar6 = SwiftUI::Glass::typeMetadataAccessor();
    local_268[0] = *(long *)(GVar6.unknown + -8);
    local_258 = GVar6.unknown;
    local_250[0] = lVar20;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_268[0] + 0x40));
    lVar24 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::Glass::get_regular(GVar6);
    DVar7 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    lVar23 = *(long *)(DVar7.unknown + -8);
    local_268[1] = lVar24;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
    lVar25 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    DVar8 = SwiftUI::DefaultGlassEffectShape::init();
    FUN_10005aef4();
    puVar12 = DVar8.unknown;
    local_270 = DVar8.unknown;
    FUN_100009808();
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar21,lVar24,lVar25,puVar11,DVar7.unknown,DVar8.unknown,puVar12);
    (**(code **)(lVar23 + 8))(lVar25,DVar7.unknown);
    (**(code **)(local_268[0] + 8))(lVar24,local_258);
    FUN_10002a29c(lVar20,&DAT_10054dc90,&DAT_10041ea08);
    lVar20 = local_250[1];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar3 = local_228[0];
    lVar23 = local_250[4];
    (**(code **)(local_250[4] + 0x10))(lVar20 - local_250[3],lVar21,local_228[0]);
    local_b0 = local_270;
    ppuVar9 = &local_c0;
    local_c0 = puVar11;
    puStack_b8 = DVar7.unknown;
    puStack_a8 = puVar12;
    _swift_getOpaqueTypeConformance2
              (ppuVar9,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar10 = SwiftUI::AnyView::_init(ppuVar9,puVar3,ppuVar9);
    puVar11 = &DAT_10055d1e8;
    FUN_100002f94(&DAT_10055d1e8,&DAT_100432748);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined8 *)(lVar20 - extraout_x8_02);
    *puVar22 = AVar10.unknown;
    _swift_storeEnumTagMultiPayload(puVar22);
    FUN_100002f94(&DAT_10054dc60,&DAT_10041e9f0);
    FUN_10005ad2c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar22);
    (**(code **)(lVar23 + 8))(lVar21,puVar3);
  }
  return;
}

