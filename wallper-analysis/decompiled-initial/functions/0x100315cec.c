// rea decompile_all
// name: FUN_100315cec
// address: 0x100315cec
// body: available
// range: 0x100315cec-0x10031631f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010031612c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100315cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,long param_8,
                  ulong param_9)

{
  undefined1 *puVar1;
  long lVar2;
  code *pcVar3;
  Size SVar4;
  PinnedScrollableViews PVar5;
  undefined *puVar6;
  VerticalAlignment VVar7;
  undefined *puVar8;
  Set SVar9;
  State SVar10;
  undefined *puVar11;
  __ContiguousArrayStorageBase *p_Var12;
  long lVar13;
  GridItem GVar14;
  HorizontalAlignment HVar15;
  Set SVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 auStack_120 [2];
  long alStack_110 [5];
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  
  PVar5 = SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  local_e8 = PVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(PVar5.unknown + -8) + 0x40));
  lVar17 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar17;
  SVar4 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  alStack_110[4] = CONCAT71((int7)((ulong)PVar5.unknown >> 8),SVar4.value);
  alStack_110[3] = *(long *)(alStack_110[4] + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(alStack_110[3] + 0x40));
  puVar21 = (undefined8 *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_10055be98;
  FUN_100002f94(&DAT_10055be98,&DAT_100430c48);
  local_d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = (long)puVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar17 = lVar17 - extraout_x12;
  puVar6 = &DAT_10055bea0;
  FUN_100002f94(&DAT_10055bea0,&DAT_100430c50);
  VVar7.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar18 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = (undefined8 *)(lVar18 - extraout_x12_00);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar20 = VVar7.unknown;
  puVar20[1] = 0;
  *(undefined1 *)(puVar20 + 2) = 1;
  puVar8 = &DAT_10055bea8;
  FUN_100002f94(&DAT_10055bea8,&DAT_100430c58);
  SVar9.unknown = param_6;
  FUN_100316320((long)puVar20 + (long)*(int *)(puVar8 + 0x2c));
  SVar9 = SwiftUI::Edge::Set::get_horizontal(SVar9);
  uVar22 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  puVar1 = (undefined1 *)((long)puVar20 + (long)*(int *)(puVar6 + 0x24));
  *puVar1 = (char)SVar9.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  uStack_b8 = *(undefined8 *)(param_6 + 0xb0);
  local_c0 = *(undefined8 *)(param_6 + 0xa8);
  SVar10.unknown = &DAT_10055bd50;
  FUN_100002f94(&DAT_10055bd50,&DAT_100430ab8);
  SwiftUI::State::get_wrappedValue(SVar10);
  uStack_b8 = *(undefined8 *)(param_6 + 0xa0);
  local_c0 = *(undefined8 *)(param_6 + 0x98);
  SVar10.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar10);
  puVar6 = (undefined *)CONCAT44(uStack_8c,local_90);
  FUN_1001b58e4();
  if ((param_9 & 1) == 0) {
LAB_100315f1c:
    puVar11 = puVar6;
    FUN_10031b430();
  }
  else {
    p_Var12 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar8 = puVar6;
    _swift_unknownObjectRetain_n(puVar6,2);
    _swift_dynamicCastClass();
    if (puVar8 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar6);
      puVar8 = PTR___swiftEmptyArrayStorage_100524190;
    }
    lVar18 = *(long *)(puVar8 + 0x10);
    _swift_release();
    if (SBORROW8(param_9 >> 1,param_8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10031630c);
      (*pcVar3)();
    }
    if (lVar18 != (param_9 >> 1) - param_8) {
      _swift_unknownObjectRelease();
      goto LAB_100315f1c;
    }
    puVar8 = puVar6;
    _swift_dynamicCastClass(puVar6,p_Var12);
    _swift_unknownObjectRelease(puVar6);
    puVar11 = PTR___swiftEmptyArrayStorage_100524190;
    if (puVar8 != (undefined *)0x0) goto LAB_100315fb4;
  }
  _swift_unknownObjectRelease(puVar6);
  puVar8 = puVar11;
LAB_100315fb4:
  lVar18 = *(long *)(puVar8 + 0x10);
  alStack_110[2] = param_1;
  if (lVar18 == 0) {
    uVar22 = 0;
    SVar9.unknown = (undefined *)0x0;
  }
  else {
    lVar13 = 0;
    FUN_10040211c();
    uVar19 = (ulong)*(byte *)(*(long *)(lVar13 + -8) + 0x50);
    uVar22 = *(undefined8 *)
              (puVar8 + *(long *)(*(long *)(lVar13 + -8) + 0x48) * (lVar18 + -1) +
                        (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)));
    SVar9.unknown =
         *(undefined **)
          ((long)(puVar8 + *(long *)(*(long *)(lVar13 + -8) + 0x48) * (lVar18 + -1) +
                           (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff))) + 8);
    _swift_bridgeObjectRetain(SVar9.unknown);
  }
  puVar6 = &DAT_10055beb0;
  FUN_100002f94(&DAT_10055beb0,&DAT_100430c60);
  GVar14 = SwiftUI::GridItem::typeMetadataAccessor();
  uVar19 = (ulong)*(byte *)(*(long *)(GVar14.unknown + -8) + 0x50);
  _swift_allocObject(puVar6,(uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(GVar14.unknown + -8) + 0x48),uVar19 | 7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar21[1] = 0x4077c00000000000;
  *puVar21 = 0x4072c00000000000;
  (**(code **)(alStack_110[3] + 0x68))
            (puVar21,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_adaptive_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100523648
             ,alStack_110[4]);
  GVar14 = SwiftUI::GridItem::_init((Size)(__int8)puVar21);
  local_b0 = puVar8;
  uStack_a8 = uVar22;
  local_a0 = SVar9.unknown;
  puStack_98 = param_6;
  HVar15 = SwiftUI::HorizontalAlignment::get_center(GVar14.unknown);
  local_90 = 0;
  FUN_1000036d0(&DAT_10054e008,PTR_typeMetadataAccessor_100522918,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100522920);
  lVar18 = local_e0;
  Swift::OptionSet::_init();
  puVar6 = &DAT_10055beb8;
  FUN_100002f94(&DAT_10055beb8,&DAT_100430c68);
  puVar11 = puVar6;
  FUN_10031bda0();
  puVar20[-2] = puVar11;
  SwiftUI::LazyVGrid::_init
            (lVar17,puVar11,HVar15.unknown,0x4038000000000000,0,lVar18,FUN_10031bd94,&local_c0,
             puVar6);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease();
  SVar16 = SwiftUI::Edge::Set::get_top(SVar9);
  uVar23 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
  SVar9.unknown = &DAT_10055bed8;
  uVar22 = param_3;
  uVar25 = param_4;
  uVar27 = param_5;
  FUN_100002f94(&DAT_10055bed8,&DAT_100430c78);
  puVar1 = (undefined1 *)(lVar17 + *(int *)(SVar9.unknown + 0x24));
  *puVar1 = (char)SVar16.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar23;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar16 = SwiftUI::Edge::Set::get_horizontal(SVar9);
  uVar24 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
  SVar9.unknown = &DAT_10055bee0;
  uVar23 = uVar22;
  uVar26 = uVar25;
  uVar28 = uVar27;
  FUN_100002f94(&DAT_10055bee0,&DAT_100430c80);
  puVar1 = (undefined1 *)(lVar17 + *(int *)(SVar9.unknown + 0x24));
  *puVar1 = (char)SVar16.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar24;
  *(undefined8 *)(puVar1 + 0x10) = uVar22;
  *(undefined8 *)(puVar1 + 0x18) = uVar25;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  SVar9 = SwiftUI::Edge::Set::get_bottom(SVar9);
  uVar22 = 0x4054000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  lVar13 = local_d0;
  puVar1 = (undefined1 *)(lVar17 + *(int *)(local_d8 + 0x24));
  *puVar1 = (char)SVar9.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = uVar23;
  *(undefined8 *)(puVar1 + 0x18) = uVar26;
  *(undefined8 *)(puVar1 + 0x20) = uVar28;
  puVar1[0x28] = 0;
  FUN_1000087e4(puVar20,lVar13,&DAT_10055bea0,&DAT_100430c50);
  lVar2 = local_c8;
  FUN_1000087e4(lVar17,local_c8,&DAT_10055be98,&DAT_100430c48);
  lVar18 = alStack_110[2];
  FUN_1000087e4(lVar13,alStack_110[2],&DAT_10055bea0,&DAT_100430c50);
  puVar6 = &DAT_10055bee8;
  FUN_100002f94(&DAT_10055bee8,&DAT_100430c88);
  FUN_1000087e4(lVar2,lVar18 + *(int *)(puVar6 + 0x30),&DAT_10055be98,&DAT_100430c48);
  FUN_10002a29c(lVar17,&DAT_10055be98,&DAT_100430c48);
  FUN_10002a29c(puVar20,&DAT_10055bea0,&DAT_100430c50);
  FUN_10002a29c(lVar2,&DAT_10055be98,&DAT_100430c48);
  FUN_10002a29c(lVar13,&DAT_10055bea0,&DAT_100430c50);
  return;
}

