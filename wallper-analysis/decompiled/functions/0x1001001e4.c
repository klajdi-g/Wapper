// rea decompile_all
// name: FUN_1001001e4
// address: 0x1001001e4
// body: available
// range: 0x1001001e4-0x100100667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001001e4(undefined8 param_1)

{
  LocalizedStringKey LVar1;
  Design DVar2;
  PopoverAttachmentAnchor PVar3;
  byte bVar4;
  undefined *puVar5;
  Image IVar6;
  undefined7 extraout_var;
  Font FVar7;
  HierarchicalShapeStyle HVar8;
  HierarchicalShapeStyle HVar9;
  State SVar10;
  undefined *puVar11;
  undefined7 extraout_var_00;
  Source SVar13;
  Source SVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *unaff_x20;
  long lVar19;
  long lVar20;
  Binding<bool> BVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String systemName;
  undefined8 auStack_130 [4];
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  Binding<bool> BStack_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_80;
  undefined8 uStack_78;
  long lVar12;
  
  puVar5 = &DAT_100552968;
  local_d8 = param_1;
  FUN_100002f94(&DAT_100552968,&DAT_100424eb8);
  local_d0 = *(long *)(puVar5 + -8);
  local_f0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0x80000001004dd820;
  systemName.str = (char *)0xd000000000000013;
  local_c8 = (long)&local_110 - extraout_x8;
  IVar6 = SwiftUI::Image::init(systemName);
  puVar5 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = ((long)&local_110 - extraout_x8) - extraout_x8_00;
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x38))
            (lVar19,1,1,CONCAT71(extraout_var,DVar2.value));
  FVar7 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar19,&DAT_10054a828,&DAT_10041e3c0);
  HVar8.unknown = &DAT_100424ec0;
  _swift_getKeyPath();
  HVar9 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar8);
  local_110 = (uint)HVar9.unknown;
  puVar5 = &DAT_10052b9c8;
  _swift_allocObject(&DAT_10052b9c8,0x50,7);
  uVar23 = *unaff_x20;
  uVar25 = unaff_x20[3];
  uVar24 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar23;
  *(undefined8 *)(puVar5 + 0x28) = uVar25;
  *(undefined8 *)(puVar5 + 0x20) = uVar24;
  uVar23 = unaff_x20[4];
  uVar25 = unaff_x20[7];
  uVar24 = unaff_x20[6];
  uStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar23;
  *(undefined8 *)(puVar5 + 0x48) = uVar25;
  *(undefined8 *)(puVar5 + 0x40) = uVar24;
  FUN_100100eac();
  SVar10.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_projectedValue(SVar10);
  local_108 = puStack_b8;
  BStack_100.unknown = local_c0;
  local_10c = (uint)(byte)local_b0;
  puVar11 = &DAT_10052b9f0;
  _swift_allocObject(&DAT_10052b9f0,0x50,7);
  uVar23 = *unaff_x20;
  uVar25 = unaff_x20[3];
  uVar24 = unaff_x20[2];
  *(undefined8 *)(puVar11 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar11 + 0x10) = uVar23;
  *(undefined8 *)(puVar11 + 0x28) = uVar25;
  *(undefined8 *)(puVar11 + 0x20) = uVar24;
  uVar23 = unaff_x20[4];
  uVar25 = unaff_x20[7];
  uVar24 = unaff_x20[6];
  *(undefined8 *)(puVar11 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar11 + 0x30) = uVar23;
  *(undefined8 *)(puVar11 + 0x48) = uVar25;
  *(undefined8 *)(puVar11 + 0x40) = uVar24;
  PVar3 = SwiftUI::PopoverAttachmentAnchor::typeMetadataAccessor();
  lVar12 = CONCAT71(extraout_var_00,PVar3.value);
  lVar20 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  puVar22 = (undefined8 *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  SVar13.unknown = (undefined *)unaff_x20;
  FUN_100100eac();
  SVar14 = (extension_SwiftUI)::Anchor::Source::_get_bounds(SVar13);
  *puVar22 = SVar14.unknown;
  (**(code **)(lVar20 + 0x68))
            (puVar22,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_PopoverAttachmentAnchor_rect_SwiftUI_PopoverAttachmentAnchor_Type___>__SwiftUI_Anchor<__C_CGRect>_Source___>_SwiftUI_PopoverAttachmentAnchor_100522a30
             ,lVar12);
  local_a8._0_5_ = (uint5)local_110;
  local_a0 = FUN_100100ea4;
  local_f8 = HVar8.unknown;
  local_e8 = FVar7.unknown;
  local_e0 = IVar6.unknown;
  local_c0 = IVar6.unknown;
  puStack_b8 = HVar8.unknown;
  local_b0 = FVar7.unknown;
  puStack_98 = puVar5;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0xf,1,0);
  if ((bVar4 & 1) == 0) {
    FUN_100002f94(&DAT_100549c40,&DAT_100419de0);
    puVar16 = &DAT_100549c48;
    FUN_100002f94(&DAT_100549c48,&DAT_100419de8);
    puVar17 = puVar16;
    FUN_100003150();
    puVar18 = puVar17;
    FUN_1000033d0();
    puVar22[-3] = puVar17;
    puVar22[-2] = puVar18;
    puVar22[-4] = puVar16;
    BVar21.unknown = BStack_100.unknown;
    uVar23 = local_108;
    (extension_SwiftUI)::SwiftUI::View::_popover
              (BStack_100,(PopoverAttachmentAnchor)(__int8)local_108,(Edge)(__int8)local_10c);
  }
  else {
    SwiftUI::Edge::Set::init((Edge)0x2);
    puVar16 = &DAT_100549c40;
    FUN_100002f94(&DAT_100549c40,&DAT_100419de0);
    puVar17 = &DAT_100549c48;
    FUN_100002f94(&DAT_100549c48,&DAT_100419de8);
    puVar18 = puVar17;
    FUN_100003150();
    puVar15 = puVar18;
    FUN_1000033d0();
    puVar22[-2] = puVar18;
    puVar22[-1] = puVar15;
    puVar22[-4] = puVar16;
    puVar22[-3] = puVar17;
    BVar21.unknown = BStack_100.unknown;
    uVar23 = local_108;
    (extension_SwiftUI)::SwiftUI::View::_popoverCore
              (BStack_100,(PopoverAttachmentAnchor)(__int8)local_108,SUB41(local_10c,0));
  }
  _swift_release(uVar23);
  _swift_release(puVar11);
  _swift_release(BVar21.unknown);
  (**(code **)(lVar20 + 8))(puVar22,lVar12);
  _swift_release(puVar5);
  _swift_release(local_e8);
  _swift_release(local_f8);
  _swift_release(local_e0);
  LVar1.unknown = (undefined *)*unaff_x20;
  puVar5 = &DAT_100549c40;
  FUN_100002fe4(&DAT_100549c40,&DAT_100419de0);
  puVar11 = &DAT_100549c48;
  FUN_100002fe4(&DAT_100549c48,&DAT_100419de8);
  puVar16 = puVar11;
  FUN_100003150();
  puVar17 = puVar16;
  FUN_1000033d0();
  local_c0 = puVar5;
  puStack_b8 = puVar11;
  local_b0 = puVar16;
  local_a8 = puVar17;
  _swift_getOpaqueTypeConformance2(&local_c0,&DAT_100437e20,1);
  lVar12 = local_c8;
  puVar5 = local_f0;
  (extension_SwiftUI)::SwiftUI::View::accessibilityLabel(LVar1);
  (**(code **)(local_d0 + 8))(lVar12,puVar5);
  return;
}

