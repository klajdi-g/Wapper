// rea decompile_all
// name: FUN_100010494
// address: 0x100010494
// body: available
// range: 0x100010494-0x100010b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100010a74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100010494(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,long param_8,
                  undefined *param_9)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  Design DVar8;
  OffsetTransition OVar9;
  undefined *puVar10;
  undefined *puVar11;
  GeometryProxy GVar12;
  Anchor<undefined> AVar13;
  Text TVar14;
  Font FVar15;
  Text TVar16;
  Color CVar17;
  Color CVar18;
  Text TVar19;
  Set SVar20;
  EdgeInsets EVar21;
  Set _all;
  OpacityTransition OVar22;
  undefined **ppuVar23;
  AnyTransition AVar24;
  undefined *puVar25;
  Text TVar26;
  undefined *puVar27;
  long extraout_x8;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  long local_2b8;
  undefined *local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  undefined1 *local_290;
  long local_288;
  long local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *local_260;
  undefined *puStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined *local_1c8;
  undefined2 local_1c0;
  undefined6 uStack_1be;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined1 local_178;
  undefined *local_170;
  undefined2 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  
  CVar17.unknown = param_9;
  OVar9 = SwiftUI::OffsetTransition::typeMetadataAccessor();
  local_280 = *(long *)(OVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_280 + 0x40));
  local_290 = auStack_2e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_278 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_298 = *(long *)(local_278 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_298 + 0x40));
  lVar28 = (long)(auStack_2e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_10054ae90;
  local_2a8 = lVar28;
  FUN_100002f94(&DAT_10054ae90,&DAT_10041c0e0);
  lVar29 = *(long *)(puVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  lVar28 = lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_2a0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar28 - extraout_x12;
  puVar11 = &DAT_10054a828;
  local_288 = lVar28;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar28 - extraout_x8_02;
  if (param_8 != 0) {
    GVar12.unknown = (undefined *)0x0;
    FUN_100007c50();
    local_2b0 = OVar9.unknown;
    _swift_bridgeObjectRetain(param_8);
    AVar13.unknown = param_9;
    _swift_retain();
    SwiftUI::GeometryProxy::_get_subscript(AVar13,GVar12);
    puVar4 = puStack_118;
    uVar7 = local_120;
    puVar3 = puStack_128;
    puVar11 = local_130;
    local_130 = param_7;
    puStack_128 = (undefined *)param_8;
    FUN_100026df4();
    _swift_bridgeObjectRetain(param_8);
    puVar25 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar14 = SwiftUI::Text::_init();
    local_2b8 = lVar29;
    SwiftUI::Font::Weight::get_medium((Weight)TVar14.unknown);
    local_2c8 = puVar10;
    DVar8 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar29 = CONCAT71((int7)((ulong)TVar14.unknown >> 8),DVar8.value);
    (**(code **)(*(long *)(lVar29 + -8) + 0x38))(lVar28,1,1,lVar29);
    FVar15 = SwiftUI::Font::_system(param_2,(Font)0x0);
    local_2c0 = param_9;
    FUN_10002a29c(lVar28,&DAT_10054a828,&DAT_10041e3c0);
    TVar26 = TVar14;
    puVar10 = puVar25;
    SVar20.unknown = AVar13.unknown;
    TVar16 = SwiftUI::Text::_font(FVar15.unknown);
    local_2d8 = param_1;
    local_2d0 = param_8;
    _swift_release(FVar15.unknown);
    FUN_100025b34(TVar14.unknown,puVar25,AVar13.unknown);
    _swift_bridgeObjectRelease();
    CVar17 = SwiftUI::Color::get_white(CVar17);
    CVar18 = SwiftUI::Color::opacity(0.9,CVar17);
    _swift_release(CVar17.unknown);
    local_130 = CVar18.unknown;
    FUN_100028d58();
    TVar14 = TVar16;
    puVar25 = TVar26.unknown;
    puVar27 = puVar10;
    TVar19 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar16.unknown,TVar26.unknown,puVar10);
    _swift_release(CVar18.unknown);
    _swift_bridgeObjectRelease();
    SVar20 = SwiftUI::Edge::Set::get_horizontal(SVar20);
    uVar30 = 0x4028000000000000;
    EVar21 = SwiftUI::EdgeInsets::init(SVar20.unknown);
    uVar32 = param_3;
    uVar33 = param_4;
    uVar34 = param_5;
    _all = SwiftUI::Edge::Set::get_vertical(EVar21.unknown);
    local_1c0 = 0x101;
    local_190 = 0;
    uVar31 = 0x4018000000000000;
    local_1e0 = TVar19.unknown;
    puStack_1d8 = TVar14.unknown;
    local_1d0 = (char)puVar25;
    local_1c8 = puVar27;
    uStack_1b8 = (char)SVar20.unknown;
    local_1b0 = uVar30;
    uStack_1a8 = param_3;
    local_1a0 = param_4;
    uStack_198 = param_5;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    local_218 = SUB81(_all.unknown,0);
    local_1f0 = 0;
    uStack_248 = CONCAT71(uStack_1b7,uStack_1b8);
    local_250 = CONCAT62(uStack_1be,local_1c0);
    uStack_238 = uStack_1a8;
    uStack_240 = local_1b0;
    uStack_228 = uStack_198;
    local_230 = local_1a0;
    local_220 = local_190;
    local_260 = (undefined *)CONCAT71(uStack_1cf,local_1d0);
    puStack_268 = puStack_1d8;
    local_270 = local_1e0;
    puStack_258 = local_1c8;
    local_168 = 0x101;
    local_138 = 0;
    local_210 = uVar31;
    uStack_208 = uVar32;
    local_200 = uVar33;
    uStack_1f8 = uVar34;
    local_188 = TVar19.unknown;
    puStack_180 = TVar14.unknown;
    local_178 = (char)puVar25;
    local_170 = puVar27;
    local_160 = (char)SVar20.unknown;
    local_158 = uVar30;
    uStack_150 = param_3;
    local_148 = param_4;
    uStack_140 = param_5;
    FUN_1000087e4(&local_1e0,&local_130,&DAT_10054aea8,&DAT_10041c0f0);
    FUN_10002a29c(&local_188,&DAT_10054aea8,&DAT_10041c0f0);
    lVar28 = local_2d8;
    uStack_c8 = uStack_208;
    local_d0 = local_210;
    uStack_b8 = uStack_1f8;
    uStack_c0 = local_200;
    local_b0 = local_1f0;
    uStack_108 = uStack_248;
    local_110 = local_250;
    uStack_f8 = uStack_238;
    uStack_100 = uStack_240;
    uStack_d8 = CONCAT71(uStack_217,local_218);
    uStack_e0 = CONCAT71(uStack_21f,local_220);
    uStack_e8 = uStack_228;
    local_f0 = local_230;
    puStack_128 = puStack_268;
    local_130 = local_270;
    puStack_118 = puStack_258;
    local_120 = local_260;
    FUN_10034c9fc(local_2d8);
    CVar17.unknown = (undefined *)&local_270;
    FUN_10002a29c(CVar17.unknown,&DAT_10054aeb0,&DAT_10041c0f8);
    CVar17 = SwiftUI::Color::get_black(CVar17);
    CVar18 = SwiftUI::Color::opacity(0.35,CVar17);
    _swift_release(CVar17.unknown);
    puVar10 = &DAT_10054aeb8;
    FUN_100002f94(&DAT_10054aeb8,&DAT_10041c100);
    puVar1 = (undefined8 *)(lVar28 + *(int *)(puVar10 + 0x24));
    *puVar1 = CVar18.unknown;
    puVar1[2] = 0;
    puVar1[1] = 0x4020000000000000;
    puVar1[3] = 0x4010000000000000;
    puVar25 = puVar11;
    _CGRectGetMidX(puVar11,puVar3,uVar7,puVar4);
    _CGRectGetMinY(puVar11,puVar3,uVar7,puVar4);
    puVar10 = &DAT_10054aec0;
    FUN_100002f94(&DAT_10054aec0,&DAT_10041c108);
    lVar29 = local_2a8;
    iVar2 = *(int *)(puVar10 + 0x24);
    *(double *)(lVar28 + iVar2) = (double)puVar25;
    ((double *)(lVar28 + iVar2))[1] = (double)puVar11 + -22.0;
    OVar22 = SwiftUI::OpacityTransition::init();
    puVar5 = local_290;
    SwiftUI::OffsetTransition::init((CGSize)OVar22.unknown);
    puVar10 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar11 = &DAT_10054aec8;
    FUN_1000036d0(&DAT_10054aec8,PTR_typeMetadataAccessor_100522358,
                  PTR_SwiftUI__SwiftUI__OffsetTransition_>SwiftUI__Transition_100522350);
    puVar25 = local_278;
    lVar6 = local_288;
    puVar4 = local_2b0;
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (local_288,puVar5,local_278,local_2b0,puVar10,puVar11);
    (**(code **)(local_280 + 8))(puVar5,puVar4);
    (**(code **)(local_298 + 8))(lVar29,puVar25);
    lVar29 = local_2b8;
    puVar3 = local_2c8;
    (**(code **)(local_2b8 + 0x10))(local_2a0,lVar6,local_2c8);
    local_270 = puVar25;
    puStack_268 = puVar4;
    ppuVar23 = &local_270;
    local_260 = puVar10;
    puStack_258 = puVar11;
    _swift_getOpaqueTypeConformance2
              (ppuVar23,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar24 = SwiftUI::AnyTransition::_init(ppuVar23,puVar3,ppuVar23);
    _swift_release(local_2c0);
    _swift_bridgeObjectRelease(local_2d0);
    (**(code **)(lVar29 + 8))(lVar6,puVar3);
    puVar10 = &DAT_10054aed0;
    FUN_100002f94(&DAT_10054aed0,&DAT_10041c110);
    *(undefined **)(lVar28 + *(int *)(puVar10 + 0x24)) = AVar24.unknown;
    puVar10 = &DAT_10054ae98;
    FUN_100002f94(&DAT_10054ae98,&DAT_10041c0e8);
    *(undefined1 *)(lVar28 + *(int *)(puVar10 + 0x24)) = 0;
    (**(code **)(*(long *)(puVar10 + -8) + 0x38))(lVar28,0,1);
    return;
  }
  puVar10 = &DAT_10054ae98;
  FUN_100002f94(&DAT_10054ae98,&DAT_10041c0e8);
                    /* WARNING: Could not recover jumptable at 0x000100010b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar10 + -8) + 0x38))(param_1,1,1,puVar10);
  return;
}

