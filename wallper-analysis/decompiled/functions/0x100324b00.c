// rea decompile_all
// name: FUN_100324b00
// address: 0x100324b00
// body: available
// range: 0x100324b00-0x100325027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100324b00(long param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  Alignment AVar8;
  undefined *puVar9;
  VerticalAlignment VVar10;
  Set SVar11;
  StateObject SVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long in_d3;
  long lVar22;
  long alStack_1c0 [6];
  long alStack_190 [5];
  long local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar6 = &DAT_10055c740;
  local_168[0] = param_1;
  FUN_100002f94(&DAT_10055c740,&DAT_100431538);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = (long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_190[4] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar14 - extraout_x12);
  puVar7 = &DAT_10055c748;
  puVar9 = &DAT_100431540;
  FUN_100002f94();
  AVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar13 = (undefined8 *)(lVar16 - extraout_x12_00);
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  *puVar13 = AVar8.unknown;
  puVar13[1] = puVar9;
  puVar9 = &DAT_10055c750;
  FUN_100002f94(&DAT_10055c750,&DAT_100431548);
  AVar8.unknown = param_2;
  FUN_100325028((long)puVar13 + (long)*(int *)(puVar9 + 0x2c),param_2,param_3);
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  VVar10.unknown = &DAT_10055c758;
  FUN_100002f94(&DAT_10055c758,&DAT_100431550);
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(VVar10.unknown + 0x24));
  puVar1[1] = local_168[3];
  *puVar1 = local_168[2];
  puVar1[3] = local_168[5];
  puVar1[2] = local_168[4];
  puVar1[5] = local_168[7];
  puVar1[4] = local_168[6];
  *(undefined2 *)((long)puVar13 + (long)*(int *)(puVar7 + 0x24)) = 0;
  VVar10 = SwiftUI::VerticalAlignment::get_center(VVar10);
  *puVar15 = VVar10.unknown;
  puVar15[1] = 0;
  *(undefined1 *)(puVar15 + 2) = 1;
  puVar7 = &DAT_10055c760;
  FUN_100002f94(&DAT_10055c760,&DAT_100431558);
  AVar8.unknown = param_3;
  puVar9 = param_2;
  FUN_100325bc4((long)puVar15 + (long)*(int *)(puVar7 + 0x2c));
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  puVar13[-2] = AVar8.unknown;
  puVar13[-1] = puVar9;
  *(undefined1 *)(puVar13 + -3) = 1;
  puVar13[-4] = 0;
  *(undefined1 *)(puVar13 + -5) = 1;
  puVar13[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  SVar11.unknown = &DAT_10055c768;
  FUN_100002f94(&DAT_10055c768,&DAT_100431560);
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(SVar11.unknown + 0x24));
  puVar1[9] = uStack_e0;
  puVar1[8] = local_e8;
  puVar1[0xb] = uStack_d0;
  puVar1[10] = local_d8;
  puVar1[0xd] = uStack_c0;
  puVar1[0xc] = lStack_c8;
  puVar1[1] = local_168[9];
  *puVar1 = local_168[8];
  puVar1[3] = local_168[0xb];
  puVar1[2] = local_168[10];
  puVar1[5] = uStack_100;
  puVar1[4] = local_108;
  puVar1[7] = uStack_f0;
  puVar1[6] = local_f8;
  SVar11 = SwiftUI::Edge::Set::get_horizontal(SVar11);
  uVar17 = 0x4030000000000000;
  uVar19 = local_108;
  lVar14 = lStack_c8;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  AVar8.unknown = &DAT_10055c770;
  lVar21 = lVar14;
  lVar22 = in_d3;
  FUN_100002f94(&DAT_10055c770,&DAT_100431568);
  puVar2 = (undefined1 *)((long)puVar15 + (long)*(int *)(AVar8.unknown + 0x24));
  *puVar2 = (char)SVar11.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar17;
  *(undefined8 *)(puVar2 + 0x10) = uVar19;
  *(long *)(puVar2 + 0x18) = lVar14;
  *(long *)(puVar2 + 0x20) = in_d3;
  puVar2[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(puVar6 + 0x24));
  puVar1[1] = uStack_b0;
  *puVar1 = local_b8;
  puVar1[3] = uStack_a0;
  puVar1[2] = lStack_a8;
  puVar1[5] = uStack_90;
  puVar1[4] = local_98;
  lVar14 = *(long *)(param_2 + 0x10);
                    /* WARNING: Load size is inaccurate */
  SVar12.unknown = param_3[0x10];
  FUN_10002ea18(0);
  FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
  SwiftUI::StateObject::get_wrappedValue(SVar12);
  puVar6 = &DAT_1004313c8;
  _swift_getKeyPath(&DAT_1004313c8);
  puVar7 = &DAT_1004313f0;
  _swift_getKeyPath(&DAT_1004313f0);
  Combine::Published::_get_subscript(local_168 + 1,SVar12.unknown,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_release();
  bVar5 = lVar14 != 0;
  lVar4 = lVar14 + -1;
  if (!bVar5 || lVar4 == 0) {
    lVar14 = 1;
  }
  alStack_190[2] = 0;
  if (bVar5) {
    alStack_190[2] = lVar4;
  }
  if (local_168[1] <= alStack_190[2]) {
    alStack_190[2] = local_168[1];
  }
  alStack_190[3] = lVar14;
  SVar11 = SwiftUI::Edge::Set::get_bottom(SVar12.unknown);
  lVar18 = 0x4032000000000000;
  lVar20 = lStack_a8;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  alStack_190[1] = lVar16;
  FUN_1000087e4(puVar13,lVar16,&DAT_10055c748,&DAT_100431540);
  lVar14 = alStack_190[4];
  FUN_1000087e4(puVar15,alStack_190[4],&DAT_10055c740,&DAT_100431538);
  lVar4 = local_168[0];
  FUN_1000087e4(lVar16,local_168[0],&DAT_10055c748,&DAT_100431540);
  puVar6 = &DAT_10055c778;
  FUN_100002f94(&DAT_10055c778,&DAT_100431570);
  FUN_1000087e4(lVar14,lVar4 + *(int *)(puVar6 + 0x30),&DAT_10055c740,&DAT_100431538);
  plVar3 = (long *)(lVar4 + *(int *)(puVar6 + 0x40));
  *plVar3 = alStack_190[3];
  plVar3[1] = alStack_190[2];
  *(char *)(plVar3 + 2) = (char)SVar11.unknown;
  plVar3[3] = lVar18;
  plVar3[4] = lVar20;
  plVar3[5] = lVar21;
  plVar3[6] = lVar22;
  *(undefined1 *)(plVar3 + 7) = 0;
  FUN_10002a29c(puVar15,&DAT_10055c740,&DAT_100431538);
  FUN_10002a29c(puVar13,&DAT_10055c748,&DAT_100431540);
  FUN_10002a29c(lVar14,&DAT_10055c740,&DAT_100431538);
  FUN_10002a29c(alStack_190[1],&DAT_10055c748,&DAT_100431540);
  return;
}

