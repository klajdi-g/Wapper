// rea decompile_all
// name: FUN_1003c72c0
// address: 0x1003c72c0
// body: available
// range: 0x1003c72c0-0x1003c7947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c72c0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Alignment param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  Design DVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Alignment AVar9;
  Text TVar10;
  undefined7 extraout_var;
  Font FVar11;
  Text TVar12;
  _ConditionalContent<undefined,undefined> _Var13;
  undefined7 extraout_var_00;
  Color CVar14;
  Color CVar15;
  Text TVar16;
  Text TVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  long extraout_x12;
  long lVar20;
  undefined8 *puVar21;
  CGFloat size;
  undefined8 uStack_1d0;
  undefined *local_1c8 [5];
  long local_1a0 [13];
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar6 = &DAT_10055c440;
  local_1a0[1] = param_1;
  FUN_100002f94(&DAT_10055c440,&DAT_1004310c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var13.unknown = (undefined *)((long)&uStack_1d0 - extraout_x8);
  puVar7 = &DAT_100560c08;
  FUN_100002f94(&DAT_100560c08,&DAT_1004368a0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(_Var13.unknown + -extraout_x8_00);
  puVar8 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar21 - extraout_x8_01;
  puVar8 = &DAT_100560c10;
  FUN_100002f94(&DAT_100560c10,&DAT_1004368a8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar19 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1a0[0] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12;
  AVar9.unknown = (undefined *)0x0;
  FUN_1003e5970();
  local_1c8[3] = (undefined *)lVar20;
  local_1c8[4] = AVar9.unknown;
  local_1a0[2] = lVar19;
  if (*(char *)((long)param_2 + (long)*(int *)(AVar9.unknown + 0x1c)) == '\x01') {
    local_b8 = *(undefined **)((long)param_2 + (long)*(int *)(AVar9.unknown + 0x20));
    uVar2 = ((undefined8 *)((long)param_2 + (long)*(int *)(AVar9.unknown + 0x20)))[1];
    puStack_b0 = (undefined *)uVar2;
    FUN_100026df4();
    _swift_bridgeObjectRetain(uVar2);
    puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
    TVar10 = SwiftUI::Text::_init();
    local_1c8[2] = puVar7;
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
              (lVar20,1,1,CONCAT71(extraout_var,DVar5.value));
    FVar11 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    local_1c8[0] = (undefined *)param_2;
    FUN_10002a29c(lVar20,&DAT_10054a828,&DAT_10041e3c0);
    TVar17 = TVar10;
    puVar7 = puVar8;
    puVar18 = AVar9.unknown;
    TVar12 = SwiftUI::Text::_font(FVar11.unknown);
    param_2 = (undefined8 *)local_1c8[0];
    uStack_1d0._4_4_ = SUB84(puVar7,0);
    local_1c8[1] = puVar6;
    _swift_release(FVar11.unknown);
    FUN_100025b34(TVar10.unknown,puVar8,AVar9.unknown);
    _swift_bridgeObjectRelease();
    SwiftUI::Alignment::get_center(param_5);
    SwiftUI::_FrameLayout::_init((Alignment)0x4034000000000000);
    local_f8 = (undefined1)uStack_1d0._4_4_;
    uStack_e0 = uStack_130;
    local_e8 = local_138;
    uStack_d0 = uStack_120;
    local_d8 = local_128;
    uStack_c0 = uStack_110;
    local_c8 = local_118;
    uStack_70 = uStack_110;
    local_78 = local_118;
    uStack_80 = uStack_120;
    local_88 = local_128;
    uStack_90 = uStack_130;
    local_98 = local_138;
    CVar14.unknown = &DAT_10054e078;
    local_108 = TVar12.unknown;
    puStack_100 = TVar17.unknown;
    puStack_f0 = puVar18;
    local_b8 = TVar12.unknown;
    puStack_b0 = TVar17.unknown;
    local_a8 = local_f8;
    puStack_a0 = puVar18;
    FUN_1000087e4(&local_108,local_1a0 + 3,&DAT_10054e078,&DAT_100434130);
    FUN_10002a29c(&local_b8,&DAT_10054e078,&DAT_100434130);
    uVar4 = uStack_d0;
    uVar2 = local_d8;
    puVar6 = local_e8;
    puVar21[5] = uStack_e0;
    puVar21[4] = puVar6;
    puVar21[7] = uVar4;
    puVar21[6] = uVar2;
    uVar2 = local_c8;
    puVar21[9] = uStack_c0;
    puVar21[8] = uVar2;
    puVar7 = puStack_f0;
    puVar6 = local_108;
    size.unknown = (undefined *)CONCAT71(uStack_f7,local_f8);
    puVar21[1] = puStack_100;
    *puVar21 = puVar6;
    puVar21[3] = puVar7;
    puVar21[2] = size.unknown;
    _swift_storeEnumTagMultiPayload(puVar21,local_1c8[2],0);
    FUN_100002f94(&DAT_10054e078,&DAT_100434130);
    FUN_1003ef258();
    FUN_1003ef2c8();
    _Var13 = (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
  }
  else {
    FUN_1003c7948(_Var13.unknown);
    SwiftUI::Alignment::get_center(AVar9);
    SwiftUI::_FrameLayout::_init((Alignment)0x4034000000000000);
    puVar18 = puStack_a0;
    puVar8 = local_b8;
    puVar1 = (undefined8 *)(_Var13.unknown + *(int *)(puVar6 + 0x24));
    uVar2 = CONCAT71(uStack_a7,local_a8);
    puVar1[1] = puStack_b0;
    *puVar1 = puVar8;
    puVar1[3] = puVar18;
    puVar1[2] = uVar2;
    size.unknown = local_98;
    puVar1[5] = uStack_90;
    puVar1[4] = size.unknown;
    FUN_1000087e4(_Var13.unknown,puVar21,&DAT_10055c440,&DAT_1004310c0);
    _swift_storeEnumTagMultiPayload(puVar21,puVar7,1);
    CVar14.unknown = &DAT_10054e078;
    FUN_100002f94(&DAT_10054e078,&DAT_100434130);
    FUN_1003ef258();
    FUN_1003ef2c8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar21);
    FUN_10002a29c(_Var13.unknown,&DAT_10055c440,&DAT_1004310c0);
  }
  local_108 = (undefined *)*param_2;
  uVar2 = param_2[1];
  puStack_100 = (undefined *)uVar2;
  FUN_100026df4();
  _swift_bridgeObjectRetain(uVar2);
  puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar10 = SwiftUI::Text::_init();
  SwiftUI::Font::Weight::get_medium((Weight)TVar10.unknown);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar6 = local_1c8[3];
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar5.value) + -8) + 0x38))
            (local_1c8[3],1,1,CONCAT71(extraout_var_00,DVar5.value));
  FVar11 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(puVar6,&DAT_10054a828,&DAT_10041e3c0);
  TVar17 = TVar10;
  puVar6 = puVar7;
  puVar8 = _Var13.unknown;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  local_1c8[3] = puVar8;
  _swift_release(FVar11.unknown);
  FUN_100025b34(TVar10.unknown,puVar7,_Var13.unknown);
  _swift_bridgeObjectRelease();
  if (*(char *)((long)param_2 + (long)*(int *)(local_1c8[4] + 0x18)) == '\x01') {
    CVar14 = SwiftUI::Color::get_black(CVar14);
  }
  else {
    CVar15 = SwiftUI::Color::get_white(CVar14);
    CVar14 = SwiftUI::Color::opacity(0.8,CVar15);
    _swift_release(CVar15.unknown);
  }
  puVar7 = local_1c8[3];
  TVar10 = TVar12;
  puVar8 = TVar17.unknown;
  puVar18 = puVar6;
  TVar16 = SwiftUI::Text::_foregroundColor(CVar14.unknown);
  _swift_release(CVar14.unknown);
  FUN_100025b34(TVar12.unknown,TVar17.unknown,puVar6);
  _swift_bridgeObjectRelease(puVar7);
  lVar3 = local_1a0[2];
  lVar19 = local_1a0[0];
  FUN_1000087e4(local_1a0[2],local_1a0[0],&DAT_100560c10,&DAT_1004368a8);
  lVar20 = local_1a0[1];
  FUN_1000087e4(lVar19,local_1a0[1],&DAT_100560c10,&DAT_1004368a8);
  puVar6 = &DAT_100560c38;
  FUN_100002f94(&DAT_100560c38,&DAT_1004368d0);
  puVar21 = (undefined8 *)(lVar20 + *(int *)(puVar6 + 0x30));
  *puVar21 = TVar16.unknown;
  puVar21[1] = TVar10.unknown;
  *(char *)(puVar21 + 2) = (char)puVar8;
  puVar21[3] = puVar18;
  FUN_100007b14(TVar16.unknown,TVar10.unknown,puVar8);
  _swift_bridgeObjectRetain(puVar18);
  FUN_10002a29c(lVar3,&DAT_100560c10,&DAT_1004368a8);
  FUN_100025b34(TVar16.unknown,TVar10.unknown,puVar8);
  _swift_bridgeObjectRelease(puVar18);
  FUN_10002a29c(lVar19,&DAT_100560c10,&DAT_1004368a8);
  return;
}

