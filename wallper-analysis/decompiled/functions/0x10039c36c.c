// rea decompile_all
// name: FUN_10039c36c
// address: 0x10039c36c
// body: available
// range: 0x10039c36c-0x10039ce87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039c36c(undefined8 param_1)

{
  int iVar1;
  Binding<bool> BVar2;
  StringInterpolation stringInterpolation;
  Text TVar3;
  code *pcVar4;
  StringInterpolation SVar5;
  Set SVar6;
  Alignment AVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  State SVar13;
  char *pcVar14;
  undefined *puVar15;
  LocalizedStringKey LVar16;
  undefined **ppuVar17;
  undefined4 uVar18;
  uint uVar19;
  TargetProtocolConformanceDescriptor *pTVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar22;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  void *pvVar23;
  MainActor *unaff_x20;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  String stringLiteral;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 auStack_1f0 [9];
  undefined2 auStack_1a8 [4];
  long alStack_1a0 [4];
  undefined4 local_17c;
  undefined **local_178;
  Binding<bool> local_170;
  LocalizedStringKey local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  ulong local_148;
  undefined8 *local_140;
  MainActor *local_138;
  long local_130;
  StringInterpolation local_128;
  long local_120;
  ulong local_118;
  Binding<bool> local_110;
  Text TStack_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_90;
  undefined *puStack_88;
  
  puVar22 = &DAT_10054ac38;
  local_e0 = param_1;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_1a0[2] = (long)alStack_1a0 - extraout_x8;
  TStack_108.unknown = (undefined *)Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Load size is inaccurate */
  local_110.unknown = TStack_108.unknown[-8];
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_110.unknown + 0x40));
  lVar21 = ((long)alStack_1a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_10054a9c8;
  alStack_1a0[1] = lVar21;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12;
  local_120 = lVar21;
  SVar5 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(SVar5.unknown + -8) + 0x40));
  puVar22 = (undefined *)(lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar21 = 0;
  local_128.unknown = puVar22;
  FUN_10039c2bc();
  lVar25 = *(long *)(lVar21 + -8);
  lVar27 = *(long *)(lVar25 + 0x40);
  local_130 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)puVar22 - (lVar27 + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_10055f2d0;
  FUN_100002f94(&DAT_10055f2d0,&DAT_100434a48);
  local_d8 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar29 - extraout_x8_03;
  puVar22 = &DAT_10055f2d8;
  AVar7.unknown = &DAT_100434a50;
  FUN_100002f94();
  local_f0 = *(long *)(puVar22 + -8);
  local_e8 = puVar22;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar26 - extraout_x8_04;
  puVar22 = *(undefined **)(unaff_x20 + 0x10);
  local_d0 = lVar21;
  if (puVar22 == (undefined *)0x0) {
    FUN_100279594(0);
    pcVar4 = FUN_100279594;
    puVar11 = &DAT_100553dd0;
    pTVar20 = &TargetProtocolConformanceDescriptor_10042d178;
LAB_10039ce6c:
    FUN_1000036d0(puVar11,pcVar4,pTVar20);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10039ce88);
    (*pcVar4)();
  }
  SVar6.unknown = puVar22;
  _swift_retain();
  FUN_1002748c4();
  _swift_release(puVar22);
  _swift_bridgeObjectRelease();
  SVar6 = SwiftUI::Axis::Set::get_vertical(SVar6);
  FUN_100002f94(&DAT_10055f2e0,&DAT_100434a58);
  FUN_1000087a0(&DAT_10055f2e8,&DAT_10055f2e0,&DAT_100434a58,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_1005234c0);
  ppuVar17 = &local_90;
  SwiftUI::ScrollView::_init(SVar6,true);
  puVar22 = &DAT_10055f2f0;
  puVar8 = &DAT_100434a60;
  FUN_100002f94();
  iVar1 = *(int *)(puVar22 + 0x24);
  FUN_10039dac4(lVar26 + iVar1,AVar7.unknown);
  _swift_bridgeObjectRelease();
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  puVar22 = &DAT_10055f2f8;
  FUN_100002f94(&DAT_10055f2f8,&DAT_100434a68);
  puVar11 = (undefined8 *)(lVar26 + iVar1 + (long)*(int *)(puVar22 + 0x24));
  *puVar11 = AVar7.unknown;
  puVar11[1] = puVar8;
  uVar18 = 0x39c2bc;
  FUN_100029504(unaff_x20,lVar29,FUN_10039c2bc);
  uVar28 = (ulong)*(byte *)(lVar25 + 0x50);
  uVar24 = uVar28 + 0x10 & (uVar28 ^ 0xffffffffffffffff);
  puVar22 = &DAT_10053cb18;
  _swift_allocObject(&DAT_10053cb18,uVar24 + lVar27,uVar28 | 7);
  FUN_100007e64(lVar29,puVar22 + uVar24,FUN_10039c2bc);
  puVar8 = &DAT_10055f300;
  FUN_100002f94(&DAT_10055f300,&DAT_100434a70);
  puVar11 = (undefined8 *)(lVar26 + *(int *)(puVar8 + 0x24));
  *puVar11 = FUN_1003a3e04;
  puVar11[1] = puVar22;
  puVar11[2] = 0;
  puVar11[3] = 0;
  FUN_100029504(unaff_x20,lVar29,FUN_10039c2bc);
  puVar22 = &DAT_10053cb40;
  _swift_allocObject(&DAT_10053cb40,uVar24 + lVar27,uVar28 | 7);
  FUN_100007e64(lVar29,puVar22 + uVar24);
  puVar15 = local_d8;
  puVar11 = (undefined8 *)(lVar26 + *(int *)(local_d8 + 0x24));
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = FUN_1003a3f88;
  puVar11[3] = puVar22;
  puVar22 = (undefined *)0xef7473696c79616c;
  stringLiteral.bridgeObject = (void *)0xef7473696c79616c;
  stringLiteral.str = (char *)0x5020656d616e6552;
  local_168 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  local_17c = uVar18;
  local_178 = ppuVar17;
  local_170.unknown = puVar22;
  FUN_100029504(unaff_x20,lVar29,FUN_10039c2bc);
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar22 = PTR_typeMetadataAccessor_1005246d8;
  pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar11 = &DAT_100558b80;
  alStack_1a0[3] = lVar26;
  FUN_1000036d0(&DAT_100558b80,puVar22,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  uVar30 = uVar28 + 0x20 & (uVar28 ^ 0xffffffffffffffff);
  puVar22 = &DAT_10053cb68;
  _swift_allocObject(&DAT_10053cb68,uVar30 + lVar27,uVar28 | 7);
  *(MainActor **)(puVar22 + 0x10) = pMVar10;
  *(undefined8 **)(puVar22 + 0x18) = puVar11;
  FUN_100007e64(lVar29,puVar22 + uVar30,FUN_10039c2bc);
  pMVar10 = unaff_x20;
  FUN_100029504(unaff_x20,lVar29,FUN_10039c2bc);
  local_138 = pMVar9;
  pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar10);
  puVar22 = &DAT_10053cb90;
  local_148 = uVar28;
  local_100 = (undefined *)lVar27;
  _swift_allocObject(&DAT_10053cb90,uVar30 + lVar27,uVar28 | 7);
  *(MainActor **)(puVar22 + 0x10) = pMVar10;
  *(undefined8 **)(puVar22 + 0x18) = puVar11;
  local_140 = puVar11;
  local_f8 = lVar29;
  FUN_100007e64(lVar29,puVar22 + uVar30,FUN_10039c2bc);
  SwiftUI::Binding::init();
  puVar22 = &DAT_10054de90;
  FUN_100002f94(&DAT_10054de90,&DAT_10041ed08);
  puVar12 = puVar22;
  FUN_1003a4138();
  puVar8 = &DAT_10054dee0;
  FUN_1000087a0(&DAT_10054dee0,&DAT_10054de90,&DAT_10041ed08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  local_160 = puVar8;
  *(undefined **)(lVar21 + -0x10) = puVar8;
  local_158 = puVar12;
  *(undefined **)(lVar21 + -0x20) = puVar22;
  *(undefined **)(lVar21 + -0x18) = puVar12;
  *(undefined ***)(lVar21 + -0x30) = &local_90;
  *(undefined **)(lVar21 + -0x28) = puVar15;
  BVar2.unknown = local_170.unknown;
  ppuVar17 = local_178;
  lVar25 = alStack_1a0[3];
  (extension_SwiftUI)::SwiftUI::View::_alert(local_168,local_170);
  _swift_bridgeObjectRelease(ppuVar17);
  _swift_bridgeObjectRelease(BVar2.unknown);
  _swift_release(uStack_b8);
  _swift_release(local_c0);
  SVar5.unknown = &DAT_100434a48;
  FUN_10002a29c(lVar25,&DAT_10055f2d0);
  stringInterpolation.unknown = local_128.unknown;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(0xe,1);
  SVar31.bridgeObject = (void *)0xaa00000000009c80;
  SVar31.str = (char *)0xe2206574656c6544;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar31,SVar5);
  SVar13.unknown = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  lVar26 = local_120;
  SwiftUI::State::get_wrappedValue(SVar13);
  uVar24 = local_118;
  puVar8 = &DAT_10041bbe0;
  FUN_1000087e4(lVar26,local_118,&DAT_10054a9c8);
  TVar3.unknown = TStack_108.unknown;
  BVar2.unknown = local_110.unknown;
  uVar28 = uVar24;
  (**(code **)((long)local_110.unknown + 0x30))(uVar24,1,TStack_108.unknown);
  lVar25 = alStack_1a0[1];
  local_150 = puVar22;
  if ((int)uVar28 == 1) {
    SVar5.unknown = &DAT_10041bbe0;
    FUN_10002a29c(lVar26,&DAT_10054a9c8);
    pcVar14 = (char *)0x0;
    pvVar23 = (void *)0xe000000000000000;
    puVar22 = local_100;
  }
  else {
    (**(code **)((long)BVar2.unknown + 0x20))(alStack_1a0[1],uVar24,TVar3.unknown);
    lVar27 = *(long *)unaff_x20;
    if (lVar27 == 0) {
      FUN_1001b7378(0);
      pcVar4 = FUN_1001b7378;
      puVar11 = (undefined8 *)&DAT_100553df0;
      pTVar20 = &TargetProtocolConformanceDescriptor_10042a5d0;
      goto LAB_10039ce6c;
    }
    _swift_retain(lVar27);
    lVar29 = alStack_1a0[2];
    FUN_1001b6e74(alStack_1a0[2],lVar25);
    _swift_release(lVar27);
    (**(code **)((long)BVar2.unknown + 8))(lVar25,TVar3.unknown);
    FUN_10002a29c(lVar26,&DAT_10054a9c8,&DAT_10041bbe0);
    puVar15 = (undefined *)0x0;
    FUN_10025ee04();
    lVar25 = lVar29;
    SVar5.unknown = puVar15;
    (**(code **)(*(long *)(puVar15 + -8) + 0x30))(lVar29,1);
    puVar22 = local_100;
    if ((int)lVar25 == 1) {
      SVar5.unknown = &DAT_10041e8e0;
      FUN_10002a29c(lVar29,&DAT_10054ac38);
      pcVar14 = (char *)0x0;
      pvVar23 = (void *)0xe000000000000000;
    }
    else {
      pcVar14 = *(char **)(lVar29 + *(int *)(puVar15 + 0x14));
      pvVar23 = (void *)((undefined8 *)(lVar29 + *(int *)(puVar15 + 0x14)))[1];
      _swift_bridgeObjectRetain(pvVar23);
      FUN_100029548(lVar29,FUN_10025ee04);
    }
  }
  SVar32.bridgeObject = pvVar23;
  SVar32.str = pcVar14;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar32,SVar5);
  _swift_bridgeObjectRelease(pvVar23);
  SVar33.bridgeObject = (void *)0xa400000000000000;
  SVar33.str = (char *)0x3f9d80e2;
  puVar15 = (undefined *)0xa400000000000000;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar33,SVar5);
  uVar19 = (uint)SVar5.unknown;
  LVar16 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
  *(undefined2 *)(lVar21 + -8) = 0x100;
  *(undefined8 *)(lVar21 + -0x10) = 0;
  uVar19 = uVar19 & 1;
  TStack_108 = SwiftUI::Text::_init(LVar16);
  lVar25 = local_f8;
  local_118 = CONCAT44(local_118._4_4_,uVar19);
  pMVar9 = unaff_x20;
  local_110.unknown = puVar15;
  local_100 = puVar8;
  FUN_100029504(unaff_x20,local_f8,FUN_10039c2bc);
  pMVar10 = local_138;
  pMVar9 = Swift::MainActor::get_shared(local_138,pMVar9);
  uVar24 = local_148;
  puVar8 = &DAT_10053cbb8;
  _swift_allocObject(&DAT_10053cbb8,uVar30 + (long)puVar22,local_148 | 7);
  puVar11 = local_140;
  *(MainActor **)(puVar8 + 0x10) = pMVar9;
  *(undefined8 **)(puVar8 + 0x18) = local_140;
  FUN_100007e64(lVar25,puVar8 + uVar30,FUN_10039c2bc);
  FUN_100029504(unaff_x20,lVar25,FUN_10039c2bc);
  pMVar10 = Swift::MainActor::get_shared(pMVar10,unaff_x20);
  puVar8 = &DAT_10053cbe0;
  _swift_allocObject(&DAT_10053cbe0,uVar30 + (long)puVar22,uVar24 | 7);
  *(MainActor **)(puVar8 + 0x10) = pMVar10;
  *(undefined8 **)(puVar8 + 0x18) = puVar11;
  FUN_100007e64(lVar25,puVar8 + uVar30,FUN_10039c2bc);
  SwiftUI::Binding::init();
  puVar22 = &DAT_10054e178;
  FUN_100002f94(&DAT_10054e178,&DAT_10042f440);
  local_90 = local_d8;
  puStack_88 = local_150;
  ppuVar17 = &local_90;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_SwiftUI_View>(_:_SwiftUI_LocalizedStringKey,isPresented:_SwiftUI_Binding<Swift_Bool>,actions:_()__>_A1)__>_some>>_100523090
             ,1);
  puVar8 = &DAT_10054e208;
  FUN_1000087a0(&DAT_10054e208,&DAT_10054e178,&DAT_10042f440,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar21 + -0x18) = puVar8;
  *(undefined **)(lVar21 + -0x10) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100522e18;
  *(undefined ***)(lVar21 + -0x20) = ppuVar17;
  *(undefined **)(lVar21 + -0x30) = puVar22;
  *(undefined **)(lVar21 + -0x28) = PTR___type_metadata_for_SwiftUI_Text_100522e28;
  puVar8 = local_e8;
  *(undefined8 *)(lVar21 + -0x40) = 0;
  *(undefined **)(lVar21 + -0x38) = puVar8;
  *(undefined8 **)(lVar21 + -0x50) = &local_c0;
  *(code **)(lVar21 + -0x48) = FUN_10035f734;
  lVar21 = local_d0;
  puVar22 = local_100;
  TVar3.unknown = TStack_108.unknown;
  BVar2.unknown = local_110.unknown;
  uVar24 = local_118 & 0xffffffff;
  (extension_SwiftUI)::SwiftUI::View::_alert(TStack_108,local_110);
  _swift_release(uStack_a0);
  _swift_release(local_a8);
  FUN_100025b34(TVar3.unknown,BVar2.unknown,uVar24);
  _swift_bridgeObjectRelease(puVar22);
  (**(code **)(local_f0 + 8))(lVar21,puVar8);
  return;
}

