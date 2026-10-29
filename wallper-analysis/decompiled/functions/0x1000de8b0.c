// rea decompile_all
// name: FUN_1000de8b0
// address: 0x1000de8b0
// body: available
// range: 0x1000de8b0-0x1000dec3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000de8b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  RoundedCornerStyle RVar5;
  long lVar6;
  undefined *puVar7;
  VerticalAlignment VVar8;
  undefined *puVar9;
  Set _all;
  Set SVar10;
  RoundedRectangle RVar11;
  undefined7 extraout_var;
  Color CVar12;
  Color CVar13;
  Alignment AVar14;
  undefined *puVar15;
  State SVar16;
  long extraout_x8;
  ulong uVar17;
  ulong uVar18;
  undefined *unaff_x20;
  long lVar19;
  Animation AVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long local_a0;
  undefined1 local_91;
  undefined1 local_90 [8];
  undefined8 local_88;
  
  lVar6 = 0;
  local_a0 = param_1;
  FUN_1000e12c4();
  lVar19 = *(long *)(lVar6 + -8);
  lVar22 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = (long)&local_a0 - (lVar22 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100551a38;
  FUN_100002f94(&DAT_100551a38,&DAT_100423958);
  VVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar20.unknown = (undefined *)(lVar21 - extraout_x8);
  VVar8 = SwiftUI::VerticalAlignment::get_center(VVar8);
  *(undefined **)AVar20.unknown = VVar8.unknown;
  *(undefined8 *)((long)AVar20.unknown + 8) = 0x402c000000000000;
  *(undefined1 *)((long)AVar20.unknown + 0x10) = 0;
  puVar9 = &DAT_100551a40;
  FUN_100002f94(&DAT_100551a40,&DAT_100423960);
  SVar10.unknown = unaff_x20;
  FUN_1000dec40((long)AVar20.unknown + (long)*(int *)(puVar9 + 0x2c));
  _all = SwiftUI::Edge::Set::get_vertical(SVar10);
  uVar23 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar10.unknown = &DAT_100551a48;
  uVar25 = param_3;
  uVar26 = param_4;
  uVar27 = param_5;
  FUN_100002f94(&DAT_100551a48,&DAT_100423968);
  puVar1 = (undefined1 *)((long)AVar20.unknown + (long)*(int *)(SVar10.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar23;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uVar23 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar9 = &DAT_100551a50;
  FUN_100002f94(&DAT_100551a50,&DAT_100423970);
  puVar1 = (undefined1 *)((long)AVar20.unknown + (long)*(int *)(puVar9 + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar23;
  *(undefined8 *)(puVar1 + 0x10) = uVar25;
  *(undefined8 *)(puVar1 + 0x18) = uVar26;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  puVar9 = &DAT_100551a58;
  FUN_100002f94(&DAT_100551a58,&DAT_100423978);
  puVar2 = (undefined8 *)((long)AVar20.unknown + (long)*(int *)(puVar9 + 0x24));
  RVar11 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar4 = *(int *)(RVar11.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar12.unknown = (undefined *)((long)puVar2 + (long)iVar4);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar5.value) + -8) + 0x68))
            (CVar12.unknown,uVar3,CONCAT71(extraout_var,RVar5.value));
  auVar24 = NEON_fmov(0x4028000000000000,8);
  puVar2[1] = auVar24._8_8_;
  *puVar2 = auVar24._0_8_;
  CVar12 = SwiftUI::Color::get_white(CVar12);
  CVar13 = SwiftUI::Color::opacity(0.0,CVar12);
  _swift_release(CVar12.unknown);
  AVar14.unknown = &DAT_10054a8b8;
  puVar9 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)puVar2 + (long)*(int *)(AVar14.unknown + 0x34)) = CVar13.unknown;
  *(undefined2 *)((long)puVar2 + (long)*(int *)(AVar14.unknown + 0x38)) = 0x100;
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  puVar15 = &DAT_10054a8c0;
  FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
  iVar4 = *(int *)(puVar15 + 0x24);
  *(undefined8 *)((long)puVar2 + (long)iVar4) = AVar14.unknown;
  ((undefined8 *)((long)puVar2 + (long)iVar4))[1] = puVar9;
  *(undefined1 *)((long)AVar20.unknown + (long)*(int *)(puVar7 + 0x24)) = 0;
  FUN_100029504();
  uVar17 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar18 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10052a598;
  _swift_allocObject(&DAT_10052a598,uVar18 + lVar22,uVar17 | 7);
  FUN_100007e64(lVar21,puVar7 + uVar18,FUN_1000e12c4);
  FUN_1000e298c();
  lVar19 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_onTapGesture(1);
  _swift_release(puVar7);
  FUN_10002a29c(AVar20.unknown,&DAT_100551a38,&DAT_100423958);
  AVar20 = SwiftUI::Animation::spring(0.35,0.9,0.0,AVar20);
  local_90[0] = unaff_x20[*(int *)(lVar6 + 0x20)];
  local_88 = *(undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x20) + 8);
  SVar16.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar16);
  puVar7 = &DAT_100551a90;
  FUN_100002f94(&DAT_100551a90,&DAT_100423988);
  iVar4 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(lVar19 + iVar4) = AVar20.unknown;
  *(undefined1 *)((undefined8 *)(lVar19 + iVar4) + 1) = local_91;
  return;
}

