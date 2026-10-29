// rea decompile_all
// name: FUN_1003c1acc
// address: 0x1003c1acc
// body: available
// range: 0x1003c1acc-0x1003c2c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Optional OVar7;
  ModifiedContent MVar8;
  undefined7 extraout_var;
  Set SVar9;
  Set SVar10;
  State SVar11;
  Animation AVar12;
  Animation AVar13;
  undefined *puVar14;
  undefined *puVar15;
  HorizontalAlignment HVar16;
  LazyVStack<undefined> LVar17;
  Alignment AVar18;
  long lVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar21;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined *puVar22;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long lVar23;
  long lVar24;
  long lVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [8];
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined8 auStack_3b0 [2];
  long alStack_3a0 [5];
  undefined *local_378;
  long local_370;
  undefined *local_368;
  long local_360;
  undefined8 local_358;
  long local_350;
  undefined *local_348;
  undefined *local_340;
  undefined *local_338;
  long local_330;
  undefined *local_328;
  undefined *local_320;
  long local_318;
  long local_310;
  undefined8 local_308;
  State local_300;
  code *local_2f8;
  undefined *local_2f0;
  long local_2e8;
  undefined *local_2e0;
  long local_2d8;
  long local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  long local_2a8;
  undefined *local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined8 local_268;
  long local_260;
  long local_258;
  undefined *local_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined *puStack_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  undefined *puStack_218;
  undefined *local_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  local_308 = param_1;
  local_338 = (undefined *)SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(local_338 + -8) + 0x40));
  lVar23 = (long)alStack_3a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_100560250;
  local_330 = lVar23;
  FUN_100002f94(&DAT_100560250,&DAT_100435d68);
  local_320 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar23 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_278 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12;
  puVar22 = &DAT_100560328;
  local_310 = lVar23;
  FUN_100002f94(&DAT_100560328,&DAT_100435df8);
  local_348 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined *)(lVar23 - extraout_x8_01);
  puVar22 = &DAT_100560248;
  local_340 = puVar21;
  FUN_100002f94(&DAT_100560248,&DAT_100435d60);
  local_2a0 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar23 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_280 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_00;
  puVar22 = &DAT_100560330;
  local_318 = lVar23;
  FUN_100002f94(&DAT_100560330,&DAT_100435e00);
  local_378 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_03;
  puVar22 = &DAT_100560240;
  local_370 = lVar23;
  FUN_100002f94(&DAT_100560240,&DAT_100435d58);
  local_328 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar23 = lVar23 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_288 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_01;
  local_290 = lVar23;
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  alStack_3a0[2] = *(long *)(MVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_3a0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_05;
  alStack_3a0[1] = lVar23;
  local_2b8 = MVar8.unknown;
  local_2c8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100002fe4(&DAT_10054aa20,&DAT_10041bcb0);
  local_2c0 = MVar8.unknown;
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_350 = *(long *)(MVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_350 + 0x40));
  lVar23 = lVar23 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  alStack_3a0[4] = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_02;
  local_360 = *(long *)(param_7 + -8);
  alStack_3a0[3] = lVar23;
  local_2e8 = param_7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_360 + 0x40));
  puVar22 = (undefined *)(lVar23 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  local_368 = puVar22;
  local_2b0 = MVar8.unknown;
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_298 = CONCAT71(extraout_var,OVar7.value);
  local_2d8 = *(long *)(local_298 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2d8 + 0x40));
  lVar24 = (long)puVar22 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_270 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_03;
  puVar22 = &DAT_100560338;
  local_260 = lVar24;
  FUN_100002f94(&DAT_100560338,&DAT_100435e08);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_09;
  puVar21 = &DAT_100560238;
  FUN_100002f94(&DAT_100560238,&DAT_100435d50);
  local_2e0 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar21 + -8) + 0x40));
  lVar25 = lVar24 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
  local_2a8 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12_04;
  puVar21 = (undefined *)0x0;
  local_268 = param_8;
  FUN_1003cff30(0,param_7,param_8);
  SVar10.unknown = puVar21;
  local_258 = param_6;
  FUN_1003c2c40(lVar24);
  SVar9 = SwiftUI::Edge::Set::get_top(SVar10);
  uVar27 = 0x404e000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  SVar10.unknown = &DAT_100560340;
  uVar28 = param_3;
  uVar31 = param_4;
  uVar34 = param_5;
  FUN_100002f94(&DAT_100560340,&DAT_100435e10);
  puVar2 = (undefined1 *)(lVar24 + *(int *)(SVar10.unknown + 0x24));
  *puVar2 = (char)SVar9.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar27;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
  uVar27 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar2 = (undefined1 *)(lVar24 + *(int *)(puVar22 + 0x24));
  *puVar2 = (char)SVar10.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar27;
  *(undefined8 *)(puVar2 + 0x10) = uVar28;
  *(undefined8 *)(puVar2 + 0x18) = uVar31;
  *(undefined8 *)(puVar2 + 0x20) = uVar34;
  puVar2[0x28] = 0;
  uVar28 = *(undefined8 *)(param_6 + *(int *)(puVar21 + 100));
  local_2f8 = (code *)((undefined8 *)(param_6 + *(int *)(puVar21 + 100)))[1];
  SVar11.unknown = &DAT_10054ba40;
  local_110 = uVar28;
  uStack_108 = local_2f8;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  local_300.unknown = SVar11.unknown;
  SwiftUI::State::get_wrappedValue(SVar11);
  lVar23 = local_178;
  puVar22 = &DAT_100560348;
  FUN_100002f94(&DAT_100560348,&DAT_100435e18);
  uVar31 = 0x3ff0000000000000;
  if (lVar23 < 1) {
    uVar31 = 0;
  }
  uVar27 = 0x402c000000000000;
  uVar33 = 0;
  if (lVar23 < 1) {
    uVar33 = 0x402c000000000000;
  }
  *(undefined8 *)(lVar25 + *(int *)(puVar22 + 0x24)) = uVar31;
  FUN_1000087e4(lVar24,lVar25,&DAT_100560338,&DAT_100435e08);
  AVar12.unknown = &DAT_100560350;
  FUN_100002f94(&DAT_100560350,&DAT_100435e20);
  iVar4 = *(int *)(AVar12.unknown + 0x24);
  *(undefined8 *)(lVar25 + iVar4) = 0;
  ((undefined8 *)(lVar25 + iVar4))[1] = uVar33;
  AVar12 = SwiftUI::Animation::easeOut(0.38,AVar12);
  AVar13 = SwiftUI::Animation::delay(0.0,AVar12);
  _swift_release(AVar12.unknown);
  FUN_10002a29c(lVar24,&DAT_100560338,&DAT_100435e08);
  iVar4 = *(int *)(local_2e0 + 0x24);
  local_2d0 = lVar25;
  *(undefined8 *)(lVar25 + iVar4) = AVar13.unknown;
  *(bool *)((undefined8 *)(lVar25 + iVar4) + 1) = 0 < lVar23;
  SVar10.unknown = local_368;
  local_2f0 = puVar21;
  (**(code **)(local_360 + 0x10))(local_368,local_258 + *(int *)(puVar21 + 0x4c),local_2e8);
  _swift_dynamicCast();
  lVar23 = local_270;
  puVar20 = local_2b0;
  puVar14 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_1005221a8
  ;
  puVar21 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar22 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  local_358 = uVar28;
  if (((ulong)SVar10.unknown & 1) == 0) {
    SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
    uVar31 = local_268;
    lVar23 = alStack_3a0[1];
    (extension_SwiftUI)::SwiftUI::View::_padding(SVar10);
    uStack_108 = local_2f8;
    local_110 = uVar28;
    SwiftUI::State::get_wrappedValue(local_300);
    puVar20 = local_2b8;
    puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    bVar1 = 0 < local_178;
    local_120 = uVar31;
    local_118 = puVar14;
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_2b8,&local_120);
    lVar24 = alStack_3a0[4];
    uVar27 = 0x3fd851eb851eb852;
    uVar31 = 0x4024000000000000;
    FUN_1003c2d00(alStack_3a0[4],0x3f947ae147ae147b,bVar1,puVar20,puVar14);
    (**(code **)(alStack_3a0[2] + 8))(lVar23,puVar20);
    local_128 = puVar21;
    puVar21 = puVar15;
    local_130 = puVar14;
    _swift_getWitnessTable(puVar15,local_2c8,&local_130);
    local_138 = puVar22;
    puVar14 = puVar15;
    local_140 = puVar21;
    _swift_getWitnessTable(puVar15,local_2c0,&local_140);
    puVar22 = &DAT_10054aa18;
    FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                  PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
                 );
    puVar20 = local_2b0;
    local_150 = puVar14;
    local_148 = puVar22;
    _swift_getWitnessTable(puVar15,local_2b0,&local_150);
    lVar23 = alStack_3a0[3];
    thunk_FUN_1000bdaa4(alStack_3a0[3],lVar24,puVar20,puVar15);
    lVar5 = local_350;
    pcVar26 = *(code **)(local_350 + 8);
    (*pcVar26)(lVar24,puVar20);
    thunk_FUN_1000bdaa4(lVar24,lVar23,puVar20,puVar15);
    (*pcVar26)(lVar23,puVar20);
    lVar23 = local_270;
    (**(code **)(lVar5 + 0x20))(local_270,lVar24,puVar20);
    (**(code **)(lVar5 + 0x38))(lVar23,0,1,puVar20);
  }
  else {
    (**(code **)(local_350 + 0x38))(local_270,1,1,local_2b0);
    puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    local_220 = local_268;
    puStack_218 = puVar14;
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
               local_2b8,&local_220);
    puStack_228 = puVar21;
    puVar21 = puVar15;
    local_230 = puVar14;
    _swift_getWitnessTable(puVar15,local_2c8,&local_230);
    puStack_238 = puVar22;
    puVar14 = puVar15;
    local_240 = puVar21;
    _swift_getWitnessTable(puVar15,local_2c0,&local_240);
    puVar22 = &DAT_10054aa18;
    FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                  PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
                 );
    local_250 = puVar14;
    puStack_248 = puVar22;
    _swift_getWitnessTable(puVar15,puVar20,&local_250);
  }
  pcVar26 = local_2f8;
  SVar11.unknown = local_300.unknown;
  FUN_1000bdb6c(local_260,lVar23,puVar20,puVar15);
  local_2f8 = *(code **)(local_2d8 + 8);
  (*local_2f8)(lVar23,local_298);
  lVar23 = local_370;
  if (*(char *)(local_258 + 0x1b) == '\x01') {
    SVar10.unknown = local_2f0;
    FUN_1003c2ee4(local_370);
    SVar9 = SwiftUI::Edge::Set::get_top(SVar10);
    uVar28 = 0x4020000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
    SVar10.unknown = &DAT_100560468;
    uVar33 = uVar31;
    uVar30 = uVar27;
    uVar32 = uVar34;
    FUN_100002f94(&DAT_100560468,&DAT_100435ea8);
    puVar2 = (undefined1 *)(lVar23 + *(int *)(SVar10.unknown + 0x24));
    *puVar2 = (char)SVar9.unknown;
    *(undefined8 *)(puVar2 + 8) = uVar28;
    *(undefined8 *)(puVar2 + 0x10) = uVar31;
    *(undefined8 *)(puVar2 + 0x18) = uVar27;
    *(undefined8 *)(puVar2 + 0x20) = uVar34;
    puVar2[0x28] = 0;
    SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
    uVar31 = 0x4034000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
    uVar28 = local_358;
    puVar2 = (undefined1 *)(lVar23 + *(int *)(local_378 + 0x24));
    *puVar2 = (char)SVar10.unknown;
    *(undefined8 *)(puVar2 + 8) = uVar31;
    *(undefined8 *)(puVar2 + 0x10) = uVar33;
    *(undefined8 *)(puVar2 + 0x18) = uVar30;
    *(undefined8 *)(puVar2 + 0x20) = uVar32;
    puVar2[0x28] = 0;
    local_110 = local_358;
    uStack_108 = pcVar26;
    SwiftUI::State::get_wrappedValue(SVar11);
    lVar5 = local_178;
    puVar22 = &DAT_100560450;
    FUN_100002f94(&DAT_100560450,&DAT_100435ea0);
    lVar24 = local_290;
    local_300.unknown._0_4_ = (uint)(1 < lVar5);
    uVar31 = 0x3ff0000000000000;
    if (lVar5 < 2) {
      uVar31 = 0;
    }
    uVar27 = 0x4024000000000000;
    uVar34 = 0;
    if (lVar5 < 2) {
      uVar34 = 0x4024000000000000;
    }
    *(undefined8 *)(local_290 + *(int *)(puVar22 + 0x24)) = uVar31;
    FUN_1000087e4(lVar23,local_290,&DAT_100560330,&DAT_100435e00);
    AVar12.unknown = &DAT_100560440;
    FUN_100002f94(&DAT_100560440,&DAT_100435e98);
    iVar4 = *(int *)(AVar12.unknown + 0x24);
    *(undefined8 *)(lVar24 + iVar4) = 0;
    ((undefined8 *)(lVar24 + iVar4))[1] = uVar34;
    AVar12 = SwiftUI::Animation::easeOut(0.38,AVar12);
    AVar13 = SwiftUI::Animation::delay(0.0,AVar12);
    _swift_release(AVar12.unknown);
    SVar10.unknown = local_2f0;
    FUN_10002a29c(lVar23,&DAT_100560330,&DAT_100435e00);
    puVar22 = &DAT_100560358;
    FUN_100002f94(&DAT_100560358,&DAT_100435e28);
    iVar4 = *(int *)(puVar22 + 0x24);
    *(undefined8 *)(lVar24 + iVar4) = AVar13.unknown;
    *(char *)((undefined8 *)(lVar24 + iVar4) + 1) = (char)local_300.unknown;
    (**(code **)(*(long *)(puVar22 + -8) + 0x38))(lVar24,0,1,puVar22);
    uVar34 = uVar32;
  }
  else {
    puVar22 = &DAT_100560358;
    FUN_100002f94(&DAT_100560358,&DAT_100435e28);
    (**(code **)(*(long *)(puVar22 + -8) + 0x38))(local_290,1,1,puVar22);
    SVar10.unknown = local_2f0;
    uVar28 = local_358;
  }
  lVar24 = local_258;
  HVar16.unknown = local_340;
  FUN_1003c2f68(local_340);
  SVar9 = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uVar29 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  SVar10.unknown = &DAT_100560360;
  uVar33 = uVar31;
  uVar30 = uVar27;
  uVar32 = uVar34;
  FUN_100002f94(&DAT_100560360,&DAT_100435e30);
  puVar2 = HVar16.unknown + *(int *)(SVar10.unknown + 0x24);
  *puVar2 = (char)SVar9.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar29;
  *(undefined8 *)(puVar2 + 0x10) = uVar31;
  *(undefined8 *)(puVar2 + 0x18) = uVar27;
  *(undefined8 *)(puVar2 + 0x20) = uVar34;
  puVar2[0x28] = 0;
  SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
  uVar31 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar2 = HVar16.unknown + *(int *)(local_348 + 0x24);
  *puVar2 = (char)SVar10.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar31;
  *(undefined8 *)(puVar2 + 0x10) = uVar33;
  *(undefined8 *)(puVar2 + 0x18) = uVar30;
  *(undefined8 *)(puVar2 + 0x20) = uVar32;
  puVar2[0x28] = 0;
  uStack_108 = pcVar26;
  local_110 = uVar28;
  SwiftUI::State::get_wrappedValue(SVar11);
  lVar5 = local_178;
  puVar22 = &DAT_100560368;
  FUN_100002f94(&DAT_100560368,&DAT_100435e38);
  lVar23 = local_318;
  uVar28 = 0x3ff0000000000000;
  if (lVar5 < 2) {
    uVar28 = 0;
  }
  uVar31 = 0x4020000000000000;
  uVar34 = 0;
  if (lVar5 < 2) {
    uVar34 = 0x4020000000000000;
  }
  *(undefined8 *)(local_318 + *(int *)(puVar22 + 0x24)) = uVar28;
  FUN_1000087e4(HVar16.unknown,local_318,&DAT_100560328,&DAT_100435df8);
  AVar12.unknown = &DAT_100560370;
  FUN_100002f94(&DAT_100560370,&DAT_100435e40);
  iVar4 = *(int *)(AVar12.unknown + 0x24);
  *(undefined8 *)(lVar23 + iVar4) = 0;
  ((undefined8 *)(lVar23 + iVar4))[1] = uVar34;
  AVar12 = SwiftUI::Animation::easeOut(0.38,AVar12);
  AVar13 = SwiftUI::Animation::delay(0.02,AVar12);
  _swift_release(AVar12.unknown);
  FUN_10002a29c(HVar16.unknown,&DAT_100560328,&DAT_100435df8);
  iVar4 = *(int *)(local_2a0 + 0x24);
  *(undefined8 *)(lVar23 + iVar4) = AVar13.unknown;
  *(bool *)((undefined8 *)(lVar23 + iVar4) + 1) = 1 < lVar5;
  HVar16 = SwiftUI::HorizontalAlignment::get_leading(HVar16);
  local_100 = local_2e8;
  uStack_f8 = local_268;
  local_f0 = lVar24;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  FUN_1000036d0(&DAT_10054e008,PTR_typeMetadataAccessor_100522918,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  FUN_100002f94(&DAT_100560378,&DAT_100435e48);
  FUN_1003e4920();
  lVar24 = local_310;
  LVar17 = SwiftUI::LazyVStack::_init(HVar16,(PinnedScrollableViews)0x4010000000000000);
  SVar9 = SwiftUI::Edge::Set::get_horizontal(LVar17.unknown);
  uVar30 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  SVar10.unknown = &DAT_1005603d0;
  uVar34 = uVar28;
  uVar27 = uVar31;
  uVar33 = uVar32;
  FUN_100002f94(&DAT_1005603d0,&DAT_100435e78);
  puVar2 = (undefined1 *)(lVar24 + *(int *)(SVar10.unknown + 0x24));
  *puVar2 = (char)SVar9.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar30;
  *(undefined8 *)(puVar2 + 0x10) = uVar28;
  *(undefined8 *)(puVar2 + 0x18) = uVar31;
  *(undefined8 *)(puVar2 + 0x20) = uVar32;
  puVar2[0x28] = 0;
  SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
  uVar28 = 0x4059000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  AVar18.unknown = &DAT_1005603d8;
  puVar22 = &DAT_100435e80;
  FUN_100002f94();
  puVar2 = (undefined1 *)(lVar24 + *(int *)(AVar18.unknown + 0x24));
  *puVar2 = (char)SVar10.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar28;
  *(undefined8 *)(puVar2 + 0x10) = uVar34;
  *(undefined8 *)(puVar2 + 0x18) = uVar27;
  *(undefined8 *)(puVar2 + 0x20) = uVar33;
  puVar2[0x28] = 0;
  AVar18 = SwiftUI::Alignment::get_center(AVar18);
  *(undefined **)(lVar25 + -0x10) = AVar18.unknown;
  *(undefined **)(lVar25 + -8) = puVar22;
  *(undefined1 *)(lVar25 + -0x18) = 1;
  *(undefined8 *)(lVar25 + -0x20) = 0;
  *(undefined1 *)(lVar25 + -0x28) = 1;
  *(undefined8 *)(lVar25 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  lVar25 = local_2a8;
  puVar22 = local_320;
  puVar3 = (undefined8 *)(lVar24 + *(int *)(local_320 + 0x24));
  puVar3[9] = uStack_c8;
  puVar3[8] = local_d0;
  puVar3[0xb] = uStack_b8;
  puVar3[10] = uStack_c0;
  puVar3[0xd] = uStack_a8;
  puVar3[0xc] = local_b0;
  puVar3[1] = uStack_108;
  *puVar3 = local_110;
  puVar3[3] = uStack_f8;
  puVar3[2] = local_100;
  puVar3[5] = uStack_e8;
  puVar3[4] = local_f0;
  puVar3[7] = uStack_d8;
  puVar3[6] = uStack_e0;
  FUN_1000087e4(local_2d0,local_2a8,&DAT_100560238,&DAT_100435d50);
  lVar19 = local_270;
  lVar5 = local_298;
  local_178 = lVar25;
  (**(code **)(local_2d8 + 0x10))(local_270,local_260);
  lVar6 = local_288;
  lVar25 = local_290;
  local_170 = lVar19;
  FUN_1000087e4(local_290,local_288,&DAT_100560240,&DAT_100435d58);
  lVar19 = local_280;
  local_168 = lVar6;
  FUN_1000087e4(lVar23,local_280,&DAT_100560248,&DAT_100435d60);
  lVar6 = local_278;
  local_160 = lVar19;
  lVar19 = lVar24;
  FUN_1000087e4(lVar24,local_278,&DAT_100560250);
  local_158 = lVar6;
  local_1a0 = local_2e0;
  local_198 = lVar5;
  local_190 = local_328;
  local_188 = local_2a0;
  local_180 = puVar22;
  FUN_1003e4bdc();
  puVar21 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_1d8 = local_268;
  local_1d0 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_1005221a8
  ;
  puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288;
  local_1c8 = lVar19;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100522288,
             local_2b8,&local_1d8);
  local_1e0 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100522190
  ;
  puVar22 = puVar21;
  local_1e8 = puVar14;
  _swift_getWitnessTable(puVar21,local_2c8,&local_1e8);
  local_1f0 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100521ff0
  ;
  puVar14 = puVar21;
  local_1f8 = puVar22;
  _swift_getWitnessTable(puVar21,local_2c0,&local_1f8);
  puVar22 = &DAT_10054aa18;
  FUN_1000087a0(&DAT_10054aa18,&DAT_10054aa20,&DAT_10041bcb0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_1005226a8
               );
  local_208 = puVar14;
  puStack_200 = puVar22;
  _swift_getWitnessTable(puVar21,local_2b0,&local_208);
  puVar22 = 
  PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
  ;
  local_210 = puVar21;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100523818
             ,lVar5,&local_210);
  local_1c0 = puVar22;
  FUN_1003e4eec();
  local_1b8 = puVar22;
  FUN_1003e51f4();
  local_1b0 = puVar22;
  FUN_1003e5744();
  local_1a8 = puVar22;
  FUN_1003bb3f8(local_308,&local_178,5,&local_1a0,&local_1c8);
  FUN_10002a29c(lVar24,&DAT_100560250,&DAT_100435d68);
  FUN_10002a29c(lVar23,&DAT_100560248,&DAT_100435d60);
  FUN_10002a29c(lVar25,&DAT_100560240,&DAT_100435d58);
  pcVar26 = local_2f8;
  (*local_2f8)(local_260,lVar5);
  FUN_10002a29c(local_2d0,&DAT_100560238,&DAT_100435d50);
  FUN_10002a29c(local_278,&DAT_100560250,&DAT_100435d68);
  FUN_10002a29c(local_280,&DAT_100560248,&DAT_100435d60);
  FUN_10002a29c(local_288,&DAT_100560240,&DAT_100435d58);
  (*pcVar26)(local_270,lVar5);
  FUN_10002a29c(local_2a8,&DAT_100560238,&DAT_100435d50);
  return;
}

