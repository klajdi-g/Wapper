// rea decompile_all
// name: FUN_10004daec
// address: 0x10004daec
// body: available
// range: 0x10004daec-0x10004eb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004daec(long param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  Locale LVar9;
  LocalizationValue LVar10;
  HorizontalAlignment HVar11;
  LocalizationValue LVar12;
  char **ppcVar13;
  char **ppcVar14;
  LocalizedStringKey LVar15;
  GestureMask GVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar18;
  long extraout_x8_01;
  long lVar19;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  String SVar29;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  void *local_350;
  long local_348 [3];
  undefined *local_330;
  long local_328;
  undefined *local_320;
  char *local_318;
  long local_310;
  long local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2f0;
  char **local_2e8;
  char **local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  long local_2c0;
  long local_2b8;
  code *local_2b0;
  code *local_2a8;
  long local_2a0;
  long local_298;
  char *local_290;
  undefined *local_288;
  undefined *local_280;
  char *local_278;
  code *local_270;
  undefined8 *local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  LocalizationValue local_228;
  long local_220;
  long local_218;
  void *local_210;
  long local_208;
  long local_200;
  long local_1f8;
  undefined *local_1f0;
  char *local_1e8;
  undefined *puStack_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  char *local_90;
  void *pvStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 uVar17;
  
  puVar6 = &DAT_10054dbd8;
  local_2c0 = param_1;
  FUN_100002f94(&DAT_10054dbd8,&DAT_10041e980);
  lVar24 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar21 = (long)&local_350 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar21 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar22 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar28 = lVar26 - extraout_x12_01;
  local_2e8 = (char **)SwiftUI::TapGesture::typeMetadataAccessor();
  local_2f0 = *(undefined **)((long)local_2e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_2f0 + 0x40));
  puVar18 = (undefined *)(lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10054dbe0;
  local_2f8 = puVar18;
  FUN_100002f94(&DAT_10054dbe0,&DAT_10041f160);
  local_2d8 = *(undefined **)(puVar7 + -8);
  local_2d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_2d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)puVar18 - extraout_x8_01;
  puVar7 = &DAT_10054dbe8;
  local_2e0 = (char **)lVar19;
  FUN_100002f94(&DAT_10054dbe8,&DAT_10041e990);
  local_328 = *(long *)(puVar7 + -8);
  local_320 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_328 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = lVar19 - extraout_x8_02;
  puVar7 = &DAT_10054dbf0;
  local_348[2] = lVar19;
  FUN_100002f94(&DAT_10054dbf0,&DAT_10041e998);
  local_348[1] = *(long *)(puVar7 + -8);
  local_330 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(local_348[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_03;
  pcVar8 = &DAT_10054dbf8;
  local_348[0] = lVar19;
  FUN_100002f94(&DAT_10054dbf8,&DAT_10041e9a0);
  local_318 = pcVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(pcVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_04;
  puVar7 = &DAT_10054dc00;
  FUN_100002f94(&DAT_10054dc00,&DAT_10041e9a8);
  local_308 = *(long *)(puVar7 + -8);
  local_300 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_308 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar7 = &DAT_10054dc08;
  local_310 = lVar19 - extraout_x8_05;
  FUN_100002f94(&DAT_10054dc08,&DAT_10041e9b0);
  local_250 = *(long *)(puVar7 + -8);
  local_2c8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_250 + 0x40));
  lVar20 = (lVar19 - extraout_x8_05) - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_248 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_02;
  local_208 = lVar20;
  local_1f0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_270 = *(code **)(local_1f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_270 + 0x40));
  lVar20 = lVar20 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  pcVar8 = &DAT_10054dc10;
  local_218 = lVar20;
  FUN_100002f94(&DAT_10054dc10,&DAT_10041e9b8);
  local_2b0 = *(code **)(pcVar8 + -8);
  local_290 = pcVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_2b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_08;
  puVar7 = &DAT_10054dc18;
  local_2a0 = lVar20;
  FUN_100002f94(&DAT_10054dc18,&DAT_10041e9c0);
  local_2a8 = *(code **)(puVar7 + -8);
  local_288 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_2a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_09;
  local_298 = lVar20;
  LVar9 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0);
  local_230 = lVar20;
  LVar10 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  puVar18 = (undefined *)(lVar20 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10054dc20;
  local_228.unknown = puVar18;
  FUN_100002f94(&DAT_10054dc20,&DAT_10041e9c8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = (long)puVar18 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0);
  local_258 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar20 - extraout_x12_03;
  HVar11.unknown = &DAT_10054dc28;
  local_1f8 = lVar20;
  FUN_100002f94(&DAT_10054dc28,&DAT_10041e9d0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(HVar11.unknown + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_13 + 0xfU & 0xfffffffffffffff0);
  local_260 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined8 *)(lVar20 - extraout_x12_04);
  HVar11 = SwiftUI::HorizontalAlignment::get_leading(HVar11);
  *puVar23 = HVar11.unknown;
  puVar23[1] = 0x4000000000000000;
  *(undefined1 *)(puVar23 + 2) = 0;
  puVar7 = &DAT_10054dc30;
  FUN_100002f94(&DAT_10054dc30,&DAT_10041e9d8);
  local_268 = puVar23;
  FUN_10004eb6c((long)puVar23 + (long)*(int *)(puVar7 + 0x2c),param_2);
  lVar20 = *(long *)((long)param_2 + 0x80);
  local_210 = param_2;
  if (lVar20 != 0) {
    puVar7 = &DAT_10041e0f8;
    local_2b8 = lVar21;
    local_240 = lVar26;
    local_238 = lVar22;
    local_200 = lVar28;
    _swift_getKeyPath(&DAT_10041e0f8);
    puVar18 = &DAT_10041e120;
    _swift_getKeyPath(&DAT_10041e120);
    _swift_retain(lVar20);
    Combine::Published::_get_subscript(&local_1e8);
    _swift_release(puVar7);
    _swift_release(puVar18);
    _swift_release(lVar20);
    LVar10.unknown = local_228.unknown;
    bVar1 = ((ulong)local_1e8 & 1) == 0;
    local_280 = puVar6;
    local_220 = lVar24;
    if (!bVar1) {
      SVar29.bridgeObject = (void *)0x80000001004dc460;
      SVar29.str = (char *)0xd000000000000010;
      LVar12 = LocalizationValue::_init(SVar29);
      Foundation::Locale::get_current((Locale)LVar12.unknown);
      SVar29 = (extension_Foundation)::Swift::String::_init(LVar10,(Locale)0x0);
      local_350 = SVar29.bridgeObject;
      local_278 = SVar29.str;
      puVar7 = &DAT_100526fd0;
      _swift_allocObject(&DAT_100526fd0,0x168,7);
      pvVar3 = local_210;
      _memcpy(puVar7 + 0x10,local_210,0x158);
      local_80 = 0xd000000000000011;
      uStack_78 = 0x80000001004dc440;
      local_70 = 1;
      FUN_100058a6c(pvVar3,&local_1e8);
      _swift_retain(puVar7);
      FUN_100002f94(&DAT_10054dca0,&DAT_10041ea10);
      FUN_1000372f4(&DAT_10054dca8,&DAT_10054dca0,&DAT_10041ea10,FUN_10005b04c);
      lVar24 = local_2a0;
      SwiftUI::Button::_init();
      lVar21 = local_218;
      SwiftUI::PlainButtonStyle::init();
      puVar6 = &DAT_10054dce0;
      FUN_1000087a0(&DAT_10054dce0,&DAT_10054dc10,&DAT_10041e9b8,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar18 = &DAT_10054a8b0;
      FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370)
      ;
      puVar5 = local_1f0;
      pcVar8 = local_290;
      lVar20 = local_298;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (local_298,lVar21,local_290,local_1f0,puVar6,puVar18);
      (**(code **)((long)local_270 + 8))(lVar21,puVar5);
      (**(code **)((long)local_2b0 + 8))(lVar24,pcVar8);
      lVar24 = local_220;
      pvVar3 = local_350;
      local_90 = local_278;
      pvStack_88 = local_350;
      local_1e8 = pcVar8;
      puStack_1e0 = puVar5;
      ppcVar13 = &local_1e8;
      local_1d8 = puVar6;
      puStack_1d0 = puVar18;
      _swift_getOpaqueTypeConformance2
                (ppcVar13,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
                 ,1);
      ppcVar14 = ppcVar13;
      FUN_100026df4();
      puVar18 = local_288;
      (extension_SwiftUI)::SwiftUI::View::_help
                (local_1f8,&local_90,local_288,PTR___type_metadata_for_Swift_String_100523a98,
                 ppcVar13,ppcVar14);
      puVar6 = local_280;
      _swift_release(puVar7);
      (**(code **)((long)local_2a8 + 8))(lVar20,puVar18);
      _swift_bridgeObjectRelease(pvVar3);
    }
    (**(code **)(lVar24 + 0x38))(local_1f8,bVar1,1,puVar6);
    FUN_100002f94(&DAT_10054dc38,&DAT_10041e9e0);
    FUN_10005ac94();
    lVar20 = local_348[2];
    SwiftUI::SettingsLink::_init();
    lVar21 = local_218;
    SwiftUI::PlainButtonStyle::init();
    puVar6 = &DAT_10054dc48;
    FUN_1000087a0(&DAT_10054dc48,&DAT_10054dbe8,&DAT_10041e990,
                  PTR_SwiftUI__SwiftUI__SettingsLink<undefined>_>SwiftUI__View_100521e08);
    puVar7 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    puVar5 = local_1f0;
    puVar18 = local_320;
    lVar24 = local_348[0];
    local_278 = puVar7;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_348[0],lVar21,local_320,local_1f0,puVar6,puVar7);
    local_270 = *(code **)((long)local_270 + 8);
    (*local_270)(lVar21,puVar5);
    (**(code **)(local_328 + 8))(lVar20,puVar18);
    FUN_100337684(lVar19);
    (**(code **)(local_348[1] + 8))(lVar24,local_330);
    stringLiteral.bridgeObject = (void *)0xe800000000000000;
    stringLiteral.str = (char *)0x73676e6974746553;
    uVar17 = 0xe800000000000000;
    LVar15 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    puVar7 = &DAT_10054dc50;
    FUN_1000372f4(&DAT_10054dc50,&DAT_10054dbf8,&DAT_10041e9a0,FUN_10005ad2c);
    lVar24 = local_310;
    pcVar8 = local_318;
    (extension_SwiftUI)::SwiftUI::View::_help(LVar15);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(uVar17);
    FUN_10002a29c(lVar19,&DAT_10054dbf8,&DAT_10041e9a0);
    GVar16.unknown = local_2f8;
    SwiftUI::TapGesture::init(1);
    ppcVar14 = local_2e0;
    ppcVar13 = local_2e8;
    (extension_SwiftUI)::SwiftUI::Gesture::_onEnded();
    (**(code **)((long)local_2f0 + 8))(GVar16.unknown,ppcVar13);
    GVar16 = SwiftUI::GestureMask::get_all(GVar16);
    local_1e8 = pcVar8;
    ppcVar13 = &local_1e8;
    puStack_1e0 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppcVar13,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    puVar6 = &DAT_10054dc98;
    FUN_1000087a0(&DAT_10054dc98,&DAT_10054dbe0,&DAT_10041f160,
                  PTR_SwiftUI__SwiftUI___EndedGesture<undefined>_>SwiftUI__Gesture_100521fe0);
    puVar18 = local_2d0;
    puVar7 = local_300;
    (extension_SwiftUI)::SwiftUI::View::_simultaneousGesture
              (local_208,ppcVar14,GVar16.unknown,local_300,local_2d0,ppcVar13,puVar6);
    (**(code **)((long)local_2d8 + 8))(ppcVar14,puVar18);
    (**(code **)(local_308 + 8))(lVar24,puVar7);
    LVar10.unknown = local_228.unknown;
    stringLiteral_00.bridgeObject = (void *)0x80000001004dc420;
    stringLiteral_00.str = (char *)0xd000000000000011;
    LVar12 = LocalizationValue::_init(stringLiteral_00);
    Foundation::Locale::get_current((Locale)LVar12.unknown);
    SVar29 = (extension_Foundation)::Swift::String::_init(LVar10,(Locale)0x0);
    local_2f8 = SVar29.bridgeObject;
    local_2e0 = (char **)SVar29.str;
    puVar6 = &DAT_100526f80;
    _swift_allocObject(&DAT_100526f80,0x168,7);
    pvVar3 = local_210;
    _memcpy(puVar6 + 0x10,local_210,0x158);
    local_80 = 0xd000000000000022;
    uStack_78 = 0x80000001004dc3f0;
    local_70 = 0;
    FUN_100058a6c(pvVar3,&local_1e8);
    _swift_retain(puVar6);
    puVar7 = &DAT_10054dca0;
    FUN_100002f94(&DAT_10054dca0,&DAT_10041ea10);
    puVar18 = &DAT_10054dca8;
    local_2d0 = puVar7;
    FUN_1000372f4(&DAT_10054dca8,&DAT_10054dca0,&DAT_10041ea10,FUN_10005b04c);
    lVar24 = local_2a0;
    local_2d8 = puVar18;
    SwiftUI::Button::_init();
    lVar20 = local_218;
    SwiftUI::PlainButtonStyle::init();
    puVar7 = &DAT_10054dce0;
    FUN_1000087a0(&DAT_10054dce0,&DAT_10054dc10,&DAT_10041e9b8,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar5 = local_1f0;
    pcVar4 = local_278;
    pcVar8 = local_290;
    lVar19 = local_298;
    local_2f0 = puVar7;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_298,lVar20,local_290,local_1f0,puVar7,local_278);
    (*local_270)(lVar20,puVar5);
    local_2b0 = *(code **)((long)local_2b0 + 8);
    (*local_2b0)(lVar24,pcVar8);
    puVar18 = local_2f8;
    local_90 = (char *)local_2e0;
    pvStack_88 = local_2f8;
    local_1e8 = pcVar8;
    puStack_1e0 = puVar5;
    puStack_1d0 = pcVar4;
    ppcVar13 = &local_1e8;
    local_1d8 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppcVar13,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
               ,1);
    ppcVar14 = ppcVar13;
    local_2e0 = ppcVar13;
    FUN_100026df4();
    puVar7 = local_288;
    local_2e8 = ppcVar14;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_200,&local_90,local_288,PTR___type_metadata_for_Swift_String_100523a98,ppcVar13
               ,ppcVar14);
    _swift_release(puVar6);
    local_2a8 = *(code **)((long)local_2a8 + 8);
    (*local_2a8)(lVar19,puVar7);
    _swift_bridgeObjectRelease(puVar18);
    LVar10.unknown = local_228.unknown;
    stringLiteral_01.bridgeObject = (void *)0xec0000007265706c;
    stringLiteral_01.str = (char *)0x6c61572074697551;
    LVar12 = LocalizationValue::_init(stringLiteral_01);
    Foundation::Locale::get_current((Locale)LVar12.unknown);
    SVar29 = (extension_Foundation)::Swift::String::_init(LVar10,(Locale)0x0);
    local_228.unknown = SVar29.str;
    puVar6 = &DAT_100526fa8;
    _swift_allocObject(&DAT_100526fa8,0x168,7);
    pvVar3 = local_210;
    _memcpy(puVar6 + 0x10,local_210,0x158);
    local_80 = 0x7265776f70;
    uStack_78 = 0xe500000000000000;
    local_70 = 0;
    FUN_100058a6c(pvVar3,&local_1e8);
    _swift_retain(puVar6);
    SwiftUI::Button::_init();
    SwiftUI::PlainButtonStyle::init();
    puVar18 = local_1f0;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar19,lVar20,pcVar8,local_1f0,local_2f0,local_278);
    (*local_270)(lVar20,puVar18);
    (*local_2b0)(lVar24,pcVar8);
    lVar24 = local_240;
    local_1e8 = local_228.unknown;
    puStack_1e0 = SVar29.bridgeObject;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_240,&local_1e8,puVar7,PTR___type_metadata_for_Swift_String_100523a98,local_2e0,
               local_2e8);
    _swift_release(puVar6);
    (*local_2a8)(lVar19,puVar7);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    lVar20 = local_260;
    FUN_1000087e4(local_268,local_260,&DAT_10054dc28,&DAT_10041e9d0);
    lVar21 = local_258;
    FUN_1000087e4(local_1f8,local_258,&DAT_10054dc20,&DAT_10041e9c8);
    puVar7 = local_2c8;
    pcVar27 = *(code **)(local_250 + 0x10);
    (*pcVar27)(local_248,local_208,local_2c8);
    lVar22 = local_238;
    puVar18 = local_280;
    pcVar25 = *(code **)(local_220 + 0x10);
    (*pcVar25)(local_238,local_200,local_280);
    lVar19 = local_2b8;
    (*pcVar25)(local_2b8,lVar24,puVar18);
    lVar24 = local_2c0;
    FUN_1000087e4(lVar20,local_2c0,&DAT_10054dc28,&DAT_10041e9d0);
    puVar6 = &DAT_10054dce8;
    FUN_100002f94(&DAT_10054dce8,&DAT_10041ea30);
    iVar2 = *(int *)(puVar6 + 0x30);
    *(undefined8 *)(lVar24 + iVar2) = 0;
    *(undefined1 *)((undefined8 *)(lVar24 + iVar2) + 1) = 1;
    FUN_1000087e4(lVar21,lVar24 + *(int *)(puVar6 + 0x40),&DAT_10054dc20,&DAT_10041e9c8);
    lVar20 = local_248;
    (*pcVar27)(lVar24 + *(int *)(puVar6 + 0x50),local_248,puVar7);
    (*pcVar25)(lVar24 + *(int *)(puVar6 + 0x60),lVar22,puVar18);
    (*pcVar25)(lVar24 + *(int *)(puVar6 + 0x70),lVar19,puVar18);
    pcVar25 = *(code **)(local_220 + 8);
    (*pcVar25)(local_240,puVar18);
    (*pcVar25)(local_200,puVar18);
    pcVar27 = *(code **)(local_250 + 8);
    (*pcVar27)(local_208,puVar7);
    FUN_10002a29c(local_1f8,&DAT_10054dc20,&DAT_10041e9c8);
    FUN_10002a29c(local_268,&DAT_10054dc28,&DAT_10041e9d0);
    (*pcVar25)(lVar19,puVar18);
    (*pcVar25)(local_238,puVar18);
    (*pcVar27)(lVar20,puVar7);
    FUN_10002a29c(local_258,&DAT_10054dc20,&DAT_10041e9c8);
    FUN_10002a29c(local_260,&DAT_10054dc28,&DAT_10041e9d0);
    return;
  }
  FUN_1001373cc(0);
  FUN_1000036d0(&DAT_100553de0,FUN_1001373cc,&TargetProtocolConformanceDescriptor_100426ef0);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x10004eb6c);
  (*pcVar25)();
}

