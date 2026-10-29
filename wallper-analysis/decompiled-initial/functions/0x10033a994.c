// rea decompile_all
// name: FUN_10033a994
// address: 0x10033a994
// body: available
// range: 0x10033a994-0x10033b013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033ae64 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033a994(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  DefaultGlassEffectShape DVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  AnyView AVar9;
  undefined *puVar10;
  undefined *puVar11;
  Material MVar12;
  Set SVar13;
  Color CVar14;
  Color CVar15;
  StrokeStyle SVar16;
  Alignment AVar17;
  undefined8 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  Glass unaff_x20;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long local_320 [2];
  undefined *local_310;
  long local_308 [4];
  undefined1 *local_2e8 [3];
  undefined8 auStack_2d0 [11];
  undefined *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined *puStack_250;
  undefined2 local_248;
  undefined6 uStack_246;
  undefined *puStack_240;
  undefined8 local_238;
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_180;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
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
  undefined *puStack_78;
  ulong local_70;
  
  local_2e8[2] = (undefined1 *)param_1;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar5 & 1) == 0) {
    puVar10 = &DAT_10055d090;
    FUN_100002f94(&DAT_10055d090,&DAT_100432668);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = -extraout_x8_02;
    puVar22 = (undefined8 *)((long)local_320 + lVar20);
    puStack_f8 = *(undefined **)((long)unaff_x20.unknown + 0x28);
    local_100 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
    puStack_e8 = *(undefined **)((long)unaff_x20.unknown + 0x38);
    local_f0 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
    puStack_d8 = *(undefined **)((long)unaff_x20.unknown + 0x48);
    local_e0 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
    uStack_118 = *(undefined8 *)((long)unaff_x20.unknown + 8);
    local_120 = *unaff_x20.unknown;
                    /* WARNING: Load size is inaccurate */
    uStack_108 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
    local_110 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
    puVar11 = &DAT_10055d098;
    FUN_100002f94(&DAT_10055d098,&DAT_100432670);
    iVar1 = *(int *)(puVar11 + 0x24);
    FUN_1000087e4();
    MVar12 = SwiftUI::Material::get_ultraThin(unaff_x20.unknown);
    SVar13 = SwiftUI::Edge::Set::get_all(MVar12.unknown);
    uStack_208 = puStack_f8;
    local_210 = local_100;
    uStack_1f8 = puStack_e8;
    local_200 = local_f0;
    uStack_1e8 = puStack_d8;
    local_1f0 = local_e0;
    uStack_228 = uStack_118;
    local_230 = local_120;
    uStack_218 = uStack_108;
    uStack_220 = local_110;
    local_1e0 = 0;
    puVar11 = &DAT_10054a658;
    FUN_100002f94(&DAT_10054a658,&DAT_10041b640);
    *(char *)((long)puVar22 + (long)*(int *)(puVar11 + 0x24) + (long)iVar1) = (char)SVar13.unknown;
    uVar4 = uStack_218;
    uVar2 = uStack_220;
    puVar11 = local_230;
    *(undefined8 *)((long)local_320 + lVar20 + 8) = uStack_228;
    *puVar22 = puVar11;
    *(undefined8 *)((long)local_308 + lVar20) = uVar4;
    *(undefined8 *)((long)&local_310 + lVar20) = uVar2;
    *(undefined1 *)((long)auStack_2d0 + lVar20) = local_1e0;
    uVar18 = uStack_1e8;
    uVar4 = local_1f0;
    uVar2 = local_200;
    *(undefined8 *)((long)local_308 + lVar20 + 0x20) = uStack_1f8;
    *(undefined8 *)((long)local_308 + lVar20 + 0x18) = uVar2;
    *(undefined8 *)((long)auStack_2d0 + lVar20 + -8) = uVar18;
    *(undefined8 *)((long)local_2e8 + lVar20 + 8) = uVar4;
    uVar2 = local_210;
    *(undefined8 *)((long)local_308 + lVar20 + 0x10) = uStack_208;
    *(undefined8 *)((long)local_308 + lVar20 + 8) = uVar2;
    uStack_198 = puStack_e8;
    local_1a0 = local_f0;
    uStack_188 = puStack_d8;
    uStack_190 = local_e0;
    uStack_1b8 = uStack_108;
    local_1c0 = local_110;
    uStack_1a8 = puStack_f8;
    uStack_1b0 = local_100;
    uStack_1c8 = uStack_118;
    local_1d0 = local_120;
    local_180 = 0;
    FUN_1000087e4(&local_230,&local_c0,&DAT_10054d8e0,&DAT_10041f1b0);
    FUN_10002a29c(&local_1d0,&DAT_10054d8e0,&DAT_10041f1b0);
    CVar14.unknown = &DAT_10055d0a0;
    FUN_100002f94(&DAT_10055d0a0,&DAT_100432678);
    *(undefined2 *)((long)puVar22 + (long)*(int *)(CVar14.unknown + 0x24)) = 0x100;
    CVar14 = SwiftUI::Color::get_white(CVar14);
    CVar15 = SwiftUI::Color::opacity(0.14,CVar14);
    _swift_release(CVar14.unknown);
    uVar18 = 0;
    SVar16 = SwiftUI::StrokeStyle::init
                       (&local_278,0x3ff0000000000000,0x4024000000000000,0,CVar15.unknown,0,
                        PTR___swiftEmptyArrayStorage_100524190);
    puStack_240 = (undefined *)SwiftUI::Alignment::get_center(SVar16.unknown);
    local_248 = 0x100;
    puStack_250 = CVar15.unknown;
    local_238 = uVar18;
    AVar17 = SwiftUI::Alignment::get_center((Alignment)puStack_240);
    puVar11 = puStack_240;
    uVar2 = CONCAT62(uStack_246,local_248);
    puStack_148 = puStack_250;
    local_150 = local_258;
    puStack_138 = puStack_240;
    local_130 = local_238;
    uStack_168 = uStack_270;
    local_170 = local_278;
    uStack_158 = uStack_260;
    uStack_160 = local_268;
    puStack_98 = puStack_250;
    local_a0 = local_258;
    puStack_88 = puStack_240;
    local_80 = local_238;
    puStack_b8 = (undefined *)uStack_270;
    local_c0 = local_278;
    puStack_a8 = (undefined *)uStack_260;
    local_b0 = (undefined *)local_268;
    puStack_f8 = puStack_250;
    local_100 = local_258;
    puStack_e8 = puStack_240;
    uStack_118 = uStack_270;
    local_120 = local_278;
    uStack_108 = uStack_260;
    local_110 = local_268;
    local_e0 = local_238;
    puVar19 = (undefined8 *)((long)puVar22 + (long)*(int *)(puVar10 + 0x24));
    uStack_140 = uVar2;
    local_f0 = uVar2;
    puStack_d8 = AVar17.unknown;
    local_d0 = uVar18;
    uStack_90 = uVar2;
    puVar19[5] = puStack_250;
    puVar19[4] = local_258;
    puVar19[7] = puVar11;
    puVar19[6] = uVar2;
    uVar2 = local_e0;
    puVar19[9] = puStack_d8;
    puVar19[8] = uVar2;
    puVar19[10] = uVar18;
    uVar4 = uStack_108;
    uVar2 = local_110;
    puVar10 = local_120;
    puVar19[1] = uStack_118;
    *puVar19 = puVar10;
    puVar19[3] = uVar4;
    puVar19[2] = uVar2;
    puStack_78 = AVar17.unknown;
    local_70 = uVar18;
    FUN_1000087e4(&local_170,auStack_2d0,&DAT_10054a798,&DAT_10041f480);
    FUN_1000087e4(&local_120,auStack_2d0,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_c0,&DAT_10054a788,&DAT_100425370);
    FUN_10002a29c(&local_278,&DAT_10054a798,&DAT_10041f480);
    puVar10 = &DAT_10055d0a8;
    FUN_100002f94(&DAT_10055d0a8,&DAT_100432680);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = (long)puVar22 - extraout_x8_03;
    FUN_1000087e4(puVar22,lVar20,&DAT_10055d090,&DAT_100432668);
    _swift_storeEnumTagMultiPayload(lVar20,puVar10,1);
    FUN_100342c5c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar20);
    FUN_10002a29c(puVar22,&DAT_10055d090,&DAT_100432668);
  }
  else {
    puVar10 = &DAT_10055d0c8;
    FUN_100002f94(&DAT_10055d0c8,&DAT_100432688);
    local_308[3] = *(long *)(puVar10 + -8);
    local_308[1] = *(undefined8 *)(local_308[3] + 0x40);
    local_2e8[0] = puVar10;
    local_2e8[1] = (undefined1 *)local_320;
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_308[2] = extraout_x12 + 0xfU & 0xfffffffffffffff0;
    lVar24 = (long)local_320 - local_308[2];
    local_70 = local_70 & 0xffffffffffffff00;
    puStack_98 = *(undefined **)((long)unaff_x20.unknown + 0x28);
    local_a0 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
    puStack_88 = *(undefined **)((long)unaff_x20.unknown + 0x38);
    uStack_90 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
    puStack_78 = *(undefined **)((long)unaff_x20.unknown + 0x48);
    local_80 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
    puStack_b8 = *(undefined **)((long)unaff_x20.unknown + 8);
    local_c0 = *unaff_x20.unknown;
                    /* WARNING: Load size is inaccurate */
    puStack_a8 = *(undefined **)((long)unaff_x20.unknown + 0x18);
    local_b0 = *(undefined **)((long)unaff_x20.unknown + 0x10);
    local_310 = (undefined *)SwiftUI::Glass::typeMetadataAccessor();
    local_320[1] = *(long *)(local_310 + -8);
    local_308[0] = lVar24;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_320[1] + 0x40));
    lVar21 = lVar24 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    FUN_1000087e4();
    SwiftUI::Glass::get_regular(unaff_x20);
    DVar6 = SwiftUI::DefaultGlassEffectShape::typeMetadataAccessor();
    lVar23 = *(long *)(DVar6.unknown + -8);
    local_320[0] = lVar21;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
    lVar20 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::DefaultGlassEffectShape::init();
    puVar10 = &DAT_10054d8e0;
    FUN_100002f94(&DAT_10054d8e0,&DAT_10041f1b0);
    puVar11 = puVar10;
    FUN_1000599d4();
    puVar7 = puVar11;
    FUN_100009808();
    (extension_SwiftUI)::SwiftUI::View::_glassEffect
              (lVar24,lVar21,lVar20,puVar10,DVar6.unknown,puVar11,puVar7);
    (**(code **)(lVar23 + 8))(lVar20,DVar6.unknown);
    (**(code **)(local_320[1] + 8))(lVar21,local_310);
    FUN_10002a29c(&local_c0,&DAT_10054d8e0,&DAT_10041f1b0);
    lVar20 = local_308[0];
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar3 = local_2e8[0];
    lVar21 = local_308[3];
    (**(code **)(local_308[3] + 0x10))(lVar20 - local_308[2],lVar24,local_2e8[0]);
    ppuVar8 = &local_c0;
    local_c0 = puVar10;
    puStack_b8 = DVar6.unknown;
    local_b0 = puVar11;
    puStack_a8 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppuVar8,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_glassEffect<A_where_A1:_SwiftUI_Shape>(_:_SwiftUI_Glass,in:_A1)__>_some>>_100522ed0
               ,1);
    AVar9 = SwiftUI::AnyView::_init(ppuVar8,puVar3,ppuVar8);
    puVar10 = &DAT_10055d0a8;
    FUN_100002f94(&DAT_10055d0a8,&DAT_100432680);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined8 *)(lVar20 - extraout_x8_01);
    *puVar19 = AVar9.unknown;
    _swift_storeEnumTagMultiPayload(puVar19);
    FUN_100002f94(&DAT_10055d090,&DAT_100432668);
    FUN_100342c5c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar19);
    (**(code **)(lVar21 + 8))(lVar24,puVar3);
  }
  return;
}

