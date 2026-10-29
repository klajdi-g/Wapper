// rea decompile_all
// name: FUN_10036f3d4
// address: 0x10036f3d4
// body: available
// range: 0x10036f3d4-0x10036f87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036f65c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036f3d4(long param_1,undefined8 param_2)

{
  Size SVar1;
  Design DVar2;
  undefined *puVar3;
  PinnedScrollableViews PVar4;
  GridItem GVar6;
  Alignment AVar7;
  HorizontalAlignment HVar8;
  undefined *puVar9;
  LazyVGrid<undefined> LVar10;
  Text TVar11;
  Font FVar12;
  Text TVar13;
  Color CVar14;
  Text TVar15;
  Text TVar16;
  undefined *puVar17;
  Color CVar18;
  undefined *puVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar21;
  long lVar22;
  long extraout_x12;
  code *pcVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined8 auStack_c0 [2];
  long local_b0 [3];
  undefined *local_98;
  long local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long lVar5;
  
  puVar3 = &DAT_10054a828;
  local_90 = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)local_b0 - extraout_x8;
  PVar4 = SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(PVar4.unknown + -8) + 0x40));
  lVar27 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SVar1 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)PVar4.unknown >> 8),SVar1.value);
  lVar24 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  puVar25 = (undefined8 *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_10055e750;
  FUN_100002f94(&DAT_10055e750,&DAT_100433f98);
  local_b0[2] = *(long *)(puVar3 + -8);
  local_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b0[2] + 0x40));
  lVar22 = (long)puVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_b0[1] = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  puVar3 = &DAT_10055beb0;
  local_b0[0] = lVar22;
  FUN_100002f94(&DAT_10055beb0,&DAT_100430c60);
  GVar6 = SwiftUI::GridItem::typeMetadataAccessor();
  uVar21 = (ulong)*(byte *)(*(long *)(GVar6.unknown + -8) + 0x50);
  _swift_allocObject(puVar3,(uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(GVar6.unknown + -8) + 0x48),uVar21 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar25[1] = 0x407a400000000000;
  *puVar25 = 0x406f400000000000;
  AVar7.unknown = (undefined *)puVar25;
  (**(code **)(lVar24 + 0x68))
            (puVar25,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_adaptive_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100523648
             ,lVar5);
  SwiftUI::Alignment::get_top(AVar7);
  GVar6 = SwiftUI::GridItem::_init((Size)(__int8)puVar25);
  HVar8 = SwiftUI::HorizontalAlignment::get_leading(GVar6.unknown);
  local_84 = 0;
  local_70 = param_2;
  FUN_1000036d0(&DAT_10054e008,PTR_typeMetadataAccessor_100522918,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  puVar3 = &DAT_10055e758;
  FUN_100002f94(&DAT_10055e758,&DAT_100433fa0);
  puVar9 = &DAT_10055e760;
  FUN_1000087a0(&DAT_10055e760,&DAT_10055e758,&DAT_100433fa0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  *(undefined **)(lVar22 + -0x10) = puVar9;
  CVar18.unknown = (undefined *)0x0;
  LVar10 = SwiftUI::LazyVGrid::_init
                     (lVar22,puVar9,HVar8.unknown,0x4038000000000000,0,lVar27,FUN_10038f184,
                      &local_80,puVar3);
  FUN_10036f0e0();
  local_80 = LVar10.unknown;
  puStack_78 = HVar8.unknown;
  FUN_100026df4();
  puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar11 = SwiftUI::Text::_init
                     (LVar10.unknown,PTR___type_metadata_for_Swift_String_100523a98,LVar10.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)TVar11.unknown >> 8),DVar2.value);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar26,1,1,lVar5);
  FVar12 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_10002a29c(lVar26,&DAT_10054a828,&DAT_10041e3c0);
  TVar16 = TVar11;
  puVar9 = puVar3;
  puVar19 = LVar10.unknown;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100025b34(TVar11.unknown,puVar3,LVar10.unknown);
  _swift_bridgeObjectRelease();
  CVar18 = SwiftUI::Color::get_white(CVar18);
  CVar14 = SwiftUI::Color::opacity(0.4,CVar18);
  _swift_release(CVar18.unknown);
  local_80 = CVar14.unknown;
  FUN_100028d58();
  TVar11 = TVar13;
  puVar17 = TVar16.unknown;
  puVar20 = puVar9;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar13.unknown,TVar16.unknown,puVar9);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease(puVar19);
  puVar9 = local_98;
  lVar24 = local_b0[2];
  lVar22 = local_b0[1];
  lVar5 = local_b0[0];
  pcVar23 = *(code **)(local_b0[2] + 0x10);
  (*pcVar23)(local_b0[1],local_b0[0],local_98);
  lVar26 = local_90;
  (*pcVar23)(local_90,lVar22,puVar9);
  puVar3 = &DAT_10055e768;
  FUN_100002f94(&DAT_10055e768,&DAT_100433fa8);
  puVar25 = (undefined8 *)(lVar26 + *(int *)(puVar3 + 0x30));
  *puVar25 = TVar15.unknown;
  puVar25[1] = TVar11.unknown;
  *(char *)(puVar25 + 2) = (char)puVar17;
  puVar25[3] = puVar20;
  FUN_100007b14(TVar15.unknown,TVar11.unknown,puVar17);
  pcVar23 = *(code **)(lVar24 + 8);
  _swift_bridgeObjectRetain(puVar20);
  (*pcVar23)(lVar5,puVar9);
  FUN_100025b34(TVar15.unknown,TVar11.unknown,puVar17);
  _swift_bridgeObjectRelease(puVar20);
  (*pcVar23)(lVar22,puVar9);
  return;
}

