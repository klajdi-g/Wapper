// rea decompile_all
// name: FUN_10000dfa0
// address: 0x10000dfa0
// body: available
// range: 0x10000dfa0-0x10000f1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010000e798 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10000dfa0(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  Alignment AVar6;
  State SVar7;
  Set edges;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  StateObject SVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar15;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar16;
  code *pcVar17;
  SafeAreaRegions SVar18;
  undefined *puVar19;
  undefined8 uVar20;
  Alignment AVar21;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 auStack_2d0 [4];
  undefined1 auStack_2b0 [8];
  long local_2a8;
  undefined *local_2a0;
  long local_298;
  undefined *local_290;
  long local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  long local_268;
  undefined *local_260;
  undefined *local_258;
  long local_250;
  long local_248;
  undefined *local_240;
  undefined *local_238;
  long local_230;
  undefined *local_228;
  long local_220;
  undefined *local_218;
  long local_210;
  undefined *local_208;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 uStack_178;
  
  puVar5 = &DAT_10054a9c8;
  local_1a0 = param_1;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  local_1b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1a8 = auStack_2b0 + -extraout_x8;
  local_240 = (undefined *)Publisher::_typeMetadataAccessor();
  local_250 = *(long *)(local_240 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_250 + 0x40));
  lVar14 = (long)(auStack_2b0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_10054aac8;
  local_248 = lVar14;
  FUN_100002f94(&DAT_10054aac8,&DAT_10041bd28);
  local_2a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar21.unknown = (undefined *)(lVar14 - extraout_x8_01);
  puVar5 = &DAT_10054aad0;
  FUN_100002f94(&DAT_10054aad0,&DAT_10041bd30);
  local_290 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar18.unknown = AVar21.unknown + -extraout_x8_02;
  puVar5 = &DAT_10054aad8;
  FUN_100002f94(&DAT_10054aad8,&DAT_10041bd38);
  local_280 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)SVar18.unknown - extraout_x8_03;
  puVar5 = &DAT_10054aae0;
  FUN_100002f94(&DAT_10054aae0,&DAT_10041bd40);
  local_278 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_04;
  puVar5 = &DAT_10054aae8;
  local_298 = lVar15;
  FUN_100002f94(&DAT_10054aae8,&DAT_10041bd48);
  local_268 = *(long *)(puVar5 + -8);
  local_270 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_268 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = lVar15 - extraout_x8_05;
  puVar5 = &DAT_10054aaf0;
  local_288 = lVar15;
  FUN_100002f94(&DAT_10054aaf0,&DAT_10041bd50);
  local_260 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_06;
  puVar5 = &DAT_10054aaf8;
  local_2a8 = lVar15;
  FUN_100002f94(&DAT_10054aaf8,&DAT_10041bd58);
  local_258 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_07;
  puVar5 = &DAT_10054ab00;
  local_198 = lVar15;
  FUN_100002f94(&DAT_10054ab00,&DAT_10041bd60);
  local_238 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_08;
  puVar5 = &DAT_10054ab08;
  local_230 = lVar15;
  FUN_100002f94(&DAT_10054ab08,&DAT_10041bd68);
  local_228 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_09;
  puVar5 = &DAT_10054ab10;
  local_220 = lVar15;
  FUN_100002f94(&DAT_10054ab10,&DAT_10041bd70);
  local_218 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_10;
  puVar5 = &DAT_10054ab18;
  local_210 = lVar15;
  FUN_100002f94(&DAT_10054ab18,&DAT_10041bd78);
  local_208 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_11;
  puVar5 = &DAT_10054ab20;
  local_200 = lVar15;
  FUN_100002f94(&DAT_10054ab20,&DAT_10041bd80);
  local_1f8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_12;
  puVar5 = &DAT_10054ab28;
  local_1f0 = lVar15;
  FUN_100002f94(&DAT_10054ab28,&DAT_10041bd88);
  local_1e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_13;
  puVar5 = &DAT_10054ab30;
  local_1e0 = lVar15;
  FUN_100002f94(&DAT_10054ab30,&DAT_10041bd90);
  local_1d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_14;
  AVar6.unknown = &DAT_10054ab38;
  local_1d0 = lVar15;
  FUN_100002f94(&DAT_10054ab38,&DAT_10041bd98);
  local_1b8 = AVar6.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(AVar6.unknown + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_15 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar15 - extraout_x12;
  local_1c0 = lVar15;
  AVar6 = SwiftUI::Alignment::get_bottom(AVar6);
  FUN_100002f94(&DAT_10054ab40,&DAT_10041bda0);
  FUN_1000087a0(&DAT_10054ab48,&DAT_10054ab40,&DAT_10041bda0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  SwiftUI::ZStack::_init(AVar6);
  uVar20 = unaff_x20[0x21];
  uStack_178 = unaff_x20[1];
  local_180 = (undefined *)*unaff_x20;
  SVar7.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar7);
  local_180 = (undefined *)CONCAT71(local_180._1_7_,local_190._0_1_);
  puVar5 = &DAT_10054ab58;
  puVar9 = &DAT_10054aac8;
  FUN_1000087a0(&DAT_10054ab58,&DAT_10054aac8,&DAT_10041bd28,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_1005234e0);
  (extension_SwiftUI)::SwiftUI::View::_animation
            (SVar18.unknown,uVar20,&local_180,local_2a0,PTR___type_metadata_for_Swift_Bool_100523b70
             ,puVar5,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
  lVar14 = local_2a8;
  FUN_10002a29c(AVar21.unknown,&DAT_10054aac8,&DAT_10041bd28);
  AVar21 = SwiftUI::Alignment::get_bottom(AVar21);
  AVar6 = AVar21;
  FUN_100027944();
  *(undefined **)(lVar15 + -8) = AVar6.unknown;
  puVar5 = local_290;
  *(undefined **)(lVar15 + -0x18) = puVar9;
  *(undefined **)(lVar15 + -0x10) = puVar5;
  *(undefined **)(lVar15 + -0x20) = AVar21.unknown;
  *(undefined1 *)(lVar15 + -0x28) = 0;
  *(undefined8 *)(lVar15 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar15 + -0x38) = 1;
  *(undefined8 *)(lVar15 + -0x40) = 0;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
  FUN_10002a29c(SVar18.unknown,&DAT_10054aad0,&DAT_10041bd30);
  SVar18 = SwiftUI::SafeAreaRegions::get_all(SVar18);
  edges = SwiftUI::Edge::Set::get_all(SVar18.unknown);
  FUN_1000279fc();
  lVar15 = local_298;
  (extension_SwiftUI)::SwiftUI::View::_ignoresSafeArea(SVar18,edges);
  FUN_10002a29c(lVar16,&DAT_10054aad8,&DAT_10041bd38);
  puVar5 = &DAT_100525578;
  _swift_allocObject(&DAT_100525578,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  FUN_100027ab0();
  puVar9 = local_278;
  lVar16 = local_288;
  (extension_SwiftUI)::SwiftUI::View::_onExitCommand();
  _swift_release(puVar5);
  FUN_10002a29c(lVar15,&DAT_10054aae0,&DAT_10041bd40);
  puVar5 = &DAT_1005255a0;
  _swift_allocObject(&DAT_1005255a0,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  local_180 = puVar9;
  _swift_getOpaqueTypeConformance2
            (&local_180,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onExitCommand(perform:_(()__>_())_)__>_some>>_100522f58
             ,1);
  puVar9 = local_270;
  (extension_SwiftUI)::SwiftUI::View::_onAppear();
  _swift_release(puVar5);
  (**(code **)(local_268 + 8))(lVar16,puVar9);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557a88 != -1) {
    _swift_once(&DAT_100557a88,FUN_100255fac);
  }
  lVar15 = local_248;
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(local_248,puVar5,0);
  puVar5 = &DAT_1005255c8;
  _swift_allocObject(&DAT_1005255c8,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  puVar8 = unaff_x20;
  FUN_100027a7c();
  FUN_100027b50();
  puVar9 = &DAT_10054ab80;
  FUN_1000036d0(&DAT_10054ab80,PTR__typeMetadataAccessor_100520ee0,
                PTR__Foundation__Publisher_>Combine__Publisher_100520ed8);
  puVar11 = local_240;
  puVar10 = local_260;
  local_260 = puVar9;
  (extension_SwiftUI)::SwiftUI::View::_onReceive
            (local_198,lVar15,FUN_100027b30,puVar5,puVar10,local_240,puVar8);
  _swift_release(puVar5);
  pcVar17 = *(code **)(local_250 + 8);
  (*pcVar17)(lVar15,puVar11);
  FUN_10002a29c(lVar14,&DAT_10054aaf0,&DAT_10041bd50);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557bb8 != -1) {
    _swift_once(&DAT_100557bb8,FUN_100256014);
  }
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(lVar15,puVar9,0);
  puVar5 = &DAT_1005255f0;
  _swift_allocObject(&DAT_1005255f0,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  puVar9 = &DAT_10054ab88;
  FUN_1000087a0(&DAT_10054ab88,&DAT_10054aaf8,&DAT_10041bd58,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  lVar16 = local_198;
  lVar14 = local_230;
  (extension_SwiftUI)::SwiftUI::View::_onReceive
            (local_230,lVar15,FUN_100027bf8,puVar5,local_258,puVar11,puVar9,local_260);
  _swift_release(puVar5);
  (*pcVar17)(lVar15,puVar11);
  FUN_10002a29c(lVar16,&DAT_10054aaf8,&DAT_10041bd58);
  uStack_178 = unaff_x20[0xf];
  local_180 = (undefined *)unaff_x20[0xe];
  SVar7.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar7);
  puVar5 = &DAT_100525618;
  _swift_allocObject(&DAT_100525618,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  FUN_100027a7c();
  puVar9 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  puVar10 = &DAT_10054ab98;
  FUN_1000087a0(&DAT_10054ab98,&DAT_10054ab00,&DAT_10041bd60,
                PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
               );
  puVar11 = puVar10;
  FUN_10000384c();
  lVar15 = local_220;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_220,&local_190,thunk_FUN_100027b30,puVar5,local_238,puVar9,puVar10,puVar11);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(uStack_188);
  FUN_10002a29c(lVar14,&DAT_10054ab00,&DAT_10041bd60);
  SVar12.unknown = (undefined *)unaff_x20[9];
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar12);
  puVar5 = &DAT_10041bdb8;
  _swift_getKeyPath(&DAT_10041bdb8);
  puVar9 = &DAT_10041bde0;
  _swift_getKeyPath(&DAT_10041bde0);
  Combine::Published::_get_subscript(&local_180,SVar12.unknown,puVar5,puVar9);
  _swift_release(puVar5);
  _swift_release(puVar9);
  _swift_release(SVar12.unknown);
  puVar5 = local_180;
  if ((ulong)local_180 >> 0x3e == 0) {
    local_190 = *(undefined **)(((ulong)local_180 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)local_180 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < local_180) {
      _Var2.unknown = local_180;
    }
    local_190 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  lVar16 = local_1f0;
  lVar14 = local_210;
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = &DAT_100525640;
  _swift_allocObject(&DAT_100525640,0x120,7);
  _memcpy(puVar5 + 0x10,unaff_x20,0x110);
  puVar8 = unaff_x20;
  FUN_100027a7c();
  FUN_100027c28();
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (lVar14,&local_190,FUN_100027c20,puVar5,local_228,
             PTR___type_metadata_for_Swift_Int_100523bd8,puVar8,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8);
  _swift_release(puVar5);
  FUN_10002a29c(lVar15,&DAT_10054ab08,&DAT_10041bd68);
  lVar15 = unaff_x20[3];
  if (lVar15 == 0) {
    FUN_100279594(0);
    pcVar17 = FUN_100279594;
    puVar8 = &DAT_100553dd0;
    pTVar1 = &TargetProtocolConformanceDescriptor_10042d178;
  }
  else {
    puVar5 = &DAT_10041be08;
    _swift_getKeyPath(&DAT_10041be08);
    puVar9 = &DAT_10041be30;
    _swift_getKeyPath(&DAT_10041be30);
    _swift_retain(lVar15);
    Combine::Published::_get_subscript(&local_180);
    _swift_release(puVar5);
    _swift_release(puVar9);
    local_190 = (undefined *)CONCAT71(local_190._1_7_,local_180._0_1_);
    puVar5 = &DAT_100525668;
    _swift_allocObject(&DAT_100525668,0x120,7);
    _memcpy(puVar5 + 0x10,unaff_x20,0x110);
    puVar8 = unaff_x20;
    FUN_100027a7c();
    FUN_100027d14();
    lVar3 = local_200;
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (local_200,&local_190,FUN_100027ce8,puVar5,local_218,
               PTR___type_metadata_for_Swift_Bool_100523b70,puVar8,
               PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
    _swift_release(puVar5);
    FUN_10002a29c(lVar14,&DAT_10054ab10,&DAT_10041bd70);
    puVar5 = &DAT_10041be58;
    _swift_getKeyPath(&DAT_10041be58);
    puVar9 = &DAT_10041be80;
    _swift_getKeyPath(&DAT_10041be80);
    Combine::Published::_get_subscript(&local_180,lVar15,puVar5,puVar9);
    _swift_release(puVar5);
    _swift_release(puVar9);
    _swift_release(lVar15);
    local_190 = local_180;
    puVar5 = &DAT_100525690;
    _swift_allocObject(&DAT_100525690,0x120,7);
    _memcpy(puVar5 + 0x10,unaff_x20,0x110);
    puVar8 = unaff_x20;
    FUN_100027a7c();
    FUN_100027db4();
    (extension_SwiftUI)::SwiftUI::View::_onChange
              (lVar16,&local_190,thunk_FUN_100027bf8,puVar5,local_208,
               PTR___type_metadata_for_Swift_Int_100523bd8,puVar8,
               PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100523be8);
    _swift_release(puVar5);
    FUN_10002a29c(lVar3,&DAT_10054ab18,&DAT_10041bd78);
    lVar14 = unaff_x20[7];
    if (lVar14 != 0) {
      puVar5 = &DAT_10041bbe8;
      _swift_getKeyPath(&DAT_10041bbe8);
      puVar9 = &DAT_10041bc10;
      _swift_getKeyPath(&DAT_10041bc10);
      _swift_retain_n(lVar14,3);
      puVar4 = local_1a8;
      Combine::Published::_get_subscript(local_1a8);
      _swift_release(lVar14);
      _swift_release(puVar5);
      _swift_release(puVar9);
      puVar5 = &DAT_1005256b8;
      _swift_allocObject(&DAT_1005256b8,0x120,7);
      _memcpy(puVar5 + 0x10,unaff_x20,0x110);
      puVar8 = unaff_x20;
      FUN_100027a7c();
      FUN_100027e6c();
      puVar13 = puVar8;
      FUN_100027f04();
      lVar15 = local_1e0;
      (extension_SwiftUI)::SwiftUI::View::_onChange
                (local_1e0,puVar4,FUN_100027e4c,puVar5,local_1f8,local_1b0,puVar8,puVar13);
      _swift_release(puVar5);
      FUN_10002a29c(puVar4,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar16,&DAT_10054ab20,&DAT_10041bd80);
      puVar5 = &DAT_10041bb00;
      _swift_getKeyPath(&DAT_10041bb00);
      puVar9 = &DAT_10041bb28;
      _swift_getKeyPath(&DAT_10041bb28);
      Combine::Published::_get_subscript(&local_180,lVar14,puVar5,puVar9);
      _swift_release(puVar5);
      _swift_release(puVar9);
      _swift_release(lVar14);
      local_190 = (undefined *)CONCAT71(local_190._1_7_,local_180._0_1_);
      puVar5 = &DAT_1005256e0;
      _swift_allocObject(&DAT_1005256e0,0x120,7);
      _memcpy(puVar5 + 0x10,unaff_x20,0x110);
      puVar8 = unaff_x20;
      FUN_100027a7c();
      FUN_100027f8c();
      lVar16 = local_1d0;
      (extension_SwiftUI)::SwiftUI::View::_onChange
                (local_1d0,&local_190,thunk_FUN_100027e4c,puVar5,local_1e8,
                 PTR___type_metadata_for_Swift_Bool_100523b70,puVar8,
                 PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100523b78);
      _swift_release(puVar5);
      FUN_10002a29c(lVar15,&DAT_10054ab28,&DAT_10041bd88);
      puVar19 = *(undefined **)(lVar14 + _TtC7Wallper15PlaylistManager::playingSectionChanged);
      _swift_retain(puVar19);
      _swift_release(lVar14);
      puVar5 = &DAT_100525708;
      local_190 = puVar19;
      _swift_allocObject(&DAT_100525708,0x120,7);
      _memcpy(puVar5 + 0x10,unaff_x20,0x110);
      FUN_100027a7c();
      puVar9 = &DAT_10054ac18;
      FUN_100002f94(&DAT_10054ac18,&DAT_10041beb0);
      puVar11 = puVar9;
      FUN_10002802c();
      puVar10 = &DAT_10054ac28;
      FUN_1000087a0(&DAT_10054ac28,&DAT_10054ac18,&DAT_10041beb0,
                    PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100521468
                   );
      lVar14 = local_1c8;
      (extension_SwiftUI)::SwiftUI::View::_onReceive
                (local_1c8,&local_190,FUN_100028024,puVar5,local_1d8,puVar9,puVar11,puVar10);
      _swift_release(puVar19);
      _swift_release(puVar5);
      FUN_10002a29c(lVar16,&DAT_10054ab30,&DAT_10041bd90);
      puVar5 = &DAT_10054ac30;
      FUN_1000087a0(&DAT_10054ac30,&DAT_10054ab38,&DAT_10041bd98,
                    PTR_SwiftUI__SwiftUI__SubscriptionView<undefined,undefined>_>SwiftUI__View_1005223c8
                   );
      puVar9 = local_1b8;
      lVar15 = local_1c0;
      thunk_FUN_1000bdaa4(local_1c0,lVar14,local_1b8,puVar5);
      FUN_10002a29c(lVar14,&DAT_10054ab38,&DAT_10041bd98);
      thunk_FUN_1000bdaa4(local_1a0,lVar15,puVar9,puVar5);
      FUN_10002a29c(lVar15,&DAT_10054ab38,&DAT_10041bd98);
      return;
    }
    FUN_1001b7378(0);
    pcVar17 = FUN_1001b7378;
    puVar8 = (undefined8 *)&DAT_100553df0;
    pTVar1 = &TargetProtocolConformanceDescriptor_10042a5d0;
  }
  FUN_1000036d0(puVar8,pcVar17,pTVar1);
  SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10000f1b4);
  (*pcVar17)();
}

