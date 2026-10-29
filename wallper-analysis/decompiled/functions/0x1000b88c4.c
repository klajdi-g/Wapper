// rea decompile_all
// name: FUN_1000b88c4
// address: 0x1000b88c4
// body: available
// range: 0x1000b88c4-0x1000b8f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b8b2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b88c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  VerticalAlignment VVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ForEach<undefined,undefined,undefined> FVar13;
  Set SVar14;
  EdgeInsets EVar15;
  Alignment AVar16;
  Animation AVar17;
  _FrameLayout _Var18;
  Set _all;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 auStack_180 [2];
  undefined8 *local_170 [3];
  uint local_154;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  byte local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  puVar6 = &DAT_1005508a0;
  local_120 = param_1;
  FUN_100002f94(&DAT_1005508a0,&DAT_100422250);
  local_130 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar20 = (long)local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar21 = (undefined8 *)(lVar20 - extraout_x12);
  puVar6 = &DAT_1005508a8;
  FUN_100002f94(&DAT_1005508a8,&DAT_100422258);
  local_140 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar20 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar22 = (undefined8 *)(lVar20 - extraout_x12_00);
  VVar7.unknown = &DAT_1005508b0;
  FUN_100002f94(&DAT_1005508b0,&DAT_100422260);
  local_148 = VVar7.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(VVar7.unknown + -8) + 0x40));
  lVar20 = (long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar20;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar23 = (undefined8 *)(lVar20 - extraout_x12_01);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar23 = VVar7.unknown;
  puVar23[1] = 0x4018000000000000;
  *(undefined1 *)(puVar23 + 2) = 0;
  puVar6 = &DAT_10054b780;
  FUN_100002f94(&DAT_10054b780,&DAT_10041ccf0);
  iVar2 = *(int *)(puVar6 + 0x2c);
  uStack_a0 = *(undefined8 *)(*(long *)((long)param_6.unknown + 0x58) + 0x10);
  local_a8 = 0;
  puVar6 = &DAT_100422278;
  _swift_getKeyPath();
  puVar8 = &DAT_100529228;
  _swift_allocObject(&DAT_100529228,0x70,7);
  uVar24 = *(undefined8 *)((long)param_6.unknown + 0x20);
  uVar27 = *(undefined8 *)((long)param_6.unknown + 0x38);
  uVar26 = *(undefined8 *)((long)param_6.unknown + 0x30);
  *(undefined8 *)(puVar8 + 0x38) = *(undefined8 *)((long)param_6.unknown + 0x28);
  *(undefined8 *)(puVar8 + 0x30) = uVar24;
  *(undefined8 *)(puVar8 + 0x48) = uVar27;
  *(undefined8 *)(puVar8 + 0x40) = uVar26;
  uVar24 = *(undefined8 *)((long)param_6.unknown + 0x40);
  uVar27 = *(undefined8 *)((long)param_6.unknown + 0x58);
  uVar26 = *(undefined8 *)((long)param_6.unknown + 0x50);
  *(undefined8 *)(puVar8 + 0x58) = *(undefined8 *)((long)param_6.unknown + 0x48);
  *(undefined8 *)(puVar8 + 0x50) = uVar24;
  *(undefined8 *)(puVar8 + 0x68) = uVar27;
  *(undefined8 *)(puVar8 + 0x60) = uVar26;
  uVar24 = *(undefined8 *)param_6.unknown;
  uVar27 = *(undefined8 *)((long)param_6.unknown + 0x18);
  uVar26 = *(undefined8 *)((long)param_6.unknown + 0x10);
  *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)((long)param_6.unknown + 8);
  *(undefined8 *)(puVar8 + 0x10) = uVar24;
  *(undefined8 *)(puVar8 + 0x28) = uVar27;
  *(undefined8 *)(puVar8 + 0x20) = uVar26;
  FUN_1000bcb94(param_6.unknown,&local_110);
  puVar9 = &DAT_10054b788;
  FUN_100002f94(&DAT_10054b788,&DAT_100422290);
  puVar10 = &DAT_10054b790;
  FUN_100002f94(&DAT_10054b790,&DAT_10041cd18);
  puVar11 = puVar10;
  FUN_10002bf20();
  puVar12 = puVar11;
  FUN_10002bfd8();
  puVar23[-2] = puVar12;
  FVar13 = (extension_SwiftUI)::SwiftUI::ForEach::_init
                     ((long)puVar23 + (long)iVar2,puVar12,puVar6,FUN_1000bccf8,puVar8,puVar9,puVar10
                      ,puVar11,
                      PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100523be0
                     );
  SVar14 = SwiftUI::Edge::Set::get_top(FVar13.unknown);
  uVar24 = 0x4032000000000000;
  EVar15 = SwiftUI::EdgeInsets::init(SVar14.unknown);
  puVar1 = (undefined1 *)((long)puVar23 + (long)*(int *)(local_148 + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar24;
  *(undefined8 *)(puVar1 + 0x10) = uVar26;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar16 = SwiftUI::Alignment::get_center(EVar15.unknown);
  *puVar22 = AVar16.unknown;
  puVar22[1] = puVar6;
  puVar6 = &DAT_1005508b8;
  FUN_100002f94(&DAT_1005508b8,&DAT_1004222b8);
  AVar17.unknown = param_6.unknown;
  FUN_1000b913c((long)puVar22 + (long)*(int *)(puVar6 + 0x2c));
  uVar19 = 0x3feb333333333333;
  uVar28 = 0;
  AVar17 = SwiftUI::Animation::spring(0.45,0.85,0.0,AVar17);
  uStack_108 = *(undefined8 *)((long)param_6.unknown + 0x18);
  local_110 = *(undefined8 *)((long)param_6.unknown + 0x10);
  AVar16.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue((State)AVar16.unknown);
  uVar24 = local_a8;
  iVar2 = *(int *)(local_140 + 0x24);
  local_170[0] = puVar22;
  *(undefined8 *)((long)puVar22 + (long)iVar2) = AVar17.unknown;
  ((undefined8 *)((long)puVar22 + (long)iVar2))[1] = uVar24;
  SwiftUI::Alignment::get_center(AVar16);
  _Var18 = SwiftUI::_FrameLayout::_init((Alignment)0x0);
  local_140 = (undefined *)local_110;
  local_148 = (undefined *)CONCAT44(local_148._4_4_,(uint)(byte)uStack_108);
  local_150 = local_100;
  local_154 = (uint)local_f8;
  local_170[2] = (undefined8 *)local_f0;
  local_170[1] = (undefined8 *)uStack_e8;
  VVar7 = SwiftUI::VerticalAlignment::get_center(_Var18.unknown);
  *puVar21 = VVar7.unknown;
  puVar21[1] = 0x4028000000000000;
  *(undefined1 *)(puVar21 + 2) = 0;
  puVar6 = &DAT_1005508c0;
  FUN_100002f94(&DAT_1005508c0,&DAT_1004222c0);
  FUN_1000b9fa0((long)puVar21 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar25 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar14.unknown = &DAT_1005508c8;
  uVar24 = uVar19;
  uVar26 = uVar28;
  uVar27 = param_5;
  FUN_100002f94(&DAT_1005508c8,&DAT_1004222c8);
  puVar1 = (undefined1 *)((long)puVar21 + (long)*(int *)(SVar14.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar25;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = uVar28;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar14 = SwiftUI::Edge::Set::get_bottom(SVar14);
  uVar19 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  puVar1 = (undefined1 *)((long)puVar21 + (long)*(int *)(local_130 + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar19;
  *(undefined8 *)(puVar1 + 0x10) = uVar24;
  *(undefined8 *)(puVar1 + 0x18) = uVar26;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  lVar5 = local_118;
  FUN_1000087e4(puVar23,local_118,&DAT_1005508b0,&DAT_100422260);
  lVar20 = local_138;
  FUN_1000087e4(puVar22,local_138,&DAT_1005508a8,&DAT_100422258);
  lVar3 = local_128;
  FUN_1000087e4(puVar21,local_128,&DAT_1005508a0,&DAT_100422250);
  lVar4 = local_120;
  FUN_1000087e4(lVar5,local_120,&DAT_1005508b0,&DAT_100422260);
  puVar6 = &DAT_1005508d0;
  FUN_100002f94(&DAT_1005508d0,&DAT_1004222d0);
  iVar2 = *(int *)(puVar6 + 0x30);
  *(undefined8 *)(lVar4 + iVar2) = 0;
  *(undefined1 *)((undefined8 *)(lVar4 + iVar2) + 1) = 1;
  FUN_1000087e4(lVar20,lVar4 + *(int *)(puVar6 + 0x40),&DAT_1005508a8,&DAT_100422258);
  puVar22 = (undefined8 *)(lVar4 + *(int *)(puVar6 + 0x50));
  *puVar22 = 0;
  *(undefined1 *)(puVar22 + 1) = 1;
  puVar22[2] = local_140;
  *(char *)(puVar22 + 3) = (char)local_148;
  puVar22[4] = local_150;
  *(char *)(puVar22 + 5) = (char)local_154;
  puVar22[6] = local_170[2];
  puVar22[7] = local_170[1];
  FUN_1000087e4(lVar3,lVar4 + *(int *)(puVar6 + 0x60),&DAT_1005508a0,&DAT_100422250);
  FUN_10002a29c(puVar21,&DAT_1005508a0,&DAT_100422250);
  FUN_10002a29c(local_170[0],&DAT_1005508a8,&DAT_100422258);
  FUN_10002a29c(puVar23,&DAT_1005508b0,&DAT_100422260);
  FUN_10002a29c(lVar3,&DAT_1005508a0,&DAT_100422250);
  FUN_10002a29c(lVar20,&DAT_1005508a8,&DAT_100422258);
  FUN_10002a29c(local_118,&DAT_1005508b0,&DAT_100422260);
  return;
}

