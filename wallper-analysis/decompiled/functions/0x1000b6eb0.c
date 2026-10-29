// rea decompile_all
// name: FUN_1000b6eb0
// address: 0x1000b6eb0
// body: available
// range: 0x1000b6eb0-0x1000b7357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6eb0(long param_1,Alignment param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  Alignment AVar5;
  undefined *puVar6;
  Animation AVar7;
  State SVar8;
  Divider DVar9;
  HorizontalAlignment HVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 auStack_170 [6];
  undefined8 *local_140;
  long local_138 [2];
  undefined *local_128;
  long local_120 [13];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar3 = &DAT_100550860;
  local_120[1] = param_1;
  FUN_100002f94(&DAT_100550860,&DAT_100422208);
  local_128 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar11 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_120[0] = lVar11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12);
  puVar3 = &DAT_100550868;
  FUN_100002f94(&DAT_100550868,&DAT_100422210);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x12_00;
  puVar4 = &DAT_100550870;
  puVar6 = &DAT_100422218;
  FUN_100002f94();
  AVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar16 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar16 - extraout_x12_01);
  AVar5 = SwiftUI::Alignment::get_center(AVar5);
  *puVar15 = AVar5.unknown;
  puVar15[1] = puVar6;
  puVar6 = &DAT_100550878;
  FUN_100002f94(&DAT_100550878,&DAT_100422220);
  AVar7.unknown = param_2.unknown;
  FUN_1000b74e4((long)puVar15 + (long)*(int *)(puVar6 + 0x2c));
  AVar7 = SwiftUI::Animation::spring(0.5,0.85,0.0,AVar7);
  local_120[9] = *(long *)(param_2.unknown + 0x18);
  local_120[8] = *(long *)(param_2.unknown + 0x10);
  SVar8.unknown = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::get_wrappedValue(SVar8);
  lVar11 = local_120[2];
  puVar6 = &DAT_100550880;
  FUN_100002f94(&DAT_100550880,&DAT_100422230);
  iVar2 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)puVar15 + (long)iVar2) = AVar7.unknown;
  ((undefined8 *)((long)puVar15 + (long)iVar2))[1] = lVar11;
  AVar5.unknown = &DAT_100550888;
  FUN_100002f94(&DAT_100550888,&DAT_100422238);
  *(undefined2 *)((long)puVar15 + (long)*(int *)(AVar5.unknown + 0x24)) = 0;
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(puVar4 + 0x24));
  puVar1[1] = local_120[3];
  *puVar1 = local_120[2];
  puVar1[3] = local_120[5];
  puVar1[2] = local_120[4];
  puVar1[5] = local_120[7];
  puVar1[4] = local_120[6];
  DVar9 = SwiftUI::Divider::init();
  *(undefined8 *)(lVar14 + *(int *)(puVar3 + 0x24)) = 0x3fbeb851eb851eb8;
  local_138[0] = lVar14;
  HVar10 = SwiftUI::HorizontalAlignment::get_center(DVar9.unknown);
  *puVar12 = HVar10.unknown;
  puVar12[1] = 0;
  *(undefined1 *)(puVar12 + 2) = 1;
  puVar3 = &DAT_100550890;
  puVar4 = &DAT_100422240;
  FUN_100002f94();
  FUN_1000b88c4((long)puVar12 + (long)*(int *)(puVar3 + 0x2c));
  AVar5 = SwiftUI::Alignment::get_top(param_2);
  puVar15[-2] = AVar5.unknown;
  puVar15[-1] = puVar4;
  *(undefined1 *)(puVar15 + -3) = 0;
  puVar15[-4] = 0x7ff0000000000000;
  *(undefined1 *)(puVar15 + -5) = 1;
  puVar15[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(local_128 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = local_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = local_80;
  lVar11 = local_120[8];
  puVar1[1] = local_120[9];
  local_140 = puVar12;
  *puVar1 = lVar11;
  puVar1[3] = local_120[0xb];
  puVar1[2] = local_120[10];
  puVar1[5] = uStack_b8;
  puVar1[4] = local_120[0xc];
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  local_138[1] = lVar16;
  FUN_1000087e4(puVar15,lVar16,&DAT_100550870,&DAT_100422218);
  FUN_1000087e4(lVar14,lVar13,&DAT_100550868,&DAT_100422210);
  lVar11 = local_120[0];
  FUN_1000087e4(puVar12,local_120[0],&DAT_100550860,&DAT_100422208);
  lVar14 = local_120[1];
  FUN_1000087e4(lVar16,local_120[1],&DAT_100550870,&DAT_100422218);
  puVar3 = &DAT_100550898;
  FUN_100002f94(&DAT_100550898,&DAT_100422248);
  FUN_1000087e4(lVar13,lVar14 + *(int *)(puVar3 + 0x30),&DAT_100550868,&DAT_100422210);
  FUN_1000087e4(lVar11,lVar14 + *(int *)(puVar3 + 0x40),&DAT_100550860,&DAT_100422208);
  FUN_10002a29c(local_140,&DAT_100550860,&DAT_100422208);
  FUN_10002a29c(local_138[0],&DAT_100550868,&DAT_100422210);
  FUN_10002a29c(puVar15,&DAT_100550870,&DAT_100422218);
  FUN_10002a29c(lVar11,&DAT_100550860,&DAT_100422208);
  FUN_10002a29c(lVar13,&DAT_100550868,&DAT_100422210);
  FUN_10002a29c(local_138[1],&DAT_100550870,&DAT_100422218);
  return;
}

