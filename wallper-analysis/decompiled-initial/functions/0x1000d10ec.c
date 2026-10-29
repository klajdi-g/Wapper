// rea decompile_all
// name: FUN_1000d10ec
// address: 0x1000d10ec
// body: available
// range: 0x1000d10ec-0x1000d1adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000d18a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000d10ec(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  AccessibilityChildBehavior children;
  AccessibilityTraits AVar3;
  AccessibilityActionKind AVar4;
  undefined1 uVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  char *pcVar8;
  VerticalAlignment VVar9;
  RoundedRectangle RVar10;
  HierarchicalShapeStyle HVar11;
  State SVar12;
  Alignment AVar13;
  Animation AVar14;
  LocalizedStringKey LVar15;
  LocalizedStringKey LVar16;
  String *pSVar17;
  LocalizationValue LVar18;
  char **ppcVar19;
  char **ppcVar20;
  AccessibilityTraits AVar21;
  AccessibilityActionKind AVar22;
  undefined8 uVar23;
  void *pvVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar26;
  long extraout_x8_01;
  long lVar27;
  long extraout_x8_02;
  undefined *puVar28;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *unaff_x20;
  undefined8 *puVar29;
  AccessibilityChildBehavior AVar30;
  long lVar31;
  undefined4 uVar32;
  String stringLiteral;
  String stringLiteral_00;
  undefined8 local_2a0;
  undefined *local_298;
  long local_290;
  char *local_288;
  long local_280;
  char *local_278;
  long local_270;
  undefined *local_268;
  long local_260;
  undefined *local_258;
  AccessibilityChildBehavior local_250;
  long local_248;
  undefined *puStack_240;
  long local_238;
  LocalizationValue local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined *local_210;
  AccessibilityTraits local_208;
  long local_200;
  undefined *puStack_1f8;
  AccessibilityActionKind local_1f0;
  long local_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  String *pSStack_1c8;
  String local_1c0;
  undefined8 local_1b0;
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_1d8 = param_1;
  puStack_1e0 = (undefined *)SwiftUI::AccessibilityActionKind::typeMetadataAccessor();
  local_1e8 = *(long *)(puStack_1e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1e8 + 0x40));
  puVar26 = (undefined *)((long)&local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1f0.unknown = puVar26;
  puStack_1f8 = (undefined *)SwiftUI::AccessibilityTraits::typeMetadataAccessor();
  local_200 = *(long *)(puStack_1f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_200 + 0x40));
  puVar26 = puVar26 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_208.unknown = puVar26;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar27 = (long)puVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar27;
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  puVar28 = (undefined *)(lVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_230.unknown = puVar28;
  puStack_240 = (undefined *)SwiftUI::AccessibilityChildBehavior::typeMetadataAccessor();
  local_248 = *(long *)(puStack_240 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_248 + 0x40));
  puVar28 = puVar28 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar26 = &DAT_100551598;
  local_250.unknown = puVar28;
  FUN_100002f94(&DAT_100551598,&DAT_100423218);
  local_2a0 = puVar26;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar29 = (undefined8 *)(puVar28 + -extraout_x8_04);
  puVar26 = &DAT_100551580;
  FUN_100002f94(&DAT_100551580,&DAT_100423208);
  local_298 = puVar26;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = (long)puVar29 - extraout_x8_05;
  pcVar8 = &DAT_100551568;
  FUN_100002f94(&DAT_100551568,&DAT_100423200);
  local_288 = pcVar8;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(pcVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar30.unknown = (undefined *)(lVar31 - extraout_x8_06);
  pcVar8 = &DAT_100551560;
  FUN_100002f94(&DAT_100551560,&DAT_1004231f8);
  local_280 = *(long *)(pcVar8 + -8);
  local_278 = pcVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_280 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar26 = &DAT_100551620;
  local_290 = (long)AVar30.unknown - extraout_x8_07;
  FUN_100002f94(&DAT_100551620,&DAT_100423298);
  local_260 = *(long *)(puVar26 + -8);
  local_258 = puVar26;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_260 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar27 = ((long)AVar30.unknown - extraout_x8_07) - extraout_x8_08;
  VVar9.unknown = &DAT_1005514b8;
  local_270 = lVar27;
  FUN_100002f94(&DAT_1005514b8,&DAT_1004231a0);
  local_210 = VVar9.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar9.unknown + -8) + 0x40));
  puVar26 = (undefined *)(lVar27 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  local_268 = puVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = (long)puVar26 - extraout_x12;
  local_238 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar27 = lVar27 - extraout_x12_00;
  local_220 = lVar27;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_218 = lVar27 - extraout_x12_01;
  VVar9 = SwiftUI::VerticalAlignment::get_center(VVar9);
  *puVar29 = VVar9.unknown;
  puVar29[1] = 0;
  *(undefined1 *)(puVar29 + 2) = 0;
  puVar26 = &DAT_100551628;
  FUN_100002f94(&DAT_100551628,&DAT_1004232a0);
  AVar13.unknown = (undefined *)unaff_x20;
  FUN_1000d2388((long)puVar29 + (long)*(int *)(puVar26 + 0x2c));
  SwiftUI::Alignment::get_center(AVar13);
  SwiftUI::_FrameLayout::_init((Alignment)0x4067c00000000000);
  puVar26 = &DAT_1005515c0;
  FUN_100002f94(&DAT_1005515c0,&DAT_100423228);
  puVar1 = (undefined8 *)((long)puVar29 + (long)*(int *)(puVar26 + 0x24));
  puVar1[1] = uStack_90;
  *puVar1 = local_98;
  puVar1[3] = uStack_80;
  puVar1[2] = local_88;
  puVar1[5] = uStack_70;
  puVar1[4] = local_78;
  if (DAT_1005515f8 != -1) {
    _swift_once(&DAT_1005515f8,FUN_1000cfa54);
  }
  RVar10 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  FUN_100099338(RVar10.unknown,&DAT_100551600);
  puVar26 = &DAT_1005515b0;
  FUN_100002f94(&DAT_1005515b0,&DAT_100423220);
  lVar27 = (long)puVar29 + (long)*(int *)(puVar26 + 0x24);
  HVar11.unknown = RVar10.unknown;
  FUN_1000d77a0(RVar10.unknown,lVar27);
  HVar11 = SwiftUI::HierarchicalShapeStyle::get_primary(HVar11);
  pSStack_1c8 = (String *)unaff_x20[0x16];
  local_1d0 = (char *)unaff_x20[0x15];
  local_1c0 = *(String *)(unaff_x20 + 0x15);
  SVar12.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar12);
  AVar13.unknown = &DAT_100551618;
  puVar26 = &DAT_1004330f0;
  FUN_100002f94();
  iVar2 = *(int *)(AVar13.unknown + 0x34);
  uVar32 = 0x3d8f5c29;
  if (local_99 == '\0') {
    uVar32 = 0;
  }
  *(undefined4 *)(lVar27 + iVar2) = (int)HVar11.unknown;
  ((undefined4 *)(lVar27 + iVar2))[1] = uVar32;
  *(undefined2 *)(lVar27 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar28 = &DAT_100551550;
  FUN_100002f94(&DAT_100551550,&DAT_1004231f0);
  iVar2 = *(int *)(puVar28 + 0x24);
  *(undefined8 *)(lVar27 + iVar2) = AVar13.unknown;
  puVar25 = local_2a0;
  ((undefined8 *)(lVar27 + iVar2))[1] = puVar26;
  iVar2 = *(int *)(local_2a0 + 0x24);
  FUN_1000d77a0(RVar10.unknown,(long)puVar29 + (long)iVar2);
  puVar26 = &DAT_10054ad40;
  FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
  *(undefined1 *)((long)puVar29 + (long)iVar2 + (long)*(int *)(puVar26 + 0x24)) = 0;
  puVar26 = &DAT_100529e38;
  _swift_allocObject(&DAT_100529e38,0x130,7);
  _memcpy(puVar26 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  FUN_1000d7568();
  (extension_SwiftUI)::SwiftUI::View::_onTapGesture(1);
  _swift_release(puVar26);
  FUN_10002a29c(puVar29,&DAT_100551598,&DAT_100423218);
  puVar26 = &DAT_100529e60;
  _swift_allocObject(&DAT_100529e60,0x130,7);
  _memcpy(puVar26 + 0x10,unaff_x20,0x120);
  puVar28 = &DAT_100551590;
  FUN_100002f94(&DAT_100551590,&DAT_100423210);
  iVar2 = *(int *)(puVar28 + 0x24);
  *(undefined8 *)(lVar31 + iVar2) = FUN_1000d77e4;
  ((undefined8 *)(lVar31 + iVar2))[1] = puVar26;
  AVar14.unknown = (undefined *)unaff_x20;
  FUN_1000d584c();
  AVar14 = SwiftUI::Animation::easeOut(0.15,AVar14);
  SwiftUI::State::get_wrappedValue(SVar12);
  uVar5 = local_1c0.str._0_1_;
  iVar2 = *(int *)(local_298 + 0x24);
  *(undefined8 *)(lVar31 + iVar2) = AVar14.unknown;
  *(undefined1 *)((undefined8 *)(lVar31 + iVar2) + 1) = uVar5;
  FUN_1000d3428(AVar30.unknown);
  FUN_10002a29c(lVar31,&DAT_100551580,&DAT_100423208);
  uVar23 = 0x80000001004dd500;
  stringLiteral.bridgeObject = (void *)0x80000001004dd500;
  stringLiteral.str = (char *)0xd000000000000048;
  LVar15 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  LVar16 = LVar15;
  FUN_1000d73b0();
  pcVar8 = local_288;
  lVar27 = local_290;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar15);
  _swift_bridgeObjectRelease(puVar25);
  _swift_bridgeObjectRelease(uVar23);
  FUN_10002a29c(AVar30.unknown,&DAT_100551568,&DAT_100423200);
  children.unknown = local_250.unknown;
  SwiftUI::AccessibilityChildBehavior::get_ignore(AVar30);
  local_1c0.bridgeObject = LVar16.unknown;
  local_1c0.str = pcVar8;
  pSVar17 = &local_1c0;
  _swift_getOpaqueTypeConformance2
            (pSVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help(SwiftUI_LocalizedStringKey)__>_some>>_100523040
             ,1);
  lVar31 = local_270;
  pcVar8 = local_278;
  (extension_SwiftUI)::SwiftUI::View::_accessibilityElement(children);
  (**(code **)(local_248 + 8))(children.unknown,puStack_240);
  (**(code **)(local_280 + 8))(lVar27,pcVar8);
  LVar7.unknown = local_230.unknown;
  stringLiteral_00.bridgeObject = (void *)0xe400000000000000;
  stringLiteral_00.str = (char *)0x656d6954;
  LVar18 = LocalizationValue::_init(stringLiteral_00);
  Foundation::Locale::get_current((Locale)LVar18.unknown);
  local_1c0 = (extension_Foundation)::Swift::String::_init(LVar7,(Locale)0x0);
  pvVar24 = local_1c0.bridgeObject;
  local_1d0 = pcVar8;
  ppcVar19 = &local_1d0;
  pSStack_1c8 = pSVar17;
  _swift_getOpaqueTypeConformance2
            (ppcVar19,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_accessibilityElement(children:_SwiftUI_AccessibilityChildBehavior)__>_some>>_100522ff0
             ,1);
  ppcVar20 = ppcVar19;
  FUN_100026df4();
  puVar26 = local_258;
  AVar21.unknown = local_268;
  (extension_SwiftUI)::SwiftUI::View::_accessibilityLabel
            (local_268,ppcVar20,local_258,PTR___type_metadata_for_Swift_String_100523a98,ppcVar19,
             ppcVar20);
  _swift_bridgeObjectRelease(pvVar24);
  (**(code **)(local_260 + 8))(lVar31,puVar26);
  local_1c0.bridgeObject = (void *)unaff_x20[0xb];
  local_1c0.str = (char *)unaff_x20[10];
  local_1b0 = unaff_x20[0xc];
  SVar12.unknown = &DAT_100551460;
  puVar26 = &DAT_100423128;
  FUN_100002f94();
  SwiftUI::State::get_wrappedValue(SVar12);
  pcVar8 = local_1d0;
  if ((char)pSStack_1c8 == '\x01') {
    pcVar8 = (char *)*unaff_x20;
  }
  FUN_10025f020();
  lVar27 = local_238;
  local_1c0.bridgeObject = puVar26;
  local_1c0.str = pcVar8;
  (extension_SwiftUI)::SwiftUI::ModifiedContent::_accessibilityValue
            (local_238,pcVar8,local_210,PTR___type_metadata_for_Swift_String_100523a98,ppcVar20);
  _swift_bridgeObjectRelease(puVar26);
  FUN_10002a29c(AVar21.unknown,&DAT_1005514b8,&DAT_1004231a0);
  AVar3.unknown = local_208.unknown;
  SwiftUI::AccessibilityTraits::get_isButton(AVar21);
  lVar31 = local_220;
  (extension_SwiftUI)::SwiftUI::ModifiedContent::_accessibilityAddTraits(AVar3);
  (**(code **)(local_200 + 8))(AVar3.unknown,puStack_1f8);
  FUN_10002a29c(lVar27,&DAT_1005514b8,&DAT_1004231a0);
  puVar26 = &DAT_100529e88;
  _swift_allocObject(&DAT_100529e88,0x130,7);
  _memcpy(puVar26 + 0x10,unaff_x20,0x120);
  AVar22.unknown = (undefined *)unaff_x20;
  FUN_1000d584c();
  AVar4.unknown = local_1f0.unknown;
  SwiftUI::AccessibilityActionKind::get_default(AVar22);
  lVar27 = local_218;
  (extension_SwiftUI)::SwiftUI::ModifiedContent::_accessibilityAction(AVar4);
  _swift_release(puVar26);
  (**(code **)(local_1e8 + 8))(AVar4.unknown,puStack_1e0);
  FUN_10002a29c(lVar31,&DAT_1005514b8,&DAT_1004231a0);
  puVar26 = &DAT_100529eb0;
  _swift_allocObject(&DAT_100529eb0,0x130,7);
  _memcpy(puVar26 + 0x10,unaff_x20,0x120);
  FUN_1000d584c();
  (extension_SwiftUI)::SwiftUI::ModifiedContent::_accessibilityAdjustableAction();
  _swift_release(puVar26);
  FUN_10002a29c(lVar27,&DAT_1005514b8,&DAT_1004231a0);
  return;
}

