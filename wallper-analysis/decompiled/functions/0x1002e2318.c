// rea decompile_all
// name: FUN_1002e2318
// address: 0x1002e2318
// body: available
// range: 0x1002e2318-0x1002e2983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e262c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e2318(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  Binding<bool> BVar3;
  undefined *puVar4;
  undefined *puVar5;
  GroupedFormStyle GVar6;
  undefined *puVar7;
  undefined *puVar8;
  State SVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  undefined8 *unaff_x20;
  Alignment AVar14;
  AppStorage AVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String stringLiteral;
  long alStack_230 [5];
  long alStack_208 [2];
  undefined8 auStack_1f8 [3];
  undefined8 uStack_1e0;
  Binding<bool> local_1d8;
  LocalizedStringKey local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined *local_1b8 [2];
  long local_1a8;
  undefined *local_1a0 [2];
  undefined *local_180 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_1b8[1] = (undefined *)param_1;
  GVar6 = SwiftUI::GroupedFormStyle::typeMetadataAccessor();
                    /* WARNING: Load size is inaccurate */
  local_1d0.unknown = GVar6.unknown[-8];
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_1d0.unknown + 0x40));
  lVar17 = (long)&uStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_10055ac18;
  FUN_100002f94(&DAT_10055ac18,&DAT_10042f408);
                    /* WARNING: Load size is inaccurate */
  local_1d8.unknown = puVar11[-8];
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)((long)local_1d8.unknown + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar14.unknown = (undefined *)(lVar17 - extraout_x8_00);
  puVar7 = &DAT_10055ac20;
  FUN_100002f94(&DAT_10055ac20,&DAT_10042f410);
  local_1c8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)AVar14.unknown - extraout_x8_01;
  puVar7 = &DAT_10055ac28;
  FUN_100002f94(&DAT_10055ac28,&DAT_10042f418);
  local_1c0 = *(long *)(puVar7 + -8);
  local_1b8[0] = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar16 - extraout_x8_02;
  local_1a8 = lVar13;
  FUN_100002f94(&DAT_10055ac30,&DAT_10042f420);
  FUN_1000087a0(&DAT_10055ac38,&DAT_10055ac30,&DAT_10042f420,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  SwiftUI::Form::_init();
  (extension_SwiftUI)::SwiftUI::FormStyle::_get_grouped();
  puVar7 = &DAT_10055ac40;
  FUN_1000087a0(&DAT_10055ac40,&DAT_10055ac18,&DAT_10042f408,
                PTR_SwiftUI__SwiftUI__Form<undefined>_>SwiftUI__View_100522d68);
  puVar8 = &DAT_10055a738;
  FUN_1000036d0(&DAT_10055a738,PTR_typeMetadataAccessor_100522318,
                PTR_SwiftUI__SwiftUI__GroupedFormStyle_>SwiftUI__FormStyle_100522310);
  (extension_SwiftUI)::SwiftUI::View::_formStyle(lVar16,lVar17,puVar11,GVar6.unknown,puVar7,puVar8);
  (**(code **)((long)local_1d0.unknown + 8))(lVar17,GVar6.unknown);
  (**(code **)((long)local_1d8.unknown + 8))();
  AVar14 = SwiftUI::Alignment::get_topLeading(AVar14);
  *(undefined **)(lVar13 + -0x10) = AVar14.unknown;
  *(undefined **)(lVar13 + -8) = puVar11;
  *(undefined1 *)(lVar13 + -0x18) = 0;
  *(undefined8 *)(lVar13 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar13 + -0x28) = 1;
  *(undefined8 *)(lVar13 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar11 = &DAT_10055ac48;
  FUN_100002f94(&DAT_10055ac48,&DAT_10042f428);
  puVar1 = (undefined8 *)(lVar16 + *(int *)(puVar11 + 0x24));
  puVar1[9] = uStack_90;
  puVar1[8] = local_98;
  puVar1[0xb] = uStack_80;
  puVar1[10] = local_88;
  puVar1[0xd] = uStack_70;
  puVar1[0xc] = local_78;
  puVar1[1] = uStack_d0;
  *puVar1 = local_d8;
  puVar1[3] = uStack_c0;
  puVar1[2] = local_c8;
  puVar1[5] = uStack_b0;
  puVar1[4] = local_b8;
  puVar1[7] = uStack_a0;
  puVar1[6] = local_a8;
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100559bb8 != -1) {
    _swift_once(&DAT_100559bb8,FUN_1002995e4);
  }
  puVar11 = &DAT_10055ac50;
  FUN_100002f94(&DAT_10055ac50,&DAT_10042f430);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (lVar16 + *(int *)(puVar11 + 0x34),puVar11,0);
  puVar7 = &DAT_100538f48;
  _swift_allocObject(&DAT_100538f48,0xb0,7);
  uVar12 = unaff_x20[0xc];
  uVar19 = unaff_x20[0xf];
  uVar18 = unaff_x20[0xe];
  *(undefined8 *)(puVar7 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar7 + 0x70) = uVar12;
  *(undefined8 *)(puVar7 + 0x88) = uVar19;
  *(undefined8 *)(puVar7 + 0x80) = uVar18;
  uVar12 = unaff_x20[0x10];
  uVar19 = unaff_x20[0x13];
  uVar18 = unaff_x20[0x12];
  *(undefined8 *)(puVar7 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar7 + 0x90) = uVar12;
  *(undefined8 *)(puVar7 + 0xa8) = uVar19;
  *(undefined8 *)(puVar7 + 0xa0) = uVar18;
  uVar12 = unaff_x20[4];
  uVar19 = unaff_x20[7];
  uVar18 = unaff_x20[6];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar12;
  *(undefined8 *)(puVar7 + 0x48) = uVar19;
  *(undefined8 *)(puVar7 + 0x40) = uVar18;
  uVar12 = unaff_x20[8];
  uVar19 = unaff_x20[0xb];
  uVar18 = unaff_x20[10];
  *(undefined8 *)(puVar7 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar7 + 0x50) = uVar12;
  *(undefined8 *)(puVar7 + 0x68) = uVar19;
  *(undefined8 *)(puVar7 + 0x60) = uVar18;
  uVar12 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = uVar19;
  *(undefined8 *)(puVar7 + 0x20) = uVar18;
  iVar2 = *(int *)(puVar11 + 0x38);
  *(undefined8 *)(lVar16 + iVar2) = FUN_1002e9bc8;
  ((undefined8 *)(lVar16 + iVar2))[1] = puVar7;
  FUN_1002e9be0();
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557a88 != -1) {
    _swift_once(&DAT_100557a88,FUN_100255fac);
  }
  puVar8 = local_1c8;
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (lVar16 + *(int *)(local_1c8 + 0x34),puVar7,0);
  puVar11 = &DAT_100538f70;
  _swift_allocObject(&DAT_100538f70,0xb0,7);
  uVar19 = unaff_x20[8];
  uVar18 = unaff_x20[0xb];
  uVar12 = unaff_x20[10];
  *(undefined8 *)(puVar11 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar11 + 0x50) = uVar19;
  *(undefined8 *)(puVar11 + 0x68) = uVar18;
  *(undefined8 *)(puVar11 + 0x60) = uVar12;
  uVar19 = unaff_x20[4];
  uVar18 = unaff_x20[7];
  uVar12 = unaff_x20[6];
  *(undefined8 *)(puVar11 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar11 + 0x30) = uVar19;
  *(undefined8 *)(puVar11 + 0x48) = uVar18;
  *(undefined8 *)(puVar11 + 0x40) = uVar12;
  uVar19 = unaff_x20[0x10];
  uVar18 = unaff_x20[0x13];
  uVar12 = unaff_x20[0x12];
  *(undefined8 *)(puVar11 + 0x98) = unaff_x20[0x11];
  *(undefined8 *)(puVar11 + 0x90) = uVar19;
  *(undefined8 *)(puVar11 + 0xa8) = uVar18;
  *(undefined8 *)(puVar11 + 0xa0) = uVar12;
  uVar19 = unaff_x20[0xc];
  uVar18 = unaff_x20[0xf];
  uVar12 = unaff_x20[0xe];
  *(undefined8 *)(puVar11 + 0x78) = unaff_x20[0xd];
  *(undefined8 *)(puVar11 + 0x70) = uVar19;
  *(undefined8 *)(puVar11 + 0x88) = uVar18;
  *(undefined8 *)(puVar11 + 0x80) = uVar12;
  uVar12 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar11 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar11 + 0x10) = uVar12;
  *(undefined8 *)(puVar11 + 0x28) = uVar19;
  *(undefined8 *)(puVar11 + 0x20) = uVar18;
  iVar2 = *(int *)(puVar8 + 0x38);
  *(undefined8 *)(lVar16 + iVar2) = thunk_FUN_1002e9bc8;
  ((undefined8 *)(lVar16 + iVar2))[1] = puVar11;
  AVar15.unknown = (undefined *)unaff_x20[10];
  FUN_1002e9be0();
  puVar7 = PTR___type_metadata_for_Swift_Double_100523b90;
  SwiftUI::AppStorage::get_wrappedValue(AVar15);
  puVar11 = &DAT_10055ac58;
  FUN_1000087a0(&DAT_10055ac58,&DAT_10055ac20,&DAT_10042f410,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  uVar12 = 0;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_1a8,local_180,0,FUN_1002e34d0,0,puVar8,puVar7,puVar11,
             PTR___protocol_witness_table_for_Swift_Double___Swift_Equatable_in_Swift_100523ba0);
  uStack_1e0._4_4_ = 0x42f410;
  FUN_10002a29c(lVar16,&DAT_10055ac20);
  puVar11 = (undefined *)0x80000001004e51a0;
  stringLiteral.bridgeObject = (void *)0x80000001004e51a0;
  stringLiteral.str = (char *)0xd000000000000018;
  local_1d0 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_1a0[1] = (undefined *)unaff_x20[0xd];
  local_1a0[0] = (undefined *)unaff_x20[0xc];
  SVar9.unknown = &DAT_10054ab50;
  local_1d8.unknown = puVar11;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar9);
  puVar5 = local_180[1];
  puVar4 = local_180[0];
  puVar11 = &DAT_10054e178;
  FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
  local_180[0] = puVar8;
  local_180[1] = PTR___type_metadata_for_Swift_Double_100523b90;
  ppuVar10 = local_180;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_()__>_())__>_some>>_100523150
             ,1);
  puVar7 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar13 + -0x18) = puVar7;
  *(undefined **)(lVar13 + -0x10) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  *(undefined ***)(lVar13 + -0x20) = ppuVar10;
  *(undefined **)(lVar13 + -0x30) = puVar11;
  *(undefined **)(lVar13 + -0x28) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar11 = local_1b8[0];
  *(undefined8 *)(lVar13 + -0x40) = 0;
  *(undefined **)(lVar13 + -0x38) = puVar11;
  *(undefined ***)(lVar13 + -0x50) = local_1a0;
  *(code **)(lVar13 + -0x48) = FUN_1002e3b20;
  lVar13 = local_1a8;
  BVar3.unknown = local_1d8.unknown;
  (extension_SwiftUI)::SwiftUI::View::_alert(local_1d0,local_1d8);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(BVar3.unknown);
  _swift_release(puVar5);
  _swift_release(puVar4);
  (**(code **)(local_1c0 + 8))(lVar13,puVar11);
  return;
}

