// rea decompile_all
// name: FUN_10036c740
// address: 0x10036c740
// body: available
// range: 0x10036c740-0x10036ccf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036c740(undefined8 param_1)

{
  bool bVar1;
  PopoverAttachmentAnchor PVar2;
  byte bVar3;
  Date DVar4;
  Calendar CVar5;
  Calendar CVar6;
  undefined *puVar7;
  undefined *puVar8;
  Binding BVar9;
  undefined7 extraout_var;
  Source SVar11;
  Source SVar12;
  Set SVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  LocalizedStringKey LVar17;
  void *pvVar18;
  undefined8 *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  Binding<bool> BVar20;
  long unaff_x20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  String stringLiteral;
  undefined8 auStack_120 [4];
  undefined8 local_100;
  undefined *local_f8;
  uint local_ec;
  Binding<bool> local_e8;
  long local_e0;
  long local_d8;
  uint local_cc;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined *puVar10;
  
  local_b8 = param_1;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar27 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  puVar8 = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  Foundation::Date::init();
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  lVar29 = *(long *)(CVar5.unknown + -8);
  CVar6 = CVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  puVar23 = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::Calendar::get_current(CVar6);
  puVar7 = puVar8;
  puVar10 = puVar23;
  FUN_1001d84f4();
  (**(code **)(lVar29 + 8))(puVar23,CVar5.unknown);
  (**(code **)(lVar27 + 8))(puVar8,DVar4.unknown);
  lVar27 = 0;
  FUN_100398bd0();
  bVar3 = *(byte *)(unaff_x20 + *(int *)(lVar27 + 0x14));
  uVar21 = (ulong)bVar3;
  FUN_1001d9924();
  puVar8 = &DAT_10055f220;
  FUN_100002f94(&DAT_10055f220,&DAT_100434988);
  local_c8 = *(long *)(puVar8 + -8);
  local_c0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)puVar23 - extraout_x8_01;
  local_cc = (uint)bVar3;
  bVar1 = local_cc != 0;
  local_f8 = puVar7;
  if (bVar1) {
    local_f8 = puVar10;
  }
  local_100 = 0x2e657369726e7573;
  if (bVar1) {
    local_100 = 0x662e7465736e7573;
  }
  local_b0 = 0xec0000006c6c6966;
  if (bVar1) {
    local_b0 = 0xeb000000006c6c69;
  }
  if ((uVar21 & 1) == 0) {
    local_b0 = 0xe500000000000000;
    local_100 = 0x6b636f6c63;
  }
  lVar22 = *(long *)(lVar27 + -8);
  lVar25 = *(long *)(lVar22 + 0x40);
  local_d8 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar28 = lVar25 + 0xfU & 0xfffffffffffffff0;
  FUN_100029504();
  uVar24 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar21 = uVar24 + 0x10 & (uVar24 ^ 0xffffffffffffffff);
  puVar8 = &DAT_10053c970;
  _swift_allocObject(&DAT_10053c970,uVar21 + lVar25,uVar24 | 7);
  FUN_100007e64(lVar29 - uVar28,puVar8 + uVar21,FUN_100398bd0);
  puVar19 = (undefined8 *)(unaff_x20 + *(int *)(lVar27 + 0x18));
  local_a8 = (undefined *)*puVar19;
  puStack_a0 = (undefined *)puVar19[1];
  local_98 = (undefined *)CONCAT71(local_98._1_7_,*(undefined1 *)(puVar19 + 2));
  BVar9.unknown = &DAT_10054e328;
  FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
  SwiftUI::Binding::get_projectedValue(BVar9);
  local_e8.unknown = local_80;
  local_ec = (uint)local_70;
  local_e0 = lVar29;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar29 - uVar28;
  FUN_100029504();
  puVar7 = &DAT_10053c998;
  _swift_allocObject(&DAT_10053c998,uVar21 + lVar25,uVar24 | 7);
  FUN_100007e64(lVar29,puVar7 + uVar21,FUN_100398bd0);
  PVar2 = SwiftUI::PopoverAttachmentAnchor::typeMetadataAccessor();
  puVar10 = (undefined *)CONCAT71(extraout_var,PVar2.value);
  lVar27 = *(long *)(puVar10 + -8);
  SVar11.unknown = puVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  puVar26 = (undefined8 *)(lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  SVar12 = (extension_SwiftUI)::Anchor::Source::_get_bounds(SVar11);
  *puVar26 = SVar12.unknown;
  (**(code **)(lVar27 + 0x68))
            (puVar26,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_PopoverAttachmentAnchor_rect_SwiftUI_PopoverAttachmentAnchor_Type___>__SwiftUI_Anchor<__C_CGRect>_Source___>_SwiftUI_PopoverAttachmentAnchor_100522a30
             ,puVar10);
  local_a8 = local_f8;
  puStack_a0 = (undefined *)local_100;
  local_98 = (undefined *)local_b0;
  pcStack_90 = FUN_10039b074;
  local_88 = puVar8;
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xf,1,0);
  puVar19 = puVar26;
  if ((bVar3 & 1) == 0) {
    puVar23 = &DAT_100549ce8;
    FUN_100002f94(&DAT_100549ce8,&DAT_100419e30);
    puVar14 = puVar23;
    FUN_100003530();
    puVar15 = puVar14;
    FUN_100003570();
    puVar26[-3] = puVar14;
    puVar26[-2] = puVar15;
    puVar26[-4] = puVar23;
    lVar29 = local_d8;
    BVar20.unknown = local_e8.unknown;
    (extension_SwiftUI)::SwiftUI::View::_popover
              (local_e8,(PopoverAttachmentAnchor)(__int8)uStack_78,(Edge)(__int8)local_ec);
  }
  else {
    SVar13 = SwiftUI::Edge::Set::init((Edge)0x2);
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(int)SVar13.unknown);
    puVar23 = &DAT_100549ce8;
    FUN_100002f94(&DAT_100549ce8,&DAT_100419e30);
    puVar14 = puVar23;
    FUN_100003530();
    puVar15 = puVar14;
    FUN_100003570();
    puVar26[-2] = puVar14;
    puVar26[-1] = puVar15;
    puVar26[-4] = &DAT_10053bab0;
    puVar26[-3] = puVar23;
    lVar29 = local_d8;
    BVar20.unknown = local_e8.unknown;
    (extension_SwiftUI)::SwiftUI::View::_popoverCore
              (local_e8,(PopoverAttachmentAnchor)(__int8)uStack_78,SUB41(local_ec,0));
  }
  _swift_release(uStack_78);
  _swift_release(puVar7);
  _swift_release(BVar20.unknown);
  (**(code **)(lVar27 + 8))(puVar26,puVar10);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(local_b0);
  if (local_cc == 0) {
    pcVar16 = (char *)0x796144206e656857;
    pvVar18 = (void *)0xef736e6967656220;
  }
  else {
    pvVar18 = (void *)0x80000001004e6d50;
    pcVar16 = (char *)0xd000000000000011;
  }
  stringLiteral.bridgeObject = pvVar18;
  stringLiteral.str = pcVar16;
  LVar17 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  puVar8 = &DAT_100549ce8;
  FUN_100002fe4(&DAT_100549ce8,&DAT_100419e30);
  puVar7 = puVar8;
  FUN_100003530();
  puVar10 = puVar7;
  FUN_100003570();
  local_a8 = &DAT_10053bab0;
  puStack_a0 = puVar8;
  local_98 = puVar7;
  pcStack_90 = (code *)puVar10;
  _swift_getOpaqueTypeConformance2(&local_a8,&DAT_100437e20,1);
  puVar8 = local_c0;
  (extension_SwiftUI)::SwiftUI::View::_help(LVar17);
  _swift_bridgeObjectRelease(puVar19);
  _swift_bridgeObjectRelease(pvVar18);
  (**(code **)(local_c8 + 8))(lVar29,puVar8);
  return;
}

