// rea decompile_all
// name: FUN_1002ea7b0
// address: 0x1002ea7b0
// body: available
// range: 0x1002ea7b0-0x1002eb547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002eac94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002ea7b0(undefined8 param_1)

{
  int iVar1;
  LocalizedStringKey LVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  GroupedFormStyle GVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  State SVar10;
  undefined **ppuVar11;
  LocalizedStringKey LVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  Binding<bool> BVar18;
  undefined *puVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  long lVar23;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar24;
  long extraout_x8_05;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  MainActor *unaff_x20;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  Alignment AVar32;
  String stringLiteral;
  String stringLiteral_00;
  String stringLiteral_01;
  undefined8 auStack_260 [7];
  undefined8 auStack_228 [2];
  undefined8 auStack_218 [3];
  undefined8 uStack_200;
  uint local_1f8;
  uint local_1f4;
  LocalizedStringKey local_1f0;
  State local_1e8;
  undefined *local_1e0;
  long local_1d8 [3];
  long local_1c0;
  LocalizedStringKey local_1b8;
  undefined **local_1b0;
  Binding<bool> local_1a8;
  long local_1a0;
  undefined *local_198 [2];
  long local_188;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined **local_118;
  undefined *local_110;
  undefined *local_108;
  MainActor local_100 [8];
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar27 = &DAT_10055b030;
  local_198[1] = (undefined *)param_1;
  FUN_100002f94(&DAT_10055b030,&DAT_10042f8c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_188 = (long)&uStack_200 - extraout_x8;
  FUN_1002f58d4();
  local_1d8[2] = *(long *)(lVar5 + -8);
  lVar26 = *(long *)(local_1d8[2] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = ((long)&uStack_200 - extraout_x8) - (lVar26 + 0xfU & 0xfffffffffffffff0);
  GVar6 = SwiftUI::GroupedFormStyle::typeMetadataAccessor();
  local_1d8[1] = *(long *)(GVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1d8[1] + 0x40));
  lVar28 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar27 = &DAT_10055b1c8;
  FUN_100002f94(&DAT_10055b1c8,&DAT_10042f9e8);
  local_1e0 = *(undefined **)(puVar27 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar32.unknown = (undefined *)(lVar28 - extraout_x8_01);
  puVar7 = &DAT_10055b1d0;
  FUN_100002f94(&DAT_10055b1d0,&DAT_10042f9f0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = (long)AVar32.unknown - extraout_x8_02;
  puVar8 = &DAT_10055b1d8;
  FUN_100002f94(&DAT_10055b1d8,&DAT_10042f9f8);
                    /* WARNING: Load size is inaccurate */
  local_1b8.unknown = puVar8[-8];
  local_1b0 = (undefined **)puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_1b8.unknown + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_10055b1e0;
  local_1c0 = lVar31 - extraout_x8_03;
  FUN_100002f94(&DAT_10055b1e0,&DAT_10042fa00);
                    /* WARNING: Load size is inaccurate */
  local_1a8.unknown = puVar8[-8];
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_1a8.unknown + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (lVar31 - extraout_x8_03) - extraout_x8_04;
  puVar19 = &DAT_10055b1e8;
  FUN_100002f94(&DAT_10055b1e8,&DAT_10042fa08);
  local_1a0 = *(long *)(puVar19 + -8);
  local_198[0] = puVar19;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar24 - extraout_x8_05;
  FUN_100002f94(&DAT_10055b1f0,&DAT_10042fa10);
  FUN_1000087a0(&DAT_10055b1f8,&DAT_10055b1f0,&DAT_10042fa10,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  SwiftUI::Form::_init();
  (extension_SwiftUI)::SwiftUI::FormStyle::_get_grouped();
  puVar19 = &DAT_10055b200;
  FUN_1000087a0(&DAT_10055b200,&DAT_10055b1c8,&DAT_10042f9e8,
                PTR_SwiftUI__SwiftUI__Form<undefined>_>SwiftUI__View_100522d68);
  puVar9 = &DAT_10055a738;
  FUN_1000036d0(&DAT_10055a738,PTR_typeMetadataAccessor_100522318,
                PTR_SwiftUI__SwiftUI__GroupedFormStyle_>SwiftUI__FormStyle_100522310);
  (extension_SwiftUI)::SwiftUI::View::_formStyle(lVar31,lVar28,puVar27,GVar6.unknown,puVar19,puVar9)
  ;
  (**(code **)(local_1d8[1] + 8))(lVar28,GVar6.unknown);
  (**(code **)((long)local_1e0 + 8))();
  AVar32 = SwiftUI::Alignment::get_topLeading(AVar32);
  *(undefined **)(lVar25 + -0x10) = AVar32.unknown;
  *(undefined **)(lVar25 + -8) = puVar27;
  *(undefined1 *)(lVar25 + -0x18) = 0;
  *(undefined8 *)(lVar25 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar25 + -0x28) = 1;
  *(undefined8 *)(lVar25 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar27 = &DAT_10055b208;
  FUN_100002f94(&DAT_10055b208,&DAT_10042fa18);
  puVar15 = (undefined8 *)(lVar31 + *(int *)(puVar27 + 0x24));
  puVar15[9] = uStack_98;
  puVar15[8] = local_a0;
  puVar15[0xb] = uStack_88;
  puVar15[10] = uStack_90;
  puVar15[0xd] = uStack_78;
  puVar15[0xc] = local_80;
  puVar15[1] = uStack_d8;
  *puVar15 = local_e0;
  puVar15[3] = uStack_c8;
  puVar15[2] = unaff_x20;
  puVar15[5] = uStack_b8;
  puVar15[4] = local_c0;
  puVar15[7] = uStack_a8;
  puVar15[6] = uStack_b0;
  FUN_100029504();
  uVar29 = (ulong)*(byte *)(local_1d8[2] + 0x50);
  uVar30 = uVar29 + 0x10 & (uVar29 ^ 0xffffffffffffffff);
  puVar27 = &DAT_1005393c0;
  _swift_allocObject(&DAT_1005393c0,uVar30 + lVar26,uVar29 | 7);
  FUN_100007e64(lVar23,puVar27 + uVar30,FUN_1002f58d4);
  puVar19 = &DAT_10055b210;
  FUN_100002f94(&DAT_10055b210,&DAT_10042fa20);
  puVar15 = (undefined8 *)(lVar31 + *(int *)(puVar19 + 0x24));
  *puVar15 = thunk_FUN_1002fa120;
  puVar15[1] = puVar27;
  puVar15[2] = 0;
  puVar15[3] = 0;
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (lVar31 + *(int *)(puVar7 + 0x34),puVar19,0);
  FUN_100029504();
  puVar27 = &DAT_1005393e8;
  _swift_allocObject(&DAT_1005393e8,uVar30 + lVar26,uVar29 | 7);
  FUN_100007e64(lVar23,puVar27 + uVar30,FUN_1002f58d4);
  iVar1 = *(int *)(puVar7 + 0x38);
  *(undefined8 *)(lVar31 + iVar1) = FUN_1002f8a08;
  ((undefined8 *)(lVar31 + iVar1))[1] = puVar27;
  lVar28 = *(long *)unaff_x20;
  if (lVar28 != 0) {
    local_1d8[2] = ~uVar29;
    puVar27 = &DAT_10042fa28;
    _swift_getKeyPath(&DAT_10042fa28);
    puVar19 = &DAT_10042fa50;
    _swift_getKeyPath(&DAT_10042fa50);
    local_1d8[1] = uVar29;
    _swift_retain(lVar28);
    Combine::Published::_get_subscript(&local_130);
    _swift_release(puVar27);
    _swift_release(puVar19);
    _swift_release(lVar28);
    puVar27 = *(undefined **)(local_130 + 0x10);
    _swift_bridgeObjectRelease();
    local_130 = puVar27;
    FUN_100029504();
    puVar27 = &DAT_100539410;
    local_1d8[0] = lVar26;
    _swift_allocObject(&DAT_100539410,uVar30 + lVar26,uVar29 | 7);
    FUN_100007e64(lVar23,puVar27 + uVar30,FUN_1002f58d4);
    puVar19 = &DAT_10055b218;
    FUN_1000087a0(&DAT_10055b218,&DAT_10055b1d0,&DAT_10042f9f0,
                  PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
                 );
    lVar26 = local_1c0;
    local_1f4 = 0x2f8a48;
    puVar21 = puVar27;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_1c0,&local_130,0,FUN_1002f8a48,puVar27,puVar7,
               PTR___type_metadata_for_Swift_Int_100523bd8,puVar19,
               PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8);
    _swift_release(puVar27);
    FUN_1002f8a90(lVar31);
    BVar18.unknown = (undefined *)0x80000001004e5870;
    stringLiteral.bridgeObject = (void *)0x80000001004e5870;
    stringLiteral.str = (char *)0xd000000000000011;
    local_1f0 = SwiftUI::LocalizedStringKey::init(stringLiteral);
    local_100[0] = unaff_x20[*(int *)(lVar5 + 0x38)];
    local_f8 = *(undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x38) + 8);
    SVar10.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    local_1e8.unknown = SVar10.unknown;
    SwiftUI::State::get_projectedValue(SVar10);
    puVar3 = local_128;
    puVar9 = local_130;
    local_1f8 = (uint)(byte)local_120;
    puVar27 = &DAT_10054e178;
    FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
    local_128 = PTR___type_metadata_for_Swift_Int_100523bd8;
    local_118 = (undefined **)
                PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8;
    ppuVar11 = &local_130;
    local_130 = puVar7;
    local_120 = puVar19;
    _swift_getOpaqueTypeConformance2
              (ppuVar11,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
               ,1);
    puVar7 = &DAT_10054e208;
    FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
    *(undefined **)(lVar25 + -0x18) = puVar7;
    *(undefined **)(lVar25 + -0x10) =
         PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    *(undefined ***)(lVar25 + -0x20) = ppuVar11;
    *(undefined **)(lVar25 + -0x30) = puVar27;
    *(undefined **)(lVar25 + -0x28) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    ppuVar17 = local_1b0;
    *(undefined8 *)(lVar25 + -0x40) = 0;
    *(undefined ***)(lVar25 + -0x38) = ppuVar17;
    *(MainActor **)(lVar25 + -0x50) = local_100;
    *(code **)(lVar25 + -0x48) = FUN_1002ecc1c;
    uVar20 = local_1f4 & 1;
    puVar22 = puVar21;
    (extension_SwiftUI)::SwiftUI::View::_alert(local_1f0,BVar18);
    _swift_bridgeObjectRelease(puVar21);
    _swift_bridgeObjectRelease(BVar18.unknown);
    _swift_release(puVar3);
    _swift_release(puVar9);
    (**(code **)((long)local_1b8.unknown + 8))(lVar26,ppuVar17);
    BVar18.unknown = (undefined *)0x80000001004e5890;
    stringLiteral_00.bridgeObject = (void *)0x80000001004e5890;
    stringLiteral_00.str = (char *)0xd000000000000021;
    local_1b8 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
    local_100[0] = unaff_x20[*(int *)(lVar5 + 0x3c)];
    local_f8 = *(undefined8 *)(unaff_x20 + *(int *)(lVar5 + 0x3c) + 8);
    SwiftUI::State::get_projectedValue(local_1e8);
    puVar21 = local_128;
    puVar3 = local_130;
    puVar9 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    puVar19 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    local_130 = (undefined *)ppuVar17;
    local_120 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    local_108 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    ppuVar17 = &local_130;
    local_1e0 = puVar27;
    local_128 = puVar27;
    local_118 = ppuVar11;
    local_110 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
               ,1);
    local_1b0 = ppuVar17;
    *(undefined **)(lVar25 + -0x18) = puVar7;
    *(undefined **)(lVar25 + -0x10) = puVar19;
    *(undefined **)(lVar25 + -0x28) = puVar9;
    *(undefined ***)(lVar25 + -0x20) = ppuVar17;
    uVar20 = uVar20 & 1;
    *(undefined **)(lVar25 + -0x30) = puVar27;
    *(undefined8 *)(lVar25 + -0x40) = 0;
    *(undefined **)(lVar25 + -0x38) = puVar8;
    *(MainActor **)(lVar25 + -0x50) = local_100;
    *(code **)(lVar25 + -0x48) = FUN_1002ed3e4;
    puVar27 = puVar22;
    (extension_SwiftUI)::SwiftUI::View::_alert(local_1b8,BVar18);
    _swift_bridgeObjectRelease(puVar22);
    _swift_bridgeObjectRelease(BVar18.unknown);
    _swift_release(puVar21);
    _swift_release(puVar3);
    (**(code **)((long)local_1a8.unknown + 8))(lVar24,puVar8);
    puVar19 = (undefined *)0x80000001004e58c0;
    stringLiteral_01.bridgeObject = (void *)0x80000001004e58c0;
    stringLiteral_01.str = (char *)0xd00000000000001b;
    LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral_01);
    local_1c0 = CONCAT44(local_1c0._4_4_,uVar20);
    local_1b8.unknown = puVar27;
    local_1a8.unknown = puVar19;
    FUN_100029504(unaff_x20,lVar23,FUN_1002f58d4);
    pMVar13 = Swift::MainActor::typeMetadataAccessor();
    puVar27 = PTR_typeMetadataAccessor_1005246d8;
    pMVar14 = Swift::MainActor::get_shared(pMVar13,pMVar13);
    puVar15 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar27,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    lVar24 = local_1d8[1];
    lVar5 = local_1d8[0];
    uVar29 = local_1d8[1] + 0x20U & local_1d8[2];
    puVar27 = &DAT_100539438;
    _swift_allocObject(&DAT_100539438,uVar29 + local_1d8[0],local_1d8[1] | 7);
    *(MainActor **)(puVar27 + 0x10) = pMVar14;
    *(undefined8 **)(puVar27 + 0x18) = puVar15;
    FUN_100007e64(lVar23,puVar27 + uVar29,FUN_1002f58d4);
    FUN_100029504(unaff_x20,lVar23,FUN_1002f58d4);
    pMVar13 = Swift::MainActor::get_shared(pMVar13,unaff_x20);
    puVar27 = &DAT_100539460;
    _swift_allocObject(&DAT_100539460,uVar29 + lVar5,lVar24 | 7);
    *(MainActor **)(puVar27 + 0x10) = pMVar13;
    *(undefined8 **)(puVar27 + 0x18) = puVar15;
    FUN_100007e64(lVar23,puVar27 + uVar29,FUN_1002f58d4);
    SwiftUI::Binding::init();
    SVar10.unknown = &DAT_10055b0f0;
    FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
    lVar5 = local_188;
    SwiftUI::State::get_wrappedValue(SVar10);
    uVar16 = 0;
    FUN_1002f58e8();
    puVar9 = local_1e0;
    puVar19 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    puVar27 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    local_128 = local_1e0;
    local_120 = PTR___type_metadata_for_SwiftUI_Text_100522e28;
    local_118 = local_1b0;
    local_108 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
    ppuVar17 = &local_130;
    local_130 = puVar8;
    local_110 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppuVar17,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B_where_A1:_SwiftUI_View,B1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1,message:_()__>_B1___>_some>>_100523070
               ,1);
    *(undefined **)(lVar25 + -0x18) = puVar7;
    *(undefined **)(lVar25 + -0x10) = puVar27;
    *(undefined8 *)(lVar25 + -0x28) = uVar16;
    *(undefined ***)(lVar25 + -0x20) = ppuVar17;
    *(undefined **)(lVar25 + -0x30) = puVar19;
    *(undefined **)(lVar25 + -0x38) = puVar9;
    puVar27 = local_198[0];
    *(undefined8 *)(lVar25 + -0x48) = 0;
    *(undefined **)(lVar25 + -0x40) = puVar27;
    *(MainActor **)(lVar25 + -0x58) = local_100;
    *(code **)(lVar25 + -0x50) = FUN_1002edda4;
    *(code **)(lVar25 + -0x60) = FUN_1002f8da8;
    BVar18.unknown = local_1a8.unknown;
    LVar2.unknown = local_1b8.unknown;
    (extension_SwiftUI)::SwiftUI::View::_alert(LVar12,local_1a8);
    _swift_bridgeObjectRelease(LVar2.unknown);
    _swift_bridgeObjectRelease(BVar18.unknown);
    _swift_release(local_140);
    _swift_release(local_148);
    FUN_10002a29c(lVar5,&DAT_10055b030,&DAT_10042f8c0);
    (**(code **)(local_1a0 + 8))(lVar25,puVar27);
    return;
  }
  FUN_100279594(0);
  FUN_1000036d0(&DAT_100553dd0,FUN_100279594,&TargetProtocolConformanceDescriptor_10042d178);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002eb548);
  (*pcVar4)();
}

