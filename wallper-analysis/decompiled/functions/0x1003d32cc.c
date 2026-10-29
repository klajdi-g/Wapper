// rea decompile_all
// name: FUN_1003d32cc
// address: 0x1003d32cc
// body: available
// range: 0x1003d32cc-0x1003d39c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d32cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  long lVar8;
  State SVar9;
  Font FVar10;
  Color CVar11;
  Set _all;
  Set SVar12;
  RoundedRectangle RVar13;
  undefined7 extraout_var;
  Color CVar14;
  Alignment AVar15;
  VerticalAlignment VVar16;
  undefined8 *puVar17;
  CGFloat size;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar19;
  ulong uVar20;
  long unaff_x20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  String stringLiteral;
  String SVar32;
  undefined8 auStack_160 [4];
  undefined8 auStack_140 [2];
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  Binding<String> local_118;
  LocalizedStringKey local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puVar18;
  
  puVar7 = &DAT_100560ad0;
  local_c8 = param_1;
  FUN_100002f94(&DAT_100560ad0,&DAT_100436758);
  local_d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar17 = (undefined8 *)((long)auStack_140 + lVar4);
  puVar7 = &DAT_100560ad8;
  FUN_100002f94(&DAT_100560ad8,&DAT_100436760);
  local_e0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = (long)puVar17 - extraout_x8_00;
  local_f8 = (undefined *)SwiftUI::PlainTextFieldStyle::typeMetadataAccessor();
  local_100 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  lVar26 = ((long)puVar17 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  FUN_1003e4bc8();
  lVar24 = *(long *)(lVar8 + -8);
  lVar22 = *(long *)(lVar24 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar26 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_10054def8;
  FUN_100002f94(&DAT_10054def8,&DAT_10041ed30);
  local_108 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = lVar23 - extraout_x8_02;
  puVar18 = &DAT_100560ae0;
  FUN_100002f94(&DAT_100560ae0,&DAT_100436770);
  local_e8 = puVar18;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)(lVar21 - extraout_x8_03);
  puVar1 = (undefined1 *)(unaff_x20 + *(int *)(lVar8 + 0x44));
  local_c0 = *puVar1;
  local_b8 = *(undefined8 *)(puVar1 + 8);
  VVar16.unknown = &DAT_10054ab50;
  local_f0 = puVar19;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue((State)VVar16.unknown);
  if (((char)local_a0 == '\x01') && (*(char *)(unaff_x20 + *(int *)(lVar8 + 0x20)) == '\x01')) {
    stringLiteral.bridgeObject = (void *)0xe500000000000000;
    stringLiteral.str = (char *)0x656c746954;
    puVar18 = (undefined *)0xe500000000000000;
    local_110 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    puVar17 = (undefined8 *)(unaff_x20 + *(int *)(lVar8 + 0x48));
    local_a0 = *puVar17;
    uStack_98 = puVar17[1];
    local_90 = puVar17[2];
    SVar9.unknown = &DAT_10054dd08;
    local_124 = param_8;
    local_120 = param_9;
    local_118.unknown = puVar18;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_projectedValue(SVar9);
    local_130 = CONCAT71(uStack_bf,local_c0);
    auStack_140[1] = uStack_a8;
    FUN_100029504();
    uVar20 = (ulong)*(byte *)(lVar24 + 0x50);
    uVar25 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
    puVar18 = &DAT_10053e040;
    _swift_allocObject(&DAT_10053e040,uVar25 + lVar22,uVar20 | 7);
    FUN_100007e64(lVar23,puVar18 + uVar25,FUN_1003e4bc8);
    puVar19[-2] = FUN_1003eebb0;
    puVar19[-1] = puVar18;
    puVar19[-4] = FUN_10002a200;
    puVar19[-3] = 0;
    (extension_SwiftUI)::SwiftUI::TextField::_init(local_110,local_118);
    SwiftUI::PlainTextFieldStyle::init();
    FVar10.unknown = &DAT_100551538;
    FUN_1000087a0(&DAT_100551538,&DAT_10054def8,&DAT_10041ed30,
                  PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_1005237a0);
    puVar18 = &DAT_100551540;
    FUN_1000036d0(&DAT_100551540,PTR_typeMetadataAccessor_1005227c8,
                  PTR_SwiftUI__SwiftUI__PlainTextFieldStyle_>SwiftUI__TextFieldStyle_1005227b8);
    puVar17 = local_f0;
    puVar5 = local_f8;
    size.unknown = local_f8;
    (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
              (local_f0,lVar26,puVar7,local_f8,FVar10.unknown,puVar18);
    (**(code **)(local_100 + 8))(lVar26,puVar5);
    (**(code **)(local_108 + 8))(lVar21,puVar7);
    SVar32.bridgeObject = (void *)0xe700000000000000;
    SVar32.str = (char *)0x616967726f6547;
    FVar10 = SwiftUI::Font::custom(SVar32,size,FVar10);
    puVar7 = &DAT_100435fb0;
    _swift_getKeyPath();
    CVar11.unknown = &DAT_100551530;
    FUN_100002f94(&DAT_100551530,&DAT_100430f10);
    iVar3 = *(int *)(CVar11.unknown + 0x24);
    *(undefined8 *)((long)puVar17 + (long)iVar3) = puVar7;
    ((undefined8 *)((long)puVar17 + (long)iVar3))[1] = FVar10.unknown;
    CVar11 = SwiftUI::Color::get_white(CVar11);
    SVar12.unknown = &DAT_10055c200;
    FUN_100002f94(&DAT_10055c200,&DAT_100433990);
    *(undefined **)((long)puVar17 + (long)*(int *)(SVar12.unknown + 0x24)) = CVar11.unknown;
    _all = SwiftUI::Edge::Set::get_horizontal(SVar12);
    uVar27 = 0x4018000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    SVar12.unknown = &DAT_100560b10;
    uVar29 = param_3;
    uVar30 = param_4;
    uVar31 = param_5;
    FUN_100002f94(&DAT_100560b10,&DAT_100436788);
    puVar1 = (undefined1 *)((long)puVar17 + (long)*(int *)(SVar12.unknown + 0x24));
    *puVar1 = (char)_all.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar27;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    SVar12 = SwiftUI::Edge::Set::get_vertical(SVar12);
    uVar27 = 0x4010000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
    puVar7 = &DAT_100560b00;
    FUN_100002f94(&DAT_100560b00,&DAT_100436780);
    puVar1 = (undefined1 *)((long)puVar17 + (long)*(int *)(puVar7 + 0x24));
    *puVar1 = (char)SVar12.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar27;
    *(undefined8 *)(puVar1 + 0x10) = uVar29;
    *(undefined8 *)(puVar1 + 0x18) = uVar30;
    *(undefined8 *)(puVar1 + 0x20) = uVar31;
    puVar1[0x28] = 0;
    puVar19 = (undefined8 *)((long)puVar17 + (long)*(int *)(local_e8 + 0x24));
    RVar13 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
    iVar3 = *(int *)(RVar13.unknown + 0x14);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
    ;
    RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
    CVar11.unknown = (undefined *)((long)puVar19 + (long)iVar3);
    (**(code **)(*(long *)(CONCAT71(extraout_var,RVar6.value) + -8) + 0x68))
              (CVar11.unknown,uVar2,CONCAT71(extraout_var,RVar6.value));
    auVar28 = NEON_fmov(0x4010000000000000,8);
    puVar19[1] = auVar28._8_8_;
    *puVar19 = auVar28._0_8_;
    CVar11 = SwiftUI::Color::get_white(CVar11);
    CVar14 = SwiftUI::Color::opacity(0.1,CVar11);
    _swift_release(CVar11.unknown);
    AVar15.unknown = &DAT_10054a8b8;
    puVar7 = &DAT_10041fc00;
    FUN_100002f94();
    *(undefined **)((long)puVar19 + (long)*(int *)(AVar15.unknown + 0x34)) = CVar14.unknown;
    *(undefined2 *)((long)puVar19 + (long)*(int *)(AVar15.unknown + 0x38)) = 0x100;
    AVar15 = SwiftUI::Alignment::get_center(AVar15);
    puVar18 = &DAT_10054a8c0;
    FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
    lVar4 = local_d8;
    iVar3 = *(int *)(puVar18 + 0x24);
    *(undefined8 *)((long)puVar19 + (long)iVar3) = AVar15.unknown;
    ((undefined8 *)((long)puVar19 + (long)iVar3))[1] = puVar7;
    puVar7 = &DAT_100560ae0;
    puVar18 = &DAT_100436770;
    FUN_1000087e4(puVar17,local_d8,&DAT_100560ae0,&DAT_100436770);
    _swift_storeEnumTagMultiPayload(lVar4,local_e0,0);
    FUN_1003eea28();
    FUN_1000087a0(&DAT_100560b18,&DAT_100560ad0,&DAT_100436758,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar4);
  }
  else {
    VVar16 = SwiftUI::VerticalAlignment::get_center(VVar16);
    *puVar17 = VVar16.unknown;
    *(undefined8 *)((long)auStack_140 + lVar4 + 8) = 0x4018000000000000;
    *(undefined1 *)((long)&local_130 + lVar4) = 0;
    puVar7 = &DAT_100560ae8;
    FUN_100002f94(&DAT_100560ae8,&DAT_100436778);
    FUN_1003d874c((long)puVar17 + (long)*(int *)(puVar7 + 0x2c));
    lVar4 = local_d8;
    puVar7 = &DAT_100560ad0;
    puVar18 = &DAT_100436758;
    FUN_1000087e4(puVar17,local_d8,&DAT_100560ad0,&DAT_100436758);
    _swift_storeEnumTagMultiPayload(lVar4,local_e0,1);
    FUN_1003eea28();
    FUN_1000087a0(&DAT_100560b18,&DAT_100560ad0,&DAT_100436758,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_1005233f8);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar4);
  }
  FUN_10002a29c(puVar17,puVar7,puVar18);
  return;
}

