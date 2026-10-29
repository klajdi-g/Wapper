// rea decompile_all
// name: FUN_10001f3d4
// address: 0x10001f3d4
// body: available
// range: 0x10001f3d4-0x10001ff73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001f3d4(void)

{
  int iVar1;
  Binding<bool> isPresented;
  Edge arrowEdge;
  undefined1 *puVar2;
  PopoverAttachmentAnchor PVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  LocalizedStringKey LVar14;
  StringInterpolation SVar15;
  Binding<bool> *pBVar16;
  State SVar17;
  undefined7 extraout_var;
  Source SVar18;
  Binding<bool> *pBVar19;
  Binding<bool> *pBVar20;
  Binding<bool> *pBVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long lVar24;
  long extraout_x8;
  long lVar25;
  long extraout_x8_00;
  long lVar26;
  long lVar27;
  long extraout_x8_01;
  long lVar28;
  long lVar29;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  Source unaff_x20;
  undefined1 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  undefined8 *puVar37;
  code *pcVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  String stringLiteral;
  String SVar41;
  code *local_150;
  undefined1 *local_148;
  long local_140;
  Binding<bool> local_c8;
  Binding<bool> *pBStack_c0;
  Binding<bool> *local_b8;
  Binding<bool> *pBStack_b0;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar5 = &DAT_10054b6d8;
  FUN_100002f94(&DAT_10054b6d8,&DAT_10041cbb0);
  lVar24 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100549bf0;
  FUN_100002f94(&DAT_100549bf0,&DAT_100419db8);
  lVar25 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = ((long)&local_150 - extraout_x8) - extraout_x8_00;
  puVar7 = &DAT_100549c00;
  FUN_100002f94(&DAT_100549c00,&DAT_10041cbc0);
  lVar27 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = lVar26 - extraout_x8_01;
  puVar8 = &DAT_100549c08;
  FUN_100002f94(&DAT_100549c08,&DAT_100419dd0);
  lVar29 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100525c70;
  _swift_allocObject(&DAT_100525c70,0x58,7);
  uVar22 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
  uVar40 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
  uVar39 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
  *(undefined8 *)(puVar9 + 0x38) = *(undefined8 *)((long)unaff_x20.unknown + 0x28);
  *(undefined8 *)(puVar9 + 0x30) = uVar22;
  *(undefined8 *)(puVar9 + 0x48) = uVar40;
  *(undefined8 *)(puVar9 + 0x40) = uVar39;
  *(undefined8 *)(puVar9 + 0x50) = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
  uVar40 = *(undefined8 *)unaff_x20.unknown;
  uVar39 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
  uVar22 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
  *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)((long)unaff_x20.unknown + 8);
  *(undefined8 *)(puVar9 + 0x10) = uVar40;
  *(undefined8 *)(puVar9 + 0x28) = uVar39;
  *(undefined8 *)(puVar9 + 0x20) = uVar22;
  FUN_10002b2a8();
  FUN_100002f94(&DAT_10054b6e0,&DAT_10041cbd0);
  FUN_10002b2dc();
  SwiftUI::Button::_init();
  puVar9 = &DAT_10054ac38;
  FUN_100002f94(&DAT_10054ac38,&DAT_10041e8e0);
  lVar32 = *(long *)(*(long *)(puVar9 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar35 = lVar32 + 0xfU & 0xfffffffffffffff0;
  lVar33 = (lVar28 - extraout_x8_02) - uVar35;
  FUN_10001ed5c(lVar33);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar33 - uVar35;
  lVar10 = 0;
  FUN_10025ee04();
  lVar31 = *(long *)(lVar10 + -8);
  (**(code **)(lVar31 + 0x38))(lVar34,1,1,lVar10);
  puVar9 = &DAT_10054b728;
  FUN_100002f94(&DAT_10054b728,&DAT_10041cbf0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar30 = (undefined1 *)(lVar34 - extraout_x8_03);
  iVar1 = *(int *)(puVar9 + 0x30);
  FUN_1000087e4(lVar33,puVar30,&DAT_10054ac38,&DAT_10041e8e0);
  FUN_1000087e4(lVar34,puVar30 + iVar1,&DAT_10054ac38,&DAT_10041e8e0);
  pcVar38 = *(code **)(lVar31 + 0x30);
  puVar2 = puVar30;
  local_140 = lVar31;
  (*pcVar38)(puVar30,1,lVar10);
  if ((int)puVar2 == 1) {
    FUN_10002a29c(lVar34,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar33,&DAT_10054ac38,&DAT_10041e8e0);
    puVar11 = puVar30 + iVar1;
    (*pcVar38)(puVar11,1,lVar10);
    puVar2 = puVar30;
    if ((int)puVar11 == 1) {
      FUN_10002a29c(puVar30,&DAT_10054ac38,&DAT_10041e8e0);
      bVar4 = 0;
      goto LAB_10001f8f8;
    }
  }
  else {
    local_148 = puVar30;
    (*(code *)PTR____chkstk_darwin_100521118)();
    lVar31 = (long)puVar30 - uVar35;
    FUN_1000087e4(puVar30,lVar31,&DAT_10054ac38,&DAT_10041e8e0);
    puVar2 = puVar30 + iVar1;
    (*pcVar38)(puVar2,1,lVar10);
    if ((int)puVar2 != 1) {
      local_150 = pcVar38;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
      lVar36 = lVar31 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
      FUN_100007e64(puVar30 + iVar1,lVar36,FUN_10025ee04);
      lVar12 = lVar31;
      FUN_100265c18(lVar31,lVar36);
      FUN_100029548(lVar36,FUN_10025ee04);
      FUN_10002a29c(lVar34,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_10002a29c(lVar33,&DAT_10054ac38,&DAT_10041e8e0);
      FUN_100029548(lVar31,FUN_10025ee04);
      puVar2 = local_148;
      pcVar38 = local_150;
      FUN_10002a29c(puVar30,&DAT_10054ac38,&DAT_10041e8e0);
      bVar4 = (byte)lVar12 ^ 1;
      goto LAB_10001f8f8;
    }
    FUN_10002a29c(lVar34,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_10002a29c(lVar33,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(lVar31,FUN_10025ee04);
    puVar2 = local_148;
  }
  FUN_10002a29c(puVar30,&DAT_10054b728,&DAT_10041cbf0);
  bVar4 = 1;
LAB_10001f8f8:
  local_c8.unknown = (undefined *)(CONCAT71(local_c8.unknown._1_7_,bVar4) & 0xffffffffffffff01);
  puVar9 = &DAT_100549c10;
  FUN_1000087a0(&DAT_100549c10,&DAT_100549c08,&DAT_100419dd0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_1005233c8);
  puVar13 = puVar9;
  FUN_100003038();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar28,&local_c8,puVar8,&DAT_100525378,puVar9,puVar13);
  (**(code **)(lVar29 + 8))(lVar28 - extraout_x8_02,puVar8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar35 = lVar32 + 0xfU & 0xfffffffffffffff0;
  lVar31 = (long)puVar2 - uVar35;
  FUN_10001ed5c(lVar31);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar32 = lVar31 - uVar35;
  puVar23 = &DAT_10041e8e0;
  FUN_1000087e4(lVar31,lVar32,&DAT_10054ac38,&DAT_10041e8e0);
  lVar29 = lVar32;
  (*pcVar38)(lVar32,1,lVar10);
  if ((int)lVar29 == 1) {
    FUN_10002a29c(lVar31,&DAT_10054ac38,&DAT_10041e8e0);
    uVar22 = 0x80000001004dbe50;
    stringLiteral.bridgeObject = (void *)0x80000001004dbe50;
    stringLiteral.str = (char *)0xd000000000000011;
    LVar14 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
    lVar29 = lVar32 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
    pcVar38 = FUN_10025ee04;
    FUN_100007e64(lVar32,lVar29);
    SVar15 = SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(*(long *)(SVar15.unknown + -8) + 0x40));
    SwiftUI::LocalizedStringKey::StringInterpolation::init(0x12,1);
    SVar41.bridgeObject = (void *)0x80000001004dbef0;
    SVar41.str = (char *)0xd000000000000012;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              (SVar41,(StringInterpolation)pcVar38);
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation
              (*(String *)(lVar29 + *(int *)(lVar10 + 0x14)),(StringInterpolation)pcVar38);
    uVar22 = 0xe000000000000000;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
              ((String)(ZEXT816(0xe000000000000000) << 0x40),(StringInterpolation)pcVar38);
    LVar14 = SwiftUI::LocalizedStringKey::init
                       ((undefined *)(lVar29 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0)));
    FUN_10002a29c(lVar31,&DAT_10054ac38,&DAT_10041e8e0);
    FUN_100029548(lVar29,FUN_10025ee04);
  }
  pBStack_c0 = (Binding<bool> *)&DAT_100525378;
  pBVar16 = &local_c8;
  local_c8.unknown = puVar8;
  local_b8 = (Binding<bool> *)puVar9;
  pBStack_b0 = (Binding<bool> *)puVar13;
  _swift_getOpaqueTypeConformance2
            (pBVar16,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100522ea8
             ,1);
  (extension_SwiftUI)::SwiftUI::View::_help(LVar14);
  _swift_bridgeObjectRelease(puVar23);
  _swift_bridgeObjectRelease(uVar22);
  (**(code **)(lVar27 + 8))(lVar28,puVar7);
  uStack_78 = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
  local_80 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
  SVar17.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar17);
  pBVar21 = pBStack_c0;
  isPresented.unknown = local_c8.unknown;
  arrowEdge.value = local_b8._0_1_;
  puVar8 = &DAT_100525c98;
  _swift_allocObject(&DAT_100525c98,0x58,7);
  uVar22 = *(undefined8 *)((long)unaff_x20.unknown + 0x20);
  uVar40 = *(undefined8 *)((long)unaff_x20.unknown + 0x38);
  uVar39 = *(undefined8 *)((long)unaff_x20.unknown + 0x30);
  *(undefined8 *)(puVar8 + 0x38) = *(undefined8 *)((long)unaff_x20.unknown + 0x28);
  *(undefined8 *)(puVar8 + 0x30) = uVar22;
  *(undefined8 *)(puVar8 + 0x48) = uVar40;
  *(undefined8 *)(puVar8 + 0x40) = uVar39;
  *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)((long)unaff_x20.unknown + 0x40);
  uVar40 = *(undefined8 *)unaff_x20.unknown;
  uVar39 = *(undefined8 *)((long)unaff_x20.unknown + 0x18);
  uVar22 = *(undefined8 *)((long)unaff_x20.unknown + 0x10);
  *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)((long)unaff_x20.unknown + 8);
  *(undefined8 *)(puVar8 + 0x10) = uVar40;
  *(undefined8 *)(puVar8 + 0x28) = uVar39;
  *(undefined8 *)(puVar8 + 0x20) = uVar22;
  PVar3 = SwiftUI::PopoverAttachmentAnchor::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,PVar3.value);
  lVar27 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  puVar37 = (undefined8 *)(puVar2 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  FUN_10002b2a8(unaff_x20.unknown,&local_c8);
  SVar18 = (extension_SwiftUI)::Anchor::Source::_get_bounds(unaff_x20);
  *puVar37 = SVar18.unknown;
  (**(code **)(lVar27 + 0x68))
            (puVar37,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_PopoverAttachmentAnchor_rect_SwiftUI_PopoverAttachmentAnchor_Type___>__SwiftUI_Anchor<__C_CGRect>_Source___>_SwiftUI_PopoverAttachmentAnchor_100522a30
             ,lVar10);
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0xf,1,0);
  PVar3.value = (__int8)pBVar21;
  if ((bVar4 & 1) == 0) {
    puVar9 = &DAT_100549bf8;
    FUN_100002f94(&DAT_100549bf8,&DAT_100419dc0);
    pBVar19 = &local_c8;
    local_c8.unknown = puVar7;
    pBStack_c0 = pBVar16;
    _swift_getOpaqueTypeConformance2
              (pBVar19,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    pBVar20 = pBVar19;
    FUN_100003078();
    puVar37[-3] = pBVar19;
    puVar37[-2] = pBVar20;
    puVar37[-4] = puVar9;
    (extension_SwiftUI)::SwiftUI::View::_popover(isPresented,PVar3,arrowEdge);
  }
  else {
    SwiftUI::Edge::Set::init((Edge)0x0);
    puVar9 = &DAT_100549bf8;
    FUN_100002f94(&DAT_100549bf8,&DAT_100419dc0);
    pBVar19 = &local_c8;
    local_c8.unknown = puVar7;
    pBStack_c0 = pBVar16;
    _swift_getOpaqueTypeConformance2
              (pBVar19,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
               ,1);
    pBVar20 = pBVar19;
    FUN_100003078();
    puVar37[-2] = pBVar19;
    puVar37[-1] = pBVar20;
    puVar37[-3] = puVar9;
    puVar37[-4] = puVar6;
    (extension_SwiftUI)::SwiftUI::View::_popoverCore(isPresented,PVar3,(bool)arrowEdge.value);
  }
  _swift_release(pBVar21);
  _swift_release(puVar8);
  _swift_release(isPresented.unknown);
  (**(code **)(lVar27 + 8))(puVar37,lVar10);
  (**(code **)(lVar25 + 8))(lVar26,puVar6);
  FUN_100002f94(&DAT_10054b730,&DAT_10041cc08);
  puVar8 = &DAT_100549bf8;
  FUN_100002fe4(&DAT_100549bf8,&DAT_100419dc0);
  pBVar20 = &local_c8;
  local_c8.unknown = puVar7;
  pBStack_c0 = pBVar16;
  _swift_getOpaqueTypeConformance2
            (pBVar20,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  pBVar21 = pBVar20;
  FUN_100003078();
  local_c8.unknown = puVar6;
  pBStack_c0 = (Binding<bool> *)puVar8;
  local_b8 = pBVar20;
  pBStack_b0 = pBVar21;
  _swift_getOpaqueTypeConformance2(&local_c8,&DAT_100437e20,1);
  FUN_1000087a0(&DAT_10054b738,&DAT_10054b730,&DAT_10041cc08,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  (extension_SwiftUI)::SwiftUI::View::_contextMenu();
  (**(code **)(lVar24 + 8))((long)&local_150 - extraout_x8,puVar5);
  return;
}

