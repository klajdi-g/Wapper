// rea decompile_all
// name: FUN_10037d508
// address: 0x10037d508
// body: available
// range: 0x10037d508-0x10037e0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037d508(undefined8 param_1,CGFloat param_2,long *param_3,undefined8 param_4,
                  StringInterpolation param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  Design DVar5;
  undefined *puVar6;
  StringInterpolation SVar7;
  long lVar8;
  LocalizedStringKey LVar9;
  State SVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  Text TVar13;
  undefined7 extraout_var;
  Font FVar14;
  Text TVar15;
  Color CVar16;
  undefined8 uVar17;
  Text TVar18;
  uint uVar19;
  StringInterpolation SVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar24;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar25;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 *puVar26;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar27;
  Color CVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 uStack_170;
  undefined2 auStack_168 [4];
  long alStack_160 [4];
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  char local_69;
  
  puVar6 = &DAT_10054a828;
  local_b8 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_160[1] = (long)alStack_160 - extraout_x8;
  SVar7 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar7.unknown + -8) + 0x40));
  SVar7.unknown =
       (undefined *)
       (((long)alStack_160 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_f0 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_128 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar24 = (long)SVar7.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_140 = lVar24;
  FUN_10038ffac();
  alStack_160[2] = *(long *)(lVar8 + -8);
  lVar29 = *(long *)(alStack_160[2] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - (lVar29 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055f0f8;
  FUN_100002f94(&DAT_10055f0f8,&DAT_100434898);
  alStack_160[3] = *(long *)(puVar6 + -8);
  local_108 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(alStack_160[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_10055f100;
  FUN_100002f94(&DAT_10055f100,&DAT_1004348a0);
  local_130 = *(long *)(puVar6 + -8);
  local_e8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = (lVar24 - extraout_x8_02) - extraout_x8_03;
  puVar6 = &DAT_10055f108;
  local_138 = lVar25;
  FUN_100002f94(&DAT_10055f108,&DAT_1004348a8);
  local_118 = *(long *)(puVar6 + -8);
  local_d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar25 - extraout_x8_04;
  puVar6 = &DAT_10055f110;
  local_120 = lVar25;
  FUN_100002f94(&DAT_10055f110,&DAT_1004348b0);
  local_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = (undefined8 *)(lVar25 - extraout_x8_05);
  puVar6 = &DAT_10055f118;
  local_c0 = puVar26;
  FUN_100002f94(&DAT_10055f118,&DAT_1004348b8);
  local_110 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)puVar26 - extraout_x8_06;
  puVar6 = &DAT_10055f120;
  local_100 = lVar25;
  FUN_100002f94(&DAT_10055f120,&DAT_1004348c0);
  local_d0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar25 - extraout_x8_07;
  puVar6 = &DAT_10055ee78;
  local_e0 = lVar25;
  FUN_100002f94(&DAT_10055ee78,&DAT_1004346a0);
  lVar31 = *(long *)(puVar6 + -8);
  local_f8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar25 - extraout_x8_08;
  if (*(char *)((long)param_3 + (long)*(int *)(lVar8 + 0x1c)) == '\x01') {
    CVar28.unknown = *(undefined **)((long)param_3 + (long)*(int *)(lVar8 + 0x28));
    if (CVar28.unknown == (undefined *)0x0) {
      FUN_100226ac0(0);
      FUN_1000036d0(&DAT_10054aa48,FUN_100226ac0,&TargetProtocolConformanceDescriptor_10042b420);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10037e0b8);
      (*pcVar4)();
    }
    iVar2 = *(int *)(lVar8 + 0x14);
    _swift_retain(CVar28.unknown);
    uVar27 = (long)param_3 + (long)iVar2;
    FUN_100216850();
    _swift_release();
    if ((uVar27 & 1) != 0) {
      CVar28 = SwiftUI::Color::get_green(CVar28);
      SwiftUI::Alignment::get_center((Alignment)CVar28.unknown);
      uVar22 = 0;
      SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
      local_a8 = (undefined **)CONCAT62(local_a8._2_6_,0x100);
      uVar17 = 0xeb00000000776f6e;
      stringLiteral.bridgeObject = (void *)0xeb00000000776f6e;
      stringLiteral.str = (char *)0x20676e6979616c50;
      local_b0 = CVar28.unknown;
      LVar9 = SwiftUI::LocalizedStringKey::init(stringLiteral);
      puVar6 = &DAT_10054b7b8;
      FUN_100002f94(&DAT_10054b7b8,&DAT_1004222a0);
      puVar21 = puVar6;
      FUN_10002c070();
      (extension_SwiftUI)::SwiftUI::View::_help(LVar9);
      _swift_bridgeObjectRelease(uVar22);
      _swift_bridgeObjectRelease(uVar17);
      FUN_10002a29c(&local_b0,&DAT_10054b7b8,&DAT_1004222a0);
      puVar3 = local_f8;
      lVar8 = local_100;
      (**(code **)(lVar31 + 0x10))(local_100,lVar25,local_f8);
      _swift_storeEnumTagMultiPayload(lVar8,local_110,0);
      puVar23 = 
      PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
      ;
      local_b0 = puVar6;
      local_a8 = (undefined **)puVar21;
      _swift_getOpaqueTypeConformance2
                (&local_b0,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
                 ,1);
      puVar6 = &DAT_10055f130;
      FUN_1000087a0(&DAT_10055f130,&DAT_10055f0f8,&DAT_100434898,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
      puVar21 = &DAT_10054a8b0;
      FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370)
      ;
      local_b0 = local_108;
      local_a8 = (undefined **)local_f0;
      ppuVar11 = &local_b0;
      local_a0 = puVar6;
      puStack_98 = puVar21;
      _swift_getOpaqueTypeConformance2
                (ppuVar11,
                 PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
                 ,1);
      local_b0 = local_e8;
      local_a8 = ppuVar11;
      _swift_getOpaqueTypeConformance2(&local_b0,puVar23,1);
      lVar24 = local_e0;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar8);
      puVar26 = local_c0;
      FUN_1000087e4(lVar24,local_c0,&DAT_10055f120,&DAT_1004348c0);
      _swift_storeEnumTagMultiPayload(puVar26,local_c8,0);
      FUN_10039a18c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
      FUN_10002a29c(lVar24,&DAT_10055f120,&DAT_1004348c0);
      (**(code **)(lVar31 + 8))(lVar25,puVar3);
      return;
    }
  }
  puVar1 = (undefined1 *)((long)param_3 + (long)*(int *)(lVar8 + 0x2c));
  local_a8 = *(undefined ***)(puVar1 + 8);
  local_b0 = (undefined *)CONCAT71(local_b0._1_7_,*puVar1);
  SVar10.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar10);
  if (local_69 == '\x01') {
    FUN_100029504(param_3,lVar24,FUN_10038ffac);
    uVar27 = (ulong)*(byte *)(alStack_160[2] + 0x50);
    uVar30 = uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
    puVar6 = &DAT_10053c948;
    _swift_allocObject(&DAT_10053c948,uVar30 + lVar29,uVar27 | 7);
    FUN_100007e64(lVar24,puVar6 + uVar30,FUN_10038ffac);
    FUN_100002f94(&DAT_10055f138,&DAT_1004348c8);
    FUN_10039a31c();
    SwiftUI::Button::_init();
    lVar8 = local_140;
    SwiftUI::PlainButtonStyle::init();
    puVar6 = &DAT_10055f130;
    FUN_1000087a0(&DAT_10055f130,&DAT_10055f0f8,&DAT_100434898,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
    puVar21 = &DAT_10054a8b0;
    FUN_1000036d0(&DAT_10054a8b0,PTR_typeMetadataAccessor_100522380,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100522370);
    puVar3 = local_f0;
    puVar23 = local_108;
    lVar25 = local_138;
    puVar12 = puVar6;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_138,lVar8,local_108,local_f0,puVar6,puVar21);
    (**(code **)(local_128 + 8))(lVar8,puVar3);
    (**(code **)(alStack_160[3] + 8))(lVar24 - extraout_x8_02,puVar23);
    stringLiteral_00.bridgeObject = (void *)0xe800000000000000;
    stringLiteral_00.str = (char *)0x776f6e2079616c50;
    uVar17 = 0xe800000000000000;
    LVar9 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    local_b0 = puVar23;
    local_a8 = (undefined **)puVar3;
    ppuVar11 = &local_b0;
    local_a0 = puVar6;
    puStack_98 = puVar21;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100522e98
               ,1);
    puVar23 = local_e8;
    lVar8 = local_120;
    (extension_SwiftUI)::SwiftUI::View::_help(LVar9);
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(uVar17);
    (**(code **)(local_130 + 8))(lVar25,puVar23);
    puVar3 = local_d8;
    lVar25 = local_100;
    lVar24 = local_118;
    (**(code **)(local_118 + 0x10))(local_100,lVar8,local_d8);
    _swift_storeEnumTagMultiPayload(lVar25,local_110,1);
    puVar6 = &DAT_10054b7b8;
    FUN_100002fe4(&DAT_10054b7b8,&DAT_1004222a0);
    puVar12 = puVar6;
    FUN_10002c070();
    puVar21 = 
    PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
    ;
    local_b0 = puVar6;
    local_a8 = (undefined **)puVar12;
    _swift_getOpaqueTypeConformance2
              (&local_b0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    local_b0 = puVar23;
    local_a8 = ppuVar11;
    _swift_getOpaqueTypeConformance2(&local_b0,puVar21,1);
    lVar29 = local_e0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar25);
    puVar26 = local_c0;
    FUN_1000087e4(lVar29,local_c0,&DAT_10055f120,&DAT_1004348c0);
    _swift_storeEnumTagMultiPayload(puVar26,local_c8,0);
    FUN_10039a18c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
    FUN_10002a29c(lVar29,&DAT_10055f120,&DAT_1004348c0);
    (**(code **)(lVar24 + 8))(lVar8,puVar3);
  }
  else {
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0,1);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),param_5);
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10037e074);
      (*pcVar4)();
    }
    SVar20.unknown = (undefined *)0xe400000000000000;
    puVar6 = PTR___type_metadata_for_Swift_Int_100523bd8;
    local_b0 = (undefined *)(*param_3 + 1);
    SwiftUI::LocalizedStringKey::StringInterpolation::_appendInterpolation
              (&local_b0,0x646c6c25,0xe400000000000000,PTR___type_metadata_for_Swift_Int_100523bd8,
               PTR___protocol_witness_table_for_Swift_Int___SwiftUI__FormatSpecifiable_in_SwiftUI_100523800
              );
    uVar22 = 0xe000000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar20);
    uVar19 = (uint)SVar20.unknown;
    LVar9 = SwiftUI::LocalizedStringKey::init(SVar7);
    *(undefined2 *)(lVar25 + -8) = 0x100;
    *(undefined8 *)(lVar25 + -0x10) = 0;
    puVar21 = (undefined *)(ulong)(uVar19 & 1);
    TVar13 = SwiftUI::Text::_init(LVar9);
    SwiftUI::Font::Weight::get_medium((Weight)TVar13.unknown);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    lVar8 = alStack_160[1];
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
              (alStack_160[1],1,1,CONCAT71(extraout_var,DVar5.value));
    FVar14 = SwiftUI::Font::_system(param_2,(Font)0x0);
    FUN_10002a29c(lVar8,&DAT_10054a828,&DAT_10041e3c0);
    TVar18 = TVar13;
    uVar17 = uVar22;
    CVar28.unknown = puVar21;
    TVar15 = SwiftUI::Text::_font(FVar14.unknown);
    _swift_release(FVar14.unknown);
    FUN_100025b34(TVar13.unknown,uVar22,puVar21);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = TVar18.unknown;
    uVar22 = uVar17;
    puVar23 = CVar28.unknown;
    TVar13 = SwiftUI::Text::monospacedDigit(TVar15);
    FUN_100025b34(TVar15.unknown,TVar18.unknown,uVar17);
    _swift_bridgeObjectRelease();
    CVar28 = SwiftUI::Color::get_white(CVar28);
    CVar16 = SwiftUI::Color::opacity(0.5,CVar28);
    _swift_release(CVar28.unknown);
    local_b0 = CVar16.unknown;
    FUN_100028d58();
    TVar18 = TVar13;
    puVar21 = puVar6;
    uVar17 = uVar22;
    TVar15 = SwiftUI::Text::_foregroundStyle();
    FUN_100025b34(TVar13.unknown,puVar6,uVar22);
    _swift_release(CVar16.unknown);
    _swift_bridgeObjectRelease(puVar23);
    puVar26 = local_c0;
    puVar6 = local_c8;
    *local_c0 = TVar15.unknown;
    puVar26[1] = TVar18.unknown;
    *(char *)(puVar26 + 2) = (char)puVar21;
    puVar26[3] = uVar17;
    _swift_storeEnumTagMultiPayload(puVar26,puVar6,1);
    FUN_10039a18c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar26);
  }
  return;
}

