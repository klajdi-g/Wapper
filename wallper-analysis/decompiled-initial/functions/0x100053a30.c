// rea decompile_all
// name: FUN_100053a30
// address: 0x100053a30
// body: available
// range: 0x100053a30-0x10005498b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005423c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100053a30(long param_1,Alignment param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Locale LVar9;
  LocalizationValue LVar10;
  Alignment AVar11;
  _FrameLayout _Var12;
  undefined *puVar13;
  char *pcVar14;
  LocalizationValue LVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  UnitPoint UVar19;
  AnyTransition AVar20;
  ulong uVar21;
  void *pvVar22;
  long extraout_x8;
  long lVar23;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar24;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar25;
  long extraout_x8_09;
  code *pcVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 uVar27;
  long lVar28;
  char *pcVar29;
  String SVar30;
  String stringLiteral;
  char acStack_320 [8];
  char *local_318 [3];
  long local_300 [2];
  undefined *local_2f0;
  long local_2e8;
  long local_2e0;
  undefined *local_2d8;
  long local_2d0;
  undefined *local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  undefined *local_290;
  undefined *local_288;
  undefined *local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  long local_260;
  long local_258;
  char *local_250;
  long local_248;
  ulong local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  undefined *local_218;
  undefined *puStack_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  char *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar8 = &DAT_10054d818;
  local_258 = param_1;
  FUN_100002f94(&DAT_10054d818,&DAT_10041e490);
  local_268 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  local_250 = acStack_320 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = (long)(acStack_320 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar8 = &DAT_10054d820;
  local_260 = lVar23;
  FUN_100002f94(&DAT_10054d820,&DAT_10041e498);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar23 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_00;
  local_220 = lVar23;
  local_280 = (undefined *)SwiftUI::OpacityTransition::typeMetadataAccessor();
  lVar28 = *(long *)(local_280 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar23 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_288 = (undefined *)SwiftUI::ScaleTransition::typeMetadataAccessor();
  local_2b0 = *(long *)(local_288 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2b0 + 0x40));
  lVar24 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054b370;
  local_2d0 = lVar24;
  FUN_100002f94(&DAT_10054b370,&DAT_10041c6c0);
  local_2a0 = *(long *)(puVar8 + -8);
  local_290 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2a0 + 0x40));
  lVar24 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2b8 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_01;
  puVar8 = &DAT_10054d828;
  local_2c0 = lVar24;
  FUN_100002f94(&DAT_10054d828,&DAT_10041e4a8);
  local_300[1] = *(long *)(puVar8 + -8);
  local_2f0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_300[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_04;
  puVar8 = &DAT_10054d830;
  local_300[0] = lVar24;
  FUN_100002f94(&DAT_10054d830,&DAT_10041e4b0);
  local_2e0 = *(long *)(puVar8 + -8);
  local_2d8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_2e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar24 = lVar24 - extraout_x8_05;
  local_2e8 = lVar24;
  LVar9 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  pcVar29 = (char *)(lVar24 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  LVar10 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  LVar10.unknown = pcVar29 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10054d838;
  FUN_100002f94(&DAT_10054d838,&DAT_10041e4b8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar24 = (long)LVar10.unknown - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_270 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_02;
  local_230 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_03;
  local_278 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar25 = lVar24 - extraout_x12_04;
  puVar8 = &DAT_10054d840;
  FUN_100002f94(&DAT_10054d840,&DAT_10041e4c0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar24 = uVar25 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_238 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_05;
  AVar11.unknown = param_2.unknown;
  FUN_10005498c(lVar24);
  SwiftUI::Alignment::get_center(AVar11);
  _Var12 = SwiftUI::_FrameLayout::_init((Alignment)0x4048000000000000);
  puVar1 = (undefined8 *)(lVar24 + *(int *)(puVar8 + 0x24));
  local_248 = lVar24;
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  FUN_100055304();
  local_2c8 = param_2.unknown;
  local_2a8 = lVar23;
  local_298 = lVar28;
  local_240 = uVar25;
  if (((ulong)_Var12.unknown & 1) == 0) {
    puVar8 = &DAT_10054d848;
    FUN_100002f94(&DAT_10054d848,&DAT_10041e4c8);
    pcVar26 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
    uVar27 = 1;
  }
  else {
    uVar27 = *(undefined8 *)(param_2.unknown + 0xb8);
    puVar8 = &DAT_10041e400;
    _swift_getKeyPath(&DAT_10041e400);
    puVar13 = &DAT_10041e428;
    _swift_getKeyPath(&DAT_10041e428);
    Combine::Published::_get_subscript(&local_218,uVar27,puVar8,puVar13);
    _swift_release(puVar8);
    _swift_release(puVar13);
    if (puStack_210 == (undefined *)0x0) {
      pvVar22 = (void *)0x80000001004dbe90;
      pcVar14 = (char *)0xd000000000000012;
    }
    else {
      FUN_10002a3bc(local_218,puStack_210,local_208,puStack_200,local_1f8,uStack_1f0);
      pcVar14 = (char *)0x73756f6976657250;
      pvVar22 = (void *)0xee006b6361727420;
    }
    SVar30.bridgeObject = pvVar22;
    SVar30.str = pcVar14;
    LVar15 = LocalizationValue::_init(SVar30);
    Foundation::Locale::get_current((Locale)LVar15.unknown);
    SVar30 = (extension_Foundation)::Swift::String::_init(LVar10,(Locale)0x0);
    UVar19.unknown = SVar30.bridgeObject;
    local_318[0] = SVar30.str;
    puVar8 = &DAT_100526e68;
    _swift_allocObject(&DAT_100526e68,0x168,7);
    _memcpy(puVar8 + 0x10,param_2.unknown,0x158);
    local_b0 = 0x647261776b636162;
    uStack_a8 = 0xed00006c6c69662e;
    FUN_100058a6c(param_2.unknown,&local_218);
    _swift_retain(puVar8);
    FUN_100002f94(&DAT_10054d858,&DAT_10041e4d8);
    FUN_1000372f4(&DAT_10054d860,&DAT_10054d858,&DAT_10041e4d8,FUN_100059628);
    lVar23 = local_300[0];
    SwiftUI::Button::_init();
    puVar13 = &DAT_10054d8c0;
    FUN_1000087a0(&DAT_10054d8c0,&DAT_10054d828,&DAT_10041e4a8,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar16 = puVar13;
    FUN_100037164();
    lVar24 = local_2e8;
    puVar2 = local_2f0;
    local_318[1] = LVar10.unknown;
    local_318[2] = pcVar29;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_2e8);
    (**(code **)(local_300[1] + 8))(lVar23,puVar2);
    local_c0 = local_318[0];
    local_218 = puVar2;
    puStack_210 = &DAT_100526c68;
    ppuVar17 = &local_218;
    local_208 = puVar13;
    puStack_200 = puVar16;
    puStack_b8 = UVar19.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
               ,1);
    ppuVar18 = ppuVar17;
    FUN_100026df4();
    uVar25 = local_240;
    puVar13 = local_2d8;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_240,&local_c0,local_2d8,PTR___type_metadata_for_Swift_String_100523a98,ppuVar17
               ,ppuVar18);
    _swift_release(puVar8);
    (**(code **)(local_2e0 + 8))(lVar24,puVar13);
    _swift_bridgeObjectRelease();
    UVar19 = SwiftUI::UnitPoint::get_center(UVar19);
    lVar23 = local_2d0;
    SwiftUI::ScaleTransition::init(1e-05,UVar19);
    lVar28 = local_2a8;
    SwiftUI::OpacityTransition::init();
    puVar8 = &DAT_10054b3e8;
    FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                  PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
    puVar13 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar4 = local_280;
    puVar16 = local_288;
    lVar24 = local_2c0;
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (local_2c0,lVar28,local_288,local_280,puVar8,puVar13);
    (**(code **)(local_298 + 8))(lVar28,puVar4);
    (**(code **)(local_2b0 + 8))(lVar23,puVar16);
    puVar2 = local_290;
    lVar23 = local_2a0;
    (**(code **)(local_2a0 + 0x10))(local_2b8,lVar24,local_290);
    local_218 = puVar16;
    puStack_210 = puVar4;
    ppuVar17 = &local_218;
    local_208 = puVar8;
    puStack_200 = puVar13;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar20 = SwiftUI::AnyTransition::_init(ppuVar17,puVar2,ppuVar17);
    param_2.unknown = local_2c8;
    LVar10.unknown = local_318[1];
    (**(code **)(lVar23 + 8))(lVar24,puVar2);
    puVar8 = &DAT_10054d848;
    FUN_100002f94(&DAT_10054d848,&DAT_10041e4c8);
    *(undefined **)(uVar25 + (long)*(int *)(puVar8 + 0x24)) = AVar20.unknown;
    pcVar26 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
    uVar27 = 0;
  }
  uVar21 = uVar25;
  (*pcVar26)(uVar25,uVar27,1,puVar8);
  FUN_100055444(local_220);
  FUN_100055304();
  if ((uVar21 & 1) == 0) {
    puVar8 = &DAT_10054d848;
    FUN_100002f94(&DAT_10054d848,&DAT_10041e4c8);
    lVar23 = local_278;
    (**(code **)(*(long *)(puVar8 + -8) + 0x38))(local_278,1,1,puVar8);
  }
  else {
    uVar27 = *(undefined8 *)(param_2.unknown + 0xb8);
    puVar8 = &DAT_10041e400;
    _swift_getKeyPath(&DAT_10041e400);
    puVar13 = &DAT_10041e428;
    _swift_getKeyPath(&DAT_10041e428);
    Combine::Published::_get_subscript(&local_218,uVar27,puVar8,puVar13);
    _swift_release(puVar8);
    _swift_release(puVar13);
    if (puStack_210 == (undefined *)0x0) {
      pcVar29 = (char *)0x6c6177207478654e;
      pvVar22 = (void *)0xee0072657061706c;
    }
    else {
      FUN_10002a3bc(local_218,puStack_210,local_208,puStack_200,local_1f8,uStack_1f0);
      pcVar29 = (char *)0x617274207478654e;
      pvVar22 = (void *)0xea00000000006b63;
    }
    stringLiteral.bridgeObject = pvVar22;
    stringLiteral.str = pcVar29;
    LVar15 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar15.unknown);
    SVar30 = (extension_Foundation)::Swift::String::_init(LVar10,(Locale)0x0);
    UVar19.unknown = SVar30.bridgeObject;
    local_318[2] = SVar30.str;
    puVar8 = &DAT_100526e40;
    _swift_allocObject(&DAT_100526e40,0x168,7);
    _memcpy(puVar8 + 0x10,param_2.unknown,0x158);
    local_b0 = 0x2e64726177726f66;
    uStack_a8 = 0xec0000006c6c6966;
    FUN_100058a6c(param_2.unknown,&local_218);
    _swift_retain(puVar8);
    FUN_100002f94(&DAT_10054d858,&DAT_10041e4d8);
    FUN_1000372f4(&DAT_10054d860,&DAT_10054d858,&DAT_10041e4d8,FUN_100059628);
    lVar23 = local_300[0];
    SwiftUI::Button::_init();
    puVar13 = &DAT_10054d8c0;
    FUN_1000087a0(&DAT_10054d8c0,&DAT_10054d828,&DAT_10041e4a8,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar16 = puVar13;
    FUN_100037164();
    lVar24 = local_2e8;
    puVar2 = local_2f0;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_2e8);
    (**(code **)(local_300[1] + 8))(lVar23,puVar2);
    local_c0 = local_318[2];
    local_218 = puVar2;
    puStack_210 = &DAT_100526c68;
    ppuVar17 = &local_218;
    local_208 = puVar13;
    puStack_200 = puVar16;
    puStack_b8 = UVar19.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
               ,1);
    ppuVar18 = ppuVar17;
    FUN_100026df4();
    lVar23 = local_278;
    puVar13 = local_2d8;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_278,&local_c0,local_2d8,PTR___type_metadata_for_Swift_String_100523a98,ppuVar17
               ,ppuVar18);
    _swift_release(puVar8);
    (**(code **)(local_2e0 + 8))(lVar24,puVar13);
    _swift_bridgeObjectRelease();
    UVar19 = SwiftUI::UnitPoint::get_center(UVar19);
    lVar24 = local_2d0;
    SwiftUI::ScaleTransition::init(1e-05,UVar19);
    lVar3 = local_2a8;
    SwiftUI::OpacityTransition::init();
    puVar8 = &DAT_10054b3e8;
    FUN_1000036d0(&DAT_10054b3e8,PTR_typeMetadataAccessor_1005222b8,
                  PTR_SwiftUI__SwiftUI__ScaleTransition_>SwiftUI__Transition_1005222b0);
    puVar13 = &DAT_10054ae80;
    FUN_1000036d0(&DAT_10054ae80,PTR_typeMetadataAccessor_1005225d8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_1005225c8);
    puVar4 = local_280;
    puVar16 = local_288;
    lVar28 = local_2c0;
    (extension_SwiftUI)::SwiftUI::Transition::_combined
              (local_2c0,lVar3,local_288,local_280,puVar8,puVar13);
    (**(code **)(local_298 + 8))(lVar3,puVar4);
    (**(code **)(local_2b0 + 8))(lVar24,puVar16);
    puVar2 = local_290;
    lVar24 = local_2a0;
    (**(code **)(local_2a0 + 0x10))(local_2b8,lVar28,local_290);
    local_218 = puVar16;
    puStack_210 = puVar4;
    ppuVar17 = &local_218;
    local_208 = puVar8;
    puStack_200 = puVar13;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_Transition_combined<A_where_A1:_SwiftUI_Transition>(with:_A1)__>_some>>_100521c60
               ,1);
    AVar20 = SwiftUI::AnyTransition::_init(ppuVar17,puVar2,ppuVar17);
    param_2.unknown = local_2c8;
    (**(code **)(lVar24 + 8))(lVar28,puVar2);
    puVar8 = &DAT_10054d848;
    FUN_100002f94(&DAT_10054d848,&DAT_10041e4c8);
    *(undefined **)(lVar23 + *(int *)(puVar8 + 0x24)) = AVar20.unknown;
    (**(code **)(*(long *)(puVar8 + -8) + 0x38))(lVar23,0,1,puVar8);
    uVar25 = local_240;
  }
  lVar28 = local_260;
  FUN_1000557e0(local_260);
  SwiftUI::Alignment::get_center(param_2);
  SwiftUI::_FrameLayout::_init((Alignment)0x4048000000000000);
  lVar5 = local_238;
  puVar1 = (undefined8 *)(lVar28 + *(int *)(local_268 + 0x24));
  puVar1[1] = puStack_210;
  *puVar1 = local_218;
  puVar1[3] = puStack_200;
  puVar1[2] = local_208;
  puVar1[5] = uStack_1f0;
  puVar1[4] = local_1f8;
  FUN_1000087e4(local_248,local_238,&DAT_10054d840,&DAT_10041e4c0);
  lVar6 = local_230;
  FUN_1000087e4(uVar25,local_230,&DAT_10054d838,&DAT_10041e4b8);
  lVar7 = local_228;
  FUN_1000087e4(local_220,local_228,&DAT_10054d820,&DAT_10041e498);
  lVar24 = local_270;
  FUN_1000087e4(lVar23,local_270,&DAT_10054d838,&DAT_10041e4b8);
  pcVar29 = local_250;
  FUN_1000087e4(lVar28,local_250,&DAT_10054d818,&DAT_10041e490);
  lVar3 = local_258;
  FUN_1000087e4(lVar5,local_258,&DAT_10054d840,&DAT_10041e4c0);
  puVar8 = &DAT_10054d850;
  FUN_100002f94(&DAT_10054d850,&DAT_10041e4d0);
  FUN_1000087e4(lVar6,lVar3 + *(int *)(puVar8 + 0x30),&DAT_10054d838,&DAT_10041e4b8);
  FUN_1000087e4(lVar7,lVar3 + *(int *)(puVar8 + 0x40),&DAT_10054d820,&DAT_10041e498);
  FUN_1000087e4(lVar24,lVar3 + *(int *)(puVar8 + 0x50),&DAT_10054d838,&DAT_10041e4b8);
  FUN_1000087e4(pcVar29,lVar3 + *(int *)(puVar8 + 0x60),&DAT_10054d818,&DAT_10041e490);
  FUN_10002a29c(lVar28,&DAT_10054d818,&DAT_10041e490);
  FUN_10002a29c(lVar23,&DAT_10054d838,&DAT_10041e4b8);
  FUN_10002a29c(local_220,&DAT_10054d820,&DAT_10041e498);
  FUN_10002a29c(local_240,&DAT_10054d838,&DAT_10041e4b8);
  FUN_10002a29c(local_248,&DAT_10054d840,&DAT_10041e4c0);
  FUN_10002a29c(pcVar29,&DAT_10054d818,&DAT_10041e490);
  FUN_10002a29c(lVar24,&DAT_10054d838,&DAT_10041e4b8);
  FUN_10002a29c(local_228,&DAT_10054d820,&DAT_10041e498);
  FUN_10002a29c(local_230,&DAT_10054d838,&DAT_10041e4b8);
  FUN_10002a29c(local_238,&DAT_10054d840,&DAT_10041e4c0);
  return;
}

