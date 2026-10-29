// rea decompile_all
// name: FUN_10039d7bc
// address: 0x10039d7bc
// body: available
// range: 0x10039d7bc-0x10039dac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010039d9a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10039d7bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  Size SVar2;
  PinnedScrollableViews PVar3;
  undefined *puVar5;
  GridItem GVar6;
  Alignment AVar7;
  HorizontalAlignment HVar8;
  undefined *puVar9;
  LazyVGrid<undefined> LVar10;
  Set SVar11;
  Set SVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined4 local_a4;
  undefined1 auStack_a0 [16];
  long lVar4;
  
  PVar3 = SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(PVar3.unknown + -8) + 0x40));
  lVar14 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar2 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  lVar4 = CONCAT71((int7)((ulong)PVar3.unknown >> 8),SVar2.value);
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = (undefined8 *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_10055beb0;
  FUN_100002f94(&DAT_10055beb0,&DAT_100430c60);
  GVar6 = SwiftUI::GridItem::typeMetadataAccessor();
  uVar13 = (ulong)*(byte *)(*(long *)(GVar6.unknown + -8) + 0x50);
  _swift_allocObject(puVar5,(uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(GVar6.unknown + -8) + 0x48),uVar13 | 7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar15[1] = 0x406e000000000000;
  *puVar15 = 0x4069000000000000;
  AVar7.unknown = (undefined *)puVar15;
  (**(code **)(lVar16 + 0x68))
            (puVar15,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_adaptive_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100523648
             ,lVar4);
  SwiftUI::Alignment::get_top(AVar7);
  GVar6 = SwiftUI::GridItem::_init((Size)(__int8)puVar15);
  HVar8 = SwiftUI::HorizontalAlignment::get_center(GVar6.unknown);
  local_a4 = 0;
  FUN_1000036d0(&DAT_10054e008,PTR_typeMetadataAccessor_100522918,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  Swift::OptionSet::_init();
  puVar5 = &DAT_10055f3c8;
  FUN_100002f94(&DAT_10055f3c8,&DAT_100434b88);
  puVar9 = &DAT_10055f3d0;
  FUN_1000087a0(&DAT_10055f3d0,&DAT_10055f3c8,&DAT_100434b88,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_1005237c0);
  puVar15[-2] = puVar9;
  LVar10 = SwiftUI::LazyVGrid::_init
                     (param_1,puVar9,HVar8.unknown,0x4040000000000000,0,lVar14,FUN_1003a6624,
                      auStack_a0,puVar5);
  SVar11 = SwiftUI::Edge::Set::get_top(LVar10.unknown);
  uVar17 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  SVar12.unknown = &DAT_10055f3d8;
  uVar19 = param_3;
  uVar20 = param_4;
  uVar22 = param_5;
  FUN_100002f94(&DAT_10055f3d8,&DAT_100434b90);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar12.unknown + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_horizontal(SVar12);
  uVar18 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  SVar12.unknown = &DAT_10055f3e0;
  uVar17 = uVar19;
  uVar21 = uVar20;
  uVar23 = uVar22;
  FUN_100002f94(&DAT_10055f3e0,&DAT_100434b98);
  puVar1 = (undefined1 *)(param_1 + *(int *)(SVar12.unknown + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = uVar20;
  *(undefined8 *)(puVar1 + 0x20) = uVar22;
  puVar1[0x28] = 0;
  SVar12 = SwiftUI::Edge::Set::get_bottom(SVar12);
  uVar19 = 0x4054000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  puVar5 = &DAT_10055f368;
  FUN_100002f94(&DAT_10055f368,&DAT_100434b28);
  puVar1 = (undefined1 *)(param_1 + *(int *)(puVar5 + 0x24));
  *puVar1 = (char)SVar12.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar19;
  *(undefined8 *)(puVar1 + 0x10) = uVar17;
  *(undefined8 *)(puVar1 + 0x18) = uVar21;
  *(undefined8 *)(puVar1 + 0x20) = uVar23;
  puVar1[0x28] = 0;
  return;
}

